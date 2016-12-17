---
title: "Accesso al controllo calendario mensile incorporato | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDateTimeCtrl (classe), accesso al controllo incorporato"
  - "CMonthCalCtrl (classe), modifica del tipo di carattere"
  - "DateTimePicker (controllo) [MFC]"
  - "DateTimePicker (controllo) [MFC], accesso al calendario mensile"
  - "controlli calendario mensile, modifica del tipo di carattere"
  - "controlli calendario mensile, incorporati nella selezione data/ora"
ms.assetid: 355e97ed-cf81-4df3-a2f8-9ddbbde93227
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accesso al controllo calendario mensile incorporato
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'oggetto incorporato di controllo del calendario mensile è accessibile dall'oggetto `CDateTimeCtrl` con una chiamata alla funzione membro [GetMonthCalCtrl](../Topic/CDateTimeCtrl::GetMonthCalCtrl.md).  
  
> [!NOTE]
>  Il controllo del calendario mensile incorporato viene utilizzato solo quando il controllo della selezione data e ora non ha impostato il set di stili **DTS\_UPDOWN** .  
  
 Ciò è utile se si desidera modificare determinati attributi prima che venga visualizzato il controllo incorporato.  A tale scopo, gestire la notifica di **DTN\_DROPDOWN**, recuperare il controllo del calendario mensile \(utilizzando [CDateTimeCtrl::GetMonthCalCtrl](../Topic/CDateTimeCtrl::GetMonthCalCtrl.md)\) e apportare le modifiche.  Sfortunatamente, il controllo del calendario mensile non è persistente.  
  
 In altre parole, quando l'utente richiede la visualizzazione del controllo del calendario mensile, viene creato un nuovo controllo del calendario mensile \(prima della notifica di **DTN\_DROPDOWN**\).  Il controllo viene distrutto \(dopo la notifica di **DTN\_CLOSEUP**\) una volta chiuso dall'utente.  Ciò significa che qualsiasi attributo che si va a modificare, prima che venga visualizzato il controllo incorporato, viene perso quando il controllo incorporato viene chiuso.  
  
 Nell'esempio seguente viene illustrata questa procedura, utilizzando un gestore per la notifica di **DTN\_DROPDOWN**.  Il codice modifica il colore di sfondo del controllo del calendario mensile in grigio con una chiamata a [SetMonthCalColor](../Topic/CDateTimeCtrl::SetMonthCalColor.md).  Il codice è indicato di seguito:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#5](../mfc/codesnippet/CPP/accessing-the-embedded-month-calendar-control_1.cpp)]  
  
 Come indicato in precedenza, tutte le modifiche alle proprietà del controllo del calendario mensile vengono perse, con due eccezioni, quando il controllo incorporato viene chiuso.  La prima eccezione, i colori del controllo del calendario mensile, è già stata discussa.  La seconda eccezione è il carattere utilizzato dal controllo del calendario mensile.  È possibile modificare il tipo di carattere predefinito eseguendo una chiamata a [CDateTimeCtrl::SetMonthCalFont](../Topic/CDateTimeCtrl::SetMonthCalFont.md), passando l'handle di un tipo di carattere esistente.  Nell'esempio seguente \(dove `m_dtPicker` è l'oggetto di controllo di data e ora\) viene illustrato un possibile metodo:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#6](../mfc/codesnippet/CPP/accessing-the-embedded-month-calendar-control_2.cpp)]  
  
 Una volta che il tipo di carattere è stata modificato, con una chiamata a `CDateTimeCtrl::SetMonthCalFont`, viene memorizzato il nuovo tipo di carattere ed esso viene utilizzato la volta successiva in cui deve essere visualizzato un calendario mensile.  
  
## Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)