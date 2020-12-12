---
description: 'Altre informazioni su: uso di CSpinButtonCtrl'
title: Utilizzo di CSpinButtonCtrl
ms.date: 11/04/2016
helpviewer_keywords:
- up-down controls [MFC], spin button control
- up-down controls
- spin button control
- CSpinButtonCtrl class [MFC], using
ms.assetid: a91db36b-e11e-42ef-8e89-51915cc486d2
ms.openlocfilehash: ef596c4f194eb60fc8548231293d4570456d2f54
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97271590"
---
# <a name="using-cspinbuttonctrl"></a>Utilizzo di CSpinButtonCtrl

Il controllo *pulsante di selezione* (noto anche come controllo di *scorrimento* ) fornisce una coppia di frecce su cui un utente può fare clic per modificare un valore. Questo valore è noto come *posizione corrente*. La posizione rimane nell'intervallo del pulsante di selezione. Quando l'utente fa clic sulla freccia rivolta verso l'alto, la posizione si sposta verso il valore massimo; Quando l'utente fa clic sulla freccia verso il basso, la posizione viene spostata verso il minimo.

Il controllo pulsante di selezione è rappresentato in MFC dalla classe [CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md) .

> [!NOTE]
> Per impostazione predefinita, l'intervallo per il pulsante di selezione è impostato su zero (0) e il valore minimo è impostato su 100. Poiché il valore massimo è minore del valore minimo, facendo clic sulla freccia in su si diminuisce la posizione e si fa clic sulla freccia verso il basso per aumentarlo. Usare [CSpinButtonCtrl:: SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) per modificare questi valori.

In genere, la posizione corrente viene visualizzata in un controllo complementare. Il controllo complementare è noto come *finestra di Buddy*. Per un'illustrazione di un controllo pulsante di selezione, vedere [informazioni sui controlli Up-Down](/windows/win32/Controls/up-down-controls) nel Windows SDK.

Per creare un controllo di selezione e una finestra di dialogo di controllo di modifica, in Visual Studio, trascinare un controllo di modifica nella finestra o nella finestra di dialogo, quindi trascinare un controllo di selezione. Selezionare il controllo di selezione e impostare le proprietà **Buddy automatico** e **set Integer Buddy** su **true**. Impostare anche la proprietà **Alignment** ; L' **allineamento a destra** è più tipico. Con queste impostazioni, il controllo di modifica viene impostato come finestra di Buddy perché precede direttamente il controllo di modifica nell'ordine di tabulazione. Il controllo di modifica Visualizza numeri interi e il controllo di selezione è incorporato sul lato destro del controllo di modifica. Facoltativamente, è possibile impostare l'intervallo valido del controllo di selezione usando il metodo [CSpinButtonCtrl:: SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) . Non sono necessari gestori eventi per la comunicazione tra il controllo di selezione e la finestra di Buddy perché scambiano direttamente i dati. Se si usa un controllo di rotazione per altri scopi, ad esempio per passare da una sequenza di finestre o finestre di dialogo, aggiungere un gestore per il messaggio di UDN_DELTAPOS ed eseguire l'azione personalizzata.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Stili di un pulsante di selezione](../mfc/spin-button-styles.md)

- [Funzioni membro pulsante di selezione](../mfc/spin-button-member-functions.md)

## <a name="see-also"></a>Vedi anche

[Controlli](../mfc/controls-mfc.md)
