---
title: Creazione di finestre di dialogo modali
ms.date: 11/04/2016
helpviewer_keywords:
- modal dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- MFC dialog boxes [MFC], modal
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
ms.openlocfilehash: ed0fe3b7ef8aeddea01f573bfe8e1c01a6b5b443
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685681"
---
# <a name="creating-modal-dialog-boxes"></a>Creazione di finestre di dialogo modali

Per creare una finestra di dialogo modale, chiamare uno dei due costruttori pubblici dichiarati in [CDialog](../mfc/reference/cdialog-class.md). Chiamare quindi la funzione membro [DoModal](../mfc/reference/cdialog-class.md#domodal) dell'oggetto finestra di dialogo per visualizzare la finestra di dialogo e gestirne l'interazione fino a quando l'utente non sceglie OK o Annulla. È la gestione tramite `DoModal` a rendere modale la finestra di dialogo. Per le finestre di dialogo modali `DoModal` carica la risorsa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)
