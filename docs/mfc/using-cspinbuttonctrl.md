---
title: Utilizzo di CSpinButtonCtrl
ms.date: 11/04/2016
f1_keywords:
- CSpinButtonCtrl
helpviewer_keywords:
- up-down controls [MFC], spin button control
- up-down controls
- spin button control
- CSpinButtonCtrl class [MFC], using
ms.assetid: a91db36b-e11e-42ef-8e89-51915cc486d2
ms.openlocfilehash: 6bb663b6ff9b9b039bd774f6e607c7acdb1c4b11
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57261375"
---
# <a name="using-cspinbuttonctrl"></a>Utilizzo di CSpinButtonCtrl

Il *casella di selezione* controllo (noto anche come un' *giù* controllo) offre una coppia di frecce su cui un utente può fare clic per modificare un valore. Questo valore è noto come il *posizione corrente*. La posizione rimane all'interno dell'intervallo del pulsante di selezione. Quando l'utente fa clic sulla freccia in su, la posizione viene spostato verso il valore massimo; e quando l'utente fa clic sulla freccia in giù, la posizione viene spostato verso il valore minimo.

Il controllo pulsante di selezione è rappresentato in MFC per la [CSpinButtonCtrl](../mfc/reference/cspinbuttonctrl-class.md) classe.

> [!NOTE]
>  Per impostazione predefinita, l'intervallo per il pulsante di selezione ha il valore massimo impostato su zero (0) e il valore minimo impostato su 100. Poiché il valore massimo è minore del valore minimo, facendo clic sulla freccia riduce la posizione e facendo clic sulla freccia in giù aumenta lo. Uso [CSpinButtonCtrl:: SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) per modificare questi valori.

In genere, la posizione corrente viene visualizzata in un controllo correlato. Il controllo correlato è noto come il *finestra buddy*. Per un'illustrazione di un controllo pulsante di selezione, vedere [informazioni sui controlli giù](/windows/desktop/Controls/up-down-controls) nel SDK di Windows.

Per creare un controllo di selezione e una finestra buddy controllo di modifica, in Visual Studio, trascinare un controllo di modifica nella finestra di dialogo o nella finestra e quindi trascinare un controllo di selezione. Selezionare la casella di selezione e impostare relativi **Auto Buddy** e **Set Buddy Integer** le proprietà da **True**. Impostare anche il **allineamento** proprietà. **Right Align** è più comune. Con queste impostazioni, il controllo di modifica viene impostato come finestra buddy poiché che precede immediatamente il controllo di modifica nell'ordine di tabulazione. Il controllo di modifica vengono visualizzati numeri interi e il controllo di selezione è incorporato nel lato destro del controllo di modifica. Facoltativamente, è possibile impostare l'intervallo valido della casella di selezione utilizzando la [CSpinButtonCtrl:: SetRange](../mfc/reference/cspinbuttonctrl-class.md#setrange) (metodo). Nessun gestore di eventi sono necessari per la comunicazione tra il controllo di selezione e finestra buddy poiché scambiano direttamente i dati. Se si usa un controllo di selezione per altri scopi, ad esempio, per scorrere una sequenza di finestre o finestre di dialogo, quindi aggiungere un gestore per il messaggio UDN_DELTAPOS ed eseguire l'azione personalizzata non esiste.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Stili dei pulsanti di selezione](../mfc/spin-button-styles.md)

- [Funzioni membro pulsante di selezione](../mfc/spin-button-member-functions.md)

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)
