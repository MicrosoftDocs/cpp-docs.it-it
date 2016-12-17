---
title: "Operatore charizing (#@) | Microsoft Docs"
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
  - "#@"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#@ (operatore preprocessore)"
  - "charizing (operatore)"
  - "preprocessore, operatori"
ms.assetid: dee03314-d27c-4063-965c-64756efbef22
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Operatore charizing (#@)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'operatore per la creazione di caratteri può essere utilizzato solo con argomenti di macro.  Se **\#@** precede il parametro formale nella definizione della macro, l'argomento effettivo sarà racchiuso tra virgolette singole e viene considerato come un carattere quando la macro viene espansa.  Ad esempio:  
  
```  
#define makechar(x)  #@x  
```  
  
 fa sì che l'istruzione  
  
```  
a = makechar(b);  
```  
  
 venga espansa a  
  
```  
a = 'b';  
```  
  
 Il carattere della virgoletta singola non può essere utilizzato con l'operatore per la creazione di caratteri.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Operatori del preprocessore](../preprocessor/preprocessor-operators.md)