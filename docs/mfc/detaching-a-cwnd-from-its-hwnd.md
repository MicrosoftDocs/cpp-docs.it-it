---
title: Disconnessione di CWnd da HWND | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CWnd
dev_langs:
- C++
helpviewer_keywords:
- HWND, detaching CWnd from
- removing HWNDs from CWnds
- CWnd objects [MFC], detaching from HWND
- detaching CWnds from HWNDs
- Detach method (CWnd class)
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a776b4ff4799750c89a322379a063030db748eec
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="detaching-a-cwnd-from-its-hwnd"></a>Disconnessione di CWnd da HWND
Se è necessario aggirare object -`HWND` relazione, MFC fornisce un altro `CWnd` funzione membro, [scollegamento](../mfc/reference/cwnd-class.md#detach), che consente di disconnettere l'oggetto finestra C++ dalla finestra di Windows. Ciò impedisce al distruttore di eliminazione della finestra di Windows quando l'oggetto viene eliminato definitivamente.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Creazione di finestre](../mfc/creating-windows.md)  
  
-   [Sequenza di distruzione di finestre](../mfc/window-destruction-sequence.md)  
  
-   [Allocazione e deallocazione di memoria di finestra](../mfc/allocating-and-deallocating-window-memory.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

