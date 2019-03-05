---
title: 'TN017: Eliminazione definitiva di oggetti finestra'
ms.date: 11/04/2016
f1_keywords:
- vc.objects
helpviewer_keywords:
- destroying windows
- TN017
- PostNcDestroy method [MFC]
ms.assetid: 5bf208a5-5683-439b-92a1-547c5ded26cd
ms.openlocfilehash: 9e52112bed0f583a3f5652f9213bd5049d543a80
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57294110"
---
# <a name="tn017-destroying-window-objects"></a>TN017: Eliminazione definitiva di oggetti finestra

In questa nota viene descritto come utilizzare il [CWnd::PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy) (metodo). Usare questo metodo se si desidera eseguire operazioni di allocazione personalizzate di `CWnd`-oggetti derivati. Questa nota descrive anche il motivo per cui è consigliabile usare [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow) per eliminare un oggetto di Windows C++ anziché le **eliminare** operatore.

Se si seguono le linee guida in questo argomento, sarà necessario alcuni problemi di pulizia. Questi problemi può essere causato da problemi, ad esempio se si dimentica di eliminare o liberare memoria di C++, se si dimentica di liberare risorse di sistema, ad esempio `HWND`s o rilascio di oggetti troppe volte.

## <a name="the-problem"></a>Il problema

Ogni oggetto di windows (oggetto di una classe derivata da `CWnd`) rappresenta un oggetto C++ e un `HWND`. Gli oggetti C++ allocati nell'heap dell'applicazione e `HWND`s vengono allocati delle risorse di sistema per la gestione finestre. Poiché esistono diversi modi per eliminare definitivamente un oggetto finestra, è necessario fornire un set di regole che impediscono il sistema perdite di memoria o risorse. Queste regole devono inoltre impedire gli oggetti e handle di Windows viene eliminato più di una volta.

## <a name="destroying-windows"></a>Eliminazione definitiva di Windows

Di seguito sono consentiti due modi per eliminare definitivamente un oggetto di Windows:

- La chiamata `CWnd::DestroyWindow` o l'API Windows `DestroyWindow`.

- Eliminazione esplicita con il **eliminare** operatore.

Il primo caso è di gran lunga il più comune. In questo caso si applica anche se il codice non chiama `DestroyWindow` direttamente. Quando l'utente chiude direttamente una finestra cornice, questa azione genera il messaggio WM_CLOSE e la risposta predefinita per questo messaggio consiste nel chiamare `DestroyWindow.` quando viene eliminata una finestra padre, Windows chiama `DestroyWindow` per tutti gli elementi figlio.

Il secondo caso, l'utilizzo dei **eliminare** operatore sugli oggetti di Windows, deve essere rara. Di seguito vengono alcuni casi in cui l'utilizzo **eliminare** è la scelta corretta.

## <a name="auto-cleanup-with-cwndpostncdestroy"></a>Pulizia automatica con CWnd::PostNcDestroy

Quando il sistema elimina una finestra di Windows, l'ultimo messaggio di Windows inviato alla finestra è WM_NCDESTROY. Il valore predefinito `CWnd` gestore per il messaggio viene [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy). `OnNcDestroy` si scollegherà il `HWND` di C++ dell'oggetto e chiamare la funzione virtuale `PostNcDestroy`. Alcune classi di eseguire l'override di questa funzione per eliminare l'oggetto di C++.

L'implementazione predefinita di `CWnd::PostNcDestroy` non esegue alcuna operazione, che è appropriato per gli oggetti finestra vengono allocati sul frame dello stack o incorporati in altri oggetti. Ciò non è appropriato per gli oggetti finestra progettate per essere allocata nell'heap senza altri oggetti. In altre parole, non appropriato per gli oggetti finestra che non sono incorporati in altri oggetti C++.

Eseguire l'override di tali classi progettate per essere allocata da solo nell'heap il `PostNcDestroy` metodo per eseguire una **eliminare questo**. Questa istruzione consente di liberare memoria associata all'oggetto di C++. Anche se il valore predefinito `CWnd` chiamate del distruttore `DestroyWindow` se *m_hWnd* è diverso da NULL, non si ottiene una ricorsione infinita perché l'handle sarà disconnessa e un valore NULL durante la fase di pulizia.

