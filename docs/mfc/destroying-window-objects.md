---
title: Distruzione di oggetti finestra | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- frame windows [MFC], destroying
- window objects [MFC], deleting
- window objects [MFC], destroying
- window objects [MFC], removing
ms.assetid: 3241fea0-c614-4a25-957d-20f21bd5fd0c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3aacb01d945429bc36543f78e3635c39ef58223d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="destroying-window-objects"></a>Eliminazione definitiva di oggetti finestra
Prestare attenzione con proprie finestre figlio da eliminare definitivamente l'oggetto finestra C++ quando l'utente viene terminato con la finestra. Se questi oggetti non vengono eliminati, l'applicazione non ripristinerà la memoria. Per fortuna, il framework gestisce distruzione di finestre, nonché la creazione di finestre cornice, visualizzazioni e finestre di dialogo. Se si creano finestre aggiuntive, è responsabile per l'eliminazione.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)  
  
-   [Allocazione e deallocazione di memoria di finestra](../mfc/allocating-and-deallocating-window-memory.md)  
  
-   [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
-   [Sequenza generale di creazione finestre](../mfc/general-window-creation-sequence.md)  
  
-   [Distruzione di finestre cornice](../mfc/destroying-frame-windows.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

