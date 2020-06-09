---
title: Chiusura della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], closing
- dialog boxes [MFC], closing
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
ms.openlocfilehash: a695a8e331eb8a4f22394deb65857bf93ecab41e
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617203"
---
# <a name="closing-the-dialog-box"></a>Chiusura della finestra di dialogo

Una finestra di dialogo modale si chiude quando l'utente sceglie uno dei pulsanti, in genere il pulsante OK o il pulsante Annulla. Se si sceglie il pulsante OK o Annulla, Windows invierà all'oggetto finestra di dialogo un **BN_CLICKED** messaggio di notifica del controllo con l'ID del pulsante, ovvero **IDOK** o **IDCANCEL**. `CDialog`fornisce funzioni di gestore predefinite per questi messaggi: `OnOK` e `OnCancel` . I gestori predefiniti chiamano la `EndDialog` funzione membro per chiudere la finestra di dialogo. È anche possibile chiamare `EndDialog` dal proprio codice. Per ulteriori informazioni, vedere la funzione membro [EndDialog](reference/cdialog-class.md#enddialog) della classe `CDialog` nelle informazioni di *riferimento su MFC*.

Per disporre la chiusura e l'eliminazione di una finestra di dialogo non modale, eseguire l'override `PostNcDestroy` e richiamare l'operatore **Delete** sul puntatore **this** . [Eliminando la finestra di dialogo](destroying-the-dialog-box.md) viene illustrato cosa accade successivamente.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
