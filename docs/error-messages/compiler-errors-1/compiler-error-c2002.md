---
title: "Errore del compilatore C2002 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2002"
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2002
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

costante a caratteri estesi non valida  
  
 La costante a caratteri multibyte non è valida.  
  
### Possibili cause  
  
1.  La costante a caratteri estesi contiene più byte del previsto.  
  
2.  L'intestazione standard STDDEF.h non è inclusa.  
  
3.  Non è possibile concatenare caratteri di tipo "wide" a stringhe letterali ordinarie.  
  
4.  È necessario che le costanti a caratteri estesi siano precedute dal carattere 'L':  
  
    ```  
    L'mbconst'  
    ```  
  
5.  Per Microsoft C\+\+ gli argomenti di testo di una direttiva per il preprocessore devono essere ASCII.  Ad esempio, la direttiva `#pragma message(L"string")` non è valida.