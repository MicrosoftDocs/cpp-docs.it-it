---
title: Utilizzo di oggetti finestra | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- child windows [MFC], working with
- window objects [MFC], working with
ms.assetid: f73aa254-90e3-46a9-8e9b-d78b7054a331
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1eb8622c18a9b9539388ad2b3162916288cb28af
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="working-with-window-objects"></a>Utilizzo di oggetti finestra
Utilizzo di chiamate di windows per due tipi di attività:  
  
-   Gestione dei messaggi di Windows  
  
-   Nella finestra di disegno  
  
 Per gestire i messaggi di Windows in una finestra, incluse le proprie finestre figlio, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md) per eseguire il mapping dei messaggi per la classe di finestra C++. Quindi scrivere gestore messaggi funzioni membro nella classe.  
  
 La maggior parte di disegno in un'applicazione framework si verifica nella visualizzazione, il cui [OnDraw](../mfc/reference/cview-class.md#ondraw) funzione membro viene chiamata ogni volta che il contenuto della finestra deve essere disegnato. Se la finestra è un elemento figlio della vista, si potrebbe delegare parte del disegno della visualizzazione per la finestra figlio con `OnDraw` chiamare una delle funzioni membro della finestra.  
  
 In ogni caso, è necessario un contesto di dispositivo per il disegno. È possibile utilizzare la penna azionario, pennello e altri oggetti grafici contenuti nel contesto di dispositivo associato alla finestra. Oppure è possibile modificare questi oggetti per ottenere gli effetti di disegno che è necessario. Con il contesto del dispositivo impostato nel modo desiderato, chiamare funzioni membro di classe [CDC](../mfc/reference/cdc-class.md) (classe di contesto di dispositivo) per disegnare linee, forme e testo; utilizzare colori; e lavorare con un sistema di coordinate.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Mapping e la gestione dei messaggi](../mfc/message-handling-and-mapping.md)  
  
-   [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)  
  
-   [Contesti di dispositivo](../mfc/device-contexts.md)  
  
-   [Oggetti grafici](../mfc/graphic-objects.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

