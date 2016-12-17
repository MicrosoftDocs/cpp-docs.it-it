---
title: "CToolTipCtrl Class | Microsoft Docs"
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
  - "CToolTipCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolTipCtrl class"
  - "data tips [C++]"
  - "descrizioni comandi [C++], tool tip controls"
ms.assetid: 8973f70c-b73a-46c7-908d-758f364b9a97
caps.latest.revision: 20
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CToolTipCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula la funzionalità "di un controllo tooltip," una piccola finestra popup che visualizza una sola riga di testo che descrive lo scopo di uno strumento in un'applicazione.  
  
## Sintassi  
  
```  
class CToolTipCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolTipCtrl::CToolTipCtrl](../Topic/CToolTipCtrl::CToolTipCtrl.md)|Costruisce un oggetto `CToolTipCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CToolTipCtrl::Activate](../Topic/CToolTipCtrl::Activate.md)|Attiva e disattiva il controllo di descrizione comandi.|  
|[CToolTipCtrl::AddTool](../Topic/CToolTipCtrl::AddTool.md)|Registra lo strumento con il controllo di descrizione comandi.|  
|[CToolTipCtrl::AdjustRect](../Topic/CToolTipCtrl::AdjustRect.md)|Conversione tra il rettangolo del testo di un controllo tooltip e il relativo rettangolo della finestra.|  
|[CToolTipCtrl::Create](../Topic/CToolTipCtrl::Create.md)|Crea un controllo tooltip e lo collega a un oggetto `CToolTipCtrl`.|  
|[CToolTipCtrl::CreateEx](../Topic/CToolTipCtrl::CreateEx.md)|Crea un controllo tooltip con gli stili estesi Windows specificati e lo collega a un oggetto `CToolTipCtrl`.|  
|[CToolTipCtrl::DelTool](../Topic/CToolTipCtrl::DelTool.md)|Rimuove uno strumento dal controllo di descrizione comandi.|  
|[CToolTipCtrl::GetBubbleSize](../Topic/CToolTipCtrl::GetBubbleSize.md)|Recupera la dimensione della descrizione comandi.|  
|[CToolTipCtrl::GetCurrentTool](../Topic/CToolTipCtrl::GetCurrentTool.md)|Recupera le informazioni, ad esempio le dimensioni, la posizione e il testo, la descrizione comando che le visualizzazioni del controllo tooltip.|  
|[CToolTipCtrl::GetDelayTime](../Topic/CToolTipCtrl::GetDelayTime.md)|Recupera l'elemento iniziale, il popup e le durate di reshow attualmente sono impostate per un controllo tooltip.|  
|[CToolTipCtrl::GetMargin](../Topic/CToolTipCtrl::GetMargin.md)|Recupera il bordo superiore, sinistro, il basso e i margini di destra impostati per una descrizione comandi.|  
|[CToolTipCtrl::GetMaxTipWidth](../Topic/CToolTipCtrl::GetMaxTipWidth.md)|Recupera la larghezza massima per una descrizione comandi.|  
|[CToolTipCtrl::GetText](../Topic/CToolTipCtrl::GetText.md)|Recupera il testo di un controllo tooltip gestisce per uno strumento.|  
|[CToolTipCtrl::GetTipBkColor](../Topic/CToolTipCtrl::GetTipBkColor.md)|Recupera il colore di sfondo in una descrizione comando.|  
|[CToolTipCtrl::GetTipTextColor](../Topic/CToolTipCtrl::GetTipTextColor.md)|Recupera il colore del testo in una descrizione comando.|  
|[CToolTipCtrl::GetTitle](../Topic/CToolTipCtrl::GetTitle.md)|Recupera il titolo del controllo corrente della descrizione comandi.|  
|[CToolTipCtrl::GetToolCount](../Topic/CToolTipCtrl::GetToolCount.md)|Recupera un conteggio degli strumenti gestiti da un controllo tooltip.|  
|[CToolTipCtrl::GetToolInfo](../Topic/CToolTipCtrl::GetToolInfo.md)|Recupera le informazioni in un controllo tooltip vengono aggiornate sullo strumento.|  
|[CToolTipCtrl::HitTest](../Topic/CToolTipCtrl::HitTest.md)|Verifica un punto per determinare se è all'interno del rettangolo di delimitazione dello strumento specificato.  In caso affermativo, recupera le informazioni sullo strumento.|  
|[CToolTipCtrl::Pop](../Topic/CToolTipCtrl::Pop.md)|Rimuove una descrizione comandi nella visualizzazione.|  
|[CToolTipCtrl::Popup](../Topic/CToolTipCtrl::Popup.md)|Consente al controllo corrente di descrizione comandi a visualizzare le coordinate dell'ultimo messaggio del mouse.|  
|[CToolTipCtrl::RelayEvent](../Topic/CToolTipCtrl::RelayEvent.md)|Passa un messaggio del mouse su un controllo di descrizione comandi per l'elaborazione.|  
|[CToolTipCtrl::SetDelayTime](../Topic/CToolTipCtrl::SetDelayTime.md)|Imposta l'elemento iniziale, il popup e le durate di reshow per un controllo tooltip.|  
|[CToolTipCtrl::SetMargin](../Topic/CToolTipCtrl::SetMargin.md)|Imposta il bordo superiore, sinistro, il basso e i margini di destra per una descrizione comandi.|  
|[CToolTipCtrl::SetMaxTipWidth](../Topic/CToolTipCtrl::SetMaxTipWidth.md)|Imposta la larghezza massima per una descrizione comandi.|  
|[CToolTipCtrl::SetTipBkColor](../Topic/CToolTipCtrl::SetTipBkColor.md)|Imposta il colore di sfondo in una descrizione comando.|  
|[CToolTipCtrl::SetTipTextColor](../Topic/CToolTipCtrl::SetTipTextColor.md)|Imposta il colore del testo in una descrizione comando.|  
|[CToolTipCtrl::SetTitle](../Topic/CToolTipCtrl::SetTitle.md)|Aggiunge una stringa standard di titolo e l'icona a una descrizione comandi.|  
|[CToolTipCtrl::SetToolInfo](../Topic/CToolTipCtrl::SetToolInfo.md)|Imposta le informazioni che una descrizione comandi vengono conservate per uno strumento.|  
|[CToolTipCtrl::SetToolRect](../Topic/CToolTipCtrl::SetToolRect.md)|Imposta un nuovo rettangolo di delimitazione di uno strumento.|  
|[CToolTipCtrl::SetWindowTheme](../Topic/CToolTipCtrl::SetWindowTheme.md)|Consente di impostare lo stile di visualizzazione della descrizione comandi.|  
|[CToolTipCtrl::Update](../Topic/CToolTipCtrl::Update.md)|Forza lo strumento corrente da ridisegnare.|  
|[CToolTipCtrl::UpdateTipText](../Topic/CToolTipCtrl::UpdateTipText.md)|Imposta il testo di descrizione comandi per uno strumento.|  
  
