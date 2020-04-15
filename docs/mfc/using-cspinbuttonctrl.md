---
title: Utilizzo di CSpinButtonCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- up-down controls [MFC], spin button control
- up-down controls
- spin button control
- CSpinButtonCtrl class [MFC], using
ms.assetid: a91db36b-e11e-42ef-8e89-51915cc486d2
ms.openlocfilehash: 6f72601d3813f36e4a99b9ab04f2e9383c58df94
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366476"
---
# <a name="using-cspinbuttonctrl"></a>Utilizzo di CSpinButtonCtrl

Il controllo *pulsante* di selezione (noto anche come controllo *di scorrimento)* fornisce una coppia di frecce su cui un utente può fare clic per regolare un valore. Questo valore è noto come *posizione corrente.* La posizione rimane all'interno dell'intervallo del pulsante di selezione. Quando l'utente fa clic sulla freccia su, la posizione si sposta verso il massimo; e quando l'utente fa clic sulla freccia giù, la posizione si sposta verso il minimo.

Il controllo pulsante di selezione è rappresentato in MFC dalla classe [CSpinButtonCtrl.](../mfc/reference/cspinbuttonctrl-class.md)

> [!NOTE]
> Per impostazione predefinita, l'intervallo per il pulsante di selezione ha il valore massimo impostato su zero (0) e il valore minimo impostato su 100. Poiché il valore massimo è inferiore al valore minimo, facendo clic sulla freccia rivolta verso l'alto si riduce la posizione e facendo clic sulla freccia giù si aumenta. Utilizzare [CSpinButtonCtrl::SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) per regolare questi valori.

In genere, la posizione corrente viene visualizzata in un controllo complementare. Il controllo complementare è noto come *finestra buddy*. Per un'illustrazione di un controllo pulsante di selezione, vedere [Informazioni sui controlli di](/windows/win32/Controls/up-down-controls) scorrimento in Windows SDK.

Per creare un controllo di selezione e una finestra Buddy del controllo di modifica, in Visual Studio trascinare innanzitutto un controllo di modifica nella finestra di dialogo o nella finestra, quindi trascinare un controllo di selezione. Selezionare il controllo di selezione e impostarne le proprietà **Auto Buddy** e Set **Buddy Integer** su **True**. Impostare anche la proprietà **Alignment;** **L'allineamento a destra** è il più tipico. Con queste impostazioni, il controllo di modifica viene impostato come finestra buddy perché precede direttamente il controllo di modifica nell'ordine di tabulazione. Il controllo di modifica visualizza numeri interi e il controllo di selezione è incorporato nella parte destra del controllo di modifica. Facoltativamente, è possibile impostare l'intervallo valido del controllo di selezione utilizzando il [CSpinButtonCtrl::SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) metodo. Non sono necessari gestori eventi per comunicare tra il controllo di selezione e la finestra buddy perché si scambiano direttamente i dati. Se si utilizza un controllo di selezione per altri scopi, ad esempio per scorrere una sequenza di finestre o finestre di dialogo, aggiungere un gestore per il messaggio di UDN_DELTAPOS ed eseguire l'azione personalizzata.

## <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Stili dei pulsanti di selezione](../mfc/spin-button-styles.md)

- [Funzioni membro pulsante di selezione](../mfc/spin-button-member-functions.md)

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)
