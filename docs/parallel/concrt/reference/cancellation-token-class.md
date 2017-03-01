---
title: Classe cancellation_token | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- pplcancellation_token/concurrency::cancellation_token
dev_langs:
- C++
helpviewer_keywords:
- cancellation_token class
ms.assetid: 2787df2b-e9d3-440e-bfd0-841a46a9835f
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 93d5abe132203a53f3ffac8490fe32604e7e896e
ms.lasthandoff: 02/24/2017

---
# <a name="cancellationtoken-class"></a>Classe cancellation_token
La classe `cancellation_token` rappresenta la possibilità di determinare se è stato richiesto l'annullamento di una determinata operazione. Un token specificato può essere associato a `task_group`, `structured_task_group` o a `task` per consentire l'annullamento implicito. Può inoltre essere sottoposto a polling per l'annullamento o disporre di un callback registrato se e quando l'oggetto `cancellation_token_source` associato viene annullato.  
  
## <a name="syntax"></a>Sintassi  
  
```
class cancellation_token;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore cancellation_token](#ctor)||  
|[~ cancellation_token distruttore](#dtor)||  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[deregister_callback (metodo)](#deregister_callback)|Rimuove un callback registrato in precedenza tramite il metodo `register` in base all'oggetto `cancellation_token_registration` restituito al momento della registrazione.|  
|[is_cancelable (metodo)](#is_cancelable)|Restituisce un'indicazione sull'eventuale possibilità di annullamento di questo token.|  
|[is_canceled (metodo)](#is_canceled)|Restituisce `true` se il token è stato annullato.|  
|[None (metodo)](#none)|Restituisce un token di annullamento che non può mai essere soggetto all'annullamento.|  
|[register_callback (metodo)](#register_callback)|Registra una funzione di callback con il token. Il callback verrà eseguito se e quando il token viene annullato. Si noti che se il token è già stato annullato nel punto in cui viene chiamato questo metodo, il callback verrà eseguito immediatamente e in modo sincrono.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore! = (operatore)](#operator_neq)||  
|[operatore = (operatore)](#operator_eq)||  
|[operatore Operator = =](#operator_eq_eq)||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `cancellation_token`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** cancellation_token. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namedtora-cancellationtoken"></a><a name="dtor"></a>~ cancellation_token 

```
~cancellation_token();
```  
  
##  <a name="a-namectora-cancellationtoken"></a><a name="ctor"></a>cancellation_token 

```
cancellation_token(const cancellation_token& _Src);

cancellation_token(cancellation_token&& _Src);
```  
  
### <a name="parameters"></a>Parametri  
 `_Src`  
  
##  <a name="a-namederegistercallbacka-deregistercallback"></a><a name="deregister_callback"></a>deregister_callback 

 Rimuove un callback registrato in precedenza tramite il metodo `register` in base all'oggetto `cancellation_token_registration` restituito al momento della registrazione.  
  
```
void deregister_callback(const cancellation_token_registration& _Registration) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Registration`  
 L'oggetto `cancellation_token_registration` che corrisponde al callback di cui annullare la registrazione. Questo token deve essere stato restituito precedentemente da una chiamata al metodo `register`.  
  
##  <a name="a-nameiscancelablea-iscancelable"></a><a name="is_cancelable"></a>is_cancelable 

 Restituisce un'indicazione sull'eventuale possibilità di annullamento di questo token.  
  
```
bool is_cancelable() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Indicazione che segnala se il token può essere annullato o meno.  
  
##  <a name="a-nameiscanceleda-iscanceled"></a><a name="is_canceled"></a>is_canceled 

 Restituisce `true` se il token è stato annullato.  
  
```
bool is_canceled() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore è `true` se il token è stato annullato; in caso contrario, il valore è `false`.  
  
##  <a name="a-namenonea-none"></a><a name="none"></a>Nessuno 

 Restituisce un token di annullamento che non può mai essere soggetto all'annullamento.  
  
```
static cancellation_token none();
```  
  
### <a name="return-value"></a>Valore restituito  
 Token di annullamento che non può essere annullato.  
  
##  <a name="a-nameoperatorneqa-operator"></a><a name="operator_neq"></a>operatore! = 

```
bool operator!= (const cancellation_token& _Src) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Src`  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

```
cancellation_token& operator= (const cancellation_token& _Src);

cancellation_token& operator= (cancellation_token&& _Src);
```  
  
### <a name="parameters"></a>Parametri  
 `_Src`  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameoperatoreqeqa-operator"></a><a name="operator_eq_eq"></a>operatore = = 

```
bool operator== (const cancellation_token& _Src) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Src`  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameregistercallbacka-registercallback"></a><a name="register_callback"></a>register_callback 

 Registra una funzione di callback con il token. Il callback verrà eseguito se e quando il token viene annullato. Si noti che se il token è già stato annullato nel punto in cui viene chiamato questo metodo, il callback verrà eseguito immediatamente e in modo sincrono.  
  
```
template<typename _Function>
::Concurrency::cancellation_token_registration register_callback(const _Function& _Func) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Function`  
 Tipo dell'oggetto funzione che verrà richiamato quando `cancellation_token` viene annullato.  
  
 `_Func`  
 Oggetto funzione che verrà richiamato quando `cancellation_token` viene annullato.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `cancellation_token_registration` che può essere utilizzato nel metodo `deregister` per annullare la registrazione di un callback registrato in precedenza ed evitare che venga eseguito. Il metodo genererà un [invalid_operation](invalid-operation-class.md) eccezione se viene chiamato su un `cancellation_token` oggetto che è stato creato utilizzando il [cancellation_token:: None](#none) metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

