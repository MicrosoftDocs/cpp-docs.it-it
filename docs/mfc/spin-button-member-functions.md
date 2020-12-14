---
description: 'Altre informazioni su: funzioni membro pulsante di selezione'
title: Funzioni membro pulsante di selezione
ms.date: 11/04/2016
helpviewer_keywords:
- spin button control, methods
- CSpinButtonCtrl class [MFC], methods
ms.assetid: a08a26fd-b803-4cbe-a509-395fa357d057
ms.openlocfilehash: 6a03ab33d29634ed85d807eb5b51edfdef310d65
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216834"
---
# <a name="spin-button-member-functions"></a>Funzioni membro pulsante di selezione

Sono disponibili diverse funzioni membro per il controllo di selezione ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)). Usare queste funzioni per modificare gli attributi seguenti del pulsante di selezione.

- **Accelerazione** È possibile regolare la velocità di modifica della posizione quando l'utente preme il pulsante freccia. Per lavorare con l'accelerazione, usare le funzioni membro [SetAccel](../mfc/reference/cspinbuttonctrl-class.md#setaccel) e [GetAccel](../mfc/reference/cspinbuttonctrl-class.md#getaccel) .

- Di **base** È possibile modificare la base (10 o 16) utilizzata per visualizzare la posizione nella didascalia della finestra di Buddy. Per lavorare con la base, usare le funzioni membro [getBase](../mfc/reference/cspinbuttonctrl-class.md#getbase) e [sebase](../mfc/reference/cspinbuttonctrl-class.md#setbase) .

- **Finestra di Buddy** È possibile impostare dinamicamente la finestra di Buddy. Per eseguire una query o modificare il controllo che corrisponde alla finestra di Buddy, usare le funzioni membro [GetBuddy](../mfc/reference/cspinbuttonctrl-class.md#getbuddy) e [seBuddy](../mfc/reference/cspinbuttonctrl-class.md#setbuddy) .

- **Posizione** È possibile eseguire una query e modificare la posizione. Per lavorare direttamente con position, usare le funzioni membro [GetPos](../mfc/reference/cspinbuttonctrl-class.md#getpos) e [SetPos](../mfc/reference/cspinbuttonctrl-class.md#setpos) . Poiché è possibile che la didascalia del controllo buddy sia stata modificata (ad esempio, nel caso in cui l'amico sia un controllo di modifica), `GetPos` Recupera la didascalia corrente e regola la posizione di conseguenza.

- **Intervallo** È possibile modificare le posizioni massime e minime per il pulsante di selezione. Per impostazione predefinita, il valore massimo è impostato su 0 e il valore minimo è impostato su 100. Poiché il valore massimo predefinito è inferiore al valore minimo predefinito, le azioni dei pulsanti freccia sono intuitive. In genere, l'intervallo viene impostato utilizzando la funzione membro [SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) . Per eseguire una query sull'intervallo, utilizzare [GetRange](../mfc/reference/cspinbuttonctrl-class.md#getrange).

## <a name="see-also"></a>Vedi anche

[Utilizzo di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
