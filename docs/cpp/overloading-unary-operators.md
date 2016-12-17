---
title: "Overload degli operatori unari | Microsoft Docs"
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
  - "incremento (operatori), in overload"
  - "operatori [C++], unari"
  - "plus (operatore)"
  - "overload dell'operatore di dereferenziazione del puntatore"
  - "operatori unari ridefinibili"
  - "operatori unari"
  - "operatori unari, minus"
  - "operatori unari, plus"
ms.assetid: 7683ef08-42a4-4283-928f-d3dd4f3ab4c0
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Overload degli operatori unari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito sono elencati gli operatori unari di cui è possibile eseguire l'overload:  
  
1.  `!` \([NOT logico](../cpp/logical-negation-operator-exclpt.md)\)  
  
2.  `&` \([address\-of](../cpp/address-of-operator-amp.md)\)  
  
3.  `~` \([complemento a uno](../cpp/one-s-complement-operator-tilde.md)\)  
  
4.  `*` \([dereferenziatore del puntatore](../cpp/indirection-operator-star.md)\)  
  
5.  `+` \([unario più](../cpp/additive-operators-plus-and.md)\)  
  
6.  `-` \([negazione unaria](../cpp/additive-operators-plus-and.md)\)  
  
7.  `++` \([incremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)\)  
  
8.  `--` \([decremento](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)\)  
  
9. operatori di conversione  
  
 Gli operatori di incremento e decremento del suffisso \(`++` e **––**\) sono trattati separatamente in [Incremento e decremento](../cpp/increment-and-decrement-operator-overloading-cpp.md).  
  
 Gli operatori di conversione vengono illustrati in un argomento distinto, vedere [Conversioni](../cpp/user-defined-type-conversions-cpp.md).  
  
 Le regole seguenti valgono per tutti gli altri operatori unari.  Per dichiarare una funzione di un operatore unario come membro non statico, è necessario dichiararla nel seguente formato:  
  
 `ret-type operator` `op` `()`  
  
 dove `ret-type` è il tipo restituito e `op` è uno degli operatori elencati nella tabella precedente.  
  
 Per dichiarare una funzione di un operatore unario come funzione globale, è necessario dichiararla nel seguente formato:  
  
 `ret-type operator` `op` \(`arg` \)  
  
 dove `ret-type` e `op` vengono descritti per le funzioni dell'operatore membro e `arg` è un argomento di tipo classe su cui intervenire.  
  
> [!NOTE]
>  Non esiste alcun limite relativamente ai tipi restituiti degli operatori unari.  Può ad esempio risultare utile che l'operatore logico NOT \(`!`\) restituisca un valore integrale, sebbene non sia imposto.  
  
## Vedere anche  
 [Overload degli operatori](../cpp/operator-overloading.md)