---
title: Classe progress_reporter | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- progress_reporter
- PPLTASKS/concurrency::progress_reporter
- PPLTASKS/concurrency::progress_reporter::progress_reporter
- PPLTASKS/concurrency::progress_reporter::report
dev_langs:
- C++
helpviewer_keywords:
- progress_reporter class
ms.assetid: b836efab-2d05-4649-b6fa-d15236f1f813
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d5d4dc98c4fb411a4d63fdfad5049cf0df723bec
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686565"
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
|[progress_reporter](#ctor)||  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[report](#report)|Invia un rapporto di stato all'operazione asincrona o all'operazione a cui è associato questo reporter dello stato di avanzamento.|  
  
## <a name="remarks"></a>Note  
 Questo tipo è disponibile solo per App di Windows Runtime.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `progress_reporter`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ppltasks. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a> progress_reporter 

```
progress_reporter();
```  
  
##  <a name="report"></a> Report 

 Invia un rapporto di stato all'operazione asincrona o all'operazione a cui è associato questo reporter dello stato di avanzamento.  
  
```
void report(const _ProgressType& val) const;
```  
  
### <a name="parameters"></a>Parametri  
 `val`  
 Il payload al report tramite una notifica di stato di avanzamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
