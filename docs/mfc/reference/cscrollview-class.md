---
title: "CScrollView Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CScrollView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CScrollView class"
  - "scrolling views"
  - "visualizzazioni, scorrimento"
ms.assetid: 4ba16dac-1acb-4be0-bb55-5fb695b6948d
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CScrollView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[CView](../../mfc/reference/cview-class.md) con le funzionalità di scorrimento.  
  
## Sintassi  
  
```  
class CScrollView : public CView  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CScrollView::CScrollView](../Topic/CScrollView::CScrollView.md)|Costruisce un oggetto `CScrollView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CScrollView::CheckScrollBars](../Topic/CScrollView::CheckScrollBars.md)|Indica se la visualizzazione a scorrimento ha senso orizzontale e barre di scorrimento verticale.|  
|[CScrollView::FillOutsideRect](../Topic/CScrollView::FillOutsideRect.md)|Riempie l'area di visualizzazione all'area scorrente.|  
|[CScrollView::GetDeviceScrollPosition](../Topic/CScrollView::GetDeviceScrollPosition.md)|Ottiene la posizione corrente di scorrimento in unità.|  
|[CScrollView::GetDeviceScrollSizes](../Topic/CScrollView::GetDeviceScrollSizes.md)|Ottiene la modalità di mapping corrente, la dimensione totale e la linea e le dimensioni della pagina nella visualizzazione scorrevole.  Le dimensioni sono espressi in unità.|  
|[CScrollView::GetScrollPosition](../Topic/CScrollView::GetScrollPosition.md)|Ottiene la posizione corrente di scorrimento in unità logiche.|  
|[CScrollView::GetTotalSize](../Topic/CScrollView::GetTotalSize.md)|Ottiene la dimensione totale di visualizzazione a scorrimento in unità logiche.|  
|[CScrollView::ResizeParentToFit](../Topic/CScrollView::ResizeParentToFit.md)|Determina la dimensione della visualizzazione a dettare la dimensione del frame.|  
|[CScrollView::ScrollToPosition](../Topic/CScrollView::ScrollToPosition.md)|Scorre la visualizzazione in un determinato punto, specificato in unità logiche.|  
|[CScrollView::SetScaleToFitSize](../Topic/CScrollView::SetScaleToFitSize.md)|Inserisce la visualizzazione a scorrimento in modalità di scala da inserire.|  
|[CScrollView::SetScrollSizes](../Topic/CScrollView::SetScrollSizes.md)|Imposta la modalità di mapping di visualizzazione a scorrimento, dimensione totale e lo scorrimento verticale e orizzontale ammonta.|  
  
## Note  
 È possibile gestire lo scorrimento standard manualmente in qualsiasi classe derivata da `CView` eseguendo l'override delle funzioni membro messaggio\- si esegue il mapping [OnVScroll](../Topic/CWnd::OnVScroll.md) e [OnHScroll](../Topic/CWnd::OnHScroll.md).  Ma `CScrollView` aggiunte le funzionalità seguenti alle funzionalità `CView` :  
  
-   Gestisce la finestra e dimensioni e modalità di mapping del riquadro di visualizzazione.  
  
-   Scorre automaticamente in risposta ai messaggi della barra di scorrimento.  
  
