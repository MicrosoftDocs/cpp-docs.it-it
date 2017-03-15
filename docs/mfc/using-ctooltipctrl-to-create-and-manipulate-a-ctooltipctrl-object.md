---
title: "Utilizzo di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CToolTipCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CToolTipCtrl (classe), utilizzo"
  - "descrizioni comandi [C++], creazione"
ms.assetid: 0a34583f-f66d-46a1-a239-31b80ea395ad
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo di CToolTipCtrl per creare e modificare un oggetto CToolTipCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito viene riportato un esempio di utilizzo di [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) :  
  
### Per creare e modificare un CToolTipCtrl  
  
1.  Costruire l'oggetto `CToolTipCtrl`.  
  
2.  Chiamare [Create](../Topic/CToolTipCtrl::Create.md) per creare il controllo comune di descrizione comandi di Windows e per associarlo all'oggetto `CToolTipCtrl`.  
  
3.  Chiamare [AddTool](../Topic/CToolTipCtrl::AddTool.md) per registrare uno strumento con il controllo descrizione comandi, così le informazioni archiviate nella descrizione del comando vengono visualizzate quando il cursore si trova sullo strumento.  
  
4.  Chiamare [SetToolInfo](../Topic/CToolTipCtrl::SetToolInfo.md) per impostare le informazioni che una descrizione comandi deve conservare per uno strumento.  
  
5.  Chiamare [SetToolRect](../Topic/CToolTipCtrl::SetToolRect.md) per impostare un nuovo rettangolo di delimitazione per uno strumento.  
  
6.  Chiamare [HitTest](../Topic/CToolTipCtrl::HitTest.md) per testare se un punto è contenuto nel rettangolo di delimitazione dello strumento specificato e, in caso affermativo, per recuperare le informazioni sullo strumento.  
  
7.  Chiamare [GetToolCount](../Topic/CToolTipCtrl::GetToolCount.md) per recuperare un conteggio degli strumenti registrati con il controllo descrizione comandi.  
  
## Vedere anche  
 [Utilizzo di CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controlli](../mfc/controls-mfc.md)