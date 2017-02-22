---
title: "Avviso del compilatore (livello 1) C4656 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4656"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4656"
ms.assetid: b5aaef74-2320-4345-a6ae-b813881a491c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4656
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'simbolo': tipo dati nuovo o modificato rispetto all'ultima compilazione o definito diversamente altrove  
  
 Dall'ultima compilazione riuscita, è stato modificato o aggiunto un tipo di dati che risulta pertanto nuovo nel codice sorgente.  La funzionalità Modifica e continuazione non supporta le modifiche ai tipi di dati esistenti.  
  
 L'avviso è sempre seguito dall'[errore irreversibile C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md).  Per ulteriori informazioni, vedere [Modifiche del codice supportate](../Topic/Supported%20Code%20Changes%20\(C++\).md).  
  
### Per rimuovere l'avviso senza terminare la sessione di debug corrente  
  
1.  Modificare il tipo di dati riportandolo allo stato precedente all'errore.  
  
2.  Scegliere **Applica modifiche del codice** dal menu **Debug**.  
  
### Per correggere l'errore senza modificare il codice sorgente  
  
1.  Scegliere **Termina debug** dal menu **Debug**.  
  
2.  Scegliere **Compila** dal menu **Compila**.