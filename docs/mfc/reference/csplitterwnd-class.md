---
title: "CSplitterWnd Class | Microsoft Docs"
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
  - "CSplitterWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSplitterWnd class"
  - "dynamic splitter windows"
  - "visualizzazioni multiple"
  - "finestre con separatore"
  - "static splitter windows"
  - "visualizzazioni, multipli per frame"
ms.assetid: fd0de258-6dbe-4552-9e47-a39de0471d51
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSplitterWnd Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di una finestra con separatore, una finestra che contiene più riquadri.  
  
## Sintassi  
  
```  
class CSplitterWnd : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWnd::CSplitterWnd](../Topic/CSplitterWnd::CSplitterWnd.md)|Chiamare per costruire un oggetto `CSplitterWnd`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWnd::ActivateNext](../Topic/CSplitterWnd::ActivateNext.md)|Esegue il riquadro successivo o il comando precedente del riquadro.|  
|[CSplitterWnd::CanActivateNext](../Topic/CSplitterWnd::CanActivateNext.md)|Verifica se il riquadro successivo o il comando precedente del riquadro è attualmente possibile.|  
|[CSplitterWnd::Create](../Topic/CSplitterWnd::Create.md)|Chiamare per creare una finestra del separatore dinamico e per allegarlaoggetto `CSplitterWnd`.|  
|[CSplitterWnd::CreateScrollBarCtrl](../Topic/CSplitterWnd::CreateScrollBarCtrl.md)|Crea un controllo barra di scorrimento condiviso.|  
|[CSplitterWnd::CreateStatic](../Topic/CSplitterWnd::CreateStatic.md)|Chiamata per creare una finestra con separatore statico e per allegarlaoggetto `CSplitterWnd`.|  
|[CSplitterWnd::CreateView](../Topic/CSplitterWnd::CreateView.md)|Chiamata per creare un riquadro in una finestra con separatore.|  
|[CSplitterWnd::DeleteColumn](../Topic/CSplitterWnd::DeleteColumn.md)|Elimina una colonna dalla finestra con separatore.|  
|[CSplitterWnd::DeleteRow](../Topic/CSplitterWnd::DeleteRow.md)|Elimina una riga dalla finestra con separatore.|  
|[CSplitterWnd::DeleteView](../Topic/CSplitterWnd::DeleteView.md)|Eliminare una visualizzazione dalla finestra con separatore.|  
|[CSplitterWnd::DoKeyboardSplit](../Topic/CSplitterWnd::DoKeyboardSplit.md)|Esegue il comando spaccati della tastiera, generalmente "divisione della finestra."|  
|[CSplitterWnd::DoScroll](../Topic/CSplitterWnd::DoScroll.md)|Performs è sincronizzato lo scorrimento di windows divise.|  
|[CSplitterWnd::DoScrollBy](../Topic/CSplitterWnd::DoScrollBy.md)|Scorre separano le finestre da un determinato numero di pixel.|  
|[CSplitterWnd::GetActivePane](../Topic/CSplitterWnd::GetActivePane.md)|Determina il riquadro attivo dallo stato attivo o dalla visualizzazione attiva in un frame.|  
|[CSplitterWnd::GetColumnCount](../Topic/CSplitterWnd::GetColumnCount.md)|Restituisce il numero di colonne corrente del riquadro.|  
|[CSplitterWnd::GetColumnInfo](../Topic/CSplitterWnd::GetColumnInfo.md)|Restituisce le informazioni di colonna specificata.|  
|[CSplitterWnd::GetPane](../Topic/CSplitterWnd::GetPane.md)|Restituisce il riquadro a righe e colonne specificate.|  
|[CSplitterWnd::GetRowCount](../Topic/CSplitterWnd::GetRowCount.md)|Restituisce il numero di righe nel riquadro.|  
|[CSplitterWnd::GetRowInfo](../Topic/CSplitterWnd::GetRowInfo.md)|Restituisce informazioni sulla riga specificata.|  
|[CSplitterWnd::GetScrollStyle](../Topic/CSplitterWnd::GetScrollStyle.md)|Restituisce lo stile condiviso barra di scorrimento.|  
|[CSplitterWnd::IdFromRowCol](../Topic/CSplitterWnd::IdFromRowCol.md)|Restituisce la finestra figlio ID del riquadro a righe e colonne specificate.|  
|[CSplitterWnd::IsChildPane](../Topic/CSplitterWnd::IsChildPane.md)|Chiamare per determinare se la finestra è attualmente un riquadro figlio di questa finestra con separatore.|  
|[CSplitterWnd::IsTracking](../Topic/CSplitterWnd::IsTracking.md)|Determina se la barra di divisione attualmente spostare.|  
|[CSplitterWnd::RecalcLayout](../Topic/CSplitterWnd::RecalcLayout.md)|Chiamare per visualizzare la finestra con separatore dopo avere modificato le dimensioni della colonna o riga.|  
|[CSplitterWnd::SetActivePane](../Topic/CSplitterWnd::SetActivePane.md)|Imposta un riquadro sia quello attivo in un frame.|  
|[CSplitterWnd::SetColumnInfo](../Topic/CSplitterWnd::SetColumnInfo.md)|Chiamare per impostare le informazioni sulle colonne specificate.|  
|[CSplitterWnd::SetRowInfo](../Topic/CSplitterWnd::SetRowInfo.md)|Chiamata per impostare le informazioni sulla riga.|  
|[CSplitterWnd::SetScrollStyle](../Topic/CSplitterWnd::SetScrollStyle.md)|Specifica il nuovo stile della barra di scorrimento per il supporto della barra di scorrimento della finestra con separatore.|  
|[CSplitterWnd::SplitColumn](../Topic/CSplitterWnd::SplitColumn.md)|Indica dove una finestra cornice si suddivide verticalmente.|  
|[CSplitterWnd::SplitRow](../Topic/CSplitterWnd::SplitRow.md)|Indica dove una finestra cornice si suddivide in orizzontale.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSplitterWnd::OnDraw](../Topic/CSplitterWnd::OnDraw.md)|Chiamato dal framework per disegnare la finestra con separatore.|  
|[CSplitterWnd::OnDrawSplitter](../Topic/CSplitterWnd::OnDrawSplitter.md)|Esegue il rendering di un'immagine di una finestra divisa.|  
|[CSplitterWnd::OnInvertTracker](../Topic/CSplitterWnd::OnInvertTracker.md)|Esegue il rendering dell'immagine di una finestra divisa per essere la stessa dimensione e la forma della finestra cornice.|  
  
## Note  
 Un riquadro è in genere un oggetto specifico dell'applicazione derivata da [CView](../../mfc/reference/cview-class.md), ma può essere qualsiasi oggetto [CWnd](../../mfc/reference/cwnd-class.md) con l'id appropriata della finestra figlio  
  
 Un oggetto `CSplitterWnd` in genere è incorporato in un oggetto padre [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) o [CFrameWnd](../../mfc/reference/cframewnd-class.md).  Creare un oggetto `CSplitterWnd` effettuando le operazioni seguenti:  
  
1.  Importare una variabile membro `CSplitterWnd` nel frame padre.  
  
2.  Eseguire l'override della funzione membro padre [CFrameWnd::OnCreateClient](../Topic/CFrameWnd::OnCreateClient.md) frame.  
  
3.  Da `OnCreateClient`ignorata, chiamare la funzione membro [CreateStatic](../Topic/CSplitterWnd::CreateStatic.md) o [Crea](../Topic/CSplitterWnd::Create.md)`CSplitterWnd`.  
  
 Chiamare la funzione membro **Crea** per creare una finestra del separatore dinamico.  Una finestra del separatore dinamico in genere utilizzata per creare e scorrere una serie di diversi riquadri, o visualizzazioni, lo stesso documento.  Il framework crea automaticamente un riquadro iniziale per il separatore, il framework crea, viene ridimensionato ed elimina i riquadri aggiuntivi mentre l'utente opera i controlli finestra con separatore.  
  
 Quando si chiama **Crea**, specificare l'altezza della riga e la larghezza di una colonna minima che determina quando i riquadri sono troppo piccoli completamente essere visualizzato.  Dopo avere chiamato **Crea**, è possibile modificare questi valori minimi chiamando le funzioni membro [SetRowInfo](../Topic/CSplitterWnd::SetRowInfo.md) e [SetColumnInfo](../Topic/CSplitterWnd::SetColumnInfo.md).  
  
 Anche utilizzare le funzioni membro `SetRowInfo` e `SetColumnInfo` per impostare una larghezza "servizi" per una colonna e l'altezza "servizi" per una riga.  Quando il framework visualizzata una finestra con separatore, innanzitutto visualizzare il frame padre, la finestra con separatore.  Il framework presenta quindi i riquadri di colonne e righe in base alle dimensioni ottimali, eseguito dall'alto a sinistraangolo inferiore destro dell'area client della finestra con separatore.  
  
 Tutti i riquadri in una finestra del separatore dinamico devono essere la stessa classe.  Le applicazioni comuni che supportano le finestre separator dinamico includono Microsoft Word e Microsoft Excel.  
  
 Utilizzare la funzione membro `CreateStatic` per creare una finestra con separatore statico.  L'utente può modificare solo la dimensione dei riquadri in una finestra con separatore statico, non il numero o ordine.  
  
 È necessario specificamente creare riquadri statici del separatore quando si crea il separatore statico.  Accertarsi di creare tutti i riquadri prima del termine padre della funzione membro `OnCreateClient` frame, o il framework non viene visualizzata la finestra correttamente.  
  
 La funzione membro `CreateStatic` automaticamente inizializza un separatore statico con altezza della riga e la larghezza di una colonna minima di 0.  Dopo avere chiamato **Crea**, regolare i minimi chiamando le funzioni membro [SetRowInfo](../Topic/CSplitterWnd::SetRowInfo.md) e [SetColumnInfo](../Topic/CSplitterWnd::SetColumnInfo.md).  Anche utilizzare `SetColumnInfo` e `SetRowInfo` dopo avere chiamato `CreateStatic` per indicare le dimensioni ottimali si desidera riquadro.  
  
 I singoli riquadri di un separatore statico appartengono spesso le classi diverse.  Per esempi di finestre con separatore statico, vedere l'editor di immagini e il File Manager di Windows.  
  
 Una finestra con separatore supporta le barre di scorrimento speciali \(oltre alle barre di scorrimento che i riquadri possono avere\).  Le barre di scorrimento sono elementi figlio dell'oggetto `CSplitterWnd` e condivise con i riquadri.  
  
 Creare le barre di scorrimento speciali quando si crea una finestra con separatore.  Ad esempio, `CSplitterWnd` con una riga, due colonne e lo stile **WS\_VSCROLL** visualizzare una barra di scorrimento verticale condivisa da due riquadri.  Quando l'utente sposta la barra di scorrimento, i messaggi `WM_VSCROLL` vengono inviati a entrambi i riquadri.  Quando i riquadri di impostare la posizione della barra di scorrimento, la barra di scorrimento condivisa è impostata su.  
  
 Per ulteriori informazioni sulle finestre con separatore, vedere:  
  
-   [Nota tecnica 29](../../mfc/tn029-splitter-windows.md)  
  
-   Articolo della Knowledge Base Q262024: HOWTO: utilizzo CPropertySheet come figlio di CSplitterWnd  
  
 Per ulteriori informazioni su come creare finestre di separazione dinamico, vedere:  
  
-   Esempio [Scribble](../../top/visual-cpp-samples.md)MFC  
  
-   Esempio [VIEWEX](../../top/visual-cpp-samples.md)MFC.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CSplitterWnd`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [Esempio VIEWEX MFC](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)