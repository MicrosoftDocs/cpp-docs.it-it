---
title: "Overflow. | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VB_E_OVERFLOW"
  - "vs.message.0x800A0097"
ms.assetid: 632387b9-be9c-4744-bcc5-842c45582347
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Overflow.
Un'assegnazione ha superato le limitazioni della destinazione dell'assegnazione.  Generalmente questo errore si verifica quando è vera una delle seguenti condizioni:  
  
-   Il risultato di un'assegnazione, di un calcolo o di una conversione del tipo di dati è troppo grande per essere rappresentato all'interno dell'intervallo dei valori consentiti per quel tipo di variabile.  
  
-   Un'assegnazione a una proprietà supera il valore massimo accettabile dalla proprietà.  
  
-   Si tenta di utilizzare un numero in un calcolo e tale numero viene convertito in un Integer, ma il risultato è maggiore di un Integer.  
  
### Per correggere l'errore  
  
1.  Assegnare il valore a una variabile di un tipo che può contenere un intervallo di valori più esteso.  
  
     \-oppure\-  
  
     Assicurarsi che l'assegnazione rientri nell'intervallo valido per la proprietà per cui è stata eseguita.