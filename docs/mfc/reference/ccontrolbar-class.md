---
title: "CControlBar Class | Microsoft Docs"
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
  - "CControlBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CControlBar class"
  - "control bars [C++], classi base"
  - "dialog bars, classi base"
  - "OLE resize bars"
  - "OLE resize bars, classi base"
  - "barre di stato, classi base"
  - "barre degli strumenti [C++], classi base"
ms.assetid: 4d668c55-9b42-4838-97ac-cf2b3000b82c
caps.latest.revision: 22
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CControlBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe di base per la barra di controllo di [CStatusBar](../../mfc/reference/cstatusbar-class.md), [CToolBar](../../mfc/reference/ctoolbar-class.md), [CDialogBar](../../mfc/reference/cdialogbar-class.md), [CReBar](../../mfc/reference/crebar-class.md) e [COleResizeBar](../../mfc/reference/coleresizebar-class.md).  
  
## Sintassi  
  
```  
class CControlBar : public CWnd  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CControlBar::CControlBar](../Topic/CControlBar::CControlBar.md)|Costruisce un oggetto `CControlBar`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CControlBar::CalcDynamicLayout](../Topic/CControlBar::CalcDynamicLayout.md)|Restituisce la dimensione di una barra di controllo dinamica come oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md).|  
|[CControlBar::CalcFixedLayout](../Topic/CControlBar::CalcFixedLayout.md)|Restituisce le dimensioni della barra di controllo come oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md).|  
|[CControlBar::CalcInsideRect](../Topic/CControlBar::CalcInsideRect.md)|Restituisce le dimensioni correnti dell'area della barra di controllo; inclusi i bordi.|  
|[CControlBar::DoPaint](../Topic/CControlBar::DoPaint.md)|Esegue il rendering dei bordi e della barra gripper della barra di controllo.|  
|[CControlBar::DrawBorders](../Topic/CControlBar::DrawBorders.md)|Esegue il rendering dei bordi della barra di controllo.|  
|[CControlBar::DrawGripper](../Topic/CControlBar::DrawGripper.md)|Esegue il rendering della barra gripper della barra di controllo.|  
|[CControlBar::EnableDocking](../Topic/CControlBar::EnableDocking.md)|Consente ad una barra di controllo di essere ancorata o mobile.|  
|[CControlBar::GetBarStyle](../Topic/CControlBar::GetBarStyle.md)|Recupera le impostazioni di stile della barra di controllo.|  
|[CControlBar::GetBorders](../Topic/CControlBar::GetBorders.md)|Recupera i valori del bordo della barra di controllo.|  
|[CControlBar::GetCount](../Topic/CControlBar::GetCount.md)|Restituisce il numero di elementi non `HWND` nella barra di controllo.|  
|[CControlBar::GetDockingFrame](../Topic/CControlBar::GetDockingFrame.md)|Restituisce un puntatore al frame al quale è ancorata una barra di controllo.|  
|[CControlBar::IsFloating](../Topic/CControlBar::IsFloating.md)|Restituisce un valore diverso da zero se la barra di controllo in questione è una barra di controllo mobile.|  
|[CControlBar::OnUpdateCmdUI](../Topic/CControlBar::OnUpdateCmdUI.md)|Chiama i gestori dell'interfaccia utente del comando.|  
|[CControlBar::SetBarStyle](../Topic/CControlBar::SetBarStyle.md)|Modifica le impostazioni di stile della barra di controllo.|  
|[CControlBar::SetBorders](../Topic/CControlBar::SetBorders.md)|Imposta i valori del bordo della barra di controllo.|  
|[CControlBar::SetInPlaceOwner](../Topic/CControlBar::SetInPlaceOwner.md)|Modifica il proprietario di una barra di controllo.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CControlBar::m\_bAutoDelete](../Topic/CControlBar::m_bAutoDelete.md)|Se diverso da zero, l'oggetto `CControlBar` viene eliminato quando viene eliminata la barra di controllo di Windows.|  
|[CControlBar::m\_pInPlaceOwner](../Topic/CControlBar::m_pInPlaceOwner.md)|Il proprietario della barra di controllo.|  
  
## Note  
 Una barra di controllo rappresenta una finestra che in genere è allineata a sinistra o a destra del frame.  Potrebbe contenere elementi figli che sono qualsiasi controlli basati su `HWND`, i quali sono finestre che generano e rispondono ai messaggi di Windows, o sono oggetti non basati su `HWND`, i quali non sono finestre e non vengono gestire dal codice dell'applicazione o del framework.  Le caselle di riepilogo e i controlli di modifica sono esempi di controlli basati su `HWND`; i riquadri della barra di stato e i pulsanti bitmap sono esempi di controlli non basati su `HWND`.  
  
 Le finestre di barre di controllo sono generalmente finestre figlie di un frame padre e sono generalmente elementi di pari livello al punto di vista del client o del client MDI del frame.  Un oggetto `CControlBar` utilizza le informazioni sul rettangolo client della finestra padre per posizionarsi.  Informa la finestra padre quanto spazio non allocato rimane nell'area del client della finestra padre.  
  
 Per ulteriori informazioni sulle `CControlBar`, consultare:  
  
-   [Barre di controllo](../../mfc/control-bars.md)  
  
-   [Nota tecnica 31: Barre di controllo](../../mfc/tn031-control-bars.md).  
  
-   Articolo della Knowledge Base Q242577: PRB: Aggiornare i gestori dell'interfaccia utente del comando non funziona per il menu collegato a una finestra di dialogo  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CControlBar`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [Esempio CTRLBARS MFC](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBar Class](../../mfc/reference/ctoolbar-class.md)   
 [CDialogBar Class](../../mfc/reference/cdialogbar-class.md)   
 [CStatusBar Class](../../mfc/reference/cstatusbar-class.md)   
 [CReBar Class](../../mfc/reference/crebar-class.md)