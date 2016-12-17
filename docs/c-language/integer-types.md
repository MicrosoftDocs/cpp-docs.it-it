---
title: "Tipi Integer | Microsoft Docs"
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
  - "costanti Integer"
  - "tipo di dati Integer, tipi Integer in C++"
  - "tipi Integer"
  - "Integer, tipi"
ms.assetid: c8926a5e-0e98-4e37-9b05-ce97961379bd
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi Integer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

A ogni costante Integer viene assegnato un tipo in base al valore e al modo in cui viene espresso.  È possibile imporre a qualsiasi costante Integer il tipo **long** aggiungendo la lettera **l** o **L** alla fine della costante; è possibile imporle il tipo `unsigned` aggiungendo **u** o **U** al valore.  La lettera minuscola **l** può essere confusa con la cifra 1 e deve essere evitata.  Di seguito alcuni formati di costanti **long** Integer:  
  
```  
/* Long decimal constants */  
10L  
79L  
  
/* Long octal constants */  
012L  
0115L  
  
/* Long hexadecimal constants */  
0xaL or 0xAL  
0X4fL or 0x4FL  
  
/* Unsigned long decimal constant */  
776745UL  
778866LU  
```  
  
 Il tipo assegnato a una costante dipende dal valore che la costante rappresenta.  Il valore di una costante deve essere compreso tra i valori rappresentabili per il tipo.  Il tipo di una costante determina quali conversioni vengono eseguite quando la costante viene utilizzata in un'espressione o quando il segno meno \(**–**viene applicato.  In questo elenco vengono riepilogate le regole di conversione per le costanti Integer.  
  
-   Il tipo di una costante decimale senza un suffisso è `int`, **long int** o **unsigned long int**.  Il primo di questi tre tipi in cui può essere rappresentato il valore della costante è il tipo assegnato alla costante.  
  
-   Il tipo assegnato a costanti ottali e esadecimali senza suffissi è `int`, `unsigned int`, **long int** o **unsigned long int** a seconda della dimensione della costante.  
  
-   Il tipo assegnato alle costanti con un suffisso **u** o **U** è **unsigned int** o **unsigned long int** in base alla rispettiva dimensione.  
  
-   Il tipo assegnato alle costanti con un suffisso **l** o **L** è **long int** o **unsigned long int** in base alla rispettiva dimensione.  
  
-   Il tipo assegnato alle costanti con un suffisso **u** o **U** e **l** o **L** è **unsigned long int**.  
  
## Vedere anche  
 [Costanti Integer C](../c-language/c-integer-constants.md)