---
title: 'TN014: Controlli personalizzati'
ms.date: 06/28/2018
f1_keywords:
- vc.controls
helpviewer_keywords:
- TN014
- custom controls [MFC]
ms.assetid: 1917a498-f643-457c-b570-9a0af7dbf7bb
ms.openlocfilehash: 2960c5b8585519adb535e5611315ec4ececcf53e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69511180"
---
# <a name="tn014-custom-controls"></a>TN014: Controlli personalizzati

In questa nota viene descritto il supporto MFC per i controlli di disegno automatico e personalizzati. Viene inoltre descritta la sottoclasse dinamica e viene descritta la relazione tra gli oggetti [CWnd](../mfc/reference/cwnd-class.md) e i `HWND`.

Nell'applicazione MFC di esempio CTRLTEST viene illustrato come utilizzare molti controlli personalizzati. Vedere il codice sorgente per l'esempio generale MFC [CTRLTEST](../overview/visual-cpp-samples.md) e la guida online.

## <a name="owner-draw-controlsmenus"></a>Menu e controlli per il disegno personalizzato

Windows fornisce il supporto per menu e controlli di disegno personalizzato utilizzando i messaggi di Windows. La finestra padre del controllo o del menu riceve questi messaggi e chiama delle funzioni in risposta. È possibile eseguire l'override di queste funzioni per personalizzare l'aspetto e il comportamento del controllo o del menu per il disegno personalizzato.

MFC supporta direttamente il disegno personalizzato con le seguenti funzioni:

