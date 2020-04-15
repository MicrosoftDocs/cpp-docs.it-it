---
title: 'TN017: eliminazione definitiva di oggetti finestra'
ms.date: 11/04/2016
f1_keywords:
- vc.objects
helpviewer_keywords:
- destroying windows
- TN017
- PostNcDestroy method [MFC]
ms.assetid: 5bf208a5-5683-439b-92a1-547c5ded26cd
ms.openlocfilehash: 9802669468cbbba89f23b8ac127358d1fc15ec9f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370414"
---
# <a name="tn017-destroying-window-objects"></a>TN017: eliminazione definitiva di oggetti finestra

In questa nota viene descritto l'utilizzo del metodo [CWnd::PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy) . Utilizzare questo metodo se si desidera `CWnd`eseguire un'allocazione personalizzata di oggetti derivati. In questa nota viene inoltre illustrato il motivo per cui è consigliabile utilizzare [CWnd::DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow) per eliminare un oggetto Windows di C, anziché l'operatore **delete.**

Se si seguono le linee guida in questo argomento, si avranno pochi problemi di pulizia. Questi problemi possono derivare da problemi come l'ottenimento di eliminare/liberare la memoria di C, dimenticando di liberare le risorse di sistema come `HWND`s, o liberare oggetti troppe volte.

## <a name="the-problem"></a>Problema

Ogni oggetto di windows (oggetto `CWnd`di una classe derivata `HWND`da ) rappresenta sia un oggetto di C, sia un oggetto . Gli oggetti di C, ovvero nell'heap dell'applicazione, vengono `HWND`allocati nelle risorse di sistema dal gestore di finestre. Poiché esistono diversi modi per eliminare un oggetto finestra, è necessario fornire un set di regole che impediscono perdite di memoria o risorse di sistema. Queste regole devono inoltre impedire che gli oggetti e gli handle di Windows vengano eliminati più di una volta.

## <a name="destroying-windows"></a>Distruggere Le finestre

Di seguito sono riportati i due modi consentiti per eliminare definitivamente un oggetto Windows:

- Chiamata `CWnd::DestroyWindow` o l'API di `DestroyWindow`Windows .

- Eliminazione esplicita con l'operatore **delete.**

Il primo caso è di gran lunga il più comune. Questo caso si applica anche `DestroyWindow` se il codice non chiama direttamente. Quando l'utente chiude direttamente una finestra cornice, questa azione genera il messaggio `DestroyWindow.` WM_CLOSE e la risposta predefinita `DestroyWindow` a questo messaggio consiste nel chiamare quando una finestra padre viene eliminata, Windows chiama tutti i relativi elementi figlio.

Il secondo caso, l'uso dell'operatore **delete** sugli oggetti Windows, dovrebbe essere raro. Di seguito sono riportati alcuni casi in cui l'utilizzo di **delete** è la scelta corretta.

## <a name="auto-cleanup-with-cwndpostncdestroy"></a>Pulizia automatica con CWnd::PostNcDestroy

Quando il sistema elimina una finestra di Windows, viene WM_NCDESTROY l'ultimo messaggio di Windows inviato alla finestra. Il `CWnd` gestore predefinito per tale messaggio è [CWnd::OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy). `OnNcDestroy`discollegare `HWND` il dall'oggetto di C `PostNcDestroy`e chiamare la funzione virtuale . Alcune classi eseguono l'override di questa funzione per eliminare l'oggetto di C.

L'implementazione `CWnd::PostNcDestroy` predefinita di non esegue alcuna operazione, che è appropriata per gli oggetti finestra allocati nello stack frame o incorporati in altri oggetti. Ciò non è appropriato per gli oggetti finestra progettati per essere allocati nell'heap senza altri oggetti. In altre parole, non è appropriato per gli oggetti della finestra che non sono incorporati in altri oggetti di C.

Le classi progettate per essere allocate da `PostNcDestroy` sole nell'heap eseguono l'override del metodo per eseguire **un'eliminazione di questo**oggetto . Questa istruzione consente di liberare la memoria associata all'oggetto di C. Anche se `CWnd` il distruttore `DestroyWindow` predefinito chiama se *m_hWnd* è non NULL, ciò non comporta una ricorsione infinita perché l'handle verrà scollegato e NULL durante la fase di pulizia.

