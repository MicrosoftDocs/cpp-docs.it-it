---
title: Chiusura della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], closing
- dialog boxes [MFC], closing
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
ms.openlocfilehash: ef6cdaeb4cb0d7537cda980a1d2c483c53c8dc9d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217974"
---
# <a name="closing-the-dialog-box"></a>Chiusura della finestra di dialogo

Una finestra di dialogo modale si chiude quando l'utente sceglie uno dei pulsanti, in genere il pulsante OK o il pulsante Annulla. Se si sceglie il pulsante OK o Annulla, Windows invierà all'oggetto finestra di dialogo un **BN_CLICKED** messaggio di notifica del controllo con l'ID del pulsante, ovvero **IDOK** o **IDCANCEL**. `CDialog`fornisce funzioni di gestore predefinite per questi messaggi: `OnOK` e `OnCancel` . I gestori predefiniti chiamano la `EndDialog` funzione membro per chiudere la finestra di dialogo. È anche possibile chiamare `EndDialog` dal proprio codice. Per ulteriori informazioni, vedere la funzione membro [EndDialog](reference/cdialog-class.md#enddialog) della classe `CDialog` nelle informazioni di *riferimento su MFC*.

Per disporre la chiusura e l'eliminazione di una finestra di dialogo non modale, eseguire l'override `PostNcDestroy` e richiamare l' **`delete`** operatore sull'indicatore di misura **`this`** . [Eliminando la finestra di dialogo](destroying-the-dialog-box.md) viene illustrato cosa accade successivamente.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
