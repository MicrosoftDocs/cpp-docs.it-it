---
title: Overload degli operatori unari | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c00f9d40fedd084afa2da6e2e7bfaf0ee831b3a9
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39401880"
---
# <a name="overloading-unary-operators"></a>Overload degli operatori unari
Di seguito sono elencati gli operatori unari di cui è possibile eseguire l'overload:  
  
1.  `!` ([NOT logico](../cpp/logical-negation-operator-exclpt.md))  
  
2.  `&` ([AddressOf](../cpp/address-of-operator-amp.md))  
  
3.  `~` ([complemento a uno](../cpp/one-s-complement-operator-tilde.md))  
  
4.  `*` ([dereferenziazione del puntatore](../cpp/indirection-operator-star.md))  
  
5.  `+` ([operatore più unario](../cpp/additive-operators-plus-and.md))  
  
6.  `-` ([negazione unaria](../cpp/additive-operators-plus-and.md))  
  
7.  `++` ([incremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md))  
  
8.  `--` ([decremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md))  
  
9. operatori di conversione  
  
 L'incremento e decremento (operatori) (`++` e `--`) vengono trattati separatamente in [incrementare e decrementare](../cpp/increment-and-decrement-operator-overloading-cpp.md).  
  
 Gli operatori di conversione vengono illustrati anche in un argomento distinto; visualizzare [conversioni di tipi definiti dall'utente](../cpp/user-defined-type-conversions-cpp.md).  
  
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