> [!NOTE]
> Il sistema `CWnd::PostNcDestroy` di solito chiama dopo che elabora `HWND` il messaggio di windows WM_NCDESTROY e l'oggetto finestra e C , non sono più connessi. Il sistema chiamerà `CWnd::PostNcDestroy` anche l'implementazione della maggior parte delle chiamate [CWnd::Create](../mfc/reference/cwnd-class.md#create) se si verifica un errore. Le regole di pulizia automatica sono descritte più avanti in questo argomento.

## <a name="auto-cleanup-classes"></a>Classi di correzione automaticaAuto Cleanup Classes

Le classi seguenti non sono progettate per la pulizia automatica. Essi sono in genere incorporati in altri oggetti C , o nello stack:

- Tutti i controlli`CStatic` `CEdit`standard `CListBox`di Windows ( , , e così via).

- Tutte le finestre `CWnd` figlio derivate direttamente da (ad esempio, i controlli personalizzati).

- Finestre con`CSplitterWnd`separatore ( ).

- Barre di controllo predefinite `CControlBar`(classi derivate da , vedere [nota tecnica 31](../mfc/tn031-control-bars.md) per l'abilitazione dell'eliminazione automatica per gli oggetti barra di controllo).

- Finestre di`CDialog`dialogo ( ) progettate per le finestre di dialogo modali nello stack frame.

- Tutte le finestre `CFindReplaceDialog`di dialogo standard ad eccezione di .

- Finestre di dialogo predefinite create da ClassWizard.The default dialogs created by ClassWizard.

Le classi seguenti sono progettate per la pulizia automatica. In genere vengono allocati da soli nell'heap:

- Finestre cornice principale (derivate `CFrameWnd`direttamente o indirettamente da ).

- Visualizzare le finestre (derivate `CView`direttamente o indirettamente da ).

Se si desidera interrompere queste regole, `PostNcDestroy` è necessario eseguire l'override del metodo nella classe derivata. Per aggiungere la pulizia automatica alla classe, chiamare la classe base ed eseguire **un'operazione elimina questa operazione.** Per rimuovere la pulizia automatica `CWnd::PostNcDestroy` dalla classe, `PostNcDestroy` chiamare direttamente anziché il metodo della classe base diretta.

L'uso più comune della modifica del comportamento di pulizia automatica consiste nel creare una finestra di dialogo non modale che può essere allocata nell'heap.

## <a name="when-to-call-delete"></a>Quando chiamare elimina

Si consiglia di `DestroyWindow` chiamare per eliminare definitivamente un oggetto di `DestroyWindow` Windows, ovvero il metodo di c'è o l'API globale.

Non chiamare l'API globale `DestroyWindow` per eliminare una finestra figlio MDI. È invece necessario `CWnd::DestroyWindow` utilizzare il metodo virtuale.

Per gli oggetti finestra di C, che non eseguono la pulizia automatica, l'utilizzo `CWnd::~CWnd` dell'operatore **delete** può causare una perdita di memoria quando si tenta di chiamare `DestroyWindow` il distruttore se il VTBL non punta alla classe derivata correttamente. Ciò si verifica perché il sistema non riesce a trovare il metodo di eliminazione appropriato da chiamare. L'utilizzo `DestroyWindow` al posto di **delete** consente di evitare questi problemi. Poiché questo può essere un errore sottile, la compilazione in modalità di debug genererà il seguente avviso se si è a rischio.

```
Warning: calling DestroyWindow in CWnd::~CWnd
    OnDestroy or PostNcDestroy in derived class will not be called
```

Nel caso di oggetti di Windows in linguaggio C, `DestroyWindow`che eseguono la pulizia automatica, è necessario chiamare . Se si utilizza direttamente l'operatore **delete,** l'allocatore di memoria di diagnostica MFC informerà l'utente che si libera memoria due volte. Le due occorrenze sono la prima chiamata esplicita e la chiamata `PostNcDestroy`indiretta per **eliminarla** nell'implementazione di pulitura automatica di .

Dopo `DestroyWindow` aver chiamato un oggetto non auto-cleanup, l'oggetto di C , sarà ancora in giro, ma *m_hWnd* sarà NULL. Dopo `DestroyWindow` aver chiamato un oggetto di pulitura automatica, l'oggetto `PostNcDestroy`di Tipo.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
