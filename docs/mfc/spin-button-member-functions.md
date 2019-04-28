---
title: Funzioni membro pulsante di selezione
ms.date: 11/04/2016
helpviewer_keywords:
- spin button control, methods
- CSpinButtonCtrl class [MFC], methods
ms.assetid: a08a26fd-b803-4cbe-a509-395fa357d057
ms.openlocfilehash: 5ad6f529762e77e1cf1c00f41eea0add5d196fbb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62307263"
---
# <a name="spin-button-member-functions"></a>Funzioni membro pulsante di selezione

Sono disponibili diverse funzioni membro per il controllo di selezione ([CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md)). Usare queste funzioni per modificare gli attributi seguenti del pulsante di selezione.

- **Accelerazione** è possibile regolare la frequenza in cui cambia la posizione quando l'utente tiene premuto il pulsante freccia. Per lavorare con accelerazione, usare il [funzioni membro SetAccel](../mfc/reference/cspinbuttonctrl-class.md#setaccel) e [GetAccel](../mfc/reference/cspinbuttonctrl-class.md#getaccel) funzioni membro.

- **Base** è possibile modificare la base (10 o 16) consente di visualizzare la posizione nella barra del titolo della finestra buddy. Per usare la base, usare il [GetBase](../mfc/reference/cspinbuttonctrl-class.md#getbase) e [SetBase](../mfc/reference/cspinbuttonctrl-class.md#setbase) funzioni membro.

- **Finestra di amico** puoi impostare dinamicamente le finestra buddy. Per eseguire una query o cambiare quale controllo è la finestra buddy, usare il [funzioni membro GetBuddy](../mfc/reference/cspinbuttonctrl-class.md#getbuddy) e [SetBuddy](../mfc/reference/cspinbuttonctrl-class.md#setbuddy) funzioni membro.

- **Posizione** è possibile eseguire query e modificare la posizione. Per utilizzare direttamente la posizione, usare il [GetPos](../mfc/reference/cspinbuttonctrl-class.md#getpos) e [funzione membro SetPos](../mfc/reference/cspinbuttonctrl-class.md#setpos) funzioni membro. Poiché la didascalia del controllo buddy sia stato modificato (ad esempio, nel caso che il controllo correlato è un controllo di modifica), `GetPos` recupera la didascalia corrente e adatta la posizione di conseguenza.

- **Intervallo** è possibile modificare le posizioni minime e massime per il pulsante di selezione. Per impostazione predefinita, il valore massimo è impostato su 0 e il valore minimo è impostato su 100. Poiché il valore massimo predefinito è minore del valore minimo predefinito, le azioni dei pulsanti freccia è poco intuitivo. In genere, si imposterà l'intervallo usando il [SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) funzione membro. Per eseguire una query sull'intervallo, utilizzare [GetRange](../mfc/reference/cspinbuttonctrl-class.md#getrange).

## <a name="see-also"></a>Vedere anche

[Uso di CSpinButtonCtrl](../mfc/using-cspinbuttonctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
