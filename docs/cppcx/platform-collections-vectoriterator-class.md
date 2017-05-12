---
title: "Classe Platform::Collections::VectorIterator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator (classe)"
ms.assetid: d531cb42-27e0-48a6-bf5e-c265891a18ff
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# Classe Platform::Collections::VectorIterator
Fornisce un iteratore STL per oggetti derivati dall'interfaccia IVector di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
 VectorIterator è un iteratore proxy che archivia elementi di tipo VectorProxy\<T\>. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md).  
  
## Sintassi  
  
```  
template <  
   typename T  
>  
class VectorIterator;  
```  
  
#### Parametri  
 `T`  
 Typename della classe modello VectorIterator.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`difference_type`|Differenza del puntatore \(ptrdiff\_t\).|  
|`iterator_category`|Categoria di un iteratore di accesso casuale \(::std::random\_access\_iterator\_tag\).|  
|`pointer`|Puntatore a un tipo interno, Platform::Collections::Details::VectorProxy\<T\>, necessario per l'implementazione di VectorIterator.|  
|`reference`|Riferimento a un tipo interno, Platform::Collections::Details::VectorProxy\<T\>, necessario per l'implementazione di VectorIterator.|  
|`value_type`|Typename `T`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[VectorIterator::VectorIterator \(costruttore\)](../cppcx/vectoriterator-vectoriterator-constructor.md)|Inizializza una nuova istanza della classe VectorIterator.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[VectorIterator::operator\- \(operatore\)](../cppcx/vectoriterator-operator-minus-operator.md)|Sottrae un numero specificato di elementi dall'iteratore corrente creando un nuovo iteratore o un iteratore specificato dall'iteratore corrente creando il numero di elementi tra gli iteratori.|  
|[VectorIterator::operator\-\- \(operatore\)](../cppcx/vectoriterator-operator-decrement-operator.md)|Decrementa l'oggetto VectorIterator corrente.|  
|[VectorIterator::operator\!\= \(operatore\)](../cppcx/vectoriterator-operator-inequality-operator.md)|Indica se l'oggetto VectorIterator corrente è diverso dall'oggetto VectorIterator specificato.|  
|[VectorIterator::operator\* \(operatore\)](../cppcx/vectoriterator-operator-dereference-operator.md)|Recupera un riferimento all'elemento specificato dall'oggetto VectorIterator corrente.|  
|[VectorIterator::operatorOperator](../cppcx/vectoriterator-operatoroperator.md)|Recupera un riferimento all'elemento che è distanziato dall'oggetto VectorIterator corrente dello spostamento specificato.|  
|[\(DELETE\) VectorIterator::operator\+ Operator](http://msdn.microsoft.com/it-it/b0b1af2c-e2a8-4876-99dc-7351bfc46ce4)|Restituisce un oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator specificato.|  
|[VectorIterator::operator\+\+ \(operatore\)](../cppcx/vectoriterator-operator-increment-operator.md)|Incrementa l'oggetto VectorIterator corrente.|  
|[VectorIterator::operator\+\= \(operatore\)](../cppcx/vectoriterator-operator-plus-assign-operator.md)|Incrementa l'oggetto VectorIterator corrente dello spostamento specificato.|  
|[VectorIterator::operator\< \(operatore\)](../cppcx/vectoriterator-operator-less-than-operator.md)|Indica se l'oggetto VectorIterator corrente è minore dell'oggetto VectorIterator specificato.|  
|[VectorIterator::operator\<\= \(operatore\)](../cppcx/vectoriterator-operator-less-than-or-equals-operator.md)|Indica se l'oggetto VectorIterator corrente è minore o uguale all'oggetto VectorIterator specificato.|  
|[VectorIterator::operator\-\= \(operatore\)](../cppcx/vectoriterator-operator-subtract-assign-operator.md)|Decrementa l'oggetto VectorIterator corrente dello spostamento specificato.|  
|[VectorIterator::operator\=\= \(operatore\)](../cppcx/vectoriterator-operator-equality-operator.md)|Indica se l'oggetto VectorIterator corrente è uguale all'oggetto VectorIterator specificato.|  
|[VectorIterator::operator\> \(operatore\)](../cppcx/vectoriterator-operator-greater-than-operator.md)|Indica se l'oggetto VectorIterator corrente è maggiore dell'oggetto VectorIterator specificato.|  
|[VectorIterator::operator\-\> \(operatore\)](../cppcx/vectoriterator-operator-arrow-operator.md)|Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorIterator corrente.|  
|[VectorIterator::operator\>\= \(operatore\)](../cppcx/vectoriterator-operator-greater-than-or-equal-operator.md)|Indica se l'oggetto VectorIterator corrente è maggiore o uguale a un oggetto VectorIterator specificato.|  
  
## Gerarchia di ereditarietà  
 `VectorIterator`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)