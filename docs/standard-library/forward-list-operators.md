---
title: Operatori &lt;forward_list&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: []
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
caps.latest.revision: 11
manager: ghogen
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: ddf548e760d723bff19b58ac8dfe6ec60acdbbcc
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="ltforwardlistgt-operators"></a>Operatori &lt;forward_list&gt;
||||  
|-|-|-|  
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|  
|[operator&lt;](#op_lt)|[operator&lt;=](#op_lt_eq)|[operator==](#op_eq_eq)|  
  
##  <a name="op_eq_eq"></a>  operator==  
 Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è uguale all'oggetto elenco di inoltro a destra.  
  
```
bool operator==(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Oggetto di tipo `forward_list`.|  
|`right`|Oggetto di tipo `forward_list`.|  
  
### <a name="remarks"></a>Note  
 Questa funzione modello esegue l'overload di `operator==` per confrontare due oggetti della classe modello `forward_list`. La funzione restituisce `distance(left.begin(), end()) == distance(right.begin(),right.end()) && equal(left. begin(),left. end(),right.begin())`.  
  
##  <a name="op_neq"></a>  operator!=  
 Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore non è uguale all'oggetto elenco di inoltro a destra.  
  
```
bool operator!=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Oggetto di tipo `forward_list`.|  
|`right`|Oggetto di tipo `forward_list`.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli elenchi non sono uguali; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 Questa funzione modello restituisce `!(left == right)`.  
  
##  <a name="op_lt"></a>  operator&lt;  
 Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è minore dell'oggetto elenco di inoltro a destra.  
  
```
bool operator<(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Oggetto di tipo `forward_list`.|  
|`right`|Oggetto di tipo `forward_list`.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'elenco a sinistra dell'operatore è minore ma non uguale all'elenco a destra; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questa funzione modello esegue l'overload di `operator<` per confrontare due oggetti della classe modello `forward_list`. La funzione restituisce `lexicographical_compare(lhs. begin(), lhs. end(), rhs.begin(), rhs.end())`.  
  
##  <a name="op_lt_eq"></a>  operator&lt;=  
 Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è minore o uguale all'oggetto elenco di inoltro a destra.  
  
```
bool operator<=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Oggetto di tipo `forward_list`.|  
|`right`|Oggetto di tipo `forward_list`.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'elenco a sinistra dell'operatore è minore o uguale all'elenco a destra dell'operatore; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questa funzione modello restituisce `!(right < left)`.  
  
##  <a name="op_gt"></a>  operator&gt;  
 Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è maggiore dell'oggetto elenco di inoltro a destra.  
  
```
bool operator>(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Oggetto di tipo `forward_list`.|  
|`right`|Oggetto di tipo `forward_list`.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'elenco a sinistra dell'operatore è maggiore dell'elenco a destra; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Questa funzione modello restituisce `right < left`.  
  
##  <a name="op_gt_eq"></a>  operator&gt;=  
 Verifica se l'oggetto elenco di inoltro a sinistra dell'operatore è maggiore o uguale all'oggetto elenco di inoltro a destra.  
  
```
bool operator>=(
    const forward_list <Type, Allocator>& left,
    const forward_list <Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Oggetto di tipo `forward_list`.|  
|`right`|Oggetto di tipo `forward_list`.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'elenco di inoltro a sinistra dell'operatore è maggiore o uguale all'elenco di inoltro a destra; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce `!(left < right)`.  
  
## <a name="see-also"></a>Vedere anche  
 [<forward_list>](../standard-library/forward-list.md)




