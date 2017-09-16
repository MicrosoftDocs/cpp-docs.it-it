---
title: Using CAnimateCtrl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CAnimateCtrl
dev_langs:
- C++
helpviewer_keywords:
- animation controls [MFC], CAnimateCtrl class
- controls [MFC], animation
- CAnimateCtrl class [MFC], about CAnimateCtrl class [MFC]
ms.assetid: 696c0805-bef0-4e2e-a9e7-b37b9215b7f0
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 88e9179175a3f033c303dabea97b85ecd2958879
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="using-canimatectrl"></a>Using CAnimateCtrl
An animation control, represented by the class [CAnimateCtrl](../mfc/reference/canimatectrl-class.md), is a window that displays a clip in Audio Video Interleaved (AVI) format — the standard Windows video/audio format. An AVI clip is a series of bitmap frames, like a movie.  
  
 Since your thread continues executing while the AVI clip is displayed, one common use for an animation control is to indicate system activity during a lengthy operation. For example, the Windows Find dialog box displays a moving magnifying glass as the system searches for a file.  
  
 Animation controls can only play simple AVI clips, and they do not support sound. (For a complete list of limitations, see [CAnimateCtrl](../mfc/reference/canimatectrl-class.md).) Since the capabilities of an animation control are severely limited and subject to change, you should use an alternative such as the MCIWnd control if you need a control to provide multimedia playback and/or recording capabilities. For more information about the MCIWnd control, see the multimedia documentation.  
  
## <a name="what-do-you-want-to-know-more-about"></a>What do you want to know more about  
  
-   [Using an Animation Control](../mfc/using-an-animation-control.md)  
  
-   [Notifications Sent by Animation Controls](../mfc/notifications-sent-by-animation-controls.md)  
  
## <a name="see-also"></a>See Also  
 [Controls](../mfc/controls-mfc.md)


