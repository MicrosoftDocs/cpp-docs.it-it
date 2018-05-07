---
title: Nella finestra di dialogo eliminazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes [MFC], deleting
- destruction, dialog box
- dialog boxes [MFC], destroying
- dialog boxes [MFC], removing
- modeless dialog boxes [MFC], destroying
- MFC dialog boxes [MFC], destroying
- modal dialog boxes [MFC], destroying
ms.assetid: dabceee7-3639-4d85-bf34-73515441b3d0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 66a3ef9a72107ffb36a75834a6e197aba394c420
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="destroying-the-dialog-box"></a>Eliminazione definitiva della finestra di dialogo
Finestre di dialogo modale vengono in genere create nello stack frame ed eliminati definitivamente quando termina la funzione che li ha creati. Il distruttore dell'oggetto finestra di dialogo viene chiamato quando l'oggetto esce dall'ambito.  
  
 Finestre di dialogo non modali sono in genere create e possedute da una finestra di visualizzazione o del frame padre, ovvero finestra cornice principale dell'applicazione o una finestra cornice del documento. Il valore predefinito [OnClose](../mfc/reference/cwnd-class.md#onclose) chiamate del gestore [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow), che elimina la finestra di dialogo. Se la finestra di dialogo autonoma, ovvero non puntatori o altri particolare semantica di proprietà, è necessario eseguire l'override [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy) per eliminare l'oggetto finestra C++. È inoltre necessario eseguire l'override [OnCancel](../mfc/reference/cdialog-class.md#oncancel) e chiamare `DestroyWindow` dal suo interno. In caso contrario, il proprietario della finestra di dialogo deve eliminare l'oggetto C++ quando non è più necessario.  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

