---
title: Elaborazione delle notifiche Header-Control | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CHeaderCtrl class [MFC], processing notifications
- controls [MFC], header
- notifications [MFC], processing for CHeaderCtrl
- header controls [MFC], processing notifications
- header control notifications
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a356b665800b8930c42b6ba58036e73f1142b011
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="processing-header-control-notifications"></a>Elaborazione delle notifiche Header-Control
Nella classe di finestra di dialogo o una vista, utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione del gestore con un'istruzione switch per qualsiasi controllo di intestazione ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) i messaggi di notifica che si desidera gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)). Le notifiche vengono inviate alla finestra padre quando l'utente fa clic o doppio clic su un elemento di intestazione, trascina un divisore tra gli elementi e così via.  
  
 I messaggi di notifica associati a un controllo di intestazione sono elencati [riferimento per il controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775239) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

