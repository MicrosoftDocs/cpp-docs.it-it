---
description: 'Altre informazioni su: TN017: distruzione di oggetti finestra'
title: 'TN017: eliminazione definitiva di oggetti finestra'
ms.date: 11/04/2016
f1_keywords:
- vc.objects
helpviewer_keywords:
- destroying windows
- TN017
- PostNcDestroy method [MFC]
ms.assetid: 5bf208a5-5683-439b-92a1-547c5ded26cd
ms.openlocfilehash: 86ce1255055db98a247ac8997aa7d146eb135583
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215911"
---
# <a name="tn017-destroying-window-objects"></a>TN017: eliminazione definitiva di oggetti finestra

Questa nota descrive l'uso del metodo [CWnd::P ostncdestroy](../mfc/reference/cwnd-class.md#postncdestroy) . Utilizzare questo metodo se si desidera eseguire l'allocazione personalizzata di `CWnd` oggetti derivati da. Questa nota spiega anche il motivo per cui è necessario usare [CWnd::D estroywindow](../mfc/reference/cwnd-class.md#destroywindow) per eliminare definitivamente un oggetto Windows C++ anziché l' **`delete`** operatore.

Se si seguono le linee guida riportate in questo argomento, si avranno pochi problemi di pulizia. Questi problemi possono derivare da problemi quali la dimenticanza di eliminare/liberare memoria C++, l'oblio di liberare risorse di sistema come `HWND` s o la liberazione di oggetti troppe volte.

## <a name="the-problem"></a>Problema

Ogni oggetto di Windows (oggetto di una classe derivata da `CWnd` ) rappresenta sia un oggetto C++ sia un oggetto `HWND` . Gli oggetti C++ vengono allocati nell'heap dell'applicazione e le istanze di `HWND` vengono allocate nelle risorse di sistema da Gestione finestre. Poiché esistono diversi modi per eliminare un oggetto finestra, è necessario fornire un set di regole che impediscano perdite di memoria o risorse di sistema. Queste regole devono anche impedire che gli oggetti e gli handle di Windows vengano eliminati più di una volta.

## <a name="destroying-windows"></a>Eliminazione definitiva di finestre

Di seguito sono riportate le due modalità di eliminazione di un oggetto di Windows:

- Chiamata `CWnd::DestroyWindow` o API Windows `DestroyWindow` .

- Eliminazione esplicita con l' **`delete`** operatore.

Il primo caso è di gran lunga il più comune. Questo caso si applica anche se il codice non chiama `DestroyWindow` direttamente. Quando l'utente chiude direttamente una finestra cornice, questa azione genera il messaggio di WM_CLOSE e la risposta predefinita a questo messaggio consiste nel chiamare `DestroyWindow.` quando una finestra padre viene distrutta, Windows chiama `DestroyWindow` per tutti i relativi elementi figlio.

Il secondo caso, l'utilizzo dell' **`delete`** operatore negli oggetti di Windows, deve essere raro. Di seguito sono riportati alcuni casi in cui **`delete`** l'utilizzo di è la scelta corretta.

## <a name="auto-cleanup-with-cwndpostncdestroy"></a>Pulizia automatica con CWnd::P ostNcDestroy

Quando il sistema distrugge una finestra di Windows, viene WM_NCDESTROY l'ultimo messaggio di Windows inviato alla finestra. Il `CWnd` gestore predefinito per il messaggio è [CWnd:: OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy). `OnNcDestroy` Scollega l' `HWND` oggetto dall'oggetto C++ e chiama la funzione virtuale `PostNcDestroy` . Alcune classi eseguono l'override di questa funzione per eliminare l'oggetto C++.

L'implementazione predefinita di `CWnd::PostNcDestroy` non esegue alcuna operazione, che è appropriata per gli oggetti finestra allocati nella stack frame o incorporati in altri oggetti. Questa operazione non è appropriata per gli oggetti finestra progettati per essere allocati nell'heap senza altri oggetti. In altre parole, non è appropriato per gli oggetti finestra che non sono incorporati in altri oggetti C++.

Le classi progettate per essere allocate da solo nell'heap eseguono l'override del `PostNcDestroy` metodo per eseguire un' **operazione Delete**. Questa istruzione consente di liberare la memoria associata all'oggetto C++. Anche se il `CWnd` distruttore predefinito chiama `DestroyWindow` se *m_hWnd* è diverso da null, questo non comporta una ricorsione infinita perché l'handle verrà scollegato e null durante la fase di pulizia.

> [!NOTE]
> Il sistema chiama in genere `CWnd::PostNcDestroy` dopo l'elaborazione del messaggio di Windows WM_NCDESTROY e il `HWND` e l'oggetto finestra C++ non sono più connessi. Il sistema chiamerà anche `CWnd::PostNcDestroy` l'implementazione della maggior parte delle chiamate [CWnd:: create](../mfc/reference/cwnd-class.md#create) se si verifica un errore. Le regole di pulizia automatica sono descritte più avanti in questo argomento.

## <a name="auto-cleanup-classes"></a>Pulizia automatica classi

Le classi seguenti non sono progettate per la pulizia automatica. In genere sono incorporati in altri oggetti C++ o nello stack:

- Tutti i controlli Windows standard ( `CStatic` ,, `CEdit` `CListBox` e così via).

- Qualsiasi finestra figlio derivata direttamente da `CWnd` (ad esempio, controlli personalizzati).

- Finestre con separatore ( `CSplitterWnd` ).

- Barre di controllo predefinite (classi derivate da `CControlBar` , vedere [Nota tecnica 31](../mfc/tn031-control-bars.md) per l'abilitazione dell'eliminazione automatica per gli oggetti della barra di controllo).

- Finestre di dialogo ( `CDialog` ) progettate per le finestre di dialogo modali nel stack frame.

- Tutte le finestre di dialogo standard eccetto `CFindReplaceDialog` .

- Finestre di dialogo predefinite create da ClassWizard.

Le classi seguenti sono progettate per la pulizia automatica. Vengono in genere allocate dall'heap:

- Finestre cornice principale (derivate direttamente o indirettamente da `CFrameWnd` ).

- Visualizzare le finestre (derivate direttamente o indirettamente da `CView` ).

Se si desidera interrompere queste regole, è necessario eseguire l'override del `PostNcDestroy` metodo nella classe derivata. Per aggiungere la pulizia automatica alla classe, chiamare la classe di base e quindi eseguire un'operazione **Delete**. Per rimuovere la pulizia automatica dalla classe, chiamare `CWnd::PostNcDestroy` direttamente anziché il `PostNcDestroy` metodo della classe di base diretta.

L'uso più comune della modifica del comportamento di pulizia automatica consiste nel creare una finestra di dialogo non modale che può essere allocata nell'heap.

## <a name="when-to-call-delete"></a>Quando chiamare delete

Si consiglia `DestroyWindow` di chiamare per eliminare definitivamente un oggetto di Windows, ovvero il metodo C++ o l' `DestroyWindow` API globale.

Non chiamare l'API globale `DestroyWindow` per eliminare definitivamente una finestra figlio MDI. Usare invece il metodo virtuale `CWnd::DestroyWindow` .

Per gli oggetti finestra C++ che non eseguono la pulizia automatica, l'uso dell' **`delete`** operatore può causare una perdita di memoria quando si tenta di chiamare `DestroyWindow` nel `CWnd::~CWnd` DISTRUTTOre se VTBL non punta alla classe derivata correttamente. Questo problema si verifica perché il sistema non riesce a trovare il metodo Destroy appropriato da chiamare. Per `DestroyWindow` **`delete`** evitare questi problemi, usare anziché. Poiché può trattarsi di un errore delicato, la compilazione in modalità di debug genera l'avviso seguente se si è a rischio.

```
Warning: calling DestroyWindow in CWnd::~CWnd
    OnDestroy or PostNcDestroy in derived class will not be called
```

Nel caso di oggetti Windows C++ che eseguono la pulizia automatica, è necessario chiamare `DestroyWindow` . Se si utilizza **`delete`** direttamente l'operatore, l'allocatore di memoria diagnostica MFC notificherà che la memoria viene liberata due volte. Le due occorrenze sono la prima chiamata esplicita e la chiamata indiretta per **eliminarla** nell'implementazione della pulizia automatica di `PostNcDestroy` .

Dopo `DestroyWindow` la chiamata a su un oggetto non di pulizia automatica, l'oggetto C++ sarà ancora in funzione, ma *M_HWND* sarà null. Dopo aver chiamato `DestroyWindow` su un oggetto di pulizia automatica, l'oggetto c++ non verrà più rilasciato dall'operatore di eliminazione c++ nell'implementazione di pulitura automatica di `PostNcDestroy` .

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
