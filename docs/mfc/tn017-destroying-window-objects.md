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
ms.openlocfilehash: fd7b8e9882d682d3e7a9b9162f1f2f84675cd590
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36951532"
---
# <a name="tn017-destroying-window-objects"></a>TN017: eliminazione definitiva di oggetti finestra
In questa nota viene descritto come utilizzare il [CWnd::PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy) metodo. Utilizzare questo metodo se si desidera eseguire l'assegnazione personalizzata di `CWnd`-oggetti derivati. Questa nota viene anche illustrato perché è consigliabile utilizzare [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow) per eliminare un oggetto di Windows in C++ anziché la **eliminare** operatore.  
  
 Se si seguono le linee guida fornite in questo argomento, sarà necessario alcuni problemi di pulizia. Questi problemi può essere causato da problemi quali la mancata eliminazione/liberare memoria di C++, dimenticare di liberare risorse di sistema, ad esempio `HWND`s o rilascio di oggetti troppe volte.  
  
## <a name="the-problem"></a>Il problema  
 Ogni oggetto di windows (oggetto di una classe derivata da `CWnd`) rappresenta un oggetto C++ e un `HWND`. Gli oggetti C++ allocati nell'heap dell'applicazione e `HWND`s vengono allocati in risorse di sistema per la gestione di finestre. Poiché esistono diversi modi per eliminare definitivamente un oggetto finestra, è necessario fornire un set di regole che impediscono di sistema le perdite di memoria o risorse. Queste regole devono inoltre impedire gli oggetti e handle di Windows in corso l'eliminazione più di una volta.  
  
## <a name="destroying-windows"></a>Eliminazione definitiva di finestre  
 Di seguito sono i due modi consentiti per eliminare definitivamente un oggetto di Windows:  
  
-   La chiamata `CWnd::DestroyWindow` o l'API Windows `DestroyWindow`.  
  
-   Eliminazione in modo esplicito con il **eliminare** operatore.  
  
 Il primo caso è di gran lunga le più comuni. In questo caso si applica anche se il codice non chiamare `DestroyWindow` direttamente. Quando l'utente chiude direttamente una finestra cornice, questa azione genera il messaggio WM_CLOSE e la risposta predefinita per questo messaggio consiste nel chiamare `DestroyWindow.` quando viene eliminato definitivamente una finestra padre, Windows chiama `DestroyWindow` per tutti i relativi figli.  
  
 Il secondo caso, l'utilizzo del **eliminare** operatore sugli oggetti di Windows, deve essere rari. Di seguito vengono alcuni casi in cui l'utilizzo **eliminare** la scelta corretta.  
  
## <a name="auto-cleanup-with-cwndpostncdestroy"></a>Pulizia automatica con CWnd::PostNcDestroy  
 Quando il sistema elimina definitivamente una finestra di Windows, l'ultimo messaggio di Windows inviato alla finestra è WM_NCDESTROY. Il valore predefinito `CWnd` gestore per il messaggio viene [CWnd:: OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy). `OnNcDestroy` si scollegherà il `HWND` da C++ e chiamare la funzione virtuale `PostNcDestroy`. Alcune classi di eseguire l'override di questa funzione per eliminare l'oggetto di C++.  
  
 L'implementazione predefinita di `CWnd::PostNcDestroy` non esegue alcuna operazione, che è appropriato per gli oggetti di finestra sono allocati sul frame dello stack o incorporati in altri oggetti. Ciò non è appropriato per gli oggetti di window progettate per essere allocati nell'heap senza tutti gli altri oggetti. In altre parole, non appropriato per gli oggetti di finestra che non sono incorporati in altri oggetti C++.  
  
 Eseguire l'override di tali classi progettate per essere solo allocati nell'heap il `PostNcDestroy` metodo per eseguire un **eliminare questo**. Questa istruzione consente di liberare memoria associata all'oggetto C++. Anche se il valore predefinito `CWnd` chiamate del distruttore `DestroyWindow` se *m_hWnd* è diverso da NULL, ciò non implica ricorsione infinita perché l'handle non saranno scollegato e un valore NULL durante la fase di pulizia.  
  
