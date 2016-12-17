---
title: "TN071: implementazione di IOleCommandTarget MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IOleCommandTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IOleCommandTarget (interfaccia)"
  - "TN071"
ms.assetid: 3eef571e-6357-444d-adbb-6f734a0c3161
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN071: implementazione di IOleCommandTarget MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 L'interfaccia di `IOleCommandTarget` abilita gli oggetti e i relativi contenitori alla spedizione ordina loro.  Ad esempio, le barre degli strumenti di un oggetto può contenere pulsanti per controlli quali **Stampa**, **Anteprima di stampa**, **Salva**, `New` e **Zoom**.  Se tale oggetto è incorporato in un contenitore che supporta `IOleCommandTarget`, l'oggetto abiliti i relativi pulsanti e inoltrare i controlli al contenitore per elaborare quando l'utente li ha fatto clic.  Se un contenitore desiderasse l'oggetto incorporato per stamparsi, può svolgere la richiesta inviando un comando tramite l'interfaccia di `IOleCommandTarget` dell'oggetto incorporato.  
  
 `IOleCommandTarget` è un'interfaccia del tipo di automazione in quanto viene utilizzata da un client per richiamare i metodi su un server.  Tuttavia, l'utilizzo di `IOleCommandTarget` salva il sovraccarico di esecuzione di chiamate tramite le interfacce di automazione poiché i programmatori non devono utilizzare il metodo tipico oneroso di `Invoke` di `IDispatch`.  
  
 In MFC, l'interfaccia di `IOleCommandTarget` viene utilizzata dai server di documenti attivi per consentire i contenitori di documenti attivi i controlli di invio al server.  La classe del server di documenti attivi, `CDocObjectServerItem`, mappe dell'interfaccia di utilizzare MFC \(vedere [TN038: Implementazione di MFC\/OLE IUnknown](../mfc/tn038-mfc-ole-iunknown-implementation.md)\) per l'implementazione dell'interfaccia `IOleCommandTarget`.  
  
 `IOleCommandTarget` inoltre implementato nella classe di **COleFrameHook**.  **COleFrameHook** è una classe MFC non documentata che implementa la funzionalità della finestra cornice di contenitori di modifica sul posto.  **COleFrameHook** utilizza anche le mappe dell'interfaccia MFC per implementare l'interfaccia di `IOleCommandTarget`.  L'implementazione di**COleFrameHook** di `IOleCommandTarget` inoltra i controlli OLE a `COleDocObjectItem`\- contenitore di documenti attivi derivati.  In questo modo il contenitore di documenti attivi MFC per ricevere i messaggi dai server di documenti attivi contenuto.  
  
## Mappe di comando OLE MFC  
 Gli sviluppatori di MFC possono beneficiare di `IOleCommandTarget` utilizzando le mappe di comando OLE MFC.  Le mappe OLE di comando alle mappe messaggi in quanto possono essere utilizzate per associare i controlli OLE alle funzioni membro di classi che contiene la mappa del comando.  Per eseguire queste operazioni, le macro del punto della mappa di comando per specificare il gruppo di comandi OLE del comando che si desidera gestire, il comando OLE e l'id di comando del messaggio di [WM\_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) che verrà inviato quando il comando OLE vengono ricevuti.  MFC offre varie macro predefinite per i controlli OLE standard.  Per un elenco di comandi OLE standard che sono stati originariamente progettate per l'utilizzo con applicazioni Microsoft Office, vedere l'enumerazione OLECMDID, definita in docobj.h.  
  
 Quando un comando OLE viene ricevuto da un'applicazione MFC che contiene una mappa OLE di comando, MFC tenta di trovare l'id di comando e il gruppo di controlli per il comando obbligatoria nella mappa OLE di comando dell'applicazione.  Se viene individuata una corrispondenza, un messaggio di **WM\_COMMAND** viene inviato all'applicazione contenente la mappa del comando con l'id di comando obbligatoria. \(Vedere la descrizione di `ON_OLECMD` di seguito.\) In questo modo, i controlli OLE inviati a un'applicazione vengono passati nei messaggi di **WM\_COMMAND** da MFC.  I messaggi di **WM\_COMMAND** quindi vengono indirizzate attraverso le mappe messaggi dell'applicazione utilizzando l'architettura standard di MFC [routing dei comandi](../mfc/command-routing.md).  
  
 A differenza delle mappe messaggi, le mappe di comando OLE MFC non sono supportate da ClassWizard.  Gli sviluppatori di MFC devono aggiungere manualmente il supporto OLE mappa di comando e le voci della mappa OLE di comando.  Le mappe OLE i comandi possono essere aggiunti ai server di documenti attivi MFC in qualsiasi classe che è nella catena di routing dei messaggi di **WM\_COMMAND** al momento del documento attivo è attivo sul posto in un contenitore.  Tali classi includono le classi dell'applicazione derivate da [CWinApp](../mfc/reference/cwinapp-class.md), da [CView](../mfc/reference/cview-class.md), da [CDocument](../mfc/reference/cdocument-class.md) e da [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md).  In contenitore di documenti attivi, mappe OLE di comando possono essere aggiunti solo a [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)\- classe derivata.  Inoltre, in contenitore di documenti attivi, i messaggi di **WM\_COMMAND** saranno inviati solo alla mappa messaggi in `COleDocObjectItem`\- classe derivata.  
  
## Macro OLE mappa di comando  
 Utilizzare le seguenti macro per aggiungere la funzionalità della mappa del comando alla classe:  
  
