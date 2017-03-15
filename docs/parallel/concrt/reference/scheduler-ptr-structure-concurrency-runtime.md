---
title: Struttura scheduler_ptr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- pplinterface/concurrency::scheduler_ptr
dev_langs:
- C++
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
caps.latest.revision: 8
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
ms.sourcegitcommit: fa774c7f025b581d65c28d65d83e22ff2d798230
ms.openlocfilehash: 022b5fafc437a8103fe17967a9a5ea54d5b82a39
ms.lasthandoff: 02/24/2017

---
# <a name="schedulerptr-structure"></a>Struttura scheduler_ptr
Rappresenta un puntatore a un'utilità di pianificazione. Questa classe esiste per consentire di specificare una durata condivisa utilizzando shared_ptr o semplicemente un riferimento normale utilizzando il puntatore raw.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct scheduler_ptr;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore scheduler_ptr:: scheduler_ptr](#ctor)|Di overload. Crea un puntatore dell'utilità di pianificazione da shared_ptr all'utilità di pianificazione|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo scheduler_ptr:: Get](#get)|Restituisce il puntatore raw all'utilità di pianificazione|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore scheduler_ptr:: operator bool](#operator_bool)|Verificare se il puntatore dell'utilità di pianificazione è diverso da null|  
|[scheduler_ptr:: operator -&gt; (operatore)](#operator_ptr)|Comportarsi come un puntatore|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `scheduler_ptr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** pplinterface.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namegeta--schedulerptrget-method"></a><a name="get"></a>Metodo scheduler_ptr:: Get  
 Restituisce il puntatore raw all'utilità di pianificazione  
  
```
scheduler_interface* get() const;
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameoperatorboola--schedulerptroperator-bool"></a><a name="operator_bool"></a>scheduler_ptr:: operator bool   
 Verificare se il puntatore dell'utilità di pianificazione è diverso da null  
  
' ' operatore bool() const.
```  
  
##  <a name="operator_ptr"></a>  scheduler_ptr::operator-&gt;   
 Behave like a pointer  
  
```
scheduler_interface * operator->() const.
```  
  
### Return Value  
  
##  <a name="ctor"></a>  scheduler_ptr::scheduler_ptr Constructor  
 Creates a scheduler pointer from shared_ptr to scheduler  
  
```
esplicita scheduler_ptr(std::shared_ptr<scheduler_interface> scheduler);</scheduler_interface>

esplicita scheduler_ptr (_In_opt_ scheduler_interface * pScheduler);
```  
  
### Parameters  
 `scheduler`  
 `pScheduler`  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)

