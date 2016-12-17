---
title: "Superamento dei test di conformit&#224; OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "verifica della conformità"
  - "verifica della conformità [OLE DB]"
  - "provider OLE DB, test"
  - "verifica provider"
  - "test, provider OLE DB"
ms.assetid: d1a4f147-2edd-476c-b452-0e6a0ac09891
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Superamento dei test di conformit&#224; OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per garantire una maggiore uniformità tra i provider, nell'SDK di Data Access è disponibile un gruppo di test di conformità OLE DB  che consente di controllare tutti gli aspetti del provider e accertare, con un ragionevole grado di sicurezza, che il provider funzioni come previsto.  I test di conformità di OLE DB sono disponibili dell'SDK di Microsoft Data Access.  In questa sezione sono illustrate le operazioni che è opportuno eseguire per superare i test di conformità.  Per informazioni sull'esecuzione dei test di conformità OLE DB, fare riferimento all'SDK.  
  
## Esecuzione dei test di conformità  
 In Visual C\+\+ 6.0 con i modelli provider OLE DB sono state aggiunte diverse funzioni hook che consentono di controllare valori e proprietà.  La maggior parte di esse è stata aggiunta in risposta ai test di conformità.  
  
> [!NOTE]
>  Sarà necessario aggiungere diverse funzioni di convalida affinché il provider superi i test di conformità OLE DB.  
  
 Questo provider necessita di due routine di convalida.  La prima routine, `CRowsetImpl::ValidateCommandID`, fa parte della classe del rowset.  Viene chiamata durante la creazione del rowset dai modelli provider.  Nell'esempio viene utilizzata questa routine per comunicare ai consumer che non sono supportati gli indici.  Chiamare in primo luogo `CRowsetImpl::ValidateCommandID`. Notare che il provider utilizza il typedef **\_RowsetBaseClass** aggiunto alla mappa dell'interfaccia per `CMyProviderRowset` in [Supporto dei bookmark nel provider](../../data/oledb/provider-support-for-bookmarks.md), evitando in tal modo di immettere tutta la riga di argomenti del modello.  Restituire quindi **DB\_E\_NOINDEX** se il parametro dell'indice non è **NULL**. Questo risultato indica che il consumer utilizza un indice sul provider.  Per ulteriori informazioni sugli ID di comando, vedere la specifica OLE DB e cercare **IOpenRowset::OpenRowset**.  
  
 Il codice che segue è la routine di convalida **ValidateCommandID**:  
  
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
  
 I modelli provider chiamano il metodo `OnPropertyChanged` ogni volta che vengono apportate modifiche a una proprietà nel gruppo **DBPROPSET\_ROWSET**.  Se si desidera gestire proprietà di altri gruppi, sarà necessario aggiungere tali proprietà all'oggetto appropriato, ovvero i controlli **DBPROPSET\_SESSION** passeranno nella classe `CMyProviderSession`.  
  
 In primo luogo viene verificato se la proprietà è collegata a un'altra proprietà.  In questo caso, la proprietà **DBPROP\_BOOKMARKS** verrà impostata su True.  Per informazioni sulle proprietà, vedere l'appendice C della specifica OLE DB.  Nella specifica è indicato anche l'eventuale concatenamento di una proprietà con un'altra proprietà.  
  
 Potrebbe inoltre essere utile aggiungere al codice la routine `IsValidValue`.  Nei modelli viene chiamata `IsValidValue` durante il tentativo di impostare una proprietà.  Sottoporre il metodo a override se durante l'impostazione del valore di una proprietà è necessario eseguire operazioni supplementari.  È possibile utilizzare uno di questi metodi per ciascun insieme di proprietà.  
  
## Problemi relativi al threading  
 Per impostazione predefinita, con la Creazione guidata provider OLE DB ATL viene generato il codice per l'esecuzione del provider in un modello Apartment.  Se si tenta di eseguire il codice con i test di conformità, inizialmente verranno generati errori  in quanto nello strumento utilizzato per eseguire i test di conformità OLE DB, Ltm.exe, viene adottato per impostazione predefinita il modello di threading Free.  Per il codice generato della Creazione guidata provider OLE DB ATL è invece definito per impostazione predefinita il modello Apartment, in quanto risulta vantaggioso sia in termini di prestazioni che di facilità di utilizzo.  
  
 Per risolvere questo problema, modificare lo strumento LTM o il provider.  
  
#### Per modificare LTM in modo che venga eseguito con threading Apartment  
  
1.  Dal menu principale di LTM scegliere **Tools**, quindi **Options**.  
  
2.  Nella scheda **General** impostare il modello di threading da **Free Threaded** ad **Apartment Threaded**.  
  
 Per modificare il provider in modo che venga eseguito con threading Free  
  
-   Nel progetto del provider cercare tutte le istanze di `CComSingleThreadModel` e sostituirle con `CComMultiThreadModel`. Le istanze sono contenute nelle intestazioni dell'origine dati, della sessione e del rowset.  
  
-   Nel file RGS modificare il modello di threading sostituendo **Apartment** con **Both**.  
  
-   Attenersi alle regole della programmazione con threading Free, ovvero blocco in scrittura.  
  
## Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)