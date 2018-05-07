---
title: Creazione di finestre di dialogo modale | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- modal dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- MFC dialog boxes [MFC], modal
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2a8bc947dbaf9cecc680f3cdbd8e6b429d2bcd5f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-modal-dialog-boxes"></a>Creazione di finestre di dialogo modali
Per creare una finestra di dialogo modale, chiamare uno dei due costruttori pubblici dichiarati in [CDialog](../mfc/reference/cdialog-class.md). Successivamente, chiamare l'oggetto finestra di dialogo [DoModal](../mfc/reference/cdialog-class.md#domodal) funzione membro per visualizzare la finestra di dialogo e gestirne l'interazione finché l'utente sceglie OK o Annulla. È la gestione tramite `DoModal` a rendere modale la finestra di dialogo. Per le finestre di dialogo modali `DoModal` carica la risorsa finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

