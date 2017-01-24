---
title: "Utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora | Microsoft Docs"
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
  - "CDateTimeCtrl (classe), stili di visualizzazione"
  - "DateTimePicker (controllo) [MFC]"
  - "DateTimePicker (controllo) [MFC], stili di visualizzazione"
ms.assetid: 7d577f03-6ca0-4597-9093-50b78f304719
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di stringhe di formato personalizzate in un controllo selezione data e ora
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, i controlli di selezione data e ora sono disponibili tre tipi di formato \(ogni formato corrispondente a uno stile univoco\) per visualizzare la data corrente o di istanza m:  
  
-   **DTS\_LONGDATEFORMAT** visualizzare la data nel formato esteso, producendo l'output come "mercoledì 3 gennaio 2000".  
  
-   **DTS\_SHORTDATEFORMAT** visualizzare la data nel formato breve, producendo l'output come "1\/3\/00 ".  
  
-   **DTS\_TIMEFORMAT** visualizzare l'ora in formato lungo, producendo l'output come "5:31: 42 PM".  
  
 Tuttavia, è possibile personalizzare l'aspetto di data o l'ora utilizzando una stringa di formato personalizzata.  Questa stringa personalizzata è costituito dai caratteri di formato esistenti, i caratteri di nonformat, o una combinazione di entrambi.  Una volta che la stringa personalizzata viene compilata, viene eseguita una chiamata a [CDateTimeCtrl::SetFormat](../Topic/CDateTimeCtrl::SetFormat.md) che passa nella stringa personalizzata.  Il controllo di selezione data e ora quindi visualizzare il valore corrente utilizzando la stringa di formato personalizzata.  
  
 Il seguente codice di esempio \(dove `m_dtPicker` è l'oggetto di `CDateTimeCtrl` \) viene illustrata una possibile soluzione:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#7](../mfc/codesnippet/CPP/using-custom-format-strings-in-a-date-and-time-picker-control_1.cpp)]  
  
 Oltre alle stringhe di formato personalizzate, i controlli di selezione data e ora supportano inoltre [campi callback](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
## Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)