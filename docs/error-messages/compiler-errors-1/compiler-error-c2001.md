---
title: "Errore del compilatore C2001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2001"
ms.assetid: 0c3a7821-d8e5-4398-ab5a-4116d46e8dda
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2001
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

nuova riga nella costante  
  
 Una costante di stringa non può continuare su una seconda riga, a meno che non si proceda come indicato di seguito.  
  
-   Terminare la prima riga con una barra rovesciata.  
  
-   Chiudere la stringa nella prima riga con le virgolette doppie e aprire la stringa sulla riga successiva con un altro segno di virgolette doppie.  
  
 Non è sufficiente terminare la prima riga con il segno \\n.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2001:  
  
```  
// C2001.cpp  
// C2001 expected  
#include <stdio.h>  
  
int main()  
{  
    printf_s("Hello,  
             world");  
    printf_s("Hello,\n  
             world");  
}  
```  
  
## Esempio  
 Gli spazi all'inizio della riga successiva dopo un carattere di continuazione di riga sono inclusi nella costante di stringa.  In nessuno degli esempi sopra riportati è incluso un segno di nuova riga nella costante di stringa.  È possibile incorporare tale segno come illustrato di seguito.  
  
```  
// C2001b.cpp  
#include <stdio.h>  
  
int main()  
{  
    printf_s("Hello,\n\  
             world");  
  
    printf_s("Hello,\  
             \nworld");  
  
    printf_s("Hello,\n"  
             "world");  
  
    printf_s("Hello,"  
             "\nworld");  
  
    printf_s("Hello,"  
             " world");  
  
    printf_s("Hello,\  
             world");  
}  
```