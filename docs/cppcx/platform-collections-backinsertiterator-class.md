---
title: "Classe Platform::Collections::BackInsertIterator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator (classe)"
ms.assetid: aecee1ff-100d-4129-b84b-1966f0923dbf
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe Platform::Collections::BackInsertIterator
Rappresenta un iteratore che inserisce, anziché sovrascrivere, elementi nel back\-end di una raccolta sequenziale.  
  
## Sintassi  
  
```  
template <  
   typename T  
>  
class BackInsertIterator : public ::std::iterator< ::std::output_iterator_tag, void, void, void, void>;  
```  
  
#### Parametri  
 `T`  
 Tipo di elemento nella raccolta corrente.  
  
## Note  
 La classe BackInsertIterator implementa le regole richieste da [Classe back\_insert\_iterator](../standard-library/back-insert-iterator-class.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[BackInsertIterator::BackInsertIterator \(costruttore\)](../cppcx/backinsertiterator-backinsertiterator-constructor.md)|Inizializza una nuova istanza della classe BackInsertIterator.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[BackInsertIterator::operator\* \(operatore\)](../cppcx/backinsertiterator-operator-dereference-operator.md)|Recupera un riferimento all'oggetto BackInsertIterator corrente.|  
|[BackInsertIterator::operator\+\+ \(operatore\)](../cppcx/backinsertiterator-operator-increment-operator.md)|Restituisce un riferimento all'oggetto BackInsertIterator corrente. L'iteratore è invariato.|  
|[BackInsertIterator::operator\= \(operatore\)](../cppcx/backinsertiterator-operator-assign-operator.md)|Aggiunge l'oggetto specificato alla fine della raccolta sequenziale corrente.|  
  
## Gerarchia di ereditarietà  
 `BackInsertIterator`  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)