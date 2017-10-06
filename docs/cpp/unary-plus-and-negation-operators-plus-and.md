---
title: "Operatori di negazione e operatore più unario: + e - | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- +
- '-'
dev_langs:
- C++
helpviewer_keywords:
- unary operators [C++], plus
- '- operator'
- negation operator
- + operator [C++], unary operators
- + operator
ms.assetid: 2c58c4f4-0d92-4ae3-9d0c-1a6157875cc1
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 9c664cd382685693da7ab12ba85891bc2ab0d7e8
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="unary-plus-and-negation-operators--and--"></a>Operatori più e operatori di negazione unari: + e -
## <a name="syntax"></a>Sintassi  
  
```  
  
+ cast-expression  
```  
  
```  
  
- cast-expression  
```  
  
## <a name="-operator"></a>+ (operatore)  
 Il risultato dell'operatore più unario (**+**) è il valore dell'operando. L'operando dell'operatore unario più deve essere un tipo aritmetico.  
  
 La promozione a intero viene eseguita su operandi integrali. Il tipo risultante è il tipo a cui l'operando viene promosso. Pertanto l'espressione `+ch`, dove `ch` è di tipo `char`, determina il tipo `int`, mentre il valore rimane invariato. Vedere [conversioni Standard](standard-conversions.md) per ulteriori informazioni su come eseguire l'innalzamento di livello.  
  
## <a name="--operator"></a>- (operatore)  
 L'operatore di negazione unario (**-**) produce il corrispondente negativo del relativo operando. L'operando nell'operatore di negazione unario deve essere un tipo aritmetico.  
  
 La promozione a intero viene eseguita su operandi integrali e il tipo risultante è il tipo a cui l'operando viene promosso. Vedere [conversioni Standard](standard-conversions.md) per ulteriori informazioni su come viene eseguita la promozione.  
  
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 La negazione unaria di quantità senza segno viene eseguita sottraendo il valore dell'operando da 2^n, dove n è il numero di bit in un oggetto di tipo specificato senza segno. Microsoft C++ viene eseguito su processori che usano l'aritmetica di complementi a due. In altri processori l'algoritmo per la negazione può variare.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
