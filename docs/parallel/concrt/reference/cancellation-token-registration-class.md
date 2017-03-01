---
title: Classe cancellation_token_registration | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- pplcancellation_token/concurrency::cancellation_token_registration
dev_langs:
- C++
helpviewer_keywords:
- cancellation_token_registration class
ms.assetid: 823d63f4-7233-4d65-8976-6152ccf12d0e
caps.latest.revision: 9
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
ms.openlocfilehash: 72c317bb95b646a3a97b361ac3248f015cd0f29a
ms.lasthandoff: 02/24/2017

---
# <a name="cancellationtokenregistration-class"></a>Classe cancellation_token_registration
La classe `cancellation_token_registration` rappresenta una notifica di callback da `cancellation_token`. Quando il metodo `register` in `cancellation_token` viene utilizzato per ricevere la notifica dell'annullamento, un oggetto `cancellation_token_registration` viene restituito al callback come handle, in modo che da parte del chiamante possa essere richiesto di non eseguire più un callback specifico tramite l'utilizzo del metodo `deregister`.  
  
## <a name="syntax"></a>Sintassi  
  
```
class cancellation_token_registration;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore cancellation_token_registration](#ctor)||  
|[~ cancellation_token_registration distruttore](#dtor)||  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore! = (operatore)](#operator_neq)||  
|[operatore = (operatore)](#operator_eq)||  
|[operatore Operator = =](#operator_eq_eq)||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `cancellation_token_registration`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** cancellation_token. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namedtora-cancellationtokenregistration"></a><a name="dtor"></a>~ cancellation_token_registration 

```
~cancellation_token_registration();
```  
  
##  <a name="a-namectora-cancellationtokenregistration"></a><a name="ctor"></a>cancellation_token_registration 

```
cancellation_token_registration();

cancellation_token_registration(const cancellation_token_registration& _Src);

cancellation_token_registration(cancellation_token_registration&& _Src);
```  
  
### <a name="parameters"></a>Parametri  
 `_Src`  
  
##  <a name="a-nameoperatorneqa-operator"></a><a name="operator_neq"></a>operatore! = 

```
bool operator!= (const cancellation_token_registration& _Rhs) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

```
cancellation_token_registration& operator= (const cancellation_token_registration& _Src);

cancellation_token_registration& operator= (cancellation_token_registration&& _Src);
```  
  
### <a name="parameters"></a>Parametri  
 `_Src`  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameoperatoreqeqa-operator"></a><a name="operator_eq_eq"></a>operatore = = 

```
bool operator== (const cancellation_token_registration& _Rhs) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Rhs`  
  
### <a name="return-value"></a>Valore restituito  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

