---
title: "Classe Platform::Collections::VectorViewIterator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator (classe)"
ms.assetid: be3aa1ae-e6ba-4a06-8d6b-86d8128026f7
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 6
---
# Classe Platform::Collections::VectorViewIterator
Fornisce un iteratore della libreria di modelli standard \(STL\) per gli oggetti derivati dall'interfaccia [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] `IVectorView`.  
  
 `ViewVectorIterator` è un iteratore proxy che archivia elementi di tipo `VectorProxy<T>`. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte \(C\+\+\/CX\)](../cppcx/collections-c-cx.md).  
  
## Sintassi  
  
```  
template <  
   typename T  
>  
class VectorViewIterator;  
```  
  
#### Parametri  
 `T`  
 Typename della classe modello VectorViewIterator.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`difference_type`|Differenza del puntatore \(ptrdiff\_t\).|  
|`iterator_category`|Categoria di un iteratore di accesso casuale \(::std::random\_access\_iterator\_tag\).|  
|`pointer`|Puntatore a un tipo interno richiesto per l'implementazione di VectorViewIterator.|  
|`reference`|Riferimento a un tipo interno richiesto per l'implementazione di VectorViewIterator.|  
|`value_type`|Typename `T`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[VectorViewIterator::VectorViewIterator \(costruttore\)](../cppcx/vectorviewiterator-vectorviewiterator-constructor.md)|Inizializza una nuova istanza della classe VectorViewIterator.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[VectorViewIterator::operator\- \(operatore\)](../cppcx/vectorviewiterator-operator-minus-operator.md)|Sottrae un numero specificato di elementi dall'iteratore corrente creando un nuovo iteratore o un iteratore specificato dall'iteratore corrente creando il numero di elementi tra gli iteratori.|  
|[VectorViewIterator::operator\-\- \(operatore\)](../cppcx/vectorviewiterator-operator-decrement-operator.md)|Decrementa l'oggetto VectorViewIterator corrente.|  
|[VectorViewIterator::operator\!\= \(operatore\)](../cppcx/vectorviewiterator-operator-inequality-operator.md)|Indica se l'oggetto VectorViewIterator corrente è diverso dall'oggetto VectorViewIterator specificato.|  
|[VectorViewIterator::operator\* \(operatore\)](../cppcx/vectorviewiterator-operator-dereference-operator.md)|Recupera un riferimento all'elemento specificato dall'oggetto VectorViewIterator corrente.|  
|[VectorViewIterator::operatorOperator](../cppcx/vectorviewiterator-operatoroperator.md)|Recupera un riferimento all'elemento che è distanziato dall'oggetto VectorViewIterator corrente dello spostamento specificato.|  
|[VectorViewIterator::operator\+ \(operatore\)](../cppcx/vectorviewiterator-operator-plus-operator.md)|Restituisce un oggetto VectorViewIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorViewIterator specificato.|  
|[VectorViewIterator::operator\+\+ \(operatore\)](../cppcx/vectorviewiterator-operator-increment-operator.md)|Incrementa l'oggetto VectorViewIterator corrente.|  
|[VectorViewIterator::operator\+\= \(operatore\)](../cppcx/vectorviewiterator-operator-plus-assign-operator.md)|Incrementa l'oggetto VectorViewIterator corrente dello spostamento specificato.|  
|[VectorViewIterator::operator\< \(operatore\)](../cppcx/vectorviewiterator-operator-less-than-operator.md)|Indica se l'oggetto VectorViewIterator corrente è minore dell'oggetto VectorViewIterator specificato.|  
|[VectorViewIterator::operator\<\= \(operatore\)](../cppcx/vectorviewiterator-operator-less-than-or-equals-operator.md)|Indica se l'oggetto VectorViewIterator corrente è minore o uguale all'oggetto VectorViewIterator specificato.|  
|[VectorViewIterator::operator\-\= \(operatore\)](../cppcx/vectorviewiterator-operator-subtract-assign-operator.md)|Decrementa l'oggetto VectorViewIterator corrente dello spostamento specificato.|  
|[VectorViewIterator::operator\=\= \(operatore\)](../cppcx/vectorviewiterator-operator-equality-operator.md)|Indica se l'oggetto VectorViewIterator corrente è uguale all'oggetto VectorViewIterator specificato.|  
|[VectorViewIterator::operator\> \(operatore\)](../cppcx/vectorviewiterator-operator-greater-than-operator.md)|Indica se l'oggetto VectorViewIterator corrente è maggiore dell'oggetto VectorViewIterator specificato.|  
|[VectorViewIterator::operator\-\> \(operatore\)](../cppcx/vectorviewiterator-operator-arrow-operator.md)|Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorViewIterator corrente.|  
|[VectorViewIterator::operator\>\= \(operatore\)](../cppcx/vectorviewiterator-operator-greater-than-or-equals-operator.md)|Indica se l'oggetto VectorViewIterator corrente è maggiore o uguale a un oggetto VectorViewIterator specificato.|  
  
## Gerarchia di ereditarietà  
 `VectorViewIterator`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)