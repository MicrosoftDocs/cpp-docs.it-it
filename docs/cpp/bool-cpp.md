---
title: "bool (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "bool_cpp"
  - "bool"
  - "__BOOL_DEFINED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__BOOL_DEFINED (macro)"
  - "bool (parola chiave) [C++]"
ms.assetid: 9abed3f2-d21c-4eb4-97c5-716342e613d8
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# bool (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa parola chiave è un tipo incorporato.  Una variabile di questo tipo può avere valori [true](../cpp/true-cpp.md) e valori [false](../cpp/false-cpp.md).  Le espressioni condizionali dispongono del tipo `bool` e hanno pertanto valori di tipo `bool`.  Ad esempio, ora `i!=0` ha **true** o **false**, a seconda del valore di `i`.  
  
 I valori **true** e **false** hanno la relazione seguente:  
  
```  
!false == true  
!true == false  
```  
  
 Nell'istruzione seguente:  
  
```  
if (condexpr1) statement1;   
```  
  
 Se `condexpr1` è **true**, `statement1` verrà sempre eseguita; se `condexpr1` è **false**, `statement1` non verrà mai eseguita.  
  
 Quando un operatore di suffisso o di prefisso `++` di suffisso o di prefisso viene applicato a una variabile di tipo `bool`, la variabile viene impostata su **true**.  L'operatore di suffisso o prefisso `--` non può essere applicato a una variabile di questo tipo.  
  
 Il tipo `bool` contribuisce alle promozioni integrali.  Un r\-value di tipo `bool` può essere convertito in un r\-value di tipo `int`, con **false** che diventa zero e **true** che diventa uno.  Come tipo distinto, `bool` partecipa alla risoluzione dell'overload.  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Tipi fondamentali](../cpp/fundamental-types-cpp.md)