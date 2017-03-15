---
title: "Stili per il controllo Progress | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CProgressCtrl (classe), stili"
  - "PBS_SMOOTH (stile)"
  - "PBS_VERTICAL (stile)"
  - "controlli di stato [C++], stili"
ms.assetid: 39eb8081-bc20-4552-91b9-e7cdd1b7d8ae
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Stili per il controllo Progress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea inizialmente il controllo di stato \([CProgressCtrl::Create](../Topic/CProgressCtrl::Create.md)\), utilizzare il parametro `dwStyle` per specificare gli stili desiderati della finestra per il controllo di stato.  Nell'elenco seguente sono illustrati in maniera dettagliata gli stili applicabili alla finestra.  Il controllo ignora qualsiasi stile della finestra diverso da quelli elencati di seguito.  È consigliabile creare sempre il controllo come finestra figlia, in genere di un elemento padre della finestra di dialogo.  
  
|Stile della finestra|Effetto|  
|--------------------------|-------------|  
|`WS_BORDER`|Crea un bordo intorno alla finestra.|  
|**WS\_CHILD**|Crea una finestra figlia \(deve sempre essere utilizzato per `CProgressCtrl`\).|  
|**WS\_CLIPCHILDREN**|Esclude l'area occupata dalle finestre figlie quando si disegna nella finestra padre.  Utilizzato quando si crea la finestra padre.|  
|**WS\_CLIPSIBLINGS**|Taglia le finestre figlie le une rispetto alle altre.|  
|**WS\_DISABLED**|Crea una finestra che inizialmente è disabilitata.|  
|**WS\_VISIBLE**|Crea una finestra che inizialmente è visibile.|  
|**WS\_TABSTOP**|Specifica che il controllo può ricevere lo stato attivo quando l'utente preme il tasto TAB per passare ad esso.|  
  
 Inoltre, è possibile specificare due stili che si applicano solo al controllo di stato, `PBS_VERTICAL` e `PBS_SMOOTH`.  
  
 Utilizzare `PBS_VERTICAL` per orientare il controllo verticalmente anziché in orizzontale.  Utilizzare `PBS_SMOOTH` per riempire il controllo completamente anziché visualizzare quadratini separati che riempiono gradualmente il controllo.  
  
 Senza lo stile `PBS_SMOOTH`:  
  
 ![Stile della barra di stato standard](../mfc/media/vc4ruw1.png "vc4RUW1")  
  
 Con gli stili `PBS_SMOOTH` e `PBS_VERTICAL`:  
  
 ![Stile della barra di stato, uniforme e verticale](../mfc/media/vc4ruw2.png "vc4RUW2")  
  
 Per ulteriori informazioni, vedere [Stili finestra](../mfc/reference/frame-window-styles-mfc.md) in *Riferimenti alla libreria MFC*.  
  
## Vedere anche  
 [Utilizzo di CProgressCtrl](../mfc/using-cprogressctrl.md)