---
description: 'Altre informazioni su: creazione di finestre di dialogo modali'
title: Creazione di finestre di dialogo modali
ms.date: 11/04/2016
helpviewer_keywords:
- modal dialog boxes [MFC], creating
- MFC dialog boxes [MFC], creating
- MFC dialog boxes [MFC], modal
ms.assetid: 26c7a68c-79f6-4862-a5a8-6024984644d2
ms.openlocfilehash: 82fa10c65161df98ea3d377e302c0fb787feb14c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309797"
---
# <a name="creating-modal-dialog-boxes"></a>Creazione di finestre di dialogo modali

Per creare una finestra di dialogo modale, chiamare uno dei due costruttori pubblici dichiarati in [CDialog](reference/cdialog-class.md). Chiamare quindi la funzione membro [DoModal](reference/cdialog-class.md#domodal) dell'oggetto finestra di dialogo per visualizzare la finestra di dialogo e gestirne l'interazione fino a quando l'utente non sceglie OK o Annulla. È la gestione tramite `DoModal` a rendere modale la finestra di dialogo. Per le finestre di dialogo modali `DoModal` carica la risorsa finestra di dialogo.

## <a name="see-also"></a>Vedi anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
