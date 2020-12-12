---
description: 'Altre informazioni su: &lt; future&gt;'
title: '&lt;future&gt;'
ms.date: 11/04/2016
f1_keywords:
- <future>
ms.assetid: 2f5830fc-455d-44f9-9e3d-94ea051596a2
ms.openlocfilehash: 67c204f636ee9249e9c714df87a02ff6c6ff3149
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324200"
---
# <a name="ltfuturegt"></a>&lt;future&gt;

Includere l'intestazione standard \<future> per definire modelli di classe e modelli di supporto che semplificano l'esecuzione di una funzione, possibilmente in un thread separato, e il recupero del risultato. Quest'ultimo è il valore restituito dalla funzione o un'eccezione generata dalla funzione, ma non rilevata nella funzione.

Questa intestazione usa il runtime di concorrenza (ConcRT) in modo da essere utilizzabile con altri meccanismi ConcRT. Per altre informazioni su ConcRT, vedere [Runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).

## <a name="syntax"></a>Sintassi

```cpp
#include <future>
```

## <a name="remarks"></a>Osservazioni

> [!NOTE]
> Nel codice compilato utilizzando **/CLR**, questa intestazione è bloccata.

Un *provider asincrono* archivia il risultato di una chiamata di funzione. Un *oggetto restituito asincrono* viene usato per recuperare il risultato di una chiamata di funzione. Uno *stato asincrono associato* consente la comunicazione tra un provider asincrono e uno o più oggetti restituiti asincroni.

Un programma non crea direttamente alcun oggetto di stato asincrono associato. Il programma crea un provider asincrono ogni volta che ne è necessario uno e da questo crea un oggetto restituito asincrono che condivide il proprio stato asincrono associato con il provider. I provider asincroni e gli oggetti restituiti asincroni gestiscono gli oggetti che includono il relativo stato asincrono associato condiviso. Quando l'ultimo oggetto che fa riferimento allo stato asincrono associato lo rilascia, l'oggetto che include tale stato viene eliminato.

Un provider asincrono o un oggetto restituito asincrono privo di uno stato asincrono associato è *vuoto*.

Uno stato asincrono associato è *pronto* solo se il relativo provider asincrono ha archiviato un valore restituito o è stata archiviata un'eccezione.

La funzione `async` di modello e i modelli `promise` di classe e `packaged_task` sono provider asincroni. I modelli `future` di classe e `shared_future` descrivono gli oggetti restituiti asincroni.

Ogni modello di classe `promise` , `future` , e `shared_future` ha una specializzazione per il tipo **`void`** e una specializzazione parziale per l'archiviazione e il recupero di un valore per riferimento. Queste specializzazioni si differenziano dal modello principale solo nelle firme e nella semantica delle funzioni che archiviano e recuperano il valore restituito.

I modelli di classe `future` e `shared_future` non vengono mai bloccati nei relativi distruttori, tranne che in un caso che viene mantenuto per compatibilità con le versioni precedenti: a differenza di tutti gli altri futuri, per un, `future` o l'ultimo, associato `shared_future` a un'attività iniziata con `std::async` , il distruttore si blocca se l'attività non è stata completata, ovvero se il thread non ha ancora chiamato `.get()` o `.wait()` e l'attività è ancora in esecuzione Alla descrizione di `std::async` nella bozza dello standard è stata aggiunta una nota di usabilità che spiega quanto segue: se un oggetto future ottenuto da std::async viene spostato al di fuori dell'ambito locale, l'altro codice che usa l'oggetto future deve tenere presente che il distruttore di tale oggetto può bloccarsi per consentire allo stato condiviso di diventare ready. In tutti gli altri casi, i distruttori `future` e `shared_future` sono necessari ed è garantito che non si blocchino mai.

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Description|
|----------|-----------------|
|[Classe futura](../standard-library/future-class.md)|Descrive un oggetto restituito asincrono.|
|[Classe future_error](../standard-library/future-error-class.md)|Descrive un oggetto eccezione che può essere generato dai metodi dei tipi che gestiscono gli oggetti `future`.|
|[Classe packaged_task](../standard-library/packaged-task-class.md)|Descrive un provider asincrono che è un wrapper di chiamata la cui firma di chiamata è `Ty(ArgTypes...)`. Lo stato asincrono associato include una copia dell'oggetto chiamabile oltre al potenziale risultato.|
|[Classe promise](../standard-library/promise-class.md)|Descrive un provider asincrono.|
|[Classe shared_future](../standard-library/shared-future-class.md)|Descrive un oggetto restituito asincrono. Diversamente da un oggetto `future`, un provider asincrono può essere associato a un numero qualsiasi di oggetti `shared_future`.|

### <a name="structures"></a>Strutture

|Nome|Description|
|----------|-----------------|
|[Struttura is_error_code_enum](../standard-library/is-error-code-enum-structure.md)|Specializzazione che indica che `future_errc` è adatto per l'archiviazione di un oggetto `error_code`.|
|[Struttura uses_allocator](../standard-library/uses-allocator-structure.md)|Specializzazione che restituisce sempre true.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|----------|-----------------|
|[async](../standard-library/future-functions.md#async)|Rappresenta un provider asincrono.|
|[future_category](../standard-library/future-functions.md#future_category)|Restituisce un riferimento all'oggetto `error_category` che caratterizza gli errori associati agli oggetti `future`.|
|[make_error_code](../standard-library/future-functions.md#make_error_code)|Crea un oggetto `error_code` che dispone dell'oggetto `error_category` che caratterizza gli errori `future`.|
|[make_error_condition](../standard-library/future-functions.md#make_error_condition)|Crea un oggetto `error_condition` che dispone dell'oggetto `error_category` che caratterizza gli errori `future`.|
|[scambio](../standard-library/future-functions.md#swap)|Scambia lo stato asincrono associato di un oggetto `promise` con quello di un altro oggetto.|

### <a name="enumerations"></a>Enumerazioni

|Nome|Description|
|----------|-----------------|
|[future_errc](../standard-library/future-enums.md#future_errc)|Fornisce i nomi simbolici per tutti gli errori segnalati dalla classe `future_error`.|
|[future_status](../standard-library/future-enums.md#future_status)|Fornisce i nomi simbolici per i motivi che una funzione di attesa temporizzata può restituire.|
|[avvio](../standard-library/future-enums.md#launch)|Rappresenta un tipo di maschera di bit che descrive le possibili modalità per la funzione modello `async`.|

## <a name="see-also"></a>Vedi anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
