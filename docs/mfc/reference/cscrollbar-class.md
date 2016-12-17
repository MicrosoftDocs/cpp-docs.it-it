---
title: "CScrollBar Class | Microsoft Docs"
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
  - "CScrollBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli [MFC], barra di scorrimento"
  - "CScrollBar class"
  - "barre di scorrimento"
  - "SCROLLBAR window class"
  - "Windows common controls [C++], CScrollBar"
ms.assetid: f3735ca5-73ea-46dc-918b-4d824c9fe47f
caps.latest.revision: 21
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CScrollBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di un controllo barra di scorrimento di Windows.  
  
## Sintassi  
  
```  
class CScrollBar : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CScrollBar::CScrollBar](../Topic/CScrollBar::CScrollBar.md)|Costruisce un oggetto `CScrollBar`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CScrollBar::Create](../Topic/CScrollBar::Create.md)|Crea la barra di scorrimento di Windows e allegarlo all'oggetto `CScrollBar`.|  
|[CScrollBar::EnableScrollBar](../Topic/CScrollBar::EnableScrollBar.md)|Abilita o disabilita una o entrambe le frecce di una barra di scorrimento.|  
|[CScrollBar::GetScrollBarInfo](../Topic/CScrollBar::GetScrollBarInfo.md)|Recupera le informazioni sulla barra di scorrimento mediante una struttura `SCROLLBARINFO`.|  
|[CScrollBar::GetScrollInfo](../Topic/CScrollBar::GetScrollInfo.md)|Recupera le informazioni sulla barra di scorrimento.|  
|[CScrollBar::GetScrollLimit](../Topic/CScrollBar::GetScrollLimit.md)|Recupera il limite della barra di scorrimento|  
|[CScrollBar::GetScrollPos](../Topic/CScrollBar::GetScrollPos.md)|Recupera la posizione corrente di una casella di scorrimento.|  
|[CScrollBar::GetScrollRange](../Topic/CScrollBar::GetScrollRange.md)|Recupera il minimo corrente e massime di posizioni delle barre di scorrimento per la barra di scorrimento specificata.|  
|[CScrollBar::SetScrollInfo](../Topic/CScrollBar::SetScrollInfo.md)|Imposta le informazioni sulla barra di scorrimento.|  
|[CScrollBar::SetScrollPos](../Topic/CScrollBar::SetScrollPos.md)|Imposta la posizione corrente di una casella di scorrimento.|  
|[CScrollBar::SetScrollRange](../Topic/CScrollBar::SetScrollRange.md)|Imposta i valori della posizione minimo e massimo per la barra di scorrimento specificata.|  
|[CScrollBar::ShowScrollBar](../Topic/CScrollBar::ShowScrollBar.md)|Mostra o nasconde una barra di scorrimento.|  
  
## Note  
 Creare un controllo barra di scorrimento in due passaggi.  Innanzitutto, chiamare il costruttore `CScrollBar` per costruire l'oggetto `CScrollBar`, quindi chiamare la funzione membro [Crea](../Topic/CScrollBar::Create.md) per creare il controllo barra di scorrimento di Windows e per associarlo all'oggetto `CScrollBar`.  
  
 Se si crea un oggetto `CScrollBar` di una finestra di dialogo tramite una risorsa finestra di dialogo, `CScrollBar` automaticamente eliminato quando l'utente chiude la finestra di dialogo.  
  
 Se si crea un oggetto `CScrollBar` interno di una finestra, è inoltre necessario distruggerla.  
  
 Se si crea l'oggetto `CScrollBar` nello stack, verrà automaticamente eliminato.  Se si crea l'oggetto `CScrollBar` nell'heap mediante la funzione **new**, è necessario chiamare **delete** sull'oggetto per distruggerlo quando l'utente termina la barra di scorrimento di Windows.  
  
 Se allocare memoria in qualsiasi oggetto `CScrollBar`, eseguire l'override del distruttore `CScrollBar` per disporre le allocazioni.  
  
 Per informazioni correlate su l `CScrollBar`, vedere [Controlli](../../mfc/controls-mfc.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CScrollBar`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CButton Class](../../mfc/reference/cbutton-class.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [CEdit Class](../../mfc/reference/cedit-class.md)   
 [CListBox Class](../../mfc/reference/clistbox-class.md)   
 [CStatic Class](../../mfc/reference/cstatic-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)