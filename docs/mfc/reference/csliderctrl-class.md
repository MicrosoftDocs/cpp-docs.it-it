---
title: "CSliderCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSliderCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSliderCtrl class"
  - "CSliderCtrl class, controlli comuni"
  - "scorrimento (controlli), CSliderCtrl class"
  - "Windows common controls [C++], CSliderCtrl"
ms.assetid: dd12b084-4eda-4550-a810-8f3cfb06b871
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CSliderCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce funzionalità del dispositivo di scorrimento comune di Windows.  
  
## Sintassi  
  
```  
class CSliderCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSliderCtrl::CSliderCtrl](../Topic/CSliderCtrl::CSliderCtrl.md)|Costruisce un oggetto `CSliderCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSliderCtrl::ClearSel](../Topic/CSliderCtrl::ClearSel.md)|Cancella la selezione corrente in un dispositivo di scorrimento.|  
|[CSliderCtrl::ClearTics](../Topic/CSliderCtrl::ClearTics.md)|Rimuove i segni di graduazione correnti da un dispositivo di scorrimento.|  
|[CSliderCtrl::Create](../Topic/CSliderCtrl::Create.md)|Crea un dispositivo di scorrimento e lo collega a un oggetto `CSliderCtrl`.|  
|[CSliderCtrl::CreateEx](../Topic/CSliderCtrl::CreateEx.md)|Crea un dispositivo di scorrimento con gli stili estesi Windows specificati e lo collega a un oggetto `CSliderCtrl`.|  
|[CSliderCtrl::GetBuddy](../Topic/CSliderCtrl::GetBuddy.md)|Recupera l'handle a una finestra degli utenti di dispositivi di scorrimento in un percorso specificato.|  
|[CSliderCtrl::GetChannelRect](../Topic/CSliderCtrl::GetChannelRect.md)|Recupera la dimensione del canale del dispositivo di scorrimento.|  
|[CSliderCtrl::GetLineSize](../Topic/CSliderCtrl::GetLineSize.md)|Recupera la dimensione della riga di un dispositivo di scorrimento.|  
|[CSliderCtrl::GetNumTics](../Topic/CSliderCtrl::GetNumTics.md)|Recupera il numero dei segni di graduazione in un dispositivo di scorrimento.|  
|[CSliderCtrl::GetPageSize](../Topic/CSliderCtrl::GetPageSize.md)|Recupera le dimensioni della pagina di un dispositivo di scorrimento.|  
|[CSliderCtrl::GetPos](../Topic/CSliderCtrl::GetPos.md)|Recupera la posizione corrente del dispositivo di scorrimento.|  
|[CSliderCtrl::GetRange](../Topic/CSliderCtrl::GetRange.md)|Recupera le posizioni minime e massime per un dispositivo di scorrimento.|  
|[CSliderCtrl::GetRangeMax](../Topic/CSliderCtrl::GetRangeMax.md)|Recupera il percorso massima per un dispositivo di scorrimento.|  
|[CSliderCtrl::GetRangeMin](../Topic/CSliderCtrl::GetRangeMin.md)|Recupera il percorso minima per un dispositivo di scorrimento.|  
|[CSliderCtrl::GetSelection](../Topic/CSliderCtrl::GetSelection.md)|Recupera l'intervallo della selezione corrente.|  
|[CSliderCtrl::GetThumbLength](../Topic/CSliderCtrl::GetThumbLength.md)|Recupera la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.|  
|[CSliderCtrl::GetThumbRect](../Topic/CSliderCtrl::GetThumbRect.md)|Recupera le dimensioni del pollice del dispositivo di scorrimento.|  
|[CSliderCtrl::GetTic](../Topic/CSliderCtrl::GetTic.md)|Recupera il percorso del segno di graduazione specificato.|  
|[CSliderCtrl::GetTicArray](../Topic/CSliderCtrl::GetTicArray.md)|Recupera la matrice di posizioni del segno di graduazione per un dispositivo di scorrimento.|  
|[CSliderCtrl::GetTicPos](../Topic/CSliderCtrl::GetTicPos.md)|Recupera il percorso del segno di graduazione specificato, nelle coordinate del client.|  
|[CSliderCtrl::GetToolTips](../Topic/CSliderCtrl::GetToolTips.md)|Recupera l'handle per il controllo tooltip assegnato al dispositivo di scorrimento, se disponibile.|  
|[CSliderCtrl::SetBuddy](../Topic/CSliderCtrl::SetBuddy.md)|Assegna una finestra nella finestra degli utenti per un dispositivo di scorrimento.|  
|[CSliderCtrl::SetLineSize](../Topic/CSliderCtrl::SetLineSize.md)|Imposta la dimensione della riga di un dispositivo di scorrimento.|  
|[CSliderCtrl::SetPageSize](../Topic/CSliderCtrl::SetPageSize.md)|Impostare le dimensioni della pagina di un dispositivo di scorrimento.|  
|[CSliderCtrl::SetPos](../Topic/CSliderCtrl::SetPos.md)|Imposta la posizione corrente del dispositivo di scorrimento.|  
|[CSliderCtrl::SetRange](../Topic/CSliderCtrl::SetRange.md)|Imposta le posizioni minime e massime per un dispositivo di scorrimento.|  
|[CSliderCtrl::SetRangeMax](../Topic/CSliderCtrl::SetRangeMax.md)|Impostare il percorso massima per un dispositivo di scorrimento.|  
|[CSliderCtrl::SetRangeMin](../Topic/CSliderCtrl::SetRangeMin.md)|Imposta la posizione minima per un dispositivo di scorrimento.|  
|[CSliderCtrl::SetSelection](../Topic/CSliderCtrl::SetSelection.md)|Imposta l'intervallo della selezione corrente.|  
|[CSliderCtrl::SetThumbLength](../Topic/CSliderCtrl::SetThumbLength.md)|Imposta la lunghezza del dispositivo di scorrimento nel controllo trackbar corrente.|  
|[CSliderCtrl::SetTic](../Topic/CSliderCtrl::SetTic.md)|Imposta la posizione del simbolo di graduazione specificato.|  
|[CSliderCtrl::SetTicFreq](../Topic/CSliderCtrl::SetTicFreq.md)|Imposta la frequenza dei segni di graduazione per l'incremento del dispositivo di scorrimento.|  
|[CSliderCtrl::SetTipSide](../Topic/CSliderCtrl::SetTipSide.md)|Inserisce un controllo tooltip utilizzato da un controllo trackbar.|  
|[CSliderCtrl::SetToolTips](../Topic/CSliderCtrl::SetToolTips.md)|Assegna un controllo tooltip a un dispositivo di scorrimento.|  
  
