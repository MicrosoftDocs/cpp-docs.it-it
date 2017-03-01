---
title: Classe progress_reporter | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ppltasks/concurrency::progress_reporter
dev_langs:
- C++
helpviewer_keywords:
- progress_reporter class
ms.assetid: b836efab-2d05-4649-b6fa-d15236f1f813
caps.latest.revision: 11
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
ms.openlocfilehash: c6b4dfee5b5f9df98a36fcdac116182ced4cbe30
ms.lasthandoff: 02/24/2017

---
# <a name="progressreporter-class"></a>Classe progress_reporter
La classe del reporter dello stato di avanzamento consente la segnalazione di notifiche di stato di un tipo specifico. Ogni oggetto progress_reporter è associato a una particolare operazione o azione asincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename _ProgressType>
class progress_reporter;
```  
  
#### <a name="parameters"></a>Parametri  
 `_ProgressType`  
 Il tipo di payload di ogni notifica dello stato di avanzamento segnalato tramite il reporter dello stato di avanzamento.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore progress_reporter](#ctor)||  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[report (metodo)](#report)|Invia un rapporto di stato all'operazione asincrona o all'operazione a cui è associato questo reporter dello stato di avanzamento.|  
  
## <a name="remarks"></a>Note  
 Questo tipo è disponibile solo per le applicazioni Windows Store.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `progress_reporter`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ppltasks. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namectora-progressreporter"></a><a name="ctor"></a>progress_reporter 

```
progress_reporter();
```  
  
##  <a name="a-namereporta-report"></a><a name="report"></a>report 

 Invia un rapporto di stato all'operazione asincrona o all'operazione a cui è associato questo reporter dello stato di avanzamento.  
  
```
void report(const _ProgressType& val) const;
```  
  
### <a name="parameters"></a>Parametri  
 `val`  
 Il payload di report tramite una notifica di stato di avanzamento.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

