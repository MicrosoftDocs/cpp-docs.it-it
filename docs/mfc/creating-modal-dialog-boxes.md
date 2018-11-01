---
title: Creazione di finestre di dialogo modali
ms.date: 11/04/2016
helpviewer_keywords:
- modal dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- MFC dialog boxes [MFC], modal
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
ms.openlocfilehash: eb9aab7e8579fbbbfdf5d0f2dca9b6e6abea0066
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50657339"
---
# <a name="creating-modal-dialog-boxes"></a>Creazione di finestre di dialogo modali

Per creare una finestra di dialogo modale, chiamare uno dei due costruttori pubblici dichiarati nel [CDialog](../mfc/reference/cdialog-class.md). Quindi, chiamare il metodo dell'oggetto finestra di dialogo [DoModal](../mfc/reference/cdialog-class.md#domodal) funzione membro per visualizzare la finestra di dialogo e gestirne l'interazione finché l'utente sceglie OK o Annulla. È la gestione tramite `DoModal` a rendere modale la finestra di dialogo. Per le finestre di dialogo modali `DoModal` carica la risorsa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

