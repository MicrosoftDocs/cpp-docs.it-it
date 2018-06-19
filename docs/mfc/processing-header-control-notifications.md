---
title: Elaborazione delle notifiche Header-Control | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CHeaderCtrl class [MFC], processing notifications
- controls [MFC], header
- notifications [MFC], processing for CHeaderCtrl
- header controls [MFC], processing notifications
- header control notifications
ms.assetid: e6c6af7c-d458-4d33-85aa-48014ccde5f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1a0fe657089c33679cf8d18f95268a70335804c5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33348891"
---
# <a name="processing-header-control-notifications"></a>Elaborazione delle notifiche Header-Control
Nella classe di finestra di dialogo o una vista, utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione del gestore con un'istruzione switch per qualsiasi controllo di intestazione ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)) i messaggi di notifica che si desidera gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)). Le notifiche vengono inviate alla finestra padre quando l'utente fa clic o doppio clic su un elemento di intestazione, trascina un divisore tra gli elementi e così via.  
  
 I messaggi di notifica associati a un controllo di intestazione sono elencati [riferimento per il controllo intestazione](http://msdn.microsoft.com/library/windows/desktop/bb775239) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