-   Scorre automaticamente in risposta ai messaggi della tastiera, un mouse non di scorrimento, o dalla rotellina di IntelliMouse.  
  
 Per scorrere automaticamente in risposta ai messaggi della tastiera, aggiungere un messaggio WM\_KEYDOWN e di test per VK\_DOWN, VK\_PREV e la chiamata [SetScrollPos](http://msdn.microsoft.com/library/windows/desktop/bb787597).  
  
 È possibile gestire lo scorrimento della rotellina del mouse manualmente eseguendo l'override delle funzioni membro messaggio\- si esegue il mapping [OnRegisteredMouseWheel](../Topic/CWnd::OnRegisteredMouseWheel.md) e [OnMouseWheel](../Topic/CWnd::OnMouseWheel.md).  Quando vengono per `CScrollView`, queste funzioni membro supportano il comportamento consigliato per [WM\_MOUSEWHEEL](http://msdn.microsoft.com/library/windows/desktop/ms645617), il messaggio di rotazione della rotellina.  
  
 Per sfruttare lo scorrimento automatico, derivare la classe di visualizzazione da `CScrollView` anziché da `CView`.  Quando la visualizzazione viene creata, per calcolare la dimensione della visualizzazione di scorrimento in base alla dimensione del documento, chiamare la funzione membro `SetScrollSizes` dagli override [CView::OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) o [CView::OnUpdate](../Topic/CView::OnUpdate.md).  È necessario scrivere codice personalizzato per eseguire una query sulla dimensione del documento.  Per un esempio, vedere [scribacchi l'esempio](../../top/visual-cpp-samples.md)\).  
  
 La chiamata alla funzione membro `SetScrollSizes` imposta la modalità di mapping di visualizzazione, le dimensioni totali di visualizzazione a scorrimento e gli importi scorrono orizzontalmente e verticalmente.  Tutte le dimensioni sono espressi in unità logiche.  La dimensione logica della visualizzazione in genere viene calcolata dai dati archiviati nel documento, ma in alcuni casi potrebbe essere necessario specificare una dimensione fissa.  Per esempi di entrambi gli approcci, vedere [CScrollView::SetScrollSizes](../Topic/CScrollView::SetScrollSizes.md).  
  
 Specificare gli importi scorrono orizzontalmente e verticalmente in unità logiche.  Per impostazione predefinita, se l'utente fa clic sull'asta cilindrica barra di scorrimento all'esterno della casella di scorrimento, `CScrollView` scorre "una pagina." Se l'utente fa clic sulla freccia di scorrimento sulla fine di una barra di scorrimento, `CScrollView` scorre "una riga". Per impostazione predefinita, una pagina viene 1\/10 della dimensione totale di visualizzazione, una riga è 1\/10 le dimensioni della pagina.  Eseguire l'override di tali valori predefiniti passando le dimensioni personalizzate nella funzione membro `SetScrollSizes`.  Ad esempio, è possibile impostare la dimensione orizzontale alla frazione della larghezza della dimensione totale e la dimensione verticale all'altezza di una riga nel carattere corrente.  
  
 Invece di scorrimento, `CScrollView` possibile ridimensionare automaticamente la visualizzazione alla dimensione corrente della finestra.  In questa modalità, la visualizzazione non ha barre di scorrimento e la visualizzazione logica viene allungata o ridotta esattamente all'area client della finestra.  Per utilizzare questa funzionalità di scala da inserire, chiamare [CScrollView::SetScaleToFitSize](../Topic/CScrollView::SetScaleToFitSize.md).  \(Chiamare `SetScaleToFitSize` o `SetScrollSizes`, ma non entrambi.\)  
  
 Prima che la funzione membro `OnDraw` della classe derivata di visualizzazione venga chiamata, `CScrollView` regola automaticamente l'origine del riquadro di visualizzazione per l'oggetto di contesto di dispositivo `CPaintDC` che passa a `OnDraw`.  
  
 Per modificare l'origine del riquadro di visualizzazione per la finestra scorrevole, `CScrollView` esegue l'override [CView::OnPrepareDC](../Topic/CView::OnPrepareDC.md).  Questa modifica è automatica del contesto di dispositivo `CPaintDC` che `CScrollView` passa a `OnDraw`, ma è necessario chiamare **CScrollView::OnPrepareDC** a per tutti gli altri contesti di periferica utilizzata, come `CClientDC`.  È possibile eseguire l'override **CScrollView::OnPrepareDC** per impostare la penna, il colore di sfondo e altri attributi di disegno, ma è possibile chiamare la classe base per eseguire la scala.  
  
 Le barre di scorrimento possono essere visualizzati in tre punti a una visualizzazione, come illustrato nei casi seguenti:  
  
-   Le barre di scorrimento stile finestra standard possono essere impostate per la visualizzazione utilizzando **WS\_HSCROLL** e **WS\_VSCROLL**[stili di Windows](../../mfc/reference/window-styles.md).  
  
-   I controlli barra di scorrimento possono essere aggiunti anche al frame contenente la visualizzazione in questo caso, il framework viene attualmente `WM_HSCROLL` e messaggi `WM_VSCROLL` la finestra cornice nella visualizzazione correntemente attiva.  
  
-   Il framework viene inoltra attualmente i messaggi di scorrimento di una barra di divisione `CSplitterWnd` \- il riquadro attivo della barra di divisione \(una visualizzazione.  Una volta inserito in [CSplitterWnd](../../mfc/reference/csplitterwnd-class.md) con le barre di scorrimento condivise, un oggetto `CScrollView` utilizzerà tali condivisi anziché creare il proprio.  
  
 Per ulteriori informazioni su l `CScrollView`, vedere [L'architettura documento\/visualizzazione](../../mfc/document-view-architecture.md) e [classi di visualizzazione derivate disponibili in MFC](../../mfc/derived-view-classes-available-in-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 `CScrollView`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione DIBLOOK](../../top/visual-cpp-samples.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CSplitterWnd Class](../../mfc/reference/csplitterwnd-class.md)