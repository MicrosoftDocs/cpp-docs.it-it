---
title: "Dimensioni di tipi e variabili nell&#39;assembly inline | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "length"
  - "Type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "assembly inline, operatori"
  - "LENGTH (operatore)"
  - "dimensione"
  - "SIZE (operatore)"
  - "dimensione, recupero in assembly inline"
  - "TYPE (operatore)"
  - "variabili, lunghezza"
  - "variabili, dimensione"
  - "variabili, tipo"
ms.assetid: b62c2f2b-a7ad-4145-bae4-d890db86d348
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Dimensioni di tipi e variabili nell&#39;assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Il  **lunghezza**,  **dimensione**, e  **tipo** operatori hanno un significato limitato in assembly inline.  Non possono essere utilizzate in qualsiasi con la  `DUP`operatore \(perché non è possibile definire dati agli operatori o le direttive MASM\).  Ma è possibile utilizzarli per trovare le dimensioni delle variabili C o C\+\+ o tipi:  
  
-   Il  **lunghezza** operatore può restituire il numero di elementi in una matrice.  Restituisce il valore 1 per le variabili di matrice non.  
  
-   Il  **dimensione** operatore può restituire la dimensione di una variabile C o C\+\+.  Dimensione di una variabile è il prodotto della sua  **lunghezza** e  **tipo di**.  
  
-   Il  **tipo** operatore può restituire la dimensione di una variabile o di tipo C o C\+\+.  Se la variabile è una matrice,  **tipo** restituisce la dimensione di un singolo elemento della matrice.  
  
 Ad esempio, se il programma dispone di un elemento 8  `int`matrice,  
  
```  
int arr[8];  
```  
  
 le seguenti espressioni di C e assembly di ottenere la dimensione di  `arr`e i relativi elementi.  
  
|ASM|C|Dimensioni|  
|---------|-------|----------------|  
|**LUNGHEZZA** arr|`sizeof`\(arr\)\/`sizeof`\(arr\[0\]\)|8|  
|**DIMENSIONE** arr|`sizeof`\(arr\)|32|  
|**TYPE** arr|`sizeof`\(arr\[0\]\)|4|  
  
 **FINE specifico di Microsoft**  
  
## Vedere anche  
 [Utilizzo di linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)