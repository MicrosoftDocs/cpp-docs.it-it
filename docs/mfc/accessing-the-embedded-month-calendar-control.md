---
description: 'Altre informazioni su: accesso al controllo calendario mensile incorporato'
title: Accesso al controllo calendario mensile incorporato
ms.date: 11/04/2016
helpviewer_keywords:
- DateTimePicker control [MFC], accessing month calendar
- CDateTimeCtrl class [MFC], accessing embedded control
- month calendar controls [MFC], embedded in date/time picker
- CMonthCalCtrl class [MFC], changing the font
- month calendar controls [MFC], changing the font
- DateTimePicker control [MFC]
ms.assetid: 355e97ed-cf81-4df3-a2f8-9ddbbde93227
ms.openlocfilehash: 35c715cdd84bd7921883db530c8cf36e8e5cf07e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169450"
---
# <a name="accessing-the-embedded-month-calendar-control"></a>Accesso al controllo calendario mensile incorporato

È possibile accedere all'oggetto del controllo calendario mensile incorporato dall' `CDateTimeCtrl` oggetto con una chiamata alla funzione membro [GetMonthCalCtrl](reference/cdatetimectrl-class.md#getmonthcalctrl) .

> [!NOTE]
> Il controllo calendario mensile incorporato viene utilizzato solo quando il controllo selezione data e ora non dispone del set di stili **DTS_UPDOWN** .

Ciò è utile se si desidera modificare determinati attributi prima che il controllo incorporato venga visualizzato. A tale scopo, gestire la notifica di **DTN_DROPDOWN** , recuperare il controllo di calendario mensile (usando [CDateTimeCtrl:: GetMonthCalCtrl](reference/cdatetimectrl-class.md#getmonthcalctrl)) e apportare le modifiche. Sfortunatamente, il controllo calendario mensile non è persistente.

In altre parole, quando l'utente richiede la visualizzazione del controllo calendario mensile, viene creato un nuovo controllo calendario mensile (prima della notifica **DTN_DROPDOWN** ). Il controllo viene eliminato definitivamente (dopo la notifica **DTN_CLOSEUP** ) quando viene rimosso dall'utente. Ciò significa che qualsiasi attributo che si modifica prima che il controllo incorporato venga visualizzato, viene perso quando il controllo incorporato viene chiuso.

Nell'esempio seguente viene illustrata questa procedura, utilizzando un gestore per la notifica **DTN_DROPDOWN** . Il codice modifica il colore di sfondo del controllo calendario mensile, con una chiamata a [SetMonthCalColor](reference/cdatetimectrl-class.md#setmonthcalcolor), in grigio. Il codice è indicato di seguito:

[!code-cpp[NVC_MFCControlLadenDialog#5](codesnippet/cpp/accessing-the-embedded-month-calendar-control_1.cpp)]

Come indicato in precedenza, tutte le modifiche alle proprietà del controllo calendario mensile vengono perse, con due eccezioni, quando il controllo incorporato viene chiuso. La prima eccezione, che riguarda i colori del controllo calendario mensile, è già stata discussa. La seconda eccezione è il tipo di carattere utilizzato dal controllo calendario mensile. È possibile modificare il tipo di carattere predefinito effettuando una chiamata a [CDateTimeCtrl:: SetMonthCalFont](reference/cdatetimectrl-class.md#setmonthcalfont), passando l'handle di un tipo di carattere esistente. Nell'esempio seguente (dove `m_dtPicker` è l'oggetto controllo data e ora) viene illustrato un possibile metodo:

[!code-cpp[NVC_MFCControlLadenDialog#6](codesnippet/cpp/accessing-the-embedded-month-calendar-control_2.cpp)]

Una volta modificato il tipo di carattere, con una chiamata a `CDateTimeCtrl::SetMonthCalFont`, il nuovo tipo di carattere viene archiviato e utilizzato la volta successiva in cui deve essere visualizzato un calendario mensile.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CDateTimeCtrl](using-cdatetimectrl.md)<br/>
[Controlli](controls-mfc.md)
