---
title: Classe Event | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- event
- CONCRT/concurrency::event
- CONCRT/concurrency::event::reset
- CONCRT/concurrency::event::set
- CONCRT/concurrency::event::wait
- CONCRT/concurrency::event::wait_for_multiple
- CONCRT/concurrency::event::timeout_infinite
dev_langs:
- C++
helpviewer_keywords:
- event class
ms.assetid: fba35a53-6568-4bfa-9aaf-07c0928cf73d
caps.latest.revision: 22
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: f858bfad08ca8d62c42556c54b505908b7122569
ms.lasthandoff: 03/17/2017

---
# <a name="event-class"></a>Classe event
Un evento di reimpostazione manuale che tiene conto in modo esplicito del runtime di concorrenza.  
  
## <a name="syntax"></a>Sintassi  
  
```
class event;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[~ evento distruttore](#dtor)|Elimina un evento.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[reset](#reset)|Reimposta l'evento a uno stato non segnalato.|  
|[set](#set)|Segnala l'evento.|  
|[attesa](#wait)|Attende l'evento venga segnalato.|  
|[wait_for_multiple](#wait_for_multiple)|Attende la segnalazione di più eventi.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[timeout_infinite](#timeout_infinite)|Valore indicante un'attesa che non deve terminare mai.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `event`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>evento 

 Costruisce un nuovo evento.  
  
```
_CRTIMP event();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="dtor"></a>~ evento 

 Elimina un evento.  
  
```
~event();
```  
  
### <a name="remarks"></a>Note  
 È probabile che non sono presenti thread in attesa dell'evento quando viene eseguito il distruttore. Se si consente all'evento di eseguire la distruzione quando i thread sono ancora in attesa si verificherà un comportamento non definito.  
  
##  <a name="reset"></a>reimpostazione 

 Reimposta l'evento a uno stato non segnalato.  
  
```
void reset();
```  
  
##  <a name="set"></a>set 

 Segnala l'evento.  
  
```
void set();
```  
  
### <a name="remarks"></a>Note  
 Segnalare l'evento potrebbe causare un numero arbitrario di contesti in attesa che l'evento diventi eseguibile.  
  
##  <a name="timeout_infinite"></a>timeout_infinite 

 Valore indicante un'attesa che non deve terminare mai.  
  
```
static const unsigned int timeout_infinite = COOPERATIVE_TIMEOUT_INFINITE;
```  
  
##  <a name="wait"></a>attesa 

 Attende l'evento venga segnalato.  
  
```
size_t wait(unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 `_Timeout`  
 Indica il numero di millisecondi prima del timeout dell'attesa. Il valore `COOPERATIVE_TIMEOUT_INFINITE` indica che non vi è alcun timeout.  
  
### <a name="return-value"></a>Valore restituito  
 Se è stato soddisfatto l'attesa, il valore `0` restituito; in caso contrario, il valore `COOPERATIVE_WAIT_TIMEOUT` per indicare che l'attesa è scaduto senza che l'evento che diventa segnalato.  
  
> [!IMPORTANT]
>  In un'applicazione [!INCLUDE[win8_appname_long](../../../build/includes/win8_appname_long_md.md)], non chiamare `wait` sul thread ASTA poiché tramite questa chiamata potrebbe bloccarsi il thread corrente e l'applicazione potrebbe non rispondere.  
  
##  <a name="wait_for_multiple"></a>wait_for_multiple 

 Attende la segnalazione di più eventi.  
  
```
static size_t __cdecl wait_for_multiple(
    _In_reads_(count) event** _PPEvents,
    size_t count,
    bool _FWaitAll,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 `_PPEvents`  
 Matrice di eventi per restare in attesa. Il numero di eventi all'interno della matrice è indicato dal `count` parametro.  
  
 `count`  
 Il numero di eventi all'interno della matrice fornita nel `_PPEvents` parametro.  
  
 `_FWaitAll`  
 Se impostata sul valore `true`, il parametro specifica che tutti gli eventi all'interno della matrice fornita nel `_PPEvents` parametro deve diventare segnalato per soddisfare l'attesa. Se impostata sul valore `false`, specifica che qualsiasi evento all'interno della matrice fornita nel `_PPEvents` parametro che diventa segnalato soddisferà l'attesa.  
  
 `_Timeout`  
 Indica il numero di millisecondi prima del timeout dell'attesa. Il valore `COOPERATIVE_TIMEOUT_INFINITE` indica che non vi è alcun timeout.  
  
### <a name="return-value"></a>Valore restituito  
 Se è stato soddisfatto l'attesa, l'indice all'interno della matrice fornita nel `_PPEvents` parametro che ha soddisfatto la condizione di attesa; in caso contrario, il valore `COOPERATIVE_WAIT_TIMEOUT` per indicare che l'attesa è scaduto senza la condizione viene soddisfatta.  
  
### <a name="remarks"></a>Note  
 Se il parametro `_FWaitAll` è impostata sul valore `true` per indicare che tutti gli eventi devono diventare segnalati per soddisfare l'attesa, l'indice restituito dalla funzione non esegue senza alcun significato speciale diverso dal fatto che non è il valore `COOPERATIVE_WAIT_TIMEOUT`.  
  
> [!IMPORTANT]
>  In un'applicazione [!INCLUDE[win8_appname_long](../../../build/includes/win8_appname_long_md.md)], non chiamare `wait_for_multiple` sul thread ASTA poiché tramite questa chiamata potrebbe bloccarsi il thread corrente e l'applicazione potrebbe non rispondere.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

