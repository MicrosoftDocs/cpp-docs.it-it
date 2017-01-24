---
title: "Espressioni con operatori unari | Microsoft Docs"
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
  - "espressioni [C++], operatori"
  - "espressioni [C++], operatori unari"
  - "operatori unari, espressioni"
ms.assetid: 1217685b-b85d-4b48-9ff4-d90f56a26c1b
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Espressioni con operatori unari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori unari agiscono solo su un operando in un'espressione.  Gli operatori unari sono i seguenti:  
  
-   [Operatore di riferimento indiretto \(\*\)](../cpp/indirection-operator-star.md)  
  
-   [Operatore address\-of \(&\)](../cpp/address-of-operator-amp.md)  
  
-   [Operatore più unario \(\+\)](../cpp/unary-plus-and-negation-operators-plus-and.md)  
  
-   [Operatore di negazione unario \(–\)](../misc/unary-negation-operator.md)  
  
-   [Operatore di negazione logica \(\!\)](../cpp/logical-negation-operator-exclpt.md)  
  
-   [Operatore di complemento a uno \(~\)](../cpp/one-s-complement-operator-tilde.md)  
  
-   [Operatore di incremento prefisso \(\+\+\)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)  
  
-   [Operatore di decremento prefisso \(––\)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)  
  
-   [Operatore di cast \(\)](../cpp/cast-operator-parens.md)  
  
-   [Operatore sizeof](../cpp/sizeof-operator.md)  
  
-   [Operatore \_\_uuidof](../cpp/uuidof-operator.md)  
  
-   [Operatore \_\_alignof](../cpp/alignof-operator.md)  
  
-   [Operatore new](../cpp/new-operator-cpp.md)  
  
-   [Operatore delete](../cpp/delete-operator-cpp.md)  
  
 Questi operatori hanno un'associatività da destra a sinistra.  Le espressioni unarie sono caratterizzate in genere da una sintassi che precede un'espressione primaria o in forma suffissa.  
  
 Di seguito vengono indicati i formati possibili delle espressioni unarie.  
  
-   *postfix\-expression*  
  
-   `++` *unary\-expression*  
  
-   `––` *unary\-expression*  
  
-   *unary\-operator* *cast\-expression*  
  
-   `sizeof` *unary\-expression*  
  
-   `sizeof(` *type\-name* `)`  
  
-   `decltype(` *expression* `)`  
  
-   *allocation\-expression*  
  
-   *deallocation\-expression*  
  
 Qualsiasi *postfix\-expression* è considerata come *unary\-expression* e, poiché qualsiasi espressione primaria è considerata come *postfix\-expression*, tutte le espressioni primarie vengono anche considerate *unary\-expression*.  Per ulteriori informazioni, vedere [Espressioni in forma suffissa](../cpp/postfix-expressions.md) ed [Espressioni primarie](../cpp/primary-expressions.md).  
  
 *unary\-operator* è costituito da uno o più simboli seguenti: `* &` `+` `–` `!` `~`  
  
 Un elemento *cast\-expression* è un'espressione unaria con un operatore cast facoltativo per modificare il tipo.  Per ulteriori informazioni, vedere [Operator cast: \(\)](../cpp/cast-operator-parens.md).  
  
 *expression* può essere qualsiasi espressione.  Per ulteriori informazioni, vedere [Espressioni](../cpp/expressions-cpp.md).  
  
 *allocation\-expression* fa riferimento all'operatore `new`.  *deallocation\-expression* fa riferimento all'operatore `delete`.  Per ulteriori informazioni, vedere i collegamenti indicati in precedenza in questo argomento.  
  
## Vedere anche  
 [Tipi di espressioni](../cpp/types-of-expressions.md)