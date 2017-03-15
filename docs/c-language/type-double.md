---
title: "Tipo double | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "double (tipo di dati)"
  - "mantisse, variabili a virgola mobile"
  - "portabilità [C++], tipo double"
  - "tipo double"
ms.assetid: 17c85b24-1475-4d41-a03c-ddf2d6561d34
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Tipo double
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I valori a doppia precisione con tipo double sono costituiti da 8 byte.  Il formato è simile al formato di tipo float con la differenza che il numero viene rappresentato con un esponente a 11 bit in eccesso 1023 e con una mantissa a 52 bit, più 1 bit più significativi implicito.  Questo formato consente di rappresentare un intervallo compreso approssimativamente tra 1,7E–308 e 1,7E\+308 per il tipo double.  
  
 **Sezione specifica Microsoft**  
  
 Il tipo double contiene 64 bit: 1 per il segno, 11 per l'esponente e 52 per la mantissa.  L'intervallo è \+\/– 1,7E308 con almeno 15 cifre di precisione.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md)