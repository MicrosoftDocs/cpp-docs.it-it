---
title: "Errore del compilatore C2015 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2015"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2015"
ms.assetid: 8f40af0a-3a5a-4d6a-8ed7-125966e6bfed
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C2015
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

troppi caratteri nella costante  
  
 Una costante carattere contiene più di due caratteri.  Il limite è di un carattere per le costanti carattere standard e di due per le costanti a caratteri estesi.  
  
 Una sequenza di caratteri escape, come \\t, viene convertita in un carattere singolo.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C2015:  
  
```  
// C2015.cpp  
// compile with: /c  
  
char test1 = 'error';   // C2015  
char test2 = 'e';   // OK  
```  
  
## Esempio  
 L'errore C2015 può verificarsi anche quando si utilizza un'estensione Microsoft, dove le costanti carattere vengono convertite in Integer.  Il seguente codice di esempio genera l'errore C2015:  
  
```  
// C2015b.cpp  
#include <stdio.h>  
  
int main()   
{  
    int a = 'abcde';   // C2015  
  
    int b = 'a';   // 'a' = ascii 0x61  
    printf_s("%x\n", b);  
}  
```