```  
  
DECLARE_OLECMD_MAP ()  
  
```  
  
 Questa macro viene inserito nella dichiarazione di classe \(in genere nel file di intestazione\) della classe che contiene la mappa del comando.  
  
```  
  
BEGIN_OLECMD_MAP(  
theClass  
,   
baseClass  
)  
  
```  
  
 `theClass`  
 Nome della classe che contiene la mappa del comando.  
  
 `baseClass`  
 Nome della classe base della classe che contiene la mappa del comando.  
  
 Questa macro contrassegna l'inizio della mappa del comando.  Utilizzare questa macro nel file di implementazione della classe contenente la mappa del comando.  
  
```  
  
END_OLECMD_MAP()  
  
```  
  
 Questa macro contrassegna la fine della mappa del comando.  Utilizzare questa macro nel file di implementazione della classe contenente la mappa del comando.  Questa macro deve seguire sempre la macro di **BEGIN\_OLECMD\_MAP**.  
  
```  
  
ON_OLECMD(  
pguid  
,   
olecmdid  
,   
id  
)  
  
```  
  
 `pguid`  
 Puntatore al GUID del gruppo di controlli command OLE.  Questo parametro è **NULL** per il gruppo di controlli OLE standard.  
  
 *olecmdid*  
 ID comando OLE il comando da richiamare.  
  
 `id`  
 ID del messaggio di **WM\_COMMAND** da inviare all'applicazione contenente la mappa del comando quando questo comando OLE viene richiamato.  
  
 Utilizzare la macro di `ON_OLECMD` nella mappa command per aggiungere voci per i controlli OLE che si desidera gestire.  Quando i controlli OLE vengono ricevuti, verranno convertiti in messaggio specificato di **WM\_COMMAND** e saranno indirizzati attraverso la mappa messaggi dell'applicazione utilizzando l'architettura di routing dei comandi MFC standard.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come aggiungere funzionalità OLE della gestione in un server di documenti attivi MFC gestire il comando OLE di [OLECMDID\_PRINT](http://msdn.microsoft.com/library/windows/desktop/ms691264).  In questo esempio si presume che sia utilizzato AppWizard per generare un'applicazione MFC che è un server di documenti attivi.  
  
1.  Nel `CView`\- file di intestazione della classe derivata, aggiungere la macro di `DECLARE_OLECMD_MAP` alla dichiarazione di classe.  
  
    > [!NOTE]
    >  Utilizzare `CView`\- classe derivata perché è una delle classi nel server di documenti attivi nella catena di routing dei messaggi di **WM\_COMMAND**.  
  
    ```  
    class CMyServerView : public CView  
    {  
    protected: // create from serialization only  
       CMyServerView();  
       DECLARE_DYNCREATE(CMyServerView)  
       DECLARE_OLECMD_MAP()  
    . . .  
    };  
    ```  
  
2.  Nel file di implementazione per `CView`\- classe derivata, aggiungere le macro di `END_OLECMD_MAP` e di `BEGIN_OLECMD_MAP` :  
  
    ```  
    BEGIN_OLECMD_MAP(CMyServerView, CView)  
  
    END_OLECMD_MAP()  
    ```  
  
3.  Per gestire il comando di stampa OLE standard, aggiungere una macro di [ON\_OLECMD](../Topic/ON_OLECMD.md) alla mappa del comando specificando l'id di comando OLE per il comando di stampa standard e **ID\_FILE\_PRINT** per l'identificazione di **WM\_COMMAND ID\_FILE\_PRINT** è l'id di comando standard di stampa utilizzato dalle applicazioni MFC AppWizard\- generate:  
  
    ```  
    BEGIN_OLECMD_MAP(CMyServerView, CView)  
       ON_OLECMD(NULL,OLECMDID_PRINT,ID_FILE_PRINT)  
    END_OLECMD_MAP()  
    ```  
  
 Si noti che di comando OLE standard, definito in afxdocob.h, potrebbe essere utilizzato al posto di una macro di `ON_OLECMD` perché **OLECMDID\_PRINT** è un ID OLE standard di comando  La macro di `ON_OLECMD_PRINT` compirà la stessa attività di una macro di `ON_OLECMD` riportata in precedenza.  
  
 Quando un'applicazione contenitore questo server invia un comando di **OLECMDID\_PRINT** tramite l'interfaccia di `IOleCommandTarget` del server, il gestore comando di stampa MFC verrà richiamato nel server, inducendo il server di stampare l'intera applicazione.  Il codice del contenitore di documenti attivi per richiamare il comando di stampa aggiunto nei passaggi sopra potrebbe essere analogo al seguente:  
  
```  
void CContainerCntrItem::DoOleCmd()  
{  
   IOleCommandTarget *pCmd = NULL;  
   HRESULT hr = E_FAIL;  
   OLECMD ocm={OLECMDID_PRINT, 0};  
  
   hr = m_lpObject->QueryInterface(IID_IOleCommandTarget,reinterpret_cast<void**>(&pCmd));  
   if(FAILED(hr))  
      return;  
  
   hr = pCmd->QueryStatus(NULL, 1, &ocm, NULL);  
   if(SUCCEEDED(hr) && (ocm.cmdf & OLECMDF_ENABLED))  
   {  
      //Command is available and enabled so call it  
      COleVariant vIn;  
      COleVariant vOut;  
      hr = pCmd->Exec(NULL, OLECMDID_PRINT,  
 OLECMDEXECOPT_DODEFAULT, &vIn, &vOut);  
      ASSERT(SUCCEEDED(hr));  
   }  
   pCmd->Release();  
}  
```  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)