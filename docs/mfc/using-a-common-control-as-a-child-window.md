---
title: "Utilizzo di un controllo comune come finestra figlio | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre figlio, controlli comuni come"
  - "controlli comuni [C++], finestre figlio"
  - "controlli [MFC], utilizzo come finestre figlio"
  - "finestre [C++], controlli comuni come"
  - "controlli comuni di Windows [C++], finestre figlio"
ms.assetid: 608f7d47-7854-4fce-bde9-856c51e76753
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di un controllo comune come finestra figlio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I controlli comuni di Windows possono essere utilizzati come finestra figlio di un'altra finestra.  Nella procedura seguente viene illustrato come creare dinamicamente un controllo comune e quindi utilizzare.  
  
### Per utilizzare un controllo comune come finestra figlio  
  
1.  Definire la classe o nel gestore correlata.  
  
2.  Utilizzare override del controllo del metodo di [CWnd::Create](../Topic/CWnd::Create.md) per creare il controllo Windows.  
  
3.  Dopo che è stato creato il controllo \(fin dal gestore di `OnCreate` se è una sottoclasse il controllo\), è possibile modificare il controllo utilizzando le relative funzioni membro.  Vedere le descrizioni dei singoli controlli a [Controlli](../mfc/controls-mfc.md) per informazioni dettagliate sui metodi.  
  
4.  Al termine del controllo, utilizzare [CWnd::DestroyWindow](../Topic/CWnd::DestroyWindow.md) eliminare il controllo.  
  
## Vedere anche  
 [Creazione e utilizzo di controlli](../mfc/making-and-using-controls.md)   
 [Controlli](../mfc/controls-mfc.md)