---
title: "Istruzione return in chiusura del programma (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di dati [C++], tipi restituiti dalla funzione"
  - "tipi restituiti dalla funzione, return (istruzione)"
  - "return (parola chiave) [C++], sintassi"
ms.assetid: 66d002ab-5625-4b68-8446-71e1b8fcdbd8
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione return in chiusura del programma (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dal punto di vista funzionale, la pubblicazione dell'istruzione `return` da **main** è equivalente alla chiamata della funzione **exit**.  Si consideri l'esempio seguente:  
  
```  
// return_statement.cpp  
#include <stdlib.h>  
int main()  
{  
    exit( 3 );  
    return 3;  
}  
```  
  
 Le istruzioni `return` e **exit** nell'esempio precedente sono identiche dal punto di vista funzionale.  Tuttavia, in C\+\+ è necessario che le funzioni contenenti tipi restituiti diversi da `void` restituiscano un valore.  L'istruzione `return` consente di restituire un valore da **main**.  
  
## Vedere anche  
 [Chiusura del programma](../cpp/program-termination.md)