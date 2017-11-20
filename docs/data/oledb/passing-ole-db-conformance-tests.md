---
title: "Il passaggio di test di conformità OLE DB | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- conformance testing
- conformance testing [OLE DB]
- OLE DB providers, testing
ms.assetid: d1a4f147-2edd-476c-b452-0e6a0ac09891
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 8ef7e32f56fdff81c7a66a1dfcc6c613201e2f49
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="passing-ole-db-conformance-tests"></a>Superamento dei test di conformità OLE DB
Per rendere più coerente provider, Data Access SDK fornisce un set di test di conformità OLE DB. I test di controllare tutti gli aspetti del provider e offrono ragionevole certezza che il provider funzioni come previsto. È possibile trovare i test di conformità OLE DB in Microsoft Data Access SDK. In questa sezione sono illustrate le operazioni che è necessario eseguire per passare i test di conformità. Per informazioni sull'esecuzione dei test di conformità OLE DB, vedere il SDK.  
  
## <a name="running-the-conformance-tests"></a>Esecuzione dei test di conformità  
 In Visual C++ 6.0, i modelli di provider OLE DB aggiunte numerose funzioni hook per consentire di controllare i valori e le proprietà. La maggior parte di queste funzioni sono state aggiunte in risposta ai test di conformità.  
  
> [!NOTE]
>  È necessario aggiungere più funzioni di convalida per il provider passare i test di conformità OLE DB.  
  
 Questo provider richiede due routine di convalida. La prima routine, `CRowsetImpl::ValidateCommandID`, fa parte della classe di rowset. Viene chiamato durante la creazione del set di righe tramite i modelli di provider. L'esempio Usa questa routine per comunicare ai consumer che non supporta gli indici. È la prima chiamata a `CRowsetImpl::ValidateCommandID` (si noti che il provider utilizza il **_RowsetBaseClass** typedef aggiunto la mappa dell'interfaccia per `CMyProviderRowset` in [supporto dei bookmark nel Provider](../../data/oledb/provider-support-for-bookmarks.md), pertanto non è necessario tipo di riga lungo di argomenti di modello). Successivamente, restituire **quindi DB_E_NOINDEX** se il parametro di indice non è **NULL** (questo indica che il consumer deve utilizzare un indice per noi). Per ulteriori informazioni sugli ID di comando, vedere la specifica OLE DB e cercare **IOpenRowset:: OPENROWSET**.  
  
 Il codice seguente è il **ValidateCommandID** routine di convalida:  
  
```  
/////////////////////////////////////////////////////////////////////  
// MyProviderRS.H  
// Class: CMyProviderRowset   
  
HRESULT ValidateCommandID(DBID* pTableID, DBID* pIndexID)  
{  
   HRESULT hr = _RowsetBaseClass::ValidateCommandID(pTableID, pIndexID);  
   if (hr != S_OK)  
      return hr;  
  
   if (pIndexID != NULL)  
      return DB_E_NOINDEX;    // Doesn't support indexes  
  
   return S_OK;  
}  
```  
  
 La chiamata di modelli di provider di `OnPropertyChanged` metodo ogni volta che un utente modifica una proprietà sul **DBPROPSET_ROWSET** gruppo. Se si desidera gestire le proprietà di altri gruppi, si aggiungerli all'oggetto appropriato (vale a dire **DBPROPSET_SESSION** controlli inseriti nel `CMyProviderSession` classe).  
  
 Il codice di verifica innanzitutto se la proprietà è collegata a un altro. Se la proprietà deve essere incatenata, imposta il **DBPROP_BOOKMARKS** proprietà su True. Appendice C della specifica OLE DB contiene informazioni sulle proprietà. Queste informazioni anche indicano se la proprietà sia concatenata a un altro.  
  
 È inoltre possibile aggiungere il `IsValidValue` routine al codice. La chiamata di modelli `IsValidValue` durante il tentativo di impostare una proprietà. È necessario sostituire questo metodo se è necessaria un'ulteriore elaborazione quando si imposta un valore della proprietà. È possibile avere uno dei metodi seguenti per ogni set di proprietà.  
  
## <a name="threading-issues"></a>Problemi relativi al threading  
 Per impostazione predefinita, il guidata Provider OLE DB nella creazione guidata Provider OLE DB ATL genera codice per il provider per l'esecuzione in un modello di apartment. Se si tenta di eseguire il codice con i test di conformità, inizialmente verranno generati errori. Questo è perché Ltm.exe, lo strumento utilizzato per eseguire i test di conformità OLE DB, per impostazione predefinita per liberare thread. Il codice di creazione guidata Provider OLE DB per impostazione predefinita il modello di apartment per le prestazioni e facilità di utilizzo.  
  
 Per risolvere il problema, è possibile modificare LTM o modificare il provider.  
  
#### <a name="to-change-ltm-to-run-in-apartment-threaded-mode"></a>Per modificare LTM per l'esecuzione nell'apartment a thread modalità  
  
1.  Dal menu principale di LTM, fare clic su **strumenti**, quindi fare clic su **opzioni**.  
  
2.  Nel **generale** scheda, modificare il modello di threading da **a thread libero** a **Apartment Threaded**.  
  
 Per modificare il provider per l'esecuzione in modalità a thread liberata:  
  
-   Nel progetto del provider, ricercare tutte le istanze di `CComSingleThreadModel` e sostituirla con `CComMultiThreadModel`, che deve essere nelle intestazioni di origine, sessione e set di righe di dati.  
  
-   Nel file RGS, modificare il modello di threading da **Apartment** a **entrambi**.  
  
-   Attenersi alle regole programmazione gratuitamente a thread singolo (ovvero, blocco in scrittura).  
  
## <a name="see-also"></a>Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)