## Note  
 "Strumento" è una finestra, come una finestra figlio o un controllo, o un'area rettangolare definita dall'applicazione in un'area client della finestra.  Descrizione comandi è nascosta in genere, comparente solo quando l'utente invia il cursore su uno strumento e lo possibile che per informazioni sulla metà di secondo.  La descrizione comandi viene visualizzata accanto al cursore e scompare quando l'utente fa clic su un pulsante del mouse o sposta il cursore dallo strumento.  
  
 `CToolTipCtrl` fornisce la funzionalità per controllare il punto iniziale e durata della descrizione comandi, le larghezze del margine circondanti il testo di descrizione comandi, la larghezza della descrizione comandi stessa e i precedenti e il colore del testo di descrizione comandi.  Un singolo controllo tooltip può fornire informazioni per più di uno strumento.  
  
 La classe `CToolTipCtrl` fornisce la funzionalità del controllo comune di descrizione comandi di Windows.  Questo controllo e la classe `CToolTipCtrl` \) è disponibile solo per i programmi in esecuzione in Windows 95\/98 e Windows NT versione 3,51 e successive.  
  
 Per ulteriori informazioni sull'abilitazione delle descrizioni comandi, vedere [descrizioni comandi in Windows non derivato da CFrameWnd](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).  
  
 Per ulteriori informazioni su l `CToolTipCtrl`, vedere [Controlli](../../mfc/controls-mfc.md) e [Utilizzando CToolTipCtrl](../../mfc/using-ctooltipctrl.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CToolTipCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CToolBar Class](../../mfc/reference/ctoolbar-class.md)