---
title: 'Controlli ActiveX MFC: Disegno di un controllo ActiveX | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], painting
- MFC ActiveX controls [MFC], optimizing
ms.assetid: 25fff9c0-4dab-4704-aaae-8dfb1065dee3
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a2a2dc7b0cebbfaa6f6fe7dbe7dc69e5d4f80121
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls-painting-an-activex-control"></a>Controlli ActiveX MFC: disegno di un controllo ActiveX
In questo articolo viene descritto il processo di creazione del controllo ActiveX e come è possibile modificare il codice di disegno per ottimizzare il processo. (Vedere [l'ottimizzazione del disegno del controllo](../mfc/optimizing-control-drawing.md) per le tecniche di ottimizzare il disegno in mancanza di controlli singolarmente ripristino gli oggetti GDI precedentemente selezionati. Una volta che tutti i controlli sono stati disegnati, il contenitore può automaticamente ripristinare gli oggetti originali.  
  
 Gli esempi in questo articolo hanno origine da un controllo creato dalla Creazione guidata controllo ActiveX MFC con le impostazioni predefinite. Per ulteriori informazioni sulla creazione di un'applicazione di base del controllo, la creazione guidata controllo ActiveX MFC, vedere l'articolo [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md).  
  
 Sono discussi i seguenti argomenti:  
  
-   [Il processo generale per disegnare un controllo e il codice creato dalla creazione guidata controllo ActiveX per supportare il disegno](#_core_the_painting_process_of_an_activex_control)  
  
-   [Come ottimizzare il processo di disegno](#_core_optimizing_your_paint_code)  
  
-   [Come disegnare il controllo utilizzando metafile](#_core_painting_your_control_using_metafiles)  
  
##  <a name="_core_the_painting_process_of_an_activex_control"></a>Il processo di disegno di un controllo ActiveX  
 Quando i controlli ActiveX vengono inizialmente visualizzati o vengono ridisegnati, seguono un processo di disegno simile alle altre applicazioni sviluppate tramite MFC, con un'importante distinzione: i controlli ActiveX possono trovarsi in uno stato attivo o in uno stato inattivo.  
  
 Un controllo attivo viene rappresentato in un contenitore di controlli ActiveX da una finestra figlio. Analogamente ad altre finestre, è responsabile del proprio disegno quando viene ricevuto un messaggio di `WM_PAINT`. Classe di base del controllo, [COleControl](../mfc/reference/colecontrol-class.md), gestisce questo messaggio nella relativa `OnPaint` (funzione). Questa implementazione predefinita chiama la funzione `OnDraw` del controllo.  
  
 Un controllo inattivo viene disegnato in modo diverso. Quando il controllo è inattivo, la finestra è invisibile o inesistente, pertanto non può ricevere un messaggio di disegno. Invece, il contenitore del controllo chiama direttamente la funzione `OnDraw` del controllo. Questo processo à diverso dal processo di disegno di un controllo attivo per il fatto che la funzione membro `OnPaint` non viene mai chiamata.  
  
 Come discusso nei paragrafi precedenti, la modalità di aggiornamento di un controllo ActiveX dipende dallo stato del controllo. Tuttavia, poiché il framework chiama la funzione membro `OnDraw` in entrambi i casi, la maggior parte del codice di disegno deve essere aggiunta in questa funzione membro.  
  
 La funzione membro `OnDraw` gestisce il disegno del controllo. Quando un controllo è inattivo, il contenitore di controlli chiama `OnDraw`, passando il contesto di dispositivo del contenitore del controllo e le coordinate dell'area rettangolare occupata dal controllo.  
  
 Il rettangolo passato dal framework alla funzione membro `OnDraw` contiene l'area occupata dal controllo. Se il controllo è attivo, l'angolo superiore sinistro è (0, 0) e il contesto del dispositivo passato è per la finestra figlio che contiene il controllo. Se il controllo è inattivo, la coordinata superiore sinistra non è necessariamente (0, 0) e il contesto di dispositivo passato è per il contenitore del controllo che contiene il controllo.  
  
> [!NOTE]
>  È importante che le modifiche apportate a `OnDraw` non dipendono da punto a sinistra del rettangolo superiore sia uguale a (0, 0) e che sia possibile disegnare solo all'interno del rettangolo passato a `OnDraw`. Si potrebbero ottenere risultati imprevisti se si disegna oltre l'area del rettangolo.  
  
 L'implementazione predefinita fornita dalla Creazione guidata controllo ActiveX MFC nel file di implementazione del controllo (.CPP), illustrato di seguito, disegna il rettangolo con un pennello bianco e riempie l'ellisse del colore di sfondo corrente.  
  
 [!code-cpp[NVC_MFC_AxUI#1](../mfc/codesnippet/cpp/mfc-activex-controls-painting-an-activex-control_1.cpp)]  
  
> [!NOTE]
>  Quando si disegna un controllo, è consigliabile non apportare ipotizzare lo stato del contesto di dispositivo che viene passato come il *pdc* parametro per il `OnDraw` (funzione). Talvolta il contesto di dispositivo viene fornito dall'applicazione contenitore e non necessariamente verrà inizializzato allo stato predefinito. In particolare, selezionare esplicitamente penne, pennelli, colori, tipi di carattere e altre risorse da cui dipende il codice di disegno.  
  
##  <a name="_core_optimizing_your_paint_code"></a>Ottimizzazione del codice di disegno  
 Una volta disegnato il controllo, è necessario ottimizzare la funzione `OnDraw`.  
  
 L'implementazione predefinita del disegno del controllo ActiveX disegna l'intera area di controllo. Tale soluzione è sufficiente per i controlli semplici, ma in molti casi ridisegnare il controllo risulta più veloce se solo la parte che è necessario aggiornare viene ridisegnata, anziché l'intero controllo.  
  
 La funzione `OnDraw` fornisce un metodo semplice di ottimizzazione passando `rcInvalid`, l'area rettangolare del controllo che deve essere ridisegnata. Utilizzare quest'area, in genere più piccola dell'intera area di controllo, per velocizzare il processo di disegno.  
  
##  <a name="_core_painting_your_control_using_metafiles"></a>Disegno di un controllo utilizzando metafile  
 Nella maggior parte dei casi il parametro `pdc` passato alla funzione `OnDraw` punta a un contesto di dispositivo dello schermo (DC). Tuttavia, quando vengono stampate immagini del controllo o durante una sessione di anteprima di stampa, il contesto di dispositivo ricevuto per il rendering è un tipo speciale denominato "contesto di dispositivo metafile". A differenza di un contesto di dispositivo di uno schermo, che gestisce subito le richieste che riceve, un contesto di dispositivo metafile archivia le richieste per riprodurle in un secondo momento. Alcune applicazioni contenitore possono inoltre scegliere di eseguire il rendering dell'immagine del controllo utilizzando un contesto di dispositivo metafile in modalità di progettazione.  
  
 Le richieste di disegno metafile possa essere effettuate dal contenitore tramite due funzioni di interfaccia: **IViewObject** (questa funzione può essere denominata anche per disegni non metafile) e **IDataObject:: GetData**. Quando un metafile di controller di dominio è passato come uno dei parametri, il framework MFC effettua una chiamata a [COleControl:: OnDrawMetafile](../mfc/reference/colecontrol-class.md#ondrawmetafile). Poiché si tratta di una funzione membro virtuale, eseguire l'override della funzione nella classe del controllo per effettuare qualunque l'elaborazione speciale. Il comportamento predefinito chiama `COleControl::OnDraw`.  
  
 Per assicurarsi che il controllo possa essere disegnato sia su schermo che in contesti di dispositivo metafile, è necessario utilizzare solo funzioni membro che siano supportate sia nel contesto di dispositivo su schermo che nel contesto di dispositivo metafile. Tenere presente che l'unità di misura del sistema di coordinate potrebbe non essere il pixel.  
  
 Poiché l'implementazione predefinita di `OnDrawMetafile` chiama la funzione `OnDraw` del controllo, utilizzare solo le funzioni membro che sono adatte sia per un contesto di dispositivo metafile che per un contesto di dispositivo dello schermo, a meno che non si esegua l'override di `OnDrawMetafile`. Di seguito è elencato il sottoinsieme delle funzioni membro `CDC` che possono essere utilizzate in entrambi i contesti di dispositivo. Per ulteriori informazioni su queste funzioni, vedere la classe [CDC](../mfc/reference/cdc-class.md) nel *riferimenti alla libreria MFC*.  
  
|Arc|BibBlt|Chord|  
|---------|------------|-----------|  
|**Puntini di sospensione**|**Carattere di escape**|`ExcludeClipRect`|  
|`ExtTextOut`|`FloodFill`|`IntersectClipRect`|  
|`LineTo`|`MoveTo`|`OffsetClipRgn`|  
|`OffsetViewportOrg`|`OffsetWindowOrg`|`PatBlt`|  
|`Pie`|**Poligono**|`Polyline`|  
|`PolyPolygon`|`RealizePalette`|`RestoreDC`|  
|`RoundRect`|`SaveDC`|`ScaleViewportExt`|  
|`ScaleWindowExt`|`SelectClipRgn`|`SelectObject`|  
|`SelectPalette`|`SetBkColor`|`SetBkMode`|  
|`SetMapMode`|`SetMapperFlags`|`SetPixel`|  
|`SetPolyFillMode`|`SetROP2`|`SetStretchBltMode`|  
|`SetTextColor`|`SetTextJustification`|`SetViewportExt`|  
|`SetViewportOrg`|`SetWindowExt`|`SetWindowORg`|  
|`StretchBlt`|`TextOut`||  
  
 Oltre alle funzioni membro `CDC`, esistono diverse altre funzioni che sono compatibili in un contesto di dispositivo metafile. Questi includono [CPalette:: AnimatePalette](../mfc/reference/cpalette-class.md#animatepalette), [CFont:: CreateFontIndirect](../mfc/reference/cfont-class.md#createfontindirect)e tre le funzioni membro di `CBrush`: [CreateBrushIndirect](../mfc/reference/cbrush-class.md#createbrushindirect), [CreateDIBPatternBrush](../mfc/reference/cbrush-class.md#createdibpatternbrush), e [CreatePatternBrush](../mfc/reference/cbrush-class.md#createpatternbrush).  
  
 Le funzioni che non vengono registrate in un metafile sono: [DrawFocusRect](../mfc/reference/cdc-class.md#drawfocusrect), [DrawIcon](../mfc/reference/cdc-class.md#drawicon), [DrawText](../mfc/reference/cdc-class.md#drawtext), [ExcludeUpdateRgn](../mfc/reference/cdc-class.md#excludeupdatergn), [FillRect](../mfc/reference/cdc-class.md#fillrect), [FrameRect](../mfc/reference/cdc-class.md#framerect), [GrayString](../mfc/reference/cdc-class.md#graystring), [InvertRect](../mfc/reference/cdc-class.md#invertrect), [ScrollDC](../mfc/reference/cdc-class.md#scrolldc)e [TabbedTextOut](../mfc/reference/cdc-class.md#tabbedtextout). Poiché un contesto di dispositivo metafile in realtà non è associato a un dispositivo, non è possibile utilizzare SetDIBits, GetDIBits e CreateDIBitmap con questo tipo di contesto. È possibile utilizzare SetDIBitsToDevice e StretchDIBits con un contesto di dispositivo metafile come destinazione. [CreateCompatibleDC](../mfc/reference/cdc-class.md#createcompatibledc), [CreateCompatibleBitmap](../mfc/reference/cbitmap-class.md#createcompatiblebitmap), e [CreateDiscardableBitmap](../mfc/reference/cbitmap-class.md#creatediscardablebitmap) non sono significative con un contesto di dispositivo metafile.  
  
 Un altro punto da considerare quando si utilizza un contesto di dispositivo metafile è che il sistema di coordinate potrebbe non essere misurato in pixel. Per questo motivo, tutto il codice di disegno deve essere adattato al rettangolo passato a `OnDraw` nel `rcBounds` parametro. Ciò impedisce di disegnare accidentalmente all'esterno del controllo in quanto `rcBounds` rappresenta la dimensione della finestra del controllo.  
  
 Dopo avere implementato il rendering del metafile per il controllo, utilizzare Test Container per eseguire i test sul metafile. Per informazioni su come accedere al Test Container, vedere [Test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) .  
  
#### <a name="to-test-the-controls-metafile-using-test-container"></a>Per eseguire i test sul metafile del controllo utilizzando Test Container  
  
1.  Per il contenitore di Test **modifica** menu, fare clic su **Inserisci nuovo controllo**.  
  
2.  Nel **Inserisci nuovo controllo** , selezionare il controllo e fare clic su **OK**.  
  
     Il controllo verrà visualizzato in Test Container.  
  
3.  Nel **controllo** menu, fare clic su **disegnare Metafile**.  
  
     Verrà visualizzata una finestra separata, nella quale sarà visualizzato il metafile. È possibile modificare le dimensioni di questa finestra per vedere in che modo il ridimensionamento influisce sui metafile del controllo. È possibile chiudere questa finestra in qualsiasi momento.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
