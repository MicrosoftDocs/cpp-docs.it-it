---
title: "CStatusBarCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStatusBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStatusBarCtrl class"
  - "status bar controls"
  - "Windows common controls [C++], CStatusBarCtrl"
ms.assetid: 8504ad38-7b91-4746-aede-ac98886eb47b
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# CStatusBarCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo comune della barra di stato Windows.  
  
## Sintassi  
  
```  
class CStatusBarCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBarCtrl::CStatusBarCtrl](../Topic/CStatusBarCtrl::CStatusBarCtrl.md)|Costruisce un oggetto `CStatusBarCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStatusBarCtrl::Create](../Topic/CStatusBarCtrl::Create.md)|Crea un controllo barra di stato e lo collega a un oggetto `CStatusBarCtrl`.|  
|[CStatusBarCtrl::CreateEx](../Topic/CStatusBarCtrl::CreateEx.md)|Crea un controllo barra di stato con gli stili estesi Windows specificati e lo collega a un oggetto `CStatusBarCtrl`.|  
|[CStatusBarCtrl::DrawItem](../Topic/CStatusBarCtrl::DrawItem.md)|Chiamato quando un aspetto visivo del disegno personalizzato di controllo barra di stato.|  
|[CStatusBarCtrl::GetBorders](../Topic/CStatusBarCtrl::GetBorders.md)|Recupera la larghezza corrente dei bordi orizzontali e verticali di un controllo barra di stato.|  
|[CStatusBarCtrl::GetIcon](../Topic/CStatusBarCtrl::GetIcon.md)|Recupera l'icona di una parte \(anche nota come un riquadro\) nel controllo corrente della barra di stato.|  
|[CStatusBarCtrl::GetParts](../Topic/CStatusBarCtrl::GetParts.md)|Recupera un conteggio di elementi in un controllo barra di stato.|  
|[CStatusBarCtrl::GetRect](../Topic/CStatusBarCtrl::GetRect.md)|Recupera il rettangolo di delimitazione di una parte di un controllo barra di stato.|  
|[CStatusBarCtrl::GetText](../Topic/CStatusBarCtrl::GetText.md)|Recupera il testo da parte specifica di un controllo barra di stato.|  
|[CStatusBarCtrl::GetTextLength](../Topic/CStatusBarCtrl::GetTextLength.md)|Recuperare la lunghezza, i caratteri, di testo da parte specifica di un controllo barra di stato.|  
|[CStatusBarCtrl::GetTipText](../Topic/CStatusBarCtrl::GetTipText.md)|Recupera il testo di descrizione per un riquadro in una barra di stato.|  
|[CStatusBarCtrl::IsSimple](../Topic/CStatusBarCtrl::IsSimple.md)|Controlla un controllo nella finestra di stato per determinare se è in modalità semplice.|  
|[CStatusBarCtrl::SetBkColor](../Topic/CStatusBarCtrl::SetBkColor.md)|Imposta il colore di sfondo in una barra di stato.|  
|[CStatusBarCtrl::SetIcon](../Topic/CStatusBarCtrl::SetIcon.md)|Imposta l'icona da un riquadro in una barra di stato.|  
|[CStatusBarCtrl::SetMinHeight](../Topic/CStatusBarCtrl::SetMinHeight.md)|L'altezza minima dell'area di disegno di un controllo barra di stato.|  
|[CStatusBarCtrl::SetParts](../Topic/CStatusBarCtrl::SetParts.md)|Imposta il numero di elementi in un controllo barra di stato e la coordinata del bordo destro di ogni parte.|  
|[CStatusBarCtrl::SetSimple](../Topic/CStatusBarCtrl::SetSimple.md)|Specifica se un controllo barra di stato verrà visualizzato il testo semplice o visualizzare tutte le parti di controllo impostate da una chiamata precedente a `SetParts`.|  
|[CStatusBarCtrl::SetText](../Topic/CStatusBarCtrl::SetText.md)|Imposta il testo nella parte specifica di un controllo barra di stato.|  
|[CStatusBarCtrl::SetTipText](../Topic/CStatusBarCtrl::SetTipText.md)|Imposta il testo di descrizione per un riquadro in una barra di stato.|  
  
## Note  
 "Un controllo barra di stato" è una finestra orizzontale, in genere visualizzata nella parte inferiore di una finestra padre, nella quale un'applicazione può visualizzare i vari tipi di informazioni sullo stato.  Il controllo barra di stato può essere suddiviso in parti per visualizzare più tipi di informazioni.  
  
 Questo controllo e la classe `CStatusBarCtrl` \) è disponibile solo per i programmi in esecuzione in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 Per ulteriori informazioni su l `CStatusBarCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CStatusBarCtrl](../../mfc/using-cstatusbarctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CStatusBarCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBarCtrl Class](../../mfc/reference/ctoolbarctrl-class.md)