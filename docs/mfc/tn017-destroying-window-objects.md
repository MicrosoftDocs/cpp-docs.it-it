---
title: "TN017: distruzione di oggetti finestra | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.objects"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distruzione di finestre"
  - "PostNcDestroy (metodo)"
  - "TN017"
ms.assetid: 5bf208a5-5683-439b-92a1-547c5ded26cd
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# TN017: distruzione di oggetti finestra
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota viene descritto l'utilizzo del metodo di [CWnd::PostNcDestroy](../Topic/CWnd::PostNcDestroy.md).  Utilizzare questo metodo se si desidera effettuare l'allocazione personalizzata di `CWnd`\- oggetti derivati.  Questa nota viene inoltre spiegato perché è necessario utilizzare [CWnd::DestroyWindow](../Topic/CWnd::DestroyWindow.md) per eliminare in modo permanente le finestre c\+\+ with anziché l'operatore di `delete`.  
  
 Seguendo le istruzioni riportate in questo argomento, saranno poche problemi di pulizia.  Questi problemi possono derivare da problemi quali dimenticare di eliminare\/memoria C\+\+, dimenticare di liberare le risorse di sistema come `HWND`, s o lib degli oggetti troppe volte.  
  
## Il problema  
 Ogni oggetto di windows \(oggetto di una classe derivata da `CWnd`\) per entrambi i l'oggetto c\+\+ e `HWND`.  Gli oggetti C\+\+ vengono allocati nell'heap dell'applicazione e `HWND`s viene allocato alle risorse di sistema dall'amministratore di finestra.  Poiché esistono diversi modi per eliminare un oggetto window, è necessario fornire un set di regole che impediscono la risorsa di sistema o le perdite di memoria.  Queste regole devono inoltre possibile evitare gli oggetti e gli handle di windows da distruggere più volte.  
  
## Eliminare le finestre  
 Di seguito sono elencate le due modalità consentita l'eliminazione di un oggetto di windows:  
  
-   Chiamare `CWnd::DestroyWindow` o l'api Windows `DestroyWindow`.  
  
-   In modo esplicito eliminato con l'operatore di `delete`.  
  
 Il primo caso è di gran lunga la più comune.  In questo caso si applica anche se il codice non chiama direttamente `DestroyWindow`.  Quando l'utente direttamente chiude una finestra cornice, questa operazione genera il messaggio di `WM_CLOSE` e risposta predefinita a questo messaggio è chiamare `DestroyWindow.` quando una finestra padre viene eliminato, windows `DestroyWindow` chiama per tutti i relativi elementi figlio.  
  
 Il secondo caso, l'utilizzo dell'operatore di `delete` sulle finestre oggetti, deve essere comune.  Di seguito sono riportati alcuni casi in cui utilizzare `delete` costituiscono la scelta corretta.  
  
## Pulizia automatica con CWnd::PostNcDestroy  
 Quando il sistema elimina una finestra di windows, l'ultimo messaggio di windows inviato alla finestra viene `WM_NCDESTROY`.  Il gestore predefinito di `CWnd` per il messaggio viene [CWnd::OnNcDestroy](../Topic/CWnd::OnNcDestroy.md).  `OnNcDestroy` rimuoverà `HWND` dall'oggetto C\+\+ e chiama la funzione virtuale `PostNcDestroy`.  Alcune classi l'override della funzione per eliminare l'oggetto C\+\+.  
  
 L'implementazione predefinita di `CWnd::PostNcDestroy` non esegue alcuna operazione, necessario per gli oggetti della finestra allocati nello stack frame o sono incorporati in altri oggetti.  Questa operazione non è adatta agli oggetti della finestra progettati per essere allocati nell'heap senza altri oggetti.  Ovvero non è appropriato per gli oggetti della finestra che non sono incorporati in altri oggetti C\+\+.  
  
 Tali classi progettate per essere allocati da solo esegue l'override del metodo di `PostNcDestroy` per eseguire `delete this`.  Questa istruzione libererà tutta la memoria associata all'oggetto C\+\+.  Anche se il distruttore di `CWnd` di impostazione predefinita chiama `DestroyWindow` se `m_hWnd` non è Null, non causa la ricorsione infinita perché un handle verranno rimosse e NULL durante la fase di pulizia.  
  
