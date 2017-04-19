---
title: Classe error_category | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- system_error/std::error_category
- error_category
- system_error/std::error_category::value_type
- system_error/std::error_category::default_error_condition
- system_error/std::error_category::equivalent
- system_error/std::error_category::message
- system_error/std::error_category::name
dev_langs:
- C++
helpviewer_keywords:
- error_category class
ms.assetid: e0a71e14-852d-4905-acd6-5f8ed426706d
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: 7700ffce8b04f9caad33c08f03f0585c29a43efd
ms.lasthandoff: 02/24/2017

---
# <a name="errorcategory-class"></a>Classe error_category
Rappresenta la base comune astratta per gli oggetti che descrive una categoria di codici di errore.  
  
## <a name="syntax"></a>Sintassi  
  
```
class error_category;
```  
  
## <a name="remarks"></a>Note  
 Due oggetti predefiniti implementano `error_category`: [generic_category](../standard-library/system-error-functions.md#generic_category) e [system_category](../standard-library/system-error-functions.md#system_category).  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[value_type](#error_category__value_type)|Tipo che rappresenta il valore del codice di errore archiviato.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[default_error_condition](#error_category__default_error_condition)|Archivia il valore di codice di errore per un oggetto condizione di errore.|  
|[equivalent](#error_category__equivalent)|Restituisce un valore che specifica se gli oggetti di errore sono equivalenti.|  
|[message](#error_category__message)|Restituisce il nome del codice di errore specificato.|  
|[name](#error_category__name)|Restituisce il nome della categoria.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator==](#error_category__operator_eq_eq)|Verifica l'uguaglianza tra oggetti `error_category`.|  
|[operator!=](#error_category__operator_neq)|Verifica la disuguaglianza tra oggetti `error_category`.|  
|[operator<](#error_category__operator_lt_)|Verifica se l'oggetto [error_category](../standard-library/error-category-class.md) è più piccolo dell'oggetto `error_category` passato per il confronto.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<system_error>  
  
 **Spazio dei nomi:** std  
  
##  <a name="error_category__default_error_condition"></a>  error_category::default_error_condition  
 Archivia il valore di codice di errore per un oggetto condizione di errore.  
  
```
virtual error_condition default_error_condition(int _Errval) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Errval`|Valore del codice di errore da archiviare nella [error_condition](../standard-library/error-condition-class.md).|  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `error_condition(_Errval, *this)`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="error_category__equivalent"></a>  error_category::equivalent  
 Restituisce un valore che specifica se gli oggetti di errore sono equivalenti.  
  
```
virtual bool equivalent(value_type _Errval,
    const error_condition& _Cond) const;

virtual bool equivalent(const error_code& _Code,
    value_type _Errval) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Errval`|Il valore del codice di errore da confrontare.|  
|`_Cond`|L'oggetto [error_condition](../standard-library/error-condition-class.md) da confrontare.|  
|`_Code`|L'oggetto [error_code](../standard-library/error-code-class.md) da confrontare.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se la categoria e il valore sono uguali, in caso contrario `false`.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce `*this == _Cond.category() && _Cond.value() == _Errval`.  
  
 La seconda funzione membro restituisce `*this == _Code.category() && _Code.value() == _Errval`.  
  
##  <a name="error_category__message"></a>  error_category::message  
 Restituisce il nome del codice di errore specificato.  
  
```
virtual string message(error_code::value_type val) const = 0;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`val`|Il valore del codice di errore da confrontare.|  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un nome descrittivo del codice di errore `val` per la categoria.  
  
### <a name="remarks"></a>Note  
  
##  <a name="error_category__name"></a>  error_category::name  
 Restituisce il nome della categoria.  
  
```
virtual const char *name() const = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il nome della categoria come una stringa di byte che termina con Null.  
  
### <a name="remarks"></a>Note  
  
##  <a name="error_category__operator_eq_eq"></a>  error_category::operator==  
 Verifica l'uguaglianza tra oggetti `error_category`.  
  
```
bool operator==(const error_category& right) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`right`|L'oggetto di cui verificare l'uguaglianza.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti sono uguali; **false** se gli oggetti non sono uguali.  
  
### <a name="remarks"></a>Note  
 Questo operatore membro restituisce `this == &right`.  
  
##  <a name="error_category__operator_neq"></a>  error_category::operator!=  
 Verifica la disuguaglianza tra oggetti `error_category`.  
  
```
bool operator!=(const error_category& right) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`right`|L'oggetto di cui verificare la disuguaglianza.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto `error_category` non è uguale all'oggetto `error_category` passato in `right`; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 L'operatore membro restituisce `(!*this == right)`.  
  
##  <a name="error_category__operator_lt_"></a>  error_category::operator&lt;  
 Verifica se l'oggetto [error_category](../standard-library/error-category-class.md) è più piccolo dell'oggetto `error_category` passato per il confronto.  
  
```
bool operator<(const error_category& right) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`right`|L'oggetto `error_category` da confrontare.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto `error_category` è più piccolo dell'oggetto `error_category` passato per il confronto; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 L'operatore membro restituisce `this < &right`.  
  
##  <a name="error_category__value_type"></a>  error_category::value_type  
 Tipo che rappresenta il valore del codice di errore archiviato.  
  
```
typedef int value_type;
```  
  
### <a name="remarks"></a>Note  
 La definizione del tipo è un sinonimo di `int`.  
  
## <a name="see-also"></a>Vedere anche  
 [<system_error>](../standard-library/system-error.md)




