---
title: Nella finestra di dialogo eliminazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- dialog boxes [MFC], deleting
- destruction, dialog box
- dialog boxes [MFC], destroying
- dialog boxes [MFC], removing
- modeless dialog boxes [MFC], destroying
- MFC dialog boxes [MFC], destroying
- modal dialog boxes [MFC], destroying
ms.assetid: dabceee7-3639-4d85-bf34-73515441b3d0
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a9e975884724f9cf0f0c988f671de5182c94165e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="destroying-the-dialog-box"></a>Eliminazione definitiva della finestra di dialogo
Finestre di dialogo modale vengono in genere create nello stack frame ed eliminati definitivamente quando termina la funzione che li ha creati. Il distruttore dell'oggetto finestra di dialogo viene chiamato quando l'oggetto esce dall'ambito.  
  
 Finestre di dialogo non modali sono in genere create e possedute da una finestra di visualizzazione o del frame padre, ovvero finestra cornice principale dell'applicazione o una finestra cornice del documento. Il valore predefinito [OnClose](../mfc/reference/cwnd-class.md#onclose) chiamate del gestore [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow), che elimina la finestra di dialogo. Se la finestra di dialogo autonoma, ovvero non puntatori o altri particolare semantica di proprietà, è necessario eseguire l'override [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy) per eliminare l'oggetto finestra C++. È inoltre necessario eseguire l'override [OnCancel](../mfc/reference/cdialog-class.md#oncancel) e chiamare `DestroyWindow` dal suo interno. In caso contrario, il proprietario della finestra di dialogo deve eliminare l'oggetto C++ quando non è più necessario.  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

