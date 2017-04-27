---
title: Operatori &lt;allocators&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: []
ms.assetid: b55d67cb-3c69-46bf-ad40-e845fb096c4e
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 6185bc74c530d6327d0ac37a5425a7653ba36841
ms.lasthandoff: 02/24/2017

---
# <a name="ltallocatorsgt-operators"></a>Operatori &lt;allocators&gt;
|||  
|-|-|  
|[operator!=](#operator_neq)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_neq"></a>  operator!=  
 Verifica la disuguaglianza tra gli oggetti allocatore di una classe specificata.  
  
```
template <class Type, class Sync>  
bool operator!=(
    const allocator_base<Type, Sync>& left,
    const allocator_base<Type, Sync>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Uno degli oggetti allocatore di cui verificare la disuguaglianza.|  
|`right`|Uno degli oggetti allocatore di cui verificare la disuguaglianza.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti allocatore non sono uguali; **false** se gli oggetti allocatore sono uguali.  
  
### <a name="remarks"></a>Note  
 L'operatore di modello restituisce `!(left == right)`.  
  
##  <a name="operator_eq_eq"></a>  operator==  
 Verifica l'uguaglianza tra gli oggetti allocatore di una classe specificata.  
  
```
template <class Type, class Sync>  
bool operator==(
    const allocator_base<Type, Sync>& left,
    const allocator_base<Type, Sync>& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`left`|Uno degli oggetti allocatore di cui verificare l'uguaglianza.|  
|`right`|Uno degli oggetti allocatore di cui verificare l'uguaglianza.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti allocatore sono uguali; **false** se gli oggetti allocatore non sono uguali.  
  
### <a name="remarks"></a>Note  
 Questo operatore di modello restituisce `left.equals(right)`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<allocators>](../standard-library/allocators-header.md)




