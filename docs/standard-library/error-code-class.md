---
title: Classe error_code | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- error_code
- system_error/std::error_code
- system_error/std::error_code::value_type
- system_error/std::error_code::assign
- system_error/std::error_code::category
- system_error/std::error_code::clear
- system_error/std::error_code::default_error_condition
- system_error/std::error_code::message
- system_error/std::error_code::operator bool
dev_langs:
- C++
helpviewer_keywords:
- error_code class
ms.assetid: c09b4a96-cb14-4281-a319-63543f9b2b4a
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
ms.openlocfilehash: 4959d72feaae22cb31a5bc7b6f6aa1b5f5b8be02
ms.lasthandoff: 02/24/2017

---
# <a name="errorcode-class"></a>Classe error_code
Rappresenta gli errori di sistema di basso livello che sono specifici dell'implementazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
class error_code;
```  
  
## <a name="remarks"></a>Note  
 Un oggetto di tipo classe `error_code` archivia un valore di codice di errore e un puntatore a un oggetto che rappresenta una [categoria](../standard-library/error-category-class.md) di codici di errore che descrive gli errori di basso livello segnalati.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[error_code](#error_code__error_code)|Costruisce un oggetto di tipo `error_code`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[value_type](#error_code__value_type)|Tipo che rappresenta il valore del codice di errore archiviato.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[assign](#error_code__assign)|Assegna un valore di codice di errore e una categoria a un codice di errore.|  
|[category](#error_code__category)|Restituisce la categoria dell'errore.|  
|[clear](#error_code__clear)|Cancella il valore del codice di errore e la categoria.|  
|[default_error_condition](#error_code__default_error_condition)|Restituisce la condizione di errore predefinita.|  
|[message](#error_code__message)|Restituisce il nome del codice di errore.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator==](#error_code__operator_eq_eq)|Verifica l'uguaglianza tra oggetti `error_code`.|  
|[operator!=](#error_code__operator_neq)|Verifica la disuguaglianza tra oggetti `error_code`.|  
|[operator<](#error_code__operator_lt_)|Verifica se l'oggetto `error_code` è più piccolo dell'oggetto `error_code` passato per il confronto.|  
|[operator=](#error_code__operator_eq)|Assegna un nuovo valore di enumerazione all'oggetto `error_code`.|  
|[operator bool](#error_code__operator_bool)|Crea una variabile di tipo `error_code`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<system_error>  
  
 **Spazio dei nomi:** std  
  
##  <a name="error_code__assign"></a>  error_code::assign  
 Assegna un valore di codice di errore e una categoria a un codice di errore.  
  
```
void assign(value_type val, const error_category& _Cat);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`val`|Il valore del codice di errore da archiviare nell'`error_code`.|  
|`_Cat`|La categoria dell'errore da archiviare nell'`error_code`.|  
  
### <a name="remarks"></a>Note  
 La funzione membro archivia `val` come il valore del codice di errore e un puntatore a `_Cat`.  
  
##  <a name="error_code__category"></a>  error_code::category  
 Restituisce la categoria dell'errore.  
  
