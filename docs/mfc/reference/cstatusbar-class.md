---
title: "CStatusBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStatusBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStatusBar class"
  - "indicators"
  - "indicators, status bar"
  - "barre di stato"
  - "status indicators"
ms.assetid: a3bde3db-e71c-4881-a3ca-1d5481c345ba
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CStatusBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una barra di controllo con una riga di riquadri di output di testo, o "di indicatori."  
  
## Sintassi  
  
```  
class CStatusBar : public CControlBar  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBar::CStatusBar](../Topic/CStatusBar::CStatusBar.md)|Costruisce un oggetto `CStatusBar`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBar::CommandToIndex](../Topic/CStatusBar::CommandToIndex.md)|Ottiene l'indice per un ID indicatore|  
|[CStatusBar::Create](../Topic/CStatusBar::Create.md)|Crea la barra di stato, la aggiunge all'oggetto `CStatusBar` e l'altezza iniziale della barra di carattere e.|  
|[CStatusBar::CreateEx](../Topic/CStatusBar::CreateEx.md)|Crea un oggetto `CStatusBar` con gli stili aggiuntivi per l'oggetto incorporato `CStatusBarCtrl`.|  
|[CStatusBar::DrawItem](../Topic/CStatusBar::DrawItem.md)|Chiamato quando un aspetto visivo del disegno personalizzato di controllo barra di stato.|  
|[CStatusBar::GetItemID](../Topic/CStatusBar::GetItemID.md)|Ottiene l'indicatore ID per un indice specificato.|  
|[CStatusBar::GetItemRect](../Topic/CStatusBar::GetItemRect.md)|Ottiene il rettangolo visualizzato per un indice specificato.|  
|[CStatusBar::GetPaneInfo](../Topic/CStatusBar::GetPaneInfo.md)|Ottiene l'indicatore ID, lo stile e la larghezza di un indice specificato.|  
|[CStatusBar::GetPaneStyle](../Topic/CStatusBar::GetPaneStyle.md)|Ottiene lo stile dell'indicatore per un indice specificato.|  
|[CStatusBar::GetPaneText](../Topic/CStatusBar::GetPaneText.md)|Ottiene il testo dell'indicatore per un indice specificato.|  
|[CStatusBar::GetStatusBarCtrl](../Topic/CStatusBar::GetStatusBarCtrl.md)|Consente l'accesso diretto a controlli comuni sottostante.|  
|[CStatusBar::SetIndicators](../Topic/CStatusBar::SetIndicators.md)|Imposta l'indicatore ID.|  
|[CStatusBar::SetPaneInfo](../Topic/CStatusBar::SetPaneInfo.md)|Imposta l'indicatore ID, lo stile e la larghezza di un indice specificato.|  
|[CStatusBar::SetPaneStyle](../Topic/CStatusBar::SetPaneStyle.md)|Impostare lo stile dell'indicatore per un indice specificato.|  
|[CStatusBar::SetPaneText](../Topic/CStatusBar::SetPaneText.md)|Imposta il testo dell'indicatore per un indice specificato.|  
  
## Note  
 I riquadri di output vengono utilizzati comunemente come righe del messaggio e come indicatori di stato.  Gli esempi includono linee di guida\- messaggio di menu che vengono brevemente descritte il comando di menu selezionato e gli indicatori indicanti lo stato di BLOC SCORR, BLOC NUM e altre chiavi.  
  
 [CStatusBar::GetStatusBarCtrl](../Topic/CStatusBar::GetStatusBarCtrl.md), una funzione membro nuova a MFC 4,0, consente a approfittiate il supporto dei controlli comuni di Windows per la personalizzazione della barra di stato e funzionalità aggiuntive.  Le funzioni membro di`CStatusBar` offrono ulteriori funzionalità dei controlli comuni di Windows, tuttavia, quando si chiama `GetStatusBarCtrl`, è possibile fornire alle barre di stato ancora più delle caratteristiche di una barra di stato Windows 95\/98.  Quando si chiama `GetStatusBarCtrl`, restituirà un riferimento a un oggetto `CStatusBarCtrl`.  Vedere [CStatusBarCtrl](../../mfc/reference/cstatusbarctrl-class.md) per ulteriori informazioni sulla progettazione delle barre degli strumenti mediante i controlli comuni di Windows.  Per informazioni generali sui controlli, vedere [Controlli comuni](http://msdn.microsoft.com/library/windows/desktop/bb775493) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Il framework archivia le informazioni indicatore in una matrice con l'indicatore più a sinistra nella posizione 0.  Quando si crea una barra di stato, utilizzare una matrice di stringhe ID che il framework associa agli indicatori corrispondenti.  È possibile utilizzare un ID stringa o un indice per accedere a un indicatore.  
  
 Per impostazione predefinita, il primo indicatore è "elastico": accetta la lunghezza della barra di stato non utilizzata da altri riquadri indicatore, in modo che gli altri riquadri sono allineati a destra.  
  
 Per creare una barra di stato, seguire questi passaggi:  
  
1.  Creare l'oggetto `CStatusBar`.  
  
2.  Chiamare la funzione [CreateEx](../Topic/CStatusBar::CreateEx.md)o [Crea](../Topic/CStatusBar::Create.md) \) per creare la finestra barra di stato e per associarlo all'oggetto `CStatusBar`.  
  
3.  Chiamare [SetIndicators](../Topic/CStatusBar::SetIndicators.md) per associare un ID stringa con ogni indicatore.  
  
 Esistono tre modi per aggiornare il testo in un riquadro della barra di stato:  
  
1.  Chiamata [CWnd::SetWindowText](../Topic/CWnd::SetWindowText.md) per aggiornare solo il testo nel riquadro 0.  
  
2.  Chiamata [CCmdUI::SetText](../Topic/CCmdUI::SetText.md) nel gestore `ON_UPDATE_COMMAND_UI` barra di stato.  
  
3.  Chiamata [SetPaneText](../Topic/CStatusBar::SetPaneText.md) per aggiornare il testo per qualsiasi riquadro.  
  
 Chiamata [SetPaneStyle](../Topic/CStatusBar::SetPaneStyle.md) per aggiornare lo stile di un riquadro della barra di stato.  
  
 Per ulteriori informazioni su l `CStatusBar`, vedere l'articolo [Implementazione della barra di stato in MFC](../../mfc/status-bar-implementation-in-mfc.md) e [nota tecnica 31: barre di controllo](../../mfc/tn031-control-bars.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CStatusBar`  
  
## Requisiti  
 **Header:** afxext.h  
  
## Vedere anche  
 [MFC campione in CTRLBARS](../../top/visual-cpp-samples.md)   
 [Esempio DLGCBR32 MFC](../../top/visual-cpp-samples.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CStatusBarCtrl Class](../../mfc/reference/cstatusbarctrl-class.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [CWnd::SetWindowText](../Topic/CWnd::SetWindowText.md)   
 [CStatusBar::SetIndicators](../Topic/CStatusBar::SetIndicators.md)