> [!NOTE]
>  Il sistema chiama in genere `CWnd::PostNcDestroy` dopo l'elaborazione del messaggio di Windows WM_NCDESTROY e `HWND` e l'oggetto finestra C++ non sarà più connessi. Il sistema anche chiamerà `CWnd::PostNcDestroy` nell'implementazione della maggior parte [CWnd:: Create](../mfc/reference/cwnd-class.md#create) chiama se si verifica un errore. Le regole di pulizia automatica sono descritte più avanti in questo argomento.

## <a name="auto-cleanup-classes"></a>Classi di pulizia automatica

Le classi seguenti non sono progettate per la pulizia automatica. Sono in genere incorporati in altri oggetti C++ o dello stack:

- Tutti i controlli Windows standard (`CStatic`, `CEdit`, `CListBox`e così via).

- Tutte le finestre figlio derivare direttamente da `CWnd` (ad esempio, i controlli personalizzati).

- Finestre con separatore (`CSplitterWnd`).

- Le barre di controllo predefinite (classi derivate da `CControlBar`, vedere [Nota tecnica 31](../mfc/tn031-control-bars.md) per abilitare l'eliminazione automatica per gli oggetti della barra di controllo).

- Le finestre di dialogo (`CDialog`) progettata per le finestre di dialogo modali nello stack frame.

- Finestre di dialogo standard tutti tranne `CFindReplaceDialog`.

- Finestre di dialogo predefinito creati da ClassWizard.

Le classi seguenti sono progettate per la pulizia automatica. Ma in genere sono allocati da soli nell'heap:

- Finestre cornice principale (derivate direttamente o indirettamente da `CFrameWnd`).

- Visualizzare le finestre (derivata direttamente o indirettamente da `CView`).

Se si vuole interrompere queste regole, è necessario eseguire l'override di `PostNcDestroy` metodo nella classe derivata. Per aggiungere pulizia automatica alla classe, chiamare la classe di base e quindi effettuare una **elimini**. Per rimuovere pulizia automatica dalla classe, chiamare `CWnd::PostNcDestroy` direttamente anziché il `PostNcDestroy` metodo della classe base diretta.

L'uso più comune della modifica il comportamento di pulizia automatico consiste nel creare una finestra di dialogo non modale può essere allocata nell'heap.

## <a name="when-to-call-delete"></a>Quando l'eliminazione di chiamata

Si consiglia di chiamare `DestroyWindow` da eliminare definitivamente un oggetto di Windows, il metodo C++ o globale `DestroyWindow` API.

Non chiamare globale `DestroyWindow` API da eliminare definitivamente una finestra figlio MDI. È consigliabile usare il metodo virtuale `CWnd::DestroyWindow` invece.

Per gli oggetti di finestra C++ che non eseguono pulizia automatica, usando il **eliminare** operatore può provocare una perdita di memoria quando si prova a chiamare `DestroyWindow` nel `CWnd::~CWnd` distruttore se VTBL non fa riferimento alla classe derivata in modo corretto. Ciò si verifica perché il sistema non è stato trovato che appropriato destroy metodo da chiamare. Usando `DestroyWindow` invece di **eliminare** consente di evitare questi problemi. Poiché può trattarsi di un errore di meno evidente, la compilazione in modalità di debug genererà l'avviso seguente se si è a rischio.

```
Warning: calling DestroyWindow in CWnd::~CWnd
    OnDestroy or PostNcDestroy in derived class will not be called
```

Nel caso di oggetti C++ Windows che eseguono pulizia automatica, è necessario chiamare `DestroyWindow`. Se si usa la **eliminare** operatore direttamente, l'allocatore di memoria diagnostico di MFC avviserà l'utente che si è liberando memoria due volte. Le due occorrenze sono la prima chiamata esplicita e la chiamata indiretta per **elimini** nell'implementazione di pulizia automatica `PostNcDestroy`.

Dopo avere chiamato `DestroyWindow` su un oggetto la pulitura automatica, l'oggetto di C++ sarà ancora, ma *m_hWnd* saranno NULL. Dopo avere chiamato `DestroyWindow` su un oggetto di pulizia automatica, l'oggetto di C++ non saranno più presente, liberate dall'operatore delete di C++ nell'implementazione di pulizia automatica `PostNcDestroy`.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
