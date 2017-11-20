---
title: Accesso di calendario mensile incorporato controllo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- DateTimePicker control [MFC], accessing month calendar
- CDateTimeCtrl class [MFC], accessing embedded control
- month calendar controls [MFC], embedded in date/time picker
- CMonthCalCtrl class [MFC], changing the font
- month calendar controls [MFC], changing the font
- DateTimePicker control [MFC]
ms.assetid: 355e97ed-cf81-4df3-a2f8-9ddbbde93227
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6c39d2ae9341a245c66d5a91b5c98cc43c682b39
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="accessing-the-embedded-month-calendar-control"></a>Accesso al controllo calendario mensile incorporato
L'oggetto di controllo di calendario mensile incorporato è possibile accedere dal `CDateTimeCtrl` oggetto con una chiamata al [GetMonthCalCtrl](../mfc/reference/cdatetimectrl-class.md#getmonthcalctrl) funzione membro.  
  
> [!NOTE]
>  Il controllo calendario mensile incorporato viene utilizzato solo quando il controllo selezione data e ora non dispone di **DTS_UPDOWN** set di stile.  
  
 Ciò è utile se si desidera modificare determinati attributi prima che il controllo incorporato venga visualizzato. A tale scopo, gestire il **DTN_DROPDOWN** notifica, recuperare il controllo calendario mensile (utilizzando [:: GetMonthCalCtrl](../mfc/reference/cdatetimectrl-class.md#getmonthcalctrl)) e apportare le modifiche. Sfortunatamente, il controllo calendario mensile non è persistente.  
  
 In altre parole, quando l'utente richiede la visualizzazione del controllo calendario mensile, viene creato un nuovo controllo calendario mensile (prima di **DTN_DROPDOWN** notifica). Il controllo viene eliminato definitivamente (dopo il **DTN_CLOSEUP** notifica) quando annullata dall'utente. Ciò significa che qualsiasi attributo che si modifica prima che il controllo incorporato venga visualizzato, viene perso quando il controllo incorporato viene chiuso.  
  
 Nell'esempio seguente viene illustrata questa procedura, utilizzando un gestore per il **DTN_DROPDOWN** notifica. Il codice modifica il colore di sfondo del controllo calendario mensile, con una chiamata a [SetMonthCalColor](../mfc/reference/cdatetimectrl-class.md#setmonthcalcolor), in grigio. Il codice è indicato di seguito:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#5](../mfc/codesnippet/cpp/accessing-the-embedded-month-calendar-control_1.cpp)]  
  
 Come indicato in precedenza, tutte le modifiche alle proprietà del controllo calendario mensile vengono perse, con due eccezioni, quando il controllo incorporato viene chiuso. La prima eccezione, che riguarda i colori del controllo calendario mensile, è già stata discussa. La seconda eccezione è il tipo di carattere utilizzato dal controllo calendario mensile. È possibile modificare il tipo di carattere predefinito eseguendo una chiamata a [CDateTimeCtrl:: SetMonthCalFont](../mfc/reference/cdatetimectrl-class.md#setmonthcalfont), passando l'handle di un tipo di carattere esistente. Nell'esempio seguente (dove `m_dtPicker` è l'oggetto controllo data e ora) viene illustrato un possibile metodo:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#6](../mfc/codesnippet/cpp/accessing-the-embedded-month-calendar-control_2.cpp)]  
  
 Una volta modificato il tipo di carattere, con una chiamata a `CDateTimeCtrl::SetMonthCalFont`, il nuovo tipo di carattere viene archiviato e utilizzato la volta successiva in cui deve essere visualizzato un calendario mensile.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

