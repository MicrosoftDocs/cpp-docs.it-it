---
title: "CLinkCtrl Class | Microsoft Docs"
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
  - "CLinkCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLinkCtrl class"
  - "controlli [MFC], collegamenti"
  - "collegamenti [C++], link control"
  - "SysLink control"
  - "pagine Web, link control"
ms.assetid: d1cd876a-ecca-42db-8ac4-9cd327df0cd4
caps.latest.revision: 23
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CLinkCtrl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità dei controlli comuni di Windows SysLink.  
  
## Sintassi  
  
```  
class CLinkCtrl : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinkCtrl::CLinkCtrl](../Topic/CLinkCtrl::CLinkCtrl.md)|Costruisce un oggetto `CLinkCtrl`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinkCtrl::Create](../Topic/CLinkCtrl::Create.md)|Crea un controllo di collegamento e lo collega a un oggetto `CLinkCtrl`.|  
|[CLinkCtrl::CreateEx](../Topic/CLinkCtrl::CreateEx.md)|Crea un controllo di collegamento con gli stili estesi e lo collega a un oggetto `CLinkCtrl`.|  
|[CLinkCtrl::GetIdealHeight](../Topic/CLinkCtrl::GetIdealHeight.md)|Recupera l'altezza ideale del controllo di collegamento.|  
|[CLinkCtrl::GetIdealSize](../Topic/CLinkCtrl::GetIdealSize.md)|Calcola l'altezza preferita del testo del collegamento per il controllo di collegamento corrente, come la larghezza specificata di collegamento.|  
|[CLinkCtrl::GetItem](../Topic/CLinkCtrl::GetItem.md)|Recupera gli stati e gli attributi di un elemento del controllo di collegamento.|  
|[CLinkCtrl::GetItemID](../Topic/CLinkCtrl::GetItemID.md)|Recupera l'id di un elemento del controllo di collegamento.|  
|[CLinkCtrl::GetItemState](../Topic/CLinkCtrl::GetItemState.md)|Recupera lo stato dell'elemento del controllo di collegamento.|  
|[CLinkCtrl::GetItemUrl](../Topic/CLinkCtrl::GetItemUrl.md)|Recupera l'url rappresentato dall'elemento del controllo di collegamento.|  
|[CLinkCtrl::HitTest](../Topic/CLinkCtrl::HitTest.md)|Determina se l'utente ha fatto clic sul collegamento specificato.|  
|[CLinkCtrl::SetItem](../Topic/CLinkCtrl::SetItem.md)|Imposta gli stati e gli attributi di un elemento del controllo di collegamento.|  
|[CLinkCtrl::SetItemID](../Topic/CLinkCtrl::SetItemID.md)|Impostare l'id di un elemento del controllo di collegamento.|  
|[CLinkCtrl::SetItemState](../Topic/CLinkCtrl::SetItemState.md)|Imposta lo stato dell'elemento del controllo di collegamento.|  
|[CLinkCtrl::SetItemUrl](../Topic/CLinkCtrl::SetItemUrl.md)|Imposta l'url rappresentato dall'elemento del controllo di collegamento.|  
  
## Note  
 "Un controllo di collegamento" consente di importare i collegamenti ipertestuali in una finestra.  Il controllo rappresenta una finestra che esegue il rendering del testo contrassegnato e avvia applicazioni adatte quando l'utente fa clic su un collegamento incorporato.  I collegamenti più supportati in un controllo e possono essere utilizzati da un indice a base zero.  
  
 Questo controllo e la classe `CLinkCtrl` \) è disponibile solo per i programmi in esecuzione in Windows XP e versioni successive.  
  
 Per ulteriori informazioni, vedere [controllo di SysLink](http://msdn.microsoft.com/library/windows/desktop/bb760706) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CLinkCtrl`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)