- [CWnd:: OnDrawItem](../mfc/reference/cwnd-class.md#ondrawitem)

- [CWnd:: OnMeasureItem](../mfc/reference/cwnd-class.md#onmeasureitem)

- [CWnd::OnCompareItem](../mfc/reference/cwnd-class.md#oncompareitem)

- [CWnd::OnDeleteItem](../mfc/reference/cwnd-class.md#ondeleteitem)

È possibile eseguire l'override di queste funzioni nella classe derivata `CWnd` per implementare il comportamento di disegno personalizzato.

Questo approccio non porta ad avere codice riutilizzabile. Se si dispone di due controlli simili in due differenti classi `CWnd`, è necessario implementare il comportamento del controllo personalizzato in due posizioni. L'architettura del controllo di disegno automatico supportata da MFC risolve il problema.

## <a name="self-draw-controls-and-menus"></a>Menu e controlli di disegno automatico

MFC fornisce un'implementazione predefinita (nelle `CWnd` classi e [CMenu](../mfc/reference/cmenu-class.md) ) per i messaggi standard di creazione del proprietario. Questa implementazione predefinita decodificherà i parametri per il disegno personalizzato e delegherà i messaggi per il disegno personalizzato ai controlli o al menu. Si tratta di disegno automatico perché il codice di disegno è nella classe del controllo o del menu, non nella finestra proprietaria.

Tramite i comandi di disegno automatico è possibile compilare le classi di controlli riutilizzabili che utilizzano la semantica di disegno personalizzato per visualizzare il controllo. Il codice per disegnare il controllo è nella classe di controllo, non nel padre. Si tratta di un approccio orientato agli oggetti per la programmazione dei controlli personalizzati. Aggiungere il seguente elenco di funzioni alle classi di disegno automatico:

- Per i pulsanti di disegno automatico:

    ```cpp
    CButton:DrawItem(LPDRAWITEMSTRUCT);
    // insert code to draw this button
    ```

- Per i menu di disegno automatico:

    ```cpp
    CMenu:MeasureItem(LPMEASUREITEMSTRUCT);
    // insert code to measure the size of an item in this menu
    CMenu:DrawItem(LPDRAWITEMSTRUCT);
    // insert code to draw an item in this menu
    ```

- Per le caselle di riepilogo di disegno automatico:

    ```cpp
    CListBox:MeasureItem(LPMEASUREITEMSTRUCT);
    // insert code to measure the size of an item in this list box
    CListBox:DrawItem(LPDRAWITEMSTRUCT);
    // insert code to draw an item in this list box

    CListBox:CompareItem(LPCOMPAREITEMSTRUCT);
    // insert code to compare two items in this list box if LBS_SORT
    CListBox:DeleteItem(LPDELETEITEMSTRUCT);
    // insert code to delete an item from this list box
    ```

- Per le caselle combinate di disegno automatico:

    ```cpp
    CComboBox:MeasureItem(LPMEASUREITEMSTRUCT);
    // insert code to measure the size of an item in this combo box
    CComboBox:DrawItem(LPDRAWITEMSTRUCT);
    // insert code to draw an item in this combo box

    CComboBox:CompareItem(LPCOMPAREITEMSTRUCT);
    // insert code to compare two items in this combo box if CBS_SORT
    CComboBox:DeleteItem(LPDELETEITEMSTRUCT);
    // insert code to delete an item from this combo box
    ```

Per informazioni dettagliate sulle strutture di estrazione del proprietario ([DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct), [MEASUREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-measureitemstruct), [COMPAREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-compareitemstruct)e [DELETEITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-deleteitemstruct)), vedere la documentazione MFC `CWnd::OnDrawItem`per `CWnd::OnMeasureItem`, `CWnd::OnCompareItem`, e `CWnd::OnDeleteItem` rispettivamente.

## <a name="using-self-draw-controls-and-menus"></a>Utilizzo dei menu e dei controlli di disegno automatico

Per i menu di disegno automatico, è necessario eseguire l'override dei metodi `OnMeasureItem` e `OnDrawItem`.

Per le caselle di riepilogo e caselle combinate di disegno automatico, è necessario eseguire l'override di `OnMeasureItem` e `OnDrawItem`. È necessario specificare lo stile LBS_OWNERDRAWVARIABLE per le caselle di riepilogo o lo stile CBS_OWNERDRAWVARIABLE per le caselle combinate nel modello di finestra di dialogo. Lo stile OWNERDRAWFIXED non funzionerà con gli elementi di autodisegnatura perché l'altezza fissa dell'elemento viene determinata prima che i controlli autodisegnati siano collegati alla casella di riepilogo. Per ovviare a questa limitazione, è possibile usare i metodi [CListBox:: SetItemHeight](../mfc/reference/clistbox-class.md#setitemheight) e [CComboBox:: SetItemHeight](../mfc/reference/ccombobox-class.md#setitemheight) .

Se si passa a uno stile OWNERDRAWVARIABLE, il sistema applica lo stile NOINTEGRALHEIGHT al controllo. Poiché il controllo non è in grado di calcolare un'altezza integrale con elementi di dimensioni variabili, lo stile predefinito di INTEGRALHEIGHT viene ignorato e il controllo è sempre NOINTEGRALHEIGHT. Se gli elementi hanno l'altezza fissata, è possibile evitare che gli elementi parziali vengano disegnati specificando la dimensione di controllo in modo che sia un moltiplicatore intero della dimensione dell'elemento.

Per le caselle di riepilogo e le caselle combinate di disegno automatico con lo stile LBS_SORT o CBS_SORT, `OnCompareItem` è necessario eseguire l'override del metodo.

Per le caselle di riepilogo e le caselle combinate di disegno automatico, `OnDeleteItem` in genere non viene sottoposto a override. È possibile eseguire l'override di `OnDeleteItem` se si desidera eseguire dell'elaborazione speciale. Un caso in cui sarebbe applicabile è quando vengono archiviate della memoria aggiuntiva o altre risorse con ogni elemento casella di riepilogo o casella combinata.

## <a name="examples-of-self-drawing-controls-and-menus"></a>Esempi di controlli e di menu di disegno automatico

Il [CTRLTEST](../overview/visual-cpp-samples.md) di esempio generale MFC fornisce esempi di un menu di autoestraente e una casella di riepilogo con autonomia.

L'esempio più comune di un pulsante di disegno automatico è un pulsante bitmap. Un pulsante bitmap è un pulsante che mostra una, due o tre immagini bitmap per i diversi stati. Un esempio è disponibile nella classe MFC [CBitmapButton](../mfc/reference/cbitmapbutton-class.md).

## <a name="dynamic-subclassing"></a>Creazione di una sottoclasse dinamica

Talvolta è preferibile modificare la funzionalità di un oggetto già esistente. Negli esempi precedenti è stato necessario personalizzare i controlli prima che venissero creati. La creazione di una sottoclasse dinamica consente di personalizzare un controllo che è già stato creato.

La sottoclasse è il termine <xref:System.Windows.Forms.Control.WndProc%2A> di Windows per la sostituzione di una finestra con un oggetto personalizzato `WndProc` e la `WndProc` chiamata del precedente per le funzionalità predefinite.

Questa operazione non deve essere confusa con la derivazione di classi di C++. Per chiarire, C++ la *classe base* dei termini e la *classe derivata* sono analoghe alla *superclasse* *e alla sottoclasse nel modello* a oggetti di Windows. La derivazione di C++ con MFC e la creazione di una sottoclasse di Windows sono simili a livello funzionale, ad eccezione del fatto che C++ non supporta la creazione di una sottoclasse dinamica.

La classe `CWnd` fornisce la connessione tra un oggetto C++ (derivato da `CWnd`) e un oggetto finestra di Windows (noto come `HWND`).

Esistono tre modi comuni in cui questi sono correlati:

- `CWnd` crea `HWND`. È possibile modificare il comportamento in una classe derivata creando una classe derivata da `CWnd`. Viene creato quando l'applicazione chiama [CWnd:: create.](../mfc/reference/cwnd-class.md#create) `HWND`

- L'applicazione associa un `CWnd` a un `HWND` esistente. Il comportamento della finestra esistente non viene modificato. Si tratta di un caso di delega e viene reso possibile chiamando [CWnd:: Connetti per assegnare](../mfc/reference/cwnd-class.md#attach) un alias `HWND` a un `CWnd` oggetto esistente a un oggetto.

- `CWnd` è collegato a un `HWND` esistente ed è possibile modificare il comportamento in una classe derivata. Questa procedura è denominata creazione di una sottoclasse dinamica poiché viene modificato il comportamento e, di conseguenza la classe, di un oggetto Windows in fase di esecuzione.

È possibile ottenere la sottoclasse dinamica usando i metodi [CWnd:: SubclassWindow](../mfc/reference/cwnd-class.md#subclasswindow) e[CWnd:: SubclassDlgItem](../mfc/reference/cwnd-class.md#subclassdlgitem).

Entrambe le routine associano un oggetto `CWnd` a un `HWND` esistente. `SubclassWindow` accetta `HWND` direttamente. `SubclassDlgItem` è una funzione di supporto che accetta un ID di controllo e la finestra padre. `SubclassDlgItem` è progettato per collegare gli oggetti C++ ai controlli finestra di dialogo creati da un modello di finestra di dialogo.

Vedere l'esempio [CTRLTEST](../overview/visual-cpp-samples.md) per alcuni esempi di utilizzo `SubclassWindow` di e. `SubclassDlgItem`

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
