---
title: Creazione di finestre di dialogo modali | Microsoft Docs
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
ms.openlocfilehash: 3fcc449a376091c07a7fb26b81fe19752bc3bcd6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46376644"
---
# <a name="creating-modal-dialog-boxes"></a>Creazione di finestre di dialogo modali

Per creare una finestra di dialogo modale, chiamare uno dei due costruttori pubblici dichiarati nel [CDialog](../mfc/reference/cdialog-class.md). Quindi, chiamare il metodo dell'oggetto finestra di dialogo [DoModal](../mfc/reference/cdialog-class.md#domodal) funzione membro per visualizzare la finestra di dialogo e gestirne l'interazione finché l'utente sceglie OK o Annulla. È la gestione tramite `DoModal` a rendere modale la finestra di dialogo. Per le finestre di dialogo modali `DoModal` carica la risorsa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

