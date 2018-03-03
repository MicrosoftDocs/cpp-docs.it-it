---
title: Distruzione di finestre cornice | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- PostNcDestroy
dev_langs:
- C++
helpviewer_keywords:
- Default method [MFC]
- DestroyWindow method [MFC]
- frame windows [MFC], destroying
- OnNcDestroy method, and frame windows
- document frame windows [MFC], destroying
- destroying frame windows
- MFC, frame windows
- windows [MFC], destroying
- OnClose method [MFC]
- PostNcDestroy method [MFC]
ms.assetid: 5affca77-1999-4507-a2b2-9aa226611b4b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f1cbd96f5044626c7c3c07e8fca115c2b1dca8cb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="destroying-frame-windows"></a>Eliminazione definitiva di finestre cornice
Il framework MFC gestisce distruzione di finestre, nonché la creazione delle finestre associate con documenti e visualizzazioni. Se si creano finestre aggiuntive, è responsabile per l'eliminazione.  
  
 Nel framework, quando l'utente chiude la finestra cornice, l'impostazione predefinita della finestra [OnClose](../mfc/reference/cwnd-class.md#onclose) chiamate del gestore [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). L'ultima funzione membro chiamata quando viene eliminata la finestra di Windows è [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), che esegue una certa pulitura, chiama il [predefinito](../mfc/reference/cwnd-class.md#default) membro funzione per eseguire la pulizia di Windows e infine chiama la funzione membro virtuale [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). Il [CFrameWnd](../mfc/reference/cframewnd-class.md) implementazione di `PostNcDestroy` Elimina l'oggetto finestra C++. Non utilizzare mai C++ **eliminare** operatore su una finestra cornice. In alternativa, usare `DestroyWindow`.  
  
 Quando si chiude la finestra principale, la chiusura dell'applicazione. Se si sono modificati documenti non salvati, il framework visualizza una finestra di messaggio per chiedere se i documenti devono essere salvati e assicura che i documenti vengono salvati se necessario.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)

