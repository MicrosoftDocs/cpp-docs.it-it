---
title: Il passaggio di test di conformità OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- testing, OLE DB providers
- testing providers
- conformance testing
- conformance testing [OLE DB]
- OLE DB providers, testing
ms.assetid: d1a4f147-2edd-476c-b452-0e6a0ac09891
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0288e1517bf89ec6ff8a2067311c3641d8d7113c
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39340916"
---
# <a name="passing-ole-db-conformance-tests"></a>Superamento dei test di conformità OLE DB
Per rendere più coerenti con i provider, Data Access SDK fornisce un set di test di conformità OLE DB. I test verificare tutti gli aspetti del provider e consentono una ragionevole garanzia che il provider funziona come previsto. È possibile trovare i test di conformità OLE DB in Microsoft Data Access SDK. Questa sezione è incentrata su cosa che fare per superare il test della conformità. Per informazioni sull'esecuzione dei test di conformità OLE DB, vedere il SDK.  
  
## <a name="running-the-conformance-tests"></a>Esecuzione di test della conformità  
 In Visual C++ 6.0, i modelli di provider OLE DB aggiunta una serie di funzioni hook per consentire all'utente di controllare i valori e le proprietà. La maggior parte di queste funzioni sono state aggiunte in risposta ai test di conformità.  
  
> [!NOTE]
>  È necessario aggiungere diverse funzioni di convalida per il provider passare i test di conformità OLE DB.  
  
 Questo provider richiede due routine di convalida. La prima routine, `CRowsetImpl::ValidateCommandID`, fa parte della classe del set di righe. Viene chiamato durante la creazione del set di righe mediante i modelli di provider. L'esempio Usa questa routine per comunicare ai consumer che non supporta gli indici. La prima chiamata è per `CRowsetImpl::ValidateCommandID` (si noti che il provider utilizza il `_RowsetBaseClass` typedef aggiunto la mappa dell'interfaccia `CMyProviderRowset` in [supporto dei bookmark nel Provider di](../../data/oledb/provider-support-for-bookmarks.md), in modo da non dover digitare tale riga lunga del modello argomenti). Successivamente, tornare quindi DB_E_NOINDEX se il parametro di indice non è NULL (ciò indica l'utente vuole usare un indice su Stati Uniti). Per altre informazioni sugli ID di comando, vedere la specifica OLE DB e cercare `IOpenRowset::OpenRowset`.  
  
 Il codice seguente è il `ValidateCommandID` routine di convalida:  
  
```cpp
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
  
 La chiamata di modelli di provider di `OnPropertyChanged` metodo ogni volta che un utente modifica una proprietà nel `DBPROPSET_ROWSET` gruppo. Se si desidera gestire le proprietà di altri gruppi, aggiungerli all'oggetto appropriato (vale a dire `DBPROPSET_SESSION` controlli di andare `CMyProviderSession` classe).  
  
 Il codice di verifica innanzitutto se la proprietà è collegata a un altro. Se la proprietà deve essere incatenata, imposta il `DBPROP_BOOKMARKS` proprietà su True. Appendice C della specifica OLE DB contiene informazioni sulle proprietà. Queste informazioni anche indicano se la proprietà viene concatenata a un altro.  
  
 È possibile anche aggiungere il `IsValidValue` routine al codice. I modelli chiamano `IsValidValue` durante il tentativo di impostare una proprietà. È necessario sostituire questo metodo se è necessaria un'ulteriore elaborazione quando si imposta un valore della proprietà. È possibile avere uno dei metodi seguenti per ogni set di proprietà.  
  
## <a name="threading-issues"></a>Problemi relativi al threading  
 Per impostazione predefinita, il guidata Provider OLE DB nella creazione guidata Provider OLE DB ATL genera codice per il provider per l'esecuzione in un modello di apartment. Se si prova a eseguire il codice con test di conformità, inizialmente hanno esito negativo. Questo è quanto Ltm.exe, lo strumento utilizzato per eseguire i test di conformità OLE DB, per impostazione predefinita per liberare thread. Il codice di creazione guidata Provider OLE DB per impostazione predefinita il modello di apartment per le prestazioni e semplicità d'uso.  
  
 Per risolvere questo problema, è possibile modificare LTM o modificare il provider.  
  
#### <a name="to-change-ltm-to-run-in-apartment-threaded-mode"></a>Per modificare LTM per l'esecuzione nell'apartment a thread singolo in modalità  
  
1.  Nel menu principale di LTM, fare clic su **degli strumenti**, quindi fare clic su **opzioni**.  
  
2.  Nel **generali** scheda, modificare il modello di threading dalla **a thread libero** a **Apartment Threaded**.  
  
 Per modificare il provider per l'esecuzione in modalità a thread libera:  
  
-   Nel progetto del provider, ricercare tutte le istanze del `CComSingleThreadModel` e sostituirla con `CComMultiThreadModel`, che deve essere nelle intestazioni dei dati di origine, sessione e set di righe.  
  
-   Nel file RGS, modificare il modello di threading dalla **Apartment** al **entrambi**.  
  
-   Attenersi alle regole programmazione multithread gratuitamente (vale a dire, blocco in scrittura).  
  
## <a name="see-also"></a>Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)