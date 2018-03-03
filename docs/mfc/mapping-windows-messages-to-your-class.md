---
title: Mapping di messaggi di Windows a classi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], Windows messages
- message maps [MFC], in dialog class
- Windows messages [MFC], mapping in dialog classes
- messages to dialog class [MFC]
- mappings [MFC], messages to dialog class [MFC]
- message maps [MFC], mapping Windows messages to classes
- messages to dialog class [MFC], mapping
ms.assetid: a4c6fd1f-1d33-47c9-baa0-001755746d6d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4701b0ae9f71099febb1a239cea6285fb0a7b229
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mapping-windows-messages-to-your-class"></a>Mapping di messaggi Windows a classi
La finestra di dialogo per gestire i messaggi di Windows, eseguire l'override di funzioni gestore appropriato. A tale scopo, utilizzare la finestra proprietà per [mapping dei messaggi di](../mfc/reference/mapping-messages-to-functions.md) alla classe di finestra di dialogo. Questo viene registrata una voce della mappa messaggi per ogni messaggio e le funzioni membro di gestore di messaggi viene aggiunto alla classe. Utilizzare l'editor del codice sorgente di Visual C++ per scrivere codice nei gestori di messaggi.  
  
 È anche possibile eseguire l'override di funzioni membro di [CDialog](../mfc/reference/cdialog-class.md) e le relative classi base, soprattutto [CWnd](../mfc/reference/cwnd-class.md).  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Mapping e la gestione dei messaggi](../mfc/message-handling-and-mapping.md)  
  
-   [Funzioni membro comunemente sottoposte a override](../mfc/commonly-overridden-member-functions.md)  
  
-   [Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

