---
title: Overload degli operatori unari | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- unary operators [C++], plus
- increment operators [C++], overloaded
- unary operators [C++], minus
- operators [C++], unary
- redefinable unary operators [C++]
- unary operators [C++]
- pointer dereference operator overloading
- plus operator
ms.assetid: 7683ef08-42a4-4283-928f-d3dd4f3ab4c0
caps.latest.revision: 10
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
ms.openlocfilehash: 9ec200fecdebb1c39929882c6fbe4ad09eddc812
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="overloading-unary-operators"></a>Overload degli operatori unari
Di seguito sono elencati gli operatori unari di cui è possibile eseguire l'overload:  
  
1.  `!`([NOT logico](../cpp/logical-negation-operator-exclpt.md))  
  
2.  `&`([AddressOf](../cpp/address-of-operator-amp.md))  
  
3.  `~`([complemento a uno](../cpp/one-s-complement-operator-tilde.md))  
  
4.  `*`([dereferenziazione del puntatore](../cpp/indirection-operator-star.md))  
  
5.  `+`([operatore più unario](../cpp/additive-operators-plus-and.md))  
  
6.  `-`([negazione unaria](../cpp/additive-operators-plus-and.md))  
  
7.  `++`([incremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md))  
  
8.  `--`([decremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md))  
  
9. operatori di conversione  
  
 L'incremento e decremento (operatori) (`++` e ** -- **) sono trattati separatamente in [incrementare e decrementare](../cpp/increment-and-decrement-operator-overloading-cpp.md).  
  
 Gli operatori di conversione vengono illustrati anche in un argomento separato. vedere [conversioni dei tipi definiti dall'utente](../cpp/user-defined-type-conversions-cpp.md).  
  
 Le regole seguenti valgono per tutti gli altri operatori unari. Per dichiarare una funzione di un operatore unario come membro non statico, è necessario dichiararla nel seguente formato:  
  
 `ret-type operator` `op` `()`  
  
 dove `ret-type` è il tipo restituito e `op` è uno degli operatori elencati nella tabella precedente.  
  
 Per dichiarare una funzione di un operatore unario come funzione globale, è necessario dichiararla nel seguente formato:  
  
 `ret-type operator` `op` (`arg` )  
  
 dove `ret-type` e `op` vengono descritti per le funzioni dell'operatore membro e `arg` è un argomento di tipo classe su cui intervenire.  
  
> [!NOTE]
>  Non esiste alcun limite relativamente ai tipi restituiti degli operatori unari. Può ad esempio risultare utile che l'operatore logico NOT (`!`) restituisca un valore integrale, sebbene non sia imposto.  
  
## <a name="see-also"></a>Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)
