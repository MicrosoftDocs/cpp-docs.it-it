---
title: "Controlli ActiveX MFC: disegno di un controllo ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC (controlli ActiveX), ottimizzazione"
  - "MFC (controlli ActiveX), disegno"
ms.assetid: 25fff9c0-4dab-4704-aaae-8dfb1065dee3
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: disegno di un controllo ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto il processo di generazione del controllo ActiveX e come è possibile modificare il codice di disegno per ottimizzare il processo. \(Vedere [Ottimizzare il Disegno di Controllo](../mfc/optimizing-control-drawing.md) per le tecniche su come ottimizzare il disegno in mancanza di controlli che singolarmente ripristino gli oggetti GDI precedentemente selezionati.  Dopo che tutti i controlli sono stati disegnati, il contenitore può automaticamente ripristinare gli oggetti originali.\)  
  
 Gli esempi in questo articolo hanno origine da un controllo creato dalla Creazione guidata controllo ActiveX MFC con le impostazioni predefinite.  Per ulteriori informazioni sulla creazione di applicazioni di base del controllo mediante la Creazione guidata controllo ActiveX MFC, vedere l'articolo [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md).  
  
 Sono discussi i seguenti argomenti:  
  
-   [Il processo complessivo per il disegno di un controllo e il codice creato dalla Creazione guidata controllo ActiveX per supportare disegno](#_core_the_painting_process_of_an_activex_control)  
  
-   [Come ottimizzare il processo di generazione](#_core_optimizing_your_paint_code)  
  
-   [Come disegnare il controllo utilizzando metafile](#_core_painting_your_control_using_metafiles)  
  
##  <a name="_core_the_painting_process_of_an_activex_control"></a> Il processo di generazione di un Controllo ActiveX  
 Quando i controlli ActiveX vengono inizialmente visualizzati o vengono ridisegnati, seguono un processo di generazione simile alle altre applicazioni sviluppate tramite MFC, con un'importante distinzione: I controlli ActiveX possono trovarsi in uno stato attivo o in uno stato inattivo.  
  
 Un controllo attivo viene rappresentato in un contenitore di controlli ActiveX da una finestra figlio.  Analogamente ad altre finestre, è responsabile del proprio disegno quando un messaggio di `WM_PAINT` viene ricevuto.  La classe di base control, [COleControl](../mfc/reference/colecontrol-class.md), gestisce questo messaggio nella propria funzione di `OnPaint`.  Questa implementazione predefinita chiama la funzione di `OnDraw` del controllo.  
  
 Un controllo inattivo viene disegnato in modo diverso.  Quando il controllo è inattivo, la finestra è invisibile o inesistente, pertanto non può ricevere un messaggio di disegno.  Invece, il contenitore del controllo chiama direttamente la funzione di `OnDraw` del controllo.  È diverso dal processo di generazione attivo di un controllo, la funzione membro di `OnPaint` non è mai chiamata.  
  
 Come discusso nei paragrafi precedenti, come un controllo ActiveX viene aggiornato dipende dallo stato del controllo.  Tuttavia, poiché il framework chiama la funzione membro di `OnDraw` in entrambi i casi, si aggiunge la maggior parte del codice di disegno nella funzione membro.  
  
 La funzione membro `OnDraw` gestisce il disegno del controllo.  Quando un controllo è inattivo, il contenitore di controlli chiama `OnDraw`, passando il contesto di dispositivo del contenitore del controllo e le coordinate dell'area rettangolare occupata dal controllo.  
  
 Il rettangolo passato dal framework alla funzione membro di `OnDraw` contiene l'area occupata dal controllo.  Se il controllo è attivo, l'angolo superiore sinistro impostato su \(0, 0\) e il contesto del dispositivo è passato alla finestra figlio che contiene il controllo.  Se il controllo è inattivo, la coordinata superiore sinistra non è necessariamente \(0, 0\) e il contesto di dispositivo viene passato per il contenitore del controllo che contiene il controllo.  
  
> [!NOTE]
>  È importante che le modifiche a `OnDraw` non dipendano dal punto in alto a sinistra del rettangolo che è uguale a \(0, 0\) e che sia possibile disegnare solo all'interno del rettangolo passato a `OnDraw`.  Si potrebbero ottenere risultati imprevisti se si disegna oltre l'area del rettangolo.  
  
 L'implementazione predefinita fornita dalla Creazione guidata controllo ActiveX MFC nel file di implementazione del controllo \(.CPP\), come illustrato di seguito, disegna il rettangolo con un pennello bianco e riempie l'ellisse del colore di sfondo corrente.  
  
 [!code-cpp[NVC_MFC_AxUI#1](../mfc/codesnippet/CPP/mfc-activex-controls-painting-an-activex-control_1.cpp)]  
  
> [!NOTE]
>  Quando si disegna un controllo, evitare fare assunzione sullo stato del contesto del dispositivo passato come parametro *pdc* alla funzione `OnDraw`.  Occasionalmente il contesto di dispositivo è fornito dall'applicazione contenitore e non necessariamente verrà inizializzato allo stato predefinito.  In particolare, selezionare esplicitamente penne, pennelli, colori, tipi di carattere e altre risorse da cui il codice di disegno dipende.  
  
##  <a name="_core_optimizing_your_paint_code"></a> Ottimizzazione del codice di disegno  
 Dopo che il controllo si è correttamente disegnato, è necessario ottimizzare la funzione `OnDraw`.  
  
 L'implementazione predefinita del disegno del controllo ActiveX disegna l'intera area di controllo.  Tale soluzione è sufficiente per controlli semplici, ma in molti casi aggiornare il controllo risulta più veloce se solo la parte che è necessario aggiornare è stata aggiornata, anziché l'intero controllo.  
  
 La funzione `OnDraw` fornisce un metodo semplice di ottimizzazione passando `rcInvalid`, l'area rettangolare del controllo che deve essere ridisegnata.  Utilizzare quest'area, in genere più piccola dell'intera area di controllo, per velocizzare il processo di generazione.  
  
##  <a name="_core_painting_your_control_using_metafiles"></a> Disegno del controllo utilizzando metafile  
 Nella maggior parte dei casi il parametro `pdc` passato alla funzione `OnDraw` punta ad un contesto di dispositivo dello schermo \(DC\).  Tuttavia, quando le immagini di stampa del controllo o durante una sessione di anteprima di stampa, il DC ricevuto per eseguire il rendering è un tipo speciale denominato un "DC metafile".  A differenza di un DC di uno schermo, che immediatamente gestisce le richieste inviate ad esso, un DC metafile archivia le richieste per essere riprodotte in un secondo momento.  Alcune applicazioni contenitori possono inoltre scegliere di eseguire il rendering dell'immagine del controllo utilizzando un DC di metafile in modalità di progettazione.  
  
 Le richieste di disegno metafile possono essere effettuate dal contenitore con due funzioni dell'interfaccia: **IViewObject::Draw** \(questa funzione può essere chiamata per il disegno non metafile\) e **IDataObject::GetData**.  Quando un DC metafile viene passato come uno dei parametri, il framework MFC effettua una chiamata a [COleControl::OnDrawMetafile](../Topic/COleControl::OnDrawMetafile.md).  Poiché si tratta di una funzione membro virtuale, eseguire l'override della funzione nella classe del controllo per effettuare qualunque l'elaborazione speciale.  Il comportamento predefinito chiama `COleControl::OnDraw`.  
  
 Per assicurarsi che il controllo possa essere disegnabile sia su schermo che su dispositivo metafile, è necessario utilizzare solo funzioni membro supportate sia da schermo che da dispositivo DC metafile.  Tenere presente che il sistema di coordinate non può essere espresso in pixel.  
  
 Poiché l'implementazione predefinita di `OnDrawMetafile` chiama la funzione `OnDraw` del controllo, utilizzare solo le funzioni membro che sono adatte sia per un metafile che per un contesto di dispositivo dello schermo, a meno che non si esegua l'override di `OnDrawMetafile`.  Di seguito è elencato il sottoinsieme delle funzioni membro di `CDC` che possono essere utilizzate sia in un metafile che in un contesto di dispositivo dello schermo.  Per ulteriori informazioni su queste funzioni, vedere la classe [CDC](../mfc/reference/cdc-class.md) in *Riferimento MFC*.  
  
|Arco|BibBlt|La corda|  
|----------|------------|--------------|  
|**Ellisse**|**Escape**|`ExcludeClipRect`|  
|`ExtTextOut`|`FloodFill`|`IntersectClipRect`|  
|`LineTo`|`MoveTo`|`OffsetClipRgn`|  
|`OffsetViewportOrg`|`OffsetWindowOrg`|`PatBlt`|  
|`Pie`|**Polygon**|`Polyline`|  
|`PolyPolygon`|`RealizePalette`|`RestoreDC`|  
|`RoundRect`|`SaveDC`|`ScaleViewportExt`|  
|`ScaleWindowExt`|`SelectClipRgn`|`SelectObject`|  
|`SelectPalette`|`SetBkColor`|`SetBkMode`|  
|`SetMapMode`|`SetMapperFlags`|`SetPixel`|  
|`SetPolyFillMode`|`SetROP2`|`SetStretchBltMode`|  
|`SetTextColor`|`SetTextJustification`|`SetViewportExt`|  
|`SetViewportOrg`|`SetWindowExt`|`SetWindowORg`|  
|`StretchBlt`|`TextOut`||  
  
 Oltre alle funzioni membro di `CDC`, esistono diverse altre funzioni che sono compatibili in un controller di dominio del metafile.  Questi includono [CPalette::AnimatePalette](../Topic/CPalette::AnimatePalette.md), [CFont::CreateFontIndirect](../Topic/CFont::CreateFontIndirect.md) e le funzioni di tre membri di `CBrush`: [CreateBrushIndirect](../Topic/CBrush::CreateBrushIndirect.md), [CreateDIBPatternBrush](../Topic/CBrush::CreateDIBPatternBrush.md) e [CreatePatternBrush](../Topic/CBrush::CreatePatternBrush.md).  
  
 Le funzioni che non vengono registrate in un metafile sono: [DrawFocusRect](../Topic/CDC::DrawFocusRect.md), [DrawIcon](../Topic/CDC::DrawIcon.md), [DrawText](../Topic/CDC::DrawText.md), [ExcludeUpdateRgn](../Topic/CDC::ExcludeUpdateRgn.md), [FillRect](../Topic/CDC::FillRect.md), [FrameRect](../Topic/CDC::FrameRect.md), [GrayString](../Topic/CDC::GrayString.md), [InvertRect](../Topic/CDC::InvertRect.md), [ScrollDC](../Topic/CDC::ScrollDC.md) e [TabbedTextOut](../Topic/CDC::TabbedTextOut.md).  Poiché un controller di dominio del metafile in realtà non è associato a un dispositivo, non è possibile utilizzare SetDIBits, GetDIBits e CreateDIBitmap con un controller di dominio del metafile.  È possibile utilizzare SetDIBitsToDevice e StretchDIBits con un controller di dominio del metafile come destinazione.  [CreateCompatibleDC](../Topic/CDC::CreateCompatibleDC.md), [CreateCompatibleBitmap](../Topic/CBitmap::CreateCompatibleBitmap.md) e [CreateDiscardableBitmap](../Topic/CBitmap::CreateDiscardableBitmap.md) non sono significativi con un controller di dominio del metafile.  
  
 Un altro punto per considerare quando si utilizza un controller di dominio del metafile è che il sistema di coordinate non può essere espresso in pixel.  Per questo motivo, tutto il codice di disegno deve essere regolato per adattarlo al rettangolo passato a `OnDraw` nel parametro di `rcBounds`.  Ciò impedisce disegni accidentali all'esterno del controllo in quanto `rcBounds` rappresenta la dimensione del controllo della finestra.  
  
 Dopo avere implementato il rendering metafile per il controllo, utilizzare Test Container per testare il metafile.  Per ulteriori informazioni sulla modalità di accesso a Test Container, vedere [Verifica di proprietà ed eventi tramite Test Container](../mfc/testing-properties-and-events-with-test-container.md).  
  
#### Testare il metafile di controllo utilizzando il Test Container  
  
1.  Dal menu **Modifica** di Test Container, scegliere **Inserisci nuovo controllo**.  
  
2.  Nella casella **Inserisci nuovo controllo**, selezionare il controllo e scegliere **OK**.  
  
     Il controllo viene visualizzato in Test Container.  
  
3.  Dal menu **Controllo** , fare clic su **Disegna metafile**.  
  
     Una finestra separata viene visualizzata in quella in cui il metafile viene visualizzato.  È possibile modificare la dimensione della finestra per vedere come il ridimensionamento influisca sui metafile del controllo.  È possibile chiudere questa finestra in qualsiasi momento.  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)