---
title: Classe platform::Collections::BackInsertIterator | Documenti Microsoft
ms.custom: 
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::BackInsertIterator::BackInsertIterator
dev_langs:
- C++
helpviewer_keywords:
- BackInsertIterator Class
ms.assetid: aecee1ff-100d-4129-b84b-1966f0923dbf
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 23c8b657a6cafb720cf0be07e2e67b5af0d7767d
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="platformcollectionsbackinsertiterator-class"></a>Classe Platform::Collections::BackInsertIterator
Rappresenta un iteratore che inserisce, anziché sovrascrivere, elementi nel back-end di una raccolta sequenziale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <typename T>  
class BackInsertIterator : 
public ::std::iterator<::std::output_iterator_tag, void, void, void, void>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo di elemento nella raccolta corrente.  
  
### <a name="remarks"></a>Note  
 La classe BackInsertIterator implementa le regole richieste da [back_insert_iterator Class](../standard-library/back-insert-iterator-class.md).  
  
### <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[BackInsertIterator::BackInsertIterator](#ctor)|Inizializza una nuova istanza della classe BackInsertIterator.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore BackInsertIterator::operator*](#operator-dereference)|Recupera un riferimento all'oggetto BackInsertIterator corrente.|  
|[Operatore BackInsertIterator::operator++](#operator-increment)|Restituisce un riferimento all'oggetto BackInsertIterator corrente. L'iteratore è invariato.|  
|[Operatore BackInsertIterator::operator=](#operator-assign)|Aggiunge l'oggetto specificato alla fine della raccolta sequenziale corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `BackInsertIterator`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
---
## <a name="ctor"></a>  Costruttore backinsertiterator:: Backinsertiterator
Inizializza una nuova istanza della classe `BackInsertIterator`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
explicit BackInsertIterator(  
   Windows::Foundation::Collections::IVector<T>^ v);  
```  
  
#### <a name="parameters"></a>Parametri  
 `v`  
 Un IVector\<T > oggetto.  
  
### <a name="remarks"></a>Note  
 Un oggetto `BackInsertIterator` inserisce gli elementi dopo l'ultimo elemento dell'oggetto specificato dal parametro `v`.  
 
## <a name="operator-assign"></a>  BackInsertIterator::operator= Operator
Aggiunge l'oggetto specificato alla fine della raccolta sequenziale corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```    
BackInsertIterator& operator=( const T& t);  
```  
  
#### <a name="parameters"></a>Parametri  
 `t`  
 Oggetto da aggiungere alla raccolta corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto BackInsertIterator corrente.  

## <a name="operator-dereference"></a>  BackInsertIterator::operator* Operator
Recupera un riferimento all'oggetto BackInsertIterator corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
BackInsertIterator& operator*();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto BackInsertIterator corrente.  
  
### <a name="remarks"></a>Note  
 Questo operatore restituisce un riferimento all'oggetto BackInsertIterator corrente, non a qualsiasi elemento nella raccolta corrente.  
 
## <a name="operator-increment"></a>  Backinsertiterator:: operator + + (operatore)
Restituisce un riferimento all'oggetto BackInsertIterator corrente. L'iteratore è invariato.  
  
## <a name="syntax"></a>Sintassi  
  
``` 
  
BackInsertIterator& operator++();  
  
BackInsertIterator operator++(int);  
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'oggetto BackInsertIterator corrente.  
  
### <a name="remarks"></a>Note  
 In base alla progettazione, l'esempio della prima sintassi determina dei pre-incrementi dell'oggetto BackInsertIterator corrente e la seconda sintassi ne determina dei post-incrementi. Il tipo `int` nella seconda sintassi indica un'operazione di post-incremento, non un effettivo operando Integer.  
  
 Tuttavia, questo operatore in realtà non modifica l'oggetto BackInsertIterator. Restituisce invece un riferimento all'iteratore corrente invariato. Questo è lo stesso comportamento di [operatore *](#dereference-operator).  
  
  
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)