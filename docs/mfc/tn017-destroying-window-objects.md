---
title: 'TN017: Distruzione di oggetti finestra | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.objects
dev_langs:
- C++
helpviewer_keywords:
- destroying windows
- TN017
- PostNcDestroy method [MFC]
ms.assetid: 5bf208a5-5683-439b-92a1-547c5ded26cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c6bba255403d31e7a1fa03febb0c760d20cdc81c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33384303"
---
# <a name="tn017-destroying-window-objects"></a>TN017: eliminazione definitiva di oggetti finestra
Questa nota viene descritto come utilizzare il [CWnd::PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy) metodo. Utilizzare questo metodo se si desidera eseguire l'assegnazione personalizzata di `CWnd`-oggetti derivati. Questa nota viene anche illustrato perché è consigliabile utilizzare [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow) per eliminare un oggetto C++ Windows anziché il `delete` operatore.  
  
 Se si seguono le linee guida fornite in questo argomento, sarà necessario alcuni problemi di pulizia. Questi problemi può essere causato da problemi quali la mancata eliminazione/liberare memoria di C++, se dimentica di liberare risorse di sistema come `HWND`s o rilascio di oggetti troppe volte.  
  
## <a name="the-problem"></a>Il problema  
 Ogni oggetto di windows (oggetto di una classe derivata da `CWnd`) rappresenta un oggetto C++ e un `HWND`. Gli oggetti C++ allocati nell'heap dell'applicazione e `HWND`s vengono allocati in risorse di sistema per la gestione della finestra. Poiché esistono diversi modi per eliminare definitivamente un oggetto window, è necessario stabilire un set di regole che impediscono di sistema perdite di memoria o risorse. Queste regole devono inoltre impedire gli oggetti e gli handle di Windows in corso l'eliminazione più di una volta.  
  
## <a name="destroying-windows"></a>Eliminazione definitiva di finestre  
 Di seguito sono indicati i due metodi consentiti per eliminare definitivamente un oggetto di Windows:  
  
-   La chiamata `CWnd::DestroyWindow` o l'API Windows `DestroyWindow`.  
  
-   Eliminazione in modo esplicito con il `delete` operatore.  
  
 Il primo caso è di gran lunga il più comune. In questo caso si applica anche se il codice non chiama `DestroyWindow` direttamente. Quando l'utente chiude direttamente una finestra cornice, questa azione genera il `WM_CLOSE` messaggio e la risposta predefinita per questo messaggio consiste nel chiamare `DestroyWindow.` quando viene eliminata una finestra padre, Windows chiama `DestroyWindow` per tutti gli elementi figlio.  
  
 Il secondo caso, l'utilizzo del `delete` operatore sugli oggetti di Windows, deve essere rari. Di seguito vengono alcuni casi in cui l'utilizzo `delete` la scelta corretta.  
  
## <a name="auto-cleanup-with-cwndpostncdestroy"></a>Pulizia automatica con CWnd::PostNcDestroy  
 Quando il sistema elimina definitivamente una finestra di Windows, è l'ultimo messaggio di Windows inviato alla finestra `WM_NCDESTROY`. Il valore predefinito `CWnd` gestore per il messaggio è [CWnd:: OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy). `OnNcDestroy` si scollegherà il `HWND` da C++ e chiamare la funzione virtuale `PostNcDestroy`. Alcune classi di eseguire l'override di questa funzione per eliminare l'oggetto di C++.  
  
 L'implementazione predefinita di `CWnd::PostNcDestroy` non esegue alcuna operazione, che è appropriato per gli oggetti di window allocati sul frame dello stack o incorporati in altri oggetti. Questo non è appropriato per gli oggetti di finestra sono progettati per essere allocati nell'heap senza tutti gli altri oggetti. In altre parole, non è appropriato per gli oggetti di finestra che non sono incorporati in altri oggetti C++.  
  
 Eseguire l'override di tali classi progettate per essere allocata da solo nell'heap di `PostNcDestroy` metodo per eseguire un `delete this`. Questa istruzione consente di liberare memoria associata all'oggetto di C++. Anche se il valore predefinito `CWnd` chiamate di distruttore `DestroyWindow` se `m_hWnd` è diverso da NULL, non è possibile ricorsione infinita poiché l'handle verrà scollegato e NULL durante la fase di pulizia.  
  