> [!NOTE]
>  Il sistema in genere chiama `CWnd::PostNcDestroy` dopo l'elaborazione del messaggio di `WM_NCDESTROY` di windows e `HWND` e l'oggetto window C\+\+ non sono connessi.  Il sistema anche chiamerà `CWnd::PostNcDestroy`implementazione della maggior parte delle chiamate di [CWnd::Create](../Topic/CWnd::Create.md) se si verificherà questo errore.  Le regole di pulizia automatica sono descritte più avanti in questo argomento.  
  
## Classi di pulizia automatica  
 Le classi non sono progettate per la pulizia automatica.  In genere vengono incorporate in altri oggetti C\+\+ o nello stack:  
  
-   Tutti i controlli Windows standard \(`CStatic`, `CEdit`, `CListBox`, e così via\).  
  
-   Tutte le finestre figlio derivano direttamente da `CWnd`, ad esempio controlli personalizzati\).  
  
-   Finestre con separatore \(`CSplitterWnd`\).  
  
-   Barre di controllo predefinite \(classi derivate da `CControlBar`, vedere [Nota tecnica 31](../mfc/tn031-control-bars.md) per abilitare la automatica eliminazione per gli oggetti della barra di controllo.  
  
-   Finestre di dialogo \(`CDialog`\) progettate per le finestre di dialogo modali sullo stack frame.  
  
-   Tutte le finestre di dialogo standard esclusi `CFindReplaceDialog`.  
  
-   Le finestre di dialogo predefinite create da ClassWizard.  
  
 Le classi seguenti per la pulizia automatica.  In genere vengono allocate da soli nell'heap:  
  
-   Le finestre principali \(derivate direttamente o indirettamente da `CFrameWnd`\).  
  
-   Finestre di visualizzazione \(derivate direttamente o indirettamente da `CView`\).  
  
 Se si desidera violare queste procedure, è necessario eseguire l'override del metodo di `PostNcDestroy` nella classe derivata.  Per aggiungere la pulizia automatica alla classe, chiamare la classe base e quindi fare `delete this`.  Per rimuovere la pulizia automatica dalla classe, chiamare `CWnd::PostNcDestroy` direttamente anziché il metodo di `PostNcDestroy` della classe di base diretta.  
  
 La maggior parte di utilizzo comune di modifica del comportamento automatico di pulitura viene creata una finestra di dialogo non modale che può essere allocata nell'heap.  
  
## Quando si chiama delete  
 È consigliabile chiamare `DestroyWindow` per l'eliminazione di un oggetto di windows, il metodo c o C\+\+ in `DestroyWindow` globale API.  
  
 Non chiamare `DestroyWindow` globale API per eliminare in modo permanente una finestra figlio MDI.  Utilizzare il metodo virtuale `CWnd::DestroyWindow` invece.  
  
 Per gli oggetti Window C\+\+ che non eseguono la pulizia automatica, utilizzando l'operatore di `delete` può provocare una perdita di memoria quando si tenta di chiamare `DestroyWindow` nel distruttore di `CWnd::~CWnd` se il VTBL non indica correttamente la classe derivata.  Ciò accade perché il sistema non è in grado di trovare appropriato elimina il metodo da chiamare.  Utilizzando `DestroyWindow` anziché `delete` consente di evitare questi problemi.  Poiché questo può essere un errore di compilazione, in modalità di debug verrà generato il seguente avviso se si è al rischio.  
  
```  
Warning: calling DestroyWindow in CWnd::~CWnd  
   OnDestroy or PostNcDestroy in derived class will not be called  
```  
  
 Nel caso di oggetti delle finestre di C\+\+ che eseguono la pulizia automatica, è necessario chiamare `DestroyWindow`.  Se si utilizza direttamente l'operatore di `delete`, l'allocatore di memoria diagnostico MFC visualizzerà una notifica che si liberando memoria due volte.  Le due occorrenze sono la prima chiamata esplicita e la chiamata indiretta a `delete this` nell'implementazione di pulizia automatica di `PostNcDestroy`.  
  
 Dopo aver chiamando `DestroyWindow` su un oggetto non auto pulizia, l'oggetto C\+\+ sarà ancora intorno, ma `m_hWnd` sarà NULL.  Dopo aver chiamando `DestroyWindow` su un oggetto di pulizia automatica, l'oggetto C\+\+ sarà più disponibile, liberato dall'operatore delete di C\+\+ nell'implementazione di pulizia automatica di `PostNcDestroy`.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)