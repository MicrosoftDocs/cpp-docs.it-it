---
title: Chiusura della finestra di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], closing
- dialog boxes [MFC], closing
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
ms.openlocfilehash: 48ea954552b3ea9aa7193a47fc2a66d731312d77
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685376"
---
# <a name="closing-the-dialog-box"></a>Chiusura della finestra di dialogo

Una finestra di dialogo modale si chiude quando l'utente sceglie uno dei pulsanti, in genere il pulsante OK o il pulsante Annulla. Se si sceglie il pulsante OK o Annulla, Windows invierà all'oggetto finestra di dialogo un messaggio di notifica del controllo **BN_CLICKED** con l'ID del pulsante, ovvero **IDOK** o **IDCANCEL**. `CDialog` fornisce funzioni di gestore predefinite per i messaggi seguenti: `OnOK` e `OnCancel`. I gestori predefiniti chiamano la funzione membro `EndDialog` per chiudere la finestra di dialogo. È anche possibile chiamare `EndDialog` dal proprio codice. Per ulteriori informazioni, vedere la funzione membro [EndDialog](../mfc/reference/cdialog-class.md#enddialog) della classe `CDialog` nel *riferimento a MFC*.

Per disporre la chiusura e l'eliminazione di una finestra di dialogo non modale, eseguire l'override `PostNcDestroy` e richiamare l'operatore **Delete** sul puntatore **this** . [Eliminando la finestra di dialogo](../mfc/destroying-the-dialog-box.md) viene illustrato cosa accade successivamente.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)
