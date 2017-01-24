---
title: "CProgressCtrl Class | Microsoft Docs"
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
  - "CProgressCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CProgressCtrl class"
  - "Internet Explorer 4.0 common controls"
  - "progress controls [C++], CProgressCtrl class"
ms.assetid: 222630f4-1598-4026-8198-51649b1192ab
caps.latest.revision: 25
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CProgressCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità del controllo indicatore di stato comuni di Windows.  
  
## Sintassi  
  
```  
class CProgressCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CProgressCtrl::CProgressCtrl](../Topic/CProgressCtrl::CProgressCtrl.md)|Costruisce un oggetto `CProgressCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CProgressCtrl::Create](../Topic/CProgressCtrl::Create.md)|Crea un controllo indicatore di stato e lo collega a un oggetto `CProgressCtrl`.|  
|[CProgressCtrl::CreateEx](../Topic/CProgressCtrl::CreateEx.md)|Crea un controllo di stato con gli stili estesi Windows specificati e lo collega a un oggetto `CProgressCtrl`.|  
|[CProgressCtrl::GetBarColor](../Topic/CProgressCtrl::GetBarColor.md)|Ottiene il colore della barra indicatore di stato per il controllo indicatore di stato corrente.|  
|[CProgressCtrl::GetBkColor](../Topic/CProgressCtrl::GetBkColor.md)|Ottiene il colore di sfondo indicatore di stato corrente.|  
|[CProgressCtrl::GetPos](../Topic/CProgressCtrl::GetPos.md)|Ottiene la posizione corrente dell'indicatore di stato.|  
|[CProgressCtrl::GetRange](../Topic/CProgressCtrl::GetRange.md)|Ottiene i limiti superiore e inferiore dell'intervallo del controllo indicatore di stato.|  
|[CProgressCtrl::GetState](../Topic/CProgressCtrl::GetState.md)|Ottiene lo stato del controllo indicatore di stato corrente.|  
|[CProgressCtrl::GetStep](../Topic/CProgressCtrl::GetStep.md)|Recupera incremento del passaggio per l'indicatore di stato del controllo indicatore di stato corrente.|  
|[CProgressCtrl::OffsetPos](../Topic/CProgressCtrl::OffsetPos.md)|Sposta la posizione corrente di un controllo indicatore di stato in base a un incremento specificata e ridisegna la barra per riflettere la nuova posizione.|  
|[CProgressCtrl::SetBarColor](../Topic/CProgressCtrl::SetBarColor.md)|Imposta il colore della barra indicatore di stato nel controllo indicatore di stato corrente.|  
|[CProgressCtrl::SetBkColor](../Topic/CProgressCtrl::SetBkColor.md)|Imposta il colore di sfondo dell'indicatore di stato.|  
|[CProgressCtrl::SetMarquee](../Topic/CProgressCtrl::SetMarquee.md)|Attivata la modalità di marquee o per il controllo indicatore di stato corrente.|  
|[CProgressCtrl::SetPos](../Topic/CProgressCtrl::SetPos.md)|Imposta la posizione corrente per un controllo indicatore di stato e ridisegna la barra per riflettere la nuova posizione.|  
|[CProgressCtrl::SetRange](../Topic/CProgressCtrl::SetRange.md)|Imposta gli intervalli minimo e massimo per un controllo indicatore di stato e ridisegna la barra per riflettere i nuovi intervalli.|  
|[CProgressCtrl::SetState](../Topic/CProgressCtrl::SetState.md)|Imposta lo stato del controllo indicatore di stato corrente.|  
|[CProgressCtrl::SetStep](../Topic/CProgressCtrl::SetStep.md)|Specifica dell'incremento del passaggio per un controllo indicatore di stato.|  
|[CProgressCtrl::StepIt](../Topic/CProgressCtrl::StepIt.md)|Sposta la posizione corrente per un controllo indicatore di stato dell'incremento del passaggio \(vedere [SetStep](../Topic/CProgressCtrl::SetStep.md)\) e ridisegna la barra per riflettere la nuova posizione.|  
  
## Note  
 Un controllo indicatore di stato è una finestra che un'applicazione può utilizzare per indicare lo stato di avanzamento di un'operazione lunga.  È costituito da un rettangolo che viene riempito gradualmente, da sinistra a destra, con il colore evidenziatore di sistema come avanzamento di un'operazione.  
  
 Un controllo indicatore di stato con un intervallo e una posizione corrente.  L'intervallo rappresenta la durata totale dell'operazione e la posizione corrente rappresenta i progressi che l'applicazione ha eseguito al completamento dell'operazione.  La routine della finestra utilizza intervallo e la posizione corrente per determinare la percentuale indicatore di stato per riempire di colore di evidenziazione.  Poiché i valori di posizione corrente e di intervallo vengono espressi come integer con segno, l'intervallo di valori possibili di posizione corrente è \(da 2.147.483.648 a 2.147.483.647.  
  
 Per ulteriori informazioni su l `CProgressCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CProgressCtrl](../../mfc/using-cprogressctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CProgressCtrl`  
  
## Requisiti  
 **intestazione:** afxcmn.h  
  
## Vedere anche  
 [Esempio CMNCTRL2 MFC](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)