## Note  
 "Un dispositivo di scorrimento" \(anche noto come trackbar\) è una finestra che contiene un dispositivo di scorrimento e i segni di graduazione facoltativi.  Quando l'utente sposta il dispositivo di scorrimento, utilizzando il mouse o i tasti di direzione, il controllo invia i messaggi di notifica per indicare la modifica.  
  
 I dispositivi di scorrimento sono utili l'utente di selezionare un valore discreto o un insieme di valori consecutivi in un intervallo.  Ad esempio, è possibile utilizzare un dispositivo di scorrimento per consentire all'utente di impostare la frequenza di ripetizione della tastiera spostando il dispositivo di scorrimento a un segno di graduazione specificato.  
  
 Questo controllo e la classe `CSliderCtrl` \) è disponibile solo per i programmi in esecuzione in versioni 3,51 di Windows NT e Windows 95\/98 e successive.  
  
 Il dispositivo di scorrimento viene spostato in incrementi specificati durante la creazione.  Ad esempio, si specifica che il dispositivo di scorrimento deve avere un intervallo di cinque, il dispositivo di scorrimento può occupare solo sei percorsi: una posizione a sinistra del dispositivo di scorrimento e un percorso per ogni incremento nell'intervallo.  In genere, ognuna di queste posizioni è identificato da un simbolo di graduazione.  
  
 Creare un dispositivo di scorrimento utilizzando il costruttore e la funzione membro **Crea**`CSliderCtrl`.  Una volta creato un dispositivo di scorrimento, è possibile utilizzare le funzioni membro in `CSliderCtrl` per modificare molte proprietà.  Modifiche che è possibile includere impostare le posizioni minime e massime per il dispositivo di scorrimento, tracciando segni di graduazione, impostando un intervallo di selezione e riposizionando il dispositivo di scorrimento.  
  
 Per ulteriori informazioni su l `CSliderCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CSliderCtrl](../../mfc/using-csliderctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CSliderCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [MFC campione CMNCTRL2](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CProgressCtrl Class](../../mfc/reference/cprogressctrl-class.md)