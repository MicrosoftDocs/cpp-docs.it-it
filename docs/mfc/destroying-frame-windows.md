---
title: Distruzione di finestre cornice | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 81182c0e5633e19126d3036b5793de7658ad3d2a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33343476"
---
# <a name="destroying-frame-windows"></a>Eliminazione definitiva di finestre cornice
Il framework MFC gestisce distruzione di finestre, nonché la creazione delle finestre associate con documenti e visualizzazioni. Se si creano finestre aggiuntive, è responsabile per l'eliminazione.  
  
 Nel framework, quando l'utente chiude la finestra cornice, l'impostazione predefinita della finestra [OnClose](../mfc/reference/cwnd-class.md#onclose) chiamate del gestore [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). L'ultima funzione membro chiamata quando viene eliminata la finestra di Windows è [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), che esegue una certa pulitura, chiama il [predefinito](../mfc/reference/cwnd-class.md#default) membro funzione per eseguire la pulizia di Windows e infine chiama la funzione membro virtuale [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). Il [CFrameWnd](../mfc/reference/cframewnd-class.md) implementazione di `PostNcDestroy` Elimina l'oggetto finestra C++. Non utilizzare mai C++ **eliminare** operatore su una finestra cornice. In alternativa, usare `DestroyWindow`.  
  
 Quando si chiude la finestra principale, la chiusura dell'applicazione. Se si sono modificati documenti non salvati, il framework visualizza una finestra di messaggio per chiedere se i documenti devono essere salvati e assicura che i documenti vengono salvati se necessario.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)

