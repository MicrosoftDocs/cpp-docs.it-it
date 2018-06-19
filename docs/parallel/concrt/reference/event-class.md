---
title: Classe di evento | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fb02865b20d1603be38192e770eb26627e6900e7
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33692867"
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
|[~ evento distruttore](#dtor)|Elimina definitivamente un evento.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[reset](#reset)|Reimposta l'evento a uno stato non segnalato.|  
|[set](#set)|Segnala l'evento.|  
|[wait](#wait)|Attende l'evento venga segnalato.|  
|[wait_for_multiple](#wait_for_multiple)|Attende più eventi vengano segnalati.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[timeout_infinite](#timeout_infinite)|Valore indicante un'attesa che non deve terminare mai.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `event`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a> Evento 

 Costruisce un nuovo evento.  
  
```
_CRTIMP event();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="dtor"></a> ~ evento 

 Elimina definitivamente un evento.  
  
```
~event();
```  
  
### <a name="remarks"></a>Note  
 È previsto che non sono presenti thread in attesa dell'evento quando viene eseguito il distruttore. Se si consente all'evento di eseguire la distruzione quando i thread sono ancora in attesa si verificherà un comportamento non definito.  
  
##  <a name="reset"></a> Reimpostazione 

 Reimposta l'evento a uno stato non segnalato.  
  
```
void reset();
```  
  
##  <a name="set"></a> Set 

 Segnala l'evento.  
  
```
void set();
```  
  
### <a name="remarks"></a>Note  
 Segnalare l'evento potrebbe causare un numero arbitrario di contesti in attesa che l'evento diventi eseguibile.  
  
##  <a name="timeout_infinite"></a> timeout_infinite 

 Valore indicante un'attesa che non deve terminare mai.  
  
```
static const unsigned int timeout_infinite = COOPERATIVE_TIMEOUT_INFINITE;
```  
  
##  <a name="wait"></a> attesa 

 Attende l'evento venga segnalato.  
  
```
size_t wait(unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 `_Timeout`  
 Indica il numero di millisecondi prima del timeout dell'attesa. Il valore `COOPERATIVE_TIMEOUT_INFINITE` indica che non vi è alcun timeout.  
  
### <a name="return-value"></a>Valore restituito  
 Se è stato soddisfatto l'attesa, il valore `0` sia restituito; in caso contrario, il valore `COOPERATIVE_WAIT_TIMEOUT` per indicare che il tempo di attesa scaduto senza che l'evento che diventa segnalato.  
  
> [!IMPORTANT]
>  In un'app di Windows della piattaforma UWP (Universal), non chiamare `wait` sul thread ASTA poiché tramite questa chiamata potrebbe bloccarsi il thread corrente e l'applicazione potrebbe non rispondere.  
  
##  <a name="wait_for_multiple"></a> wait_for_multiple 

 Attende più eventi vengano segnalati.  
  
```
static size_t __cdecl wait_for_multiple(
    _In_reads_(count) event** _PPEvents,
    size_t count,
    bool _FWaitAll,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 `_PPEvents`  
 Matrice di eventi per restare in attesa. Viene indicato il numero di eventi all'interno della matrice dal `count` parametro.  
  
 `count`  
 Il numero di eventi all'interno della matrice fornita nel `_PPEvents` parametro.  
  
 `_FWaitAll`  
 Se impostata sul valore `true`, il parametro specifica che tutti gli eventi all'interno della matrice fornita nel `_PPEvents` parametro deve diventare segnalato per soddisfare l'attesa. Se impostata sul valore `false`, specifica che qualsiasi evento all'interno della matrice fornita nel `_PPEvents` parametro che diventa segnalato soddisferà l'attesa.  
  
 `_Timeout`  
 Indica il numero di millisecondi prima del timeout dell'attesa. Il valore `COOPERATIVE_TIMEOUT_INFINITE` indica che non vi è alcun timeout.  
  
### <a name="return-value"></a>Valore restituito  
 Se è stato soddisfatto l'attesa, l'indice all'interno della matrice fornita nel `_PPEvents` parametro che ha soddisfatto la condizione attesa; in caso contrario, il valore `COOPERATIVE_WAIT_TIMEOUT` per indicare che l'attesa è scaduto senza la condizione viene soddisfatta.  
  
### <a name="remarks"></a>Note  
 Se il parametro `_FWaitAll` è impostata sul valore `true` per indicare che tutti gli eventi devono diventare segnalati per soddisfare l'attesa, l'indice restituito dalla funzione non esegue alcun significato speciale il fatto che non è il valore `COOPERATIVE_WAIT_TIMEOUT`.  
  
> [!IMPORTANT]
>  In un'app di Windows della piattaforma UWP (Universal), non chiamare `wait_for_multiple` sul thread ASTA poiché tramite questa chiamata potrebbe bloccarsi il thread corrente e l'applicazione potrebbe non rispondere.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