> [!NOTE]
>  Il sistema chiama in genere `CWnd::PostNcDestroy` al termine dell'elaborazione del messaggio di Windows WM_NCDESTROY e `HWND` e l'oggetto finestra C++ non è più connessi. Il sistema chiamerà anche `CWnd::PostNcDestroy` nell'implementazione della maggior parte [CWnd:: Create](../mfc/reference/cwnd-class.md#create) chiama se si verifica un errore. Le regole di pulizia automatica vengono descritti più avanti in questo argomento.  
  
## <a name="auto-cleanup-classes"></a>Classi di pulizia automatica  
 Le classi seguenti non sono progettate per la pulizia automatica. Sono in genere incorporati in altri oggetti C++ o nello stack:  
  
-   Tutti i controlli Windows standard (`CStatic`, `CEdit`, `CListBox`e così via).  
  
-   Tutte le finestre figlio risolte direttamente dalla `CWnd` (ad esempio, i controlli personalizzati).  
  
-   Finestre con separatore (`CSplitterWnd`).  
  
-   Barre di controllo predefinito (le classi derivate da `CControlBar`, vedere [Nota tecnica 31](../mfc/tn031-control-bars.md) per abilitare l'eliminazione automatica per gli oggetti della barra di controllo).  
  
-   Le finestre di dialogo (`CDialog`) progettato per le finestre di dialogo modale sullo stack frame.  
  
-   Finestre di dialogo standard tutti tranne `CFindReplaceDialog`.  
  
-   L'impostazione predefinita le finestre di dialogo creati da ClassWizard.  
  
 Le classi seguenti sono progettate per la pulizia automatica. Vengono in genere allocati da soli nell'heap:  
  
-   Finestre cornice principale (derivata direttamente o indirettamente da `CFrameWnd`).  
  
-   Visualizzare le finestre (derivata direttamente o indirettamente da `CView`).  
  
 Se si desidera interrompere l'esecuzione di queste regole, è necessario eseguire l'override di `PostNcDestroy` metodo nella classe derivata. Per aggiungere la pulizia automatica alla classe, chiamare la classe basa e quindi eseguire una **eliminare questo**. Per rimuovere la pulizia automatica dalla classe, chiamare `CWnd::PostNcDestroy` direttamente anziché il `PostNcDestroy` metodo della classe base diretta.  
  
 L'utilizzo più comune della modifica il comportamento di pulizia automatico consiste nel creare una finestra di dialogo non modale che può essere allocato nell'heap.  
  
## <a name="when-to-call-delete"></a>Quando alla chiamata di delete  
 Si consiglia di chiamare `DestroyWindow` da eliminare definitivamente un oggetto di Windows, il metodo C++ o globale `DestroyWindow` API.  
  
 Non chiamare globale `DestroyWindow` API da eliminare definitivamente una finestra figlio MDI. È consigliabile utilizzare il metodo virtuale `CWnd::DestroyWindow` invece.  
  
 Per gli oggetti di finestra C++ che non eseguono la pulizia automatica, usando il **eliminare** operatore può provocare una perdita di memoria quando si prova a chiamare `DestroyWindow` nel `CWnd::~CWnd` distruttore se VTBL non punta alla classe derivata in modo corretto. Questo errore si verifica perché il sistema non è possibile trovare che appropriata Destroy (metodo) per chiamare. Utilizzo `DestroyWindow` invece di **eliminare** consente di evitare questi problemi. Poiché può trattarsi di un errore di piccole, la compilazione in modalità di debug genererà l'avviso seguente si è a rischio.  
  
```  
Warning: calling DestroyWindow in CWnd::~CWnd  
    OnDestroy or PostNcDestroy in derived class will not be called  
```  
  
 Nel caso di oggetti di Windows in C++ che eseguire la pulizia automatica, è necessario chiamare `DestroyWindow`. Se si utilizza il **eliminare** operatore direttamente, l'allocatore di memoria diagnostico di MFC notificherà all'utente che si è la liberazione della memoria due volte. Le due occorrenze sono la prima chiamata esplicita e le chiamate indirette a **elimini** nell'implementazione di pulizia automatica di `PostNcDestroy`.  
  
 Dopo la chiamata `DestroyWindow` su un oggetto la pulizia automatica, l'oggetto C++ saranno ancora, ma *m_hWnd* saranno NULL. Dopo la chiamata `DestroyWindow` su un oggetto di pulizia automatica, l'oggetto C++ verrà persi, liberate dall'operatore delete di C++ nell'implementazione di pulizia automatica di `PostNcDestroy`.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

