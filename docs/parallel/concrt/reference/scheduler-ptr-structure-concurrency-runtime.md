---
title: Struttura scheduler_ptr | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::scheduler_ptr
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::get
- PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::operator bool
dev_langs:
- C++
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 257dcae6df4deb0a52f7dee4db98adba2b2b4f29
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
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
|[scheduler_ptr::scheduler_ptr](#ctor)|Di overload. Crea un puntatore dell'utilità di pianificazione da shared_ptr all'utilità di pianificazione|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[scheduler_ptr::get](#get)|Restituisce il puntatore raw all'utilità di pianificazione|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[scheduler_ptr:: operator bool](#operator_bool)|Verificare se il puntatore dell'utilità di pianificazione è diverso da null|  
|[scheduler_ptr::operator-&gt;](#operator_ptr)|Comportarsi come un puntatore|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `scheduler_ptr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** pplinterface  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="get"></a>  Metodo scheduler_ptr:: Get  
 Restituisce il puntatore raw all'utilità di pianificazione  
  
```
scheduler_interface* get() const;
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="operator_bool"></a>  scheduler_ptr:: operator bool   
 Verificare se il puntatore dell'utilità di pianificazione è diverso da null  
  
' ' operatore bool() const.
```  
  
##  <a name="operator_ptr"></a>  scheduler_ptr::operator-&gt;   
 Behave like a pointer  
  
```
scheduler_interface * operator -> () const.
```  
  
### Return Value  
  
##  <a name="ctor"></a>  scheduler_ptr::scheduler_ptr Constructor  
 Creates a scheduler pointer from shared_ptr to scheduler  
  
```
esplicita scheduler_ptr (std:: shared_ptr < scheduler_interface > dell'utilità di pianificazione);

esplicita scheduler_ptr (_In_opt_ scheduler_interface * pScheduler);
```  
  
### Parameters  
 `scheduler`  
 `pScheduler`  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
