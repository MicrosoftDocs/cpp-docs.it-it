---
title: "Valori letterali stringa C | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "stringhe letterali, C"
  - "stringhe letterali, sintassi"
  - "stringhe [C++], stringhe letterali"
ms.assetid: 4b05523e-49a2-4900-b21a-754350af3328
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Valori letterali stringa C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un valore "letterale stringa" è una sequenza di caratteri dal set di caratteri di origine racchiusa tra virgolette doppie \(**" "**\).  I valori letterali stringa sono utilizzati per rappresentare una sequenza di caratteri che insieme formano una stringa a terminazione null.  È necessario aggiungere sempre prefissi ai valori letterali stringa a caratteri wide con la lettera **L**.  
  
## Sintassi  
 *string\-literal*:  
 **"** *s\-char\-sequence*  opt               **"**  
  
 **L"** *s\-char\-sequence*  opt               **"**  
  
 *s\-char\-sequence*:  
 *s\-char*  
  
 *s\-char\-sequence s\-char*  
  
 *s\-char*:  
 qualsiasi membro del set di caratteri di origine eccetto le virgolette doppie \("\), la barra rovesciata \(\\\) o il carattere di nuova riga  
  
 *sequenza\-escape*  
  
 Nell'esempio seguente viene riportato un valore letterale stringa semplice:  
  
```  
char *amessage = "This is a string literal.";  
```  
  
 Tutti i codici di escape elencati nella tabella [Sequenze di escape](../c-language/escape-sequences.md) sono validi nei valori letterali stringa.  Per rappresentare le virgolette doppie in un valore letterale stringa, utilizzare la sequenza di escape **\\"**.  La virgoletta singola \(**'**\) può essere rappresentata senza una sequenza di escape.  La barra rovesciata \(**\\**\) deve essere seguita da una seconda barra rovesciata \(**\\\\**\) quando viene visualizzata in una stringa.  Quando viene visualizzato un carattere di barra rovesciata alla fine di una riga, viene sempre interpretato come un carattere di continuazione di riga.  
  
## Vedere anche  
 [Elementi di C](../c-language/elements-of-c.md)