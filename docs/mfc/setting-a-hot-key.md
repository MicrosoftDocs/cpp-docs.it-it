---
title: "Impostazione di un tasto di scelta rapida | Microsoft Docs"
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
  - "tasti di scelta [C++], tasti di scelta"
  - "CHotKeyCtrl (classe), impostazione di un tasto di scelta rapida"
  - "tasti di scelta rapida [C++], tasti di scelta"
ms.assetid: 6f3bc141-e346-4dce-9ca7-3e6b2c453f3f
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Impostazione di un tasto di scelta rapida
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'applicazione può utilizzare le informazioni fornite da un controllo del tasto di scelta \([CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md)\) in due modi:  
  
-   Installare un tasto di scelta globale per l'attivazione della finestra di nonchild inviando un messaggio di [WM\_SETHOTKEY](http://msdn.microsoft.com/library/windows/desktop/ms646284) alla finestra da attivare.  
  
-   Installare un tasto di scelta appropriato specifico chiamando la funzione Windows [RegisterHotKey](http://msdn.microsoft.com/library/windows/desktop/ms646309).  
  
## Vedere anche  
 [Utilizzo di CHotKeyCtrl](../mfc/using-chotkeyctrl.md)   
 [Controlli](../mfc/controls-mfc.md)