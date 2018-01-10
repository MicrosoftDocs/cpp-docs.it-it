---
title: Distruzione di oggetti finestra | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- frame windows [MFC], destroying
- window objects [MFC], deleting
- window objects [MFC], destroying
- window objects [MFC], removing
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8e7b8b2cf605e0f53418755b65151fd9eb2cff5d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="destroying-window-objects"></a>Eliminazione definitiva di oggetti finestra
Prestare attenzione con proprie finestre figlio da eliminare definitivamente l'oggetto finestra C++ quando l'utente viene terminato con la finestra. Se questi oggetti non vengono eliminati, l'applicazione non ripristinerà la memoria. Per fortuna, il framework gestisce distruzione di finestre, nonché la creazione di finestre cornice, visualizzazioni e finestre di dialogo. Se si creano finestre aggiuntive, è responsabile per l'eliminazione.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)  
  
-   [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)  
  
-   [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
-   [Sequenza generale di creazione finestre](../mfc/general-window-creation-sequence.md)  
  
-   [Distruzione di finestre cornice](../mfc/destroying-frame-windows.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

