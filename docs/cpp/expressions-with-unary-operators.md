---
title: Espressioni con operatori unari | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- expressions [C++], unary operators
- unary operators [C++], expressions with
- expressions [C++], operators
ms.assetid: 1217685b-b85d-4b48-9ff4-d90f56a26c1b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0e1b8db2e02e6ab3e2a70d94ba5f6fe3516e464e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32416171"
---
# <a name="expressions-with-unary-operators"></a>Espressioni con operatori unari
Gli operatori unari agiscono solo su un operando in un'espressione. Gli operatori unari sono i seguenti:  
  
-   [Operatore di riferimento indiretto (*)](../cpp/indirection-operator-star.md)  
  
-   [Operatore address-of (&)](../cpp/address-of-operator-amp.md)  
  
-   [Operatore (+) più unario](../cpp/unary-plus-and-negation-operators-plus-and.md)  
  
-   [Operatore di negazione unario (-)](../cpp/unary-plus-and-negation-operators-plus-and.md)  
  
-   [Operatore di negazione logica (!)](../cpp/logical-negation-operator-exclpt.md)  
  
-   [Operatore complemento a uno (~)](../cpp/one-s-complement-operator-tilde.md)  
  
-   [Operatore di incremento prefisso (+ +)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)  
  
-   [Operatore di decremento prefisso (-)](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)  
  
-   [Eseguire il cast (operatore)](../cpp/cast-operator-parens.md)  
  
-   [operatore sizeof](../cpp/sizeof-operator.md)  
  
-   [operatore uuidof](../cpp/uuidof-operator.md)  
  
-   [operatore alignof](../cpp/alignof-operator.md)  
  
-   [Operatore new](../cpp/new-operator-cpp.md)  
  
-   [operatore delete](../cpp/delete-operator-cpp.md)  
  
 Questi operatori hanno un'associatività da destra a sinistra. Le espressioni unarie sono caratterizzate in genere da una sintassi che precede un'espressione primaria o in forma suffissa.  
  
 Di seguito vengono indicati i formati possibili delle espressioni unarie.  
  
-   *postfix-expression*  
  
-   `++` *espressione unaria*  
  
-   `--` *espressione unaria*  
  
-   *operatore unario* *cast-expression*  
  
-   `sizeof` *espressione unaria*  
  
-   `sizeof(` *nome del tipo* `)`  
  
-   `decltype(` *espressione* `)`  
  
-   *espressione di assegnazione*  
  
-   *deallocazione-expression*  
  
 Qualsiasi *postfix-expression* viene considerato un *espressione unaria*, e poiché qualsiasi espressione primaria viene considerato un *postfix-expression*, le espressioni primarie è considerato un *espressione unaria* anche. Per ulteriori informazioni, vedere [espressioni in forma suffissa](../cpp/postfix-expressions.md) e [espressioni primarie](../cpp/primary-expressions.md).  
  
 Un *operatore unario* è costituito da uno o più i simboli seguenti: `* & + - ! ~`  
  
 Il *cast-expression* è un'espressione unaria con un cast per modificare il tipo di parametro facoltativo. Per ulteriori informazioni vedere [operatore Cast: ()](../cpp/cast-operator-parens.md).  
  
 Un *espressione* può essere qualsiasi espressione. Per ulteriori informazioni, vedere [espressioni](../cpp/expressions-cpp.md).  
  
 Il *allocazione espressione* si intende il `new` operatore. Il *deallocazione espressione* si intende il `delete` operatore. Per ulteriori informazioni, vedere i collegamenti indicati in precedenza in questo argomento.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di espressioni](../cpp/types-of-expressions.md)