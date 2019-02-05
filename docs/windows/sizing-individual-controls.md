---
title: Il ridimensionamento di controlli
ms.date: 11/04/2016
f1_keywords:
- vc.editors.dialog.combo
helpviewer_keywords:
- Size to Content command
- size, controls
- text, autosizing controls to fit text
- controls [C++], sizing
- Make Same Size command
- combo boxes, sizing
- list controls [C++], scroll bar width
- CListBox::SetHorizontalExtent
- controls [C++], scroll bar
- scroll bars [C++], displaying in controls
- horizontal scroll bar width
- CListBox class, scroll bar width
- scroll bars [C++], width
ms.assetid: 14ccba02-7171-463a-a121-7018cf1e2e5a
ms.openlocfilehash: a6381dcf1aeb9f73ac3b656229d9332df2a6a519
ms.sourcegitcommit: 52c05e10b503e834c443ef11e7ca1987e332f876
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2019
ms.locfileid: "55742713"
---
# <a name="sizing-controls"></a>Il ridimensionamento di controlli

Usare i quadratini di ridimensionamento per ridimensionare un controllo. Quando il puntatore è posizionato su un quadratino di ridimensionamento, assume la forma per indicare le direzioni in cui è possibile ridimensionare il controllo. Quadratini di ridimensionamento attivi sono pieni. Se un quadratino di ridimensionamento è vuoto, non è possibile ridimensionare il controllo lungo l'asse.

È anche possibile modificare le dimensioni di un controllo per il controllo per i margini o le guide di allineamento o spostando un controllo bloccato e la Guida da un altro.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="to-size-an-individual-control"></a>Per ridimensionare un singolo controllo

1. Selezionare il controllo.

1. Trascinare i quadratini di ridimensionamento per modificare le dimensioni del controllo:

   - Quadratini di ridimensionamento all'inizio e i lati modificano la dimensione orizzontale o verticale.

   - Quadratini di ridimensionamento negli angoli modificano le dimensioni orizzontali e verticali.

   > [!TIP]
   > È possibile ridimensionare l'unità di una finestra di dialogo (DLU) controllo contemporaneamente tenendo premuto il **Shift** chiave e l'uso di **freccia destra** e **freccia giù** chiavi.

## <a name="to-automatically-size-a-control-to-fit-the-text-within-it"></a>Per ridimensionare automaticamente un controllo per adattarsi al testo in esso contenuti

Scegli **adatta al contenuto** dalle **formato** menu.

\- oppure -

Il pulsante destro del controllo e scegliere **adatta al contenuto** dal menu di scelta rapida.

## <a name="to-make-controls-the-same-width-height-or-size"></a>Per rendere controlla la stessa larghezza, altezza o dimensione

È possibile ridimensionare un gruppo di controlli in base alla dimensione del controllo dominante.

1. [Selezionare i controlli](../windows/selecting-multiple-controls.md) si intende ridimensionare.

   Il controllo selezionato per primo nella serie è il controllo dominante. Le dimensioni finali dei controlli nel gruppo dipendono dalle dimensioni del controllo dominante. Per altre informazioni sulla selezione del controllo dominante, vedere [impostazione del controllo dominante](../windows/specifying-the-dominant-control.md).

1. Dal **formato** menu, scegliere **Rendi uguali**, quindi scegliere uno dei seguenti comandi:

   - **Both**

   - **Height**

   - **Width**

## <a name="to-set-the-size-of-the-combo-box-and-its-drop-down-list"></a>Per impostare le dimensioni della casella combinata finestra e dell'elenco a discesa

È possibile ridimensionare una casella combinata quando viene aggiunta alla finestra di dialogo. È anche possibile specificare le dimensioni della casella di riepilogo a discesa. Per altre informazioni, vedere [aggiunta di valori da un controllo casella combinata](../windows/adding-values-to-a-combo-box-control.md).

### <a name="to-size-a-combo-box"></a>Impostare le dimensioni di una casella combinata

1. Selezionare il controllo casella combinata nella finestra di dialogo.

   Inizialmente, solo i quadratini di ridimensionamento di sinistra e destra sono attivi.

1. Usare i quadratini di ridimensionamento per impostare la larghezza della casella combinata.

È anche possibile impostare la dimensione verticale della porzione elenco a discesa della casella combinata.

### <a name="to-set-the-size-of-the-combo-box-drop-down-list"></a>Per impostare le dimensioni della casella combinata elenco della casella di riepilogo

1. Selezionare il pulsante freccia in giù a destra della casella combinata.

   ![Freccia su una casella combinata in un progetto MFC](../mfc/media/vccomboboxarrow.gif "vcComboBoxArrow")

   La struttura del controllo cambia per mostrare le dimensioni della casella combinata con l'area di riepilogo a discesa elenco esteso.

1. Utilizzare il quadratino di ridimensionamento inferiore per modificare le dimensioni iniziali dell'area di riepilogo.

   ![Casella combinata&#45;ridimensionamento di casella in un progetto MFC](../mfc/media/vccomboboxsizing.gif "vcComboBoxSizing")

1. Selezionare la freccia a discesa per chiudere la parte dell'elenco a discesa della casella combinata.

## <a name="to-set-the-width-of-a-horizontal-scroll-bar-and-make-it-appear"></a>Per impostare la larghezza della barra di scorrimento orizzontale e far sembrare

Quando si aggiunge una casella di riepilogo con una barra di scorrimento orizzontale per una finestra di dialogo utilizzando le classi MFC, la barra di scorrimento non verrà visualizzato automaticamente nell'applicazione.

Impostare una larghezza massima per l'elemento più largo chiamando [CListBox:: SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) nel codice.

   Senza questo valore è impostato, la barra di scorrimento non sarà più visualizzato, anche quando gli elementi nella casella di riepilogo sono larghi della casella.
> [!NOTE]
> La barra di scorrimento orizzontale richiede MFC.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)
