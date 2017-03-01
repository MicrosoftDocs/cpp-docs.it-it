---
title: Funzioni &lt;future&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 1e3acc1e-736a-42dc-ade2-b2fe69aa96bc
caps.latest.revision: 11
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 57a9e0ba45c363d126ef44dc80eeb13d72b3733d
ms.lasthandoff: 02/24/2017

---
# <a name="ltfuturegt-functions"></a>Funzioni &lt;future&gt;
||||  
|-|-|-|  
|[async](#async_function)|[future_category](#future_category_function)|[make_error_code](#make_error_code_function)|  
|[make_error_condition](#make_error_condition_function)|[swap](#swap_function)|  
  
##  <a name="a-nameasyncfunctiona--async"></a><a name="async_function"></a>  async  
 Rappresenta un * provider asincrono*.  
  
```
template <class Fn, class... ArgTypes>
future<typename result_of<Fn(ArgTypes...)>::type>
    async(Fn&& fn, ArgTypes&&... args);

template <class Fn, class... ArgTypes>
future<typename result_of<Fn(ArgTypes...)>::type>
    async(launch policy, Fn&& fn, ArgTypes&&... args);
```  
  
### <a name="parameters"></a>Parametri  
 `policy`  
 Valore [launch](../standard-library/future-enums.md#launch_enumeration).  
  
### <a name="remarks"></a>Note  
 Definizioni delle abbreviazioni:  
  
|||  
|-|-|  
|*dfn*|Risultato della chiamata a `decay_copy(forward<Fn>(fn))`.|  
|*dargs*|Risultati delle chiamate `decay_copy(forward<ArgsTypes>(args…))`.|  
|*Ty*|Tipo `result_of<Fn(ArgTypes…)>::type`.|  
  
 La prima funzione modello restituisce `async(launch::any, fn, args…)`.  
  
 La seconda funzione restituisce un oggetto `future<Ty>` il cui *stato asincrono associato* include un risultato insieme ai valori di *dfn* e *dargs* e un oggetto thread per gestire un thread di esecuzione separato.  
  
 A meno che `decay<Fn>::type` non sia un tipo diverso da launch, la seconda funzione non fa parte della risoluzione dell'overload.  
  
 Se `policy` è `launch::any`, la funzione potrebbe scegliere `launch::async` o `launch::deferred`. In questa implementazione la funzione usa `launch::async`.  
  
 Se `policy` è `launch::async`, la funzione crea un thread che valuta `INVOKE(dfn, dargs..., Ty)`. La funzione termina dopo aver creato il thread senza attendere i risultati. Se il sistema non riesce ad avviare un nuovo thread, la funzione genera un oggetto [system_error](../standard-library/system-error-class.md) con codice di errore `resource_unavailable_try_again`.  
  
 Se `policy` è `launch::deferred`, la funzione contrassegna il relativo stato asincrono associato come contenente una *funzione posticipata* e termina. La prima chiamata a qualsiasi funzione non temporizzata che attende che lo stato asincrono associato sia ready in effetti chiama la funzione posticipata valutando `INVOKE(dfn, dargs..., Ty)`.  
  
 In tutti i casi, lo stato asincrono associato dell'oggetto `future` non viene impostato su *ready* fino al completamento della valutazione di `INVOKE(dfn, dargs…, Ty)`, indipendentemente dal fatto che venga generata un'eccezione o che la procedura termini normalmente. Il risultato dello stato asincrono associato è un'eccezione se ne è stata generata una oppure qualsiasi valore restituito dalla valutazione.  
  
> [!NOTE]
>  Per un oggetto `future` (o per l'ultimo oggetto [shared_future](../standard-library/shared-future-class.md)) associato a un'attività avviata con `std::async`, il distruttore si blocca se l'attività non è stata completata. In altri termini, si blocca se questo thread non ha ancora chiamato `.get()` o `.wait()` e l'attività è ancora in esecuzione. Se un oggetto `future` ottenuto da `std::async` viene spostato al di fuori dell'ambito locale, l'altro codice che lo usa deve tenere presente che il relativo distruttore può bloccarsi per consentire allo stato condiviso di diventare ready.  
  
 La pseudo-funzione `INVOKE` è definita in [\<functional>](../standard-library/functional.md).  
  
##  <a name="a-namefuturecategoryfunctiona--futurecategory"></a><a name="future_category_function"></a>  future_category  
 Restituisce un riferimento all'oggetto [error_category](../standard-library/error-category-class.md) che caratterizza gli errori associati a oggetti `future`.  
  
```
const error_category& future_category() noexcept;
```  
  
##  <a name="a-namemakeerrorcodefunctiona--makeerrorcode"></a><a name="make_error_code_function"></a>  make_error_code  
 Crea un oggetto [error_code](../standard-library/error-code-class.md) insieme all'oggetto [error_category](../standard-library/error-category-class.md) che caratterizza gli errori [future](../standard-library/future-class.md).  
  
```
inline error_code make_error_code(future_errc Errno) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Errno`  
 Valore [future_errc](../standard-library/future-enums.md#future_errc_enumeration) che identifica l'errore segnalato.  
  
### <a name="return-value"></a>Valore restituito  
 `error_code(static_cast<int>(Errno), future_category());`  
  
##  <a name="a-namemakeerrorconditionfunctiona--makeerrorcondition"></a><a name="make_error_condition_function"></a>  make_error_condition  
 Crea un oggetto [error_condition](../standard-library/error-condition-class.md) insieme all'oggetto [error_category](../standard-library/error-category-class.md) che caratterizza gli errori [future](../standard-library/future-class.md).  
  
```
inline error_condition make_error_condition(future_errc Errno) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Errno`  
 Valore [future_errc](../standard-library/future-enums.md#future_errc_enumeration) che identifica l'errore segnalato.  
  
### <a name="return-value"></a>Valore restituito  
 `error_condition(static_cast<int>(Errno), future_category());`  
  
##  <a name="a-nameswapfunctiona--swap"></a><a name="swap_function"></a>  swap  
 Scambia lo *stato asincrono associato* di un oggetto `promise` con quello di un altro oggetto.  
  
```
template <class Ty>
void swap(promise<Ty>& Left, promise<Ty>& Right) noexcept;

template <class Ty, class... ArgTypes>
void swap(packaged_task<Ty(ArgTypes...)>& Left, packaged_task<Ty(ArgTypes...)>& Right) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 L'oggetto `promise` a sinistra.  
  
 `Right`  
 L'oggetto `promise` corretto.  
  
## <a name="see-also"></a>Vedere anche  
 [\<future>](../standard-library/future.md)