```
const error_category& category() const;
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="error_code__clear"></a>  error_code::clear  
 Cancella il valore del codice di errore e la categoria.  
  
```
clear();
```  
  
### <a name="remarks"></a>Note  
 La funzione membro archivia un valore del codice di errore zero e un puntatore all'oggetto [generic_category](../standard-library/system-error-functions.md#generic_category).  
  
##  <a name="error_code__default_error_condition"></a>  error_code::default_error_condition  
 Restituisce la condizione di errore predefinita.  
  
```
error_condition default_error_condition() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 La [error_condition](../standard-library/error-condition-class.md) specificata dalla [default_error_condition](../standard-library/error-category-class.md#error_category__default_error_condition).  
  
### <a name="remarks"></a>Note  
 Questa funzione membro restituisce `category().default_error_condition(value())`.  
  
##  <a name="error_code__error_code"></a>  error_code::error_code  
 Costruisce un oggetto di tipo `error_code`.  
  
```
error_code();

error_code(value_type val, const error_category& _Cat);

template <class _Enum>
error_code(_Enum _Errcode,
    typename enable_if<is_error_code_enum<_Enum>::value,
    error_code>::type* = 0);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`val`|Il valore del codice di errore da archiviare nell'`error_code`.|  
|`_Cat`|La categoria dell'errore da archiviare nell'`error_code`.|  
|`_Errcode`|Il valore di enumerazione da archiviare nell'`error_code`.|  
  
### <a name="remarks"></a>Note  
 Il primo costruttore archivia un valore del codice di errore zero e un puntatore alla [generic_category](../standard-library/system-error-functions.md#generic_category).  
  
 Il secondo costruttore archivia `val` come valore del codice di errore e un puntatore alla [generic_category](http://msdn.microsoft.com/en-us/6fe57a15-63a1-4e79-8af4-6738e43e19c8).  
  
 Il terzo costruttore archivia `(value_type)_Errcode` come valore del codice di errore e un puntatore alla [generic_category](../standard-library/system-error-functions.md#generic_category).  
  
##  <a name="error_code__message"></a>  error_code::message  
 Restituisce il nome del codice di errore.  
  
```
string message() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `string` che rappresenta il nome del codice di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro restituisce `category().message(value())`.  
  
##  <a name="error_code__operator_eq_eq"></a>  error_code::operator==  
 Verifica l'uguaglianza tra oggetti `error_code`.  
  
```
bool operator==(const error_code& right) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`right`|L'oggetto di cui verificare l'uguaglianza.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se gli oggetti sono uguali; in caso contrario, **false**.  
  
### <a name="remarks"></a>Note  
 L'operatore membro restituisce `category() == right.category() && value == right.value()`.  
  
##  <a name="error_code__operator_neq"></a>  error_code::operator!=  
 Verifica la disuguaglianza tra oggetti `error_code`.  
  
```
bool operator!=(const error_code& right) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`right`|L'oggetto di cui verificare la disuguaglianza.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto `error_code` non è uguale all'oggetto `error_code` passato in `right`; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 L'operatore membro restituisce `!(*this == right)`.  
  
##  <a name="error_code__operator_lt_"></a>  error_code::operator&lt;  
 Verifica se l'oggetto [error_code](http://msdn.microsoft.com/en-us/09c6ef90-b6f8-430a-b584-e168716c7e31) è più piccolo dell'oggetto `error_code` passato per il confronto.  
  
```
bool operator<(const error_code& right) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`right`|L'oggetto error_code da confrontare.|  
  
### <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto `error_code` è più piccolo dell'oggetto `error_code` passato per il confronto; in caso contrario **false**.  
  
### <a name="remarks"></a>Note  
 L'operatore membro restituisce `category() < right.category() || category() == right.category() && value < right.value()`.  
  
##  <a name="error_code__operator_eq"></a>  error_code::operator=  
 Assegna un nuovo valore di enumerazione all'oggetto [error_code](http://msdn.microsoft.com/en-us/09c6ef90-b6f8-430a-b584-e168716c7e31).  
  
```
template <class _Enum>
typename enable_if<is_error_code_enum<_Enum>::value,
    error_code>::type&
 operator=(_Enum _Errcode);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Errcode`|Il valore di enumerazione da assegnare all'oggetto `error_code`.|  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto `error_code` a cui viene assegnato il nuovo valore di enumerazione dalla funzione membro.  
  
### <a name="remarks"></a>Note  
 L'operatore membro archivia `(value_type)_Errcode` come valore del codice di errore e un puntatore alla [generic_category](../standard-library/system-error-functions.md#generic_category). Restituisce `*this`.  
  
##  <a name="error_code__operator_bool"></a>  error_code::operator bool  
 Crea una variabile di tipo `error_code`.  
  
```
explicit operator bool() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore booleano dell'oggetto `error_code`.  
  
### <a name="remarks"></a>Note  
 L'operatore restituisce un valore convertibile in `true` solo se [value](#error_code__value) non è uguale a zero. Il tipo restituito è convertibile solo in `bool`, non in `void *` o altri tipi scalari noti.  
  
##  <a name="error_code__value"></a>  error_code::value  
 Restituisce il valore del codice di errore archiviato.  
  
```
value_type value() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore del codice di errore archiviato di tipo [value_type](#error_code__value_type).  
  
### <a name="remarks"></a>Note  
  
##  <a name="error_code__value_type"></a>  error_code::value_type  
 Tipo che rappresenta il valore del codice di errore archiviato.  
  
```
typedef int value_type;
```  
  
### <a name="remarks"></a>Note  
 La definizione del tipo è un sinonimo di `int`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe error_category](../standard-library/error-category-class.md)   
 [<system_error>](../standard-library/system-error.md)




