---
title: "Utilizzo di CProgressCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CProgressCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CProgressCtrl (classe), utilizzo"
  - "controlli di stato [C++]"
  - "controlli di stato [C++], CProgressCtrl"
  - "controlli di stato [C++], utilizzo"
ms.assetid: 61473270-196b-41ab-bf2b-467f46673539
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di CProgressCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare il controllo di stato per indicare lo stato di avanzamento di un'operazione lunga.  È un rettangolo viene riempito gradualmente con il colore evidenziatore di sistema dell'avanzamento di un'operazione.  
  
 Il controllo di stato è rappresentato in MFC dalla classe [CProgressCtrl](../mfc/reference/cprogressctrl-class.md).  
  
 Quando si creano inizialmente il controllo di stato, si specifica la dimensione e posizione, finestra padre in genere una finestra di dialogo\) e ID.  Tramite il parametro di `dwStyle`, è anche possibile specificare diversi stili per l'hwnd del controllo e stili per come riempie.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Stili per il controllo di stato](../mfc/styles-for-the-progress-control.md)  
  
-   [Impostazioni per il controllo di stato](../mfc/settings-for-the-progress-control.md)  
  
-   [Modificare il controllo di stato](../mfc/manipulating-the-progress-control.md)  
  
## Vedere anche  
 [Controlli](../mfc/controls-mfc.md)