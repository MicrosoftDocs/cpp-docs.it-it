---
title: Le notifiche inviate mediante controlli Animation | Documenti Microsoft
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
- notifications [MFC], animation controls
- CAnimateCtrl class [MFC], notifications
- controls [MFC], animation
- animation controls [MFC], notifications
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c57a33bf4b13397d4f296ef4e5aa8e137c2d3594
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="notifications-sent-by-animation-controls"></a>Notifiche inviate mediante controlli Animation
Un controllo animation ([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)) invia i due diversi tipi di messaggi di notifica. Le notifiche vengono inviate sotto forma di [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggi.  
  
 Il [messaggio ACN_START](http://msdn.microsoft.com/library/windows/desktop/bb761891) messaggio viene inviato quando il controllo animazione è stata avviata la riproduzione di un clip. Il [messaggio ACN_STOP](http://msdn.microsoft.com/library/windows/desktop/bb761893) messaggio viene inviato quando il controllo animazione terminato o interrotto un filmato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CAnimateCtrl](../mfc/using-canimatectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

