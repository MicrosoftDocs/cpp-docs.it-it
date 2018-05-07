---
title: Quando inizializzare gli oggetti CWnd | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- window objects [MFC], when to initialize CWnd
- initializing CWnd objects [MFC]
- initializing objects [MFC], CWnd
- CWnd objects [MFC], when HWND is attached
- HWND, when attached to CWnd object
- CWnd objects [MFC], when to initialize
ms.assetid: 4d31bcb1-73db-4f2f-b71c-89b087569a10
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ee10a4632809a224028bfa482f80ed9e8a9334a5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="when-to-initialize-cwnd-objects"></a>Quando inizializzare gli oggetti CWnd
Non è possibile creare finestre figlio di windows o chiamare le funzioni API di Windows nel costruttore di un `CWnd`-oggetto derivato. In questo modo il `HWND` per il `CWnd` oggetto non è stato ancora creato. L'inizializzazione di più specifici di Windows, ad esempio l'aggiunta di finestre figlio, deve essere eseguito in un [OnCreate](../mfc/reference/cwnd-class.md#oncreate) gestore di messaggi.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)  
  
-   [Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)

