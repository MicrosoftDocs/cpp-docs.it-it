---
title: Operatori &lt;forward_list&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: a560de0a7587b5552fc663bdd2b44734a66b5f73
ms.lasthandoff: 02/24/2017

---
# <a name="ltforwardlistgt-operators"></a>Operatori &lt;forward_list&gt;
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator&gt;](#operator_gt_)|[operator&gt;=](#operator_gt__eq)|  
|[operator&lt;](#operator_lt_)|[operator&lt;=](#operator_lt__eq)|[operator==](#operator_eq_eq)|  
  
##  <a name="a-nameoperatoreqeqa--operator"></a><a name="operator_eq_eq"></a>  operator==  
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
  
##  <a name="a-nameoperatorneqa--operator"></a><a name="operator_neq"></a>  operator!=  
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
  
##  <a name="a-nameoperatorlta--operatorlt"></a><a name="operator_lt_"></a>  operator&lt;  
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
  
##  <a name="a-nameoperatorlteqa--operatorlt"></a><a name="operator_lt__eq"></a>  operator&lt;=  
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
  
##  <a name="a-nameoperatorgta--operatorgt"></a><a name="operator_gt_"></a>  operator&gt;  
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
  
##  <a name="a-nameoperatorgteqa--operatorgt"></a><a name="operator_gt__eq"></a>  operator&gt;=  
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




