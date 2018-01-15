---
title: Sequenza di distruzione di finestre | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- destruction, windows
- destroying windows
- sequence [MFC], window destruction
- CWnd objects [MFC], destruction sequence
- sequence [MFC]
- windows [MFC], destroying
ms.assetid: 2d819196-6240-415f-a308-db43745e616c
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8b873d51f585336425537756064582eb709988f6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="window-destruction-sequence"></a>Sequenza di distruzione di finestre
Nel framework MFC, quando l'utente chiude la finestra cornice, l'impostazione predefinita della finestra [OnClose](../mfc/reference/cwnd-class.md#onclose) chiamate del gestore [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). L'ultima funzione membro chiamata quando viene eliminata la finestra di Windows è [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), che esegue una certa pulitura, chiama il [predefinito](../mfc/reference/cwnd-class.md#default) membro funzione per eseguire la pulizia di Windows e infine chiama la funzione membro virtuale [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). Il [CFrameWnd](../mfc/reference/cframewnd-class.md) implementazione di `PostNcDestroy` Elimina l'oggetto finestra C++.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Allocazione e deallocazione di memoria delle finestre](../mfc/allocating-and-deallocating-window-memory.md)  
  
-   [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Eliminazione definitiva di oggetti finestra](../mfc/destroying-window-objects.md)

