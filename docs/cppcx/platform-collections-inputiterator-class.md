---
title: "Classe Platform::Collections::InputIterator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::InputIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InputIterator (classe)"
ms.assetid: ef72eea4-32a9-42b9-8119-ce87dbdcd3be
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe Platform::Collections::InputIterator
Fornisce un oggetto InputIterator della libreria di modelli standard \(STL\) per raccolte derivate da [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
## Sintassi  
  
```  
template <  
   typename X  
>  
class InputIterator;  
```  
  
#### Parametri  
 `X`  
 Typename della classe modello InputIterator.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`difference_type`|Differenza del puntatore \(ptrdiff\_t\).|  
|`iterator_category`|Categoria di un iteratore di input \(::std::input\_iterator\_tag\).|  
|`pointer`|Puntatore a `const` `X`|  
|`reference`|Riferimento a `const` `X`|  
|`value_type`|Typename `X`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[InputIterator::InputIterator \(costruttore\)](../cppcx/inputiterator-inputiterator-constructor.md)|Inizializza una nuova istanza della classe InputIterator.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[InputIterator::operator\!\= \(operatore\)](../cppcx/inputiterator-operator-inequality-operator.md)|Indica se l'oggetto InputIterator corrente è diverso dall'oggetto InputIterator specificato.|  
|[InputIterator::operator\* \(operatore\)](../cppcx/inputiterator-operator-decrementoperator.md)|Recupera un riferimento all'elemento specificato dall'oggetto InputIterator corrente.|  
|[InputIterator::operator\+\+ \(operatore\)](../cppcx/inputiterator-operator-increment-operator.md)|Incrementa l'oggetto InputIterator corrente.|  
|[InputIterator::operator\=\= \(operatore\)](../cppcx/inputiterator-operator-equality-operator.md)|Indica se l'oggetto InputIterator corrente è uguale all'oggetto InputIterator specificato.|  
|[InputIterator::operator\-\> \(operatore\)](../cppcx/inputiterator-operator-arrow-operator.md)|Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto InputIterator corrente.|  
  
## Gerarchia di ereditarietà  
 `InputIterator`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)