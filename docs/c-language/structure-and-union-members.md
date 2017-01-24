---
title: "Membri di struttura e di unione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - ". operatore"
  - "-> (operatore), membri di struttura e di unione"
  - "punto (.) (operatore)"
  - "operatori di selezione dei membri"
  - "operatori [C], selezione di membri"
  - "riferimento a membri di struttura"
  - "selezione di membri di struttura"
  - "membri di struttura, riferimento"
ms.assetid: bb1fe304-af49-4f98-808d-afdc99b3e319
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Membri di struttura e di unione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'"espressione di selezione dei membri" si riferisce ai membri di strutture e unioni.  Un'espressione di questo tipo ha il valore e il tipo del membro selezionato.  
  
```  
  
        postfix-expression . identifier  
postfix-expression –> identifier  
```  
  
 In questo elenco vengono descritti i due formati delle espressioni di selezione dei membri:  
  
1.  Nel primo formato, *postfix\-expression* rappresenta un valore di tipo  `struct` o **union** e *identifier* assegna un nome a un membro della struttura o unione specificata.  Il valore dell'operazione è quello di *identifier* ed è un'espressione l\-value se *postfix\-expression* è un'espressione l\-value.  Per ulteriori informazioni vedere [Espressioni L\-value e R\-value](../c-language/l-value-and-r-value-expressions.md).  
  
2.  Nel secondo formato, *postfix\-expression* rappresenta un puntatore a un'unione o una struttura e *identifier* assegna un nome a un membro della struttura o unione specificata.  Il valore è quello di *identifier* ed è un l\-value.  
  
 I due formati delle espressioni di selezione dei membri hanno effetti simili.  
  
 Infatti, un'espressione che utilizza l'operatore di selezione dei membri \(**–\>**\) è una versione abbreviata di un'espressione con il punto \(**.**\) se l'espressione prima del punto è l'operatore di riferimento indiretto \(**\***\) applicato a un valore del puntatore.  Quindi,  
  
```  
  
expression –> identifier  
```  
  
 equivale a  
  
```  
  
(*  
expression  
) . identifier  
```  
  
 quando *expression* è un valore del puntatore.  
  
## Esempi  
 Negli esempi seguenti viene fatto riferimento a questa dichiarazione della struttura.  Per informazioni sull'operatore di riferimento indiretto \(**\***\) utilizzato in questi esempi, vedere [Operatori di riferimento indiretto e address\-of](../c-language/indirection-and-address-of-operators.md).  
  
```  
struct pair   
{  
    int a;  
    int b;  
    struct pair *sp;  
} item, list[10];  
```  
  
 Un'espressione di selezione dei membri per gli aspetti della struttura `item` sarà:  
  
```  
item.sp = &item;  
```  
  
 Nell'esempio precedente, l'indirizzo della struttura `item` viene assegnato al membro `sp` della struttura.  Ciò significa che `item` contiene un puntatore a se stesso.  
  
```  
(item.sp)–>a = 24;  
```  
  
 In questo esempio, l'espressione puntatore `item.sp` viene utilizzata con l'operatore di selezione dei membri \(**–\>**\) per assegnare un valore al membro `a`.  
  
```  
list[8].b = 12;  
```  
  
 In questa istruzione viene illustrato come selezionare un singolo membro della struttura da una matrice di strutture.  
  
## Vedere anche  
 [Operatori di accesso ai membri: . e \-\>](../cpp/member-access-operators-dot-and.md)