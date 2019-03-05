---
title: Creazione di finestre di dialogo modali
ms.date: 11/04/2016
helpviewer_keywords:
- modal dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- MFC dialog boxes [MFC], modal
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
ms.openlocfilehash: 5de6eeb616f32c7b8829d827988a972e41658530
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304964"
---
# <a name="creating-modal-dialog-boxes"></a>Creazione di finestre di dialogo modali

Per creare una finestra di dialogo modale, chiamare uno dei due costruttori pubblici dichiarati nel [CDialog](../mfc/reference/cdialog-class.md). Quindi, chiamare il metodo dell'oggetto finestra di dialogo [DoModal](../mfc/reference/cdialog-class.md#domodal) funzione membro per visualizzare la finestra di dialogo e gestirne l'interazione finché l'utente sceglie OK o Annulla. È la gestione tramite `DoModal` a rendere modale la finestra di dialogo. Per le finestre di dialogo modali `DoModal` carica la risorsa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)