> [!NOTE]
>  Il sistema chiama in genere `CWnd::PostNcDestroy` dopo l'elaborazione di Windows `WM_NCDESTROY` messaggio e `HWND` e l'oggetto finestra C++ non è più connessi. Il sistema verrà anche chiamati `CWnd::PostNcDestroy` nell'implementazione della maggior parte [CWnd:: Create](../mfc/reference/cwnd-class.md#create) chiama se si verifica un errore. Le regole di pulizia automatica sono descritte più avanti in questo argomento.  
  
## <a name="auto-cleanup-classes"></a>Classi di pulizia automatica  
 Le classi seguenti non sono progettate per la pulizia automatica. In genere sono incorporati nello stack o altri oggetti C++:  
  
-   Tutti i controlli Windows standard (`CStatic`, `CEdit`, `CListBox`e così via).  
  
-   Tutte le finestre figlio derivano direttamente da `CWnd` (ad esempio, i controlli personalizzati).  
  
-   Finestre con separatore (`CSplitterWnd`).  
  
-   Barre di controllo predefinite (classi derivate da `CControlBar`, vedere [Nota tecnica 31](../mfc/tn031-control-bars.md) per abilitare l'eliminazione automatica per gli oggetti della barra di controllo).  
  
-   Le finestre di dialogo (`CDialog`) progettato per le finestre di dialogo modale sullo stack frame.  
  
-   Finestre di dialogo standard tutti tranne `CFindReplaceDialog`.  
  
-   Finestre di dialogo predefinito creati da ClassWizard.  
  
 Le classi seguenti sono progettate per la pulizia automatica. Vengono in genere allocati autonomamente nell'heap:  
  
-   Finestre cornice principale (derivata direttamente o indirettamente da `CFrameWnd`).  
  
-   Visualizzare le finestre (derivata direttamente o indirettamente da `CView`).  
  
 Se si desidera interrompere l'esecuzione di queste regole, è necessario eseguire l'override di `PostNcDestroy` metodo nella classe derivata. Per aggiungere la pulizia automatica alla classe, chiamare la classe di base e quindi effettuare un `delete this`. Per rimuovere la pulizia automatica dalla classe, chiamare `CWnd::PostNcDestroy` direttamente anziché il `PostNcDestroy` metodo della classe base diretta.  
  
 L'utilizzo più comune di modificare il comportamento di pulizia automatica consiste nel creare una finestra di dialogo non modale che può essere allocato nell'heap.  
  
## <a name="when-to-call-delete"></a>Quando eseguire l'eliminazione di chiamata  
 Si consiglia di chiamare `DestroyWindow` eliminare definitivamente un oggetto di Windows, il metodo C++ o globale `DestroyWindow` API.  
  
 Non chiamare globale `DestroyWindow` API da eliminare definitivamente una finestra figlio MDI. È consigliabile utilizzare il metodo virtuale `CWnd::DestroyWindow` invece.  
  
 Per gli oggetti di finestra C++ che non si esegue la pulizia automatica, utilizzando il `delete` operatore può provocare una perdita di memoria quando si tenta di chiamare `DestroyWindow` nel `CWnd::~CWnd` distruttore se VTBL non punta a una classe derivata in modo corretto. Questo errore si verifica perché il sistema non è possibile trovare che appropriata destroy metodo da chiamare. Utilizzando `DestroyWindow` anziché `delete` consente di evitare questi problemi. Poiché può trattarsi di un errore di piccole, la compilazione in modalità di debug genererà l'avviso seguente se si è a rischio.  
  
```  
Warning: calling DestroyWindow in CWnd::~CWnd  
    OnDestroy or PostNcDestroy in derived class will not be called  
```  
  
 Nel caso di oggetti di Windows in C++ che si eseguono la pulizia automatica, è necessario chiamare `DestroyWindow`. Se si utilizza il `delete` operatore direttamente, l'allocatore di memoria diagnostico di MFC notificherà all'utente che si è liberando memoria due volte. Le due occorrenze sono la prima chiamata esplicita e le chiamate indirette a `delete this` nell'implementazione di pulizia automatica `PostNcDestroy`.  
  
 Dopo la chiamata `DestroyWindow` su un oggetto la pulizia automatica, l'oggetto C++ saranno ancora, ma `m_hWnd` sarà NULL. Dopo la chiamata `DestroyWindow` su un oggetto di pulizia automatica, l'oggetto C++ non saranno più presente, liberate dall'operatore delete di C++ nell'implementazione di pulizia automatica `PostNcDestroy`.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

