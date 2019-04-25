---
title: '&lt;future&gt;'
ms.date: 11/04/2016
f1_keywords:
- <future>
ms.assetid: 2f5830fc-455d-44f9-9e3d-94ea051596a2
ms.openlocfilehash: 189a9f16b65ae74fc2a86bee62bf8bd548c486aa
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62159860"
---
# <a name="ltfuturegt"></a>&lt;future&gt;

Includere l'intestazione standard \<future> per definire le classi modello e i modelli di supporto che semplificano l'esecuzione di una funzione, possibilmente in un thread separato, e il recupero del relativo risultato. Quest'ultimo è il valore restituito dalla funzione o un'eccezione generata dalla funzione, ma non rilevata nella funzione.

Questa intestazione usa il runtime di concorrenza (ConcRT) in modo che sia utilizzabile con altri meccanismi ConcRT. Per altre informazioni su ConcRT, vedere [Runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).

## <a name="syntax"></a>Sintassi

```cpp
#include <future>
```

## <a name="remarks"></a>Note

> [!NOTE]
> Nel codice compilato usando **/clr**, questa intestazione è bloccata.

Un *provider asincrono* archivia il risultato di una chiamata di funzione. Un *oggetto restituito asincrono* viene usato per recuperare il risultato di una chiamata di funzione. Uno *stato asincrono associato* consente la comunicazione tra un provider asincrono e uno o più oggetti restituiti asincroni.

Un programma non crea direttamente alcun oggetto di stato asincrono associato. Il programma crea un provider asincrono ogni volta che ne è necessario uno e da questo crea un oggetto restituito asincrono che condivide il proprio stato asincrono associato con il provider. I provider asincroni e gli oggetti restituiti asincroni gestiscono gli oggetti che includono il relativo stato asincrono associato condiviso. Quando l'ultimo oggetto che fa riferimento allo stato asincrono associato lo rilascia, l'oggetto che include tale stato viene eliminato.

Un provider asincrono o un oggetto restituito asincrono privo di uno stato asincrono associato è *vuoto*.

Lo stato asincrono associato è *ready* solo se il relativo provider asincrono ha archiviato un valore restituito o un'eccezione.

La funzione modello `async` e le classi modello `promise` e `packaged_task` sono provider asincroni. Le classi modello `future` e `shared_future` descrivono gli oggetti restituiti asincroni.

Ognuna delle classi modello `promise`, `future`, e `shared_future` ha una specializzazione per il tipo **void** e una specializzazione parziale per l'archiviazione e recupero di un valore per riferimento. Queste specializzazioni si differenziano dal modello principale solo nelle firme e nella semantica delle funzioni che archiviano e recuperano il valore restituito.

Le classi modello `future` e `shared_future` non bloccano mai nei relativi distruttori, eccetto in un caso che viene mantenuto per compatibilità con le versioni precedenti: A differenza di tutti gli altri dei "future", per un `future`, o l'ultima `shared_future`, che è collegato a un'attività avviata con `std::async`, il distruttore si blocca se l'attività non è stata completata; vale a dire, si blocca se il thread non ha ancora chiamato `.get()` o `.wait()`e l'attività è ancora in esecuzione. La seguente nota di usabilità è stato aggiunto alla descrizione di `std::async` nella bozza di standard: "[Nota: Se una future ottenuta da std::async viene spostata all'esterno dell'ambito locale, altro codice che usa il futuro deve tenere presente che il distruttore della prossima può bloccarsi per lo stato condiviso di diventare ready. — nota finale] "In tutti gli altri casi `future` e `shared_future` i distruttori sono necessari e vengono garantiti si blocca mai.

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe future](../standard-library/future-class.md)|Descrive un oggetto restituito asincrono.|
|[Classe future_error](../standard-library/future-error-class.md)|Descrive un oggetto eccezione che può essere generato dai metodi dei tipi che gestiscono gli oggetti `future`.|
|[Classe packaged_task](../standard-library/packaged-task-class.md)|Descrive un provider asincrono che è un wrapper di chiamata la cui firma di chiamata è `Ty(ArgTypes...)`. Lo stato asincrono associato include una copia dell'oggetto chiamabile oltre al potenziale risultato.|
|[Classe promise](../standard-library/promise-class.md)|Descrive un provider asincrono.|
|[Classe shared_future](../standard-library/shared-future-class.md)|Descrive un oggetto restituito asincrono. Diversamente da un oggetto `future`, un provider asincrono può essere associato a un numero qualsiasi di oggetti `shared_future`.|

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura is_error_code_enum](../standard-library/is-error-code-enum-structure.md)|Specializzazione che indica che `future_errc` è adatto per l'archiviazione di un oggetto `error_code`.|
|[Struttura uses_allocator](../standard-library/uses-allocator-structure.md)|Specializzazione che restituisce sempre true.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[async](../standard-library/future-functions.md#async)|Rappresenta un provider asincrono.|
|[future_category](../standard-library/future-functions.md#future_category)|Restituisce un riferimento all'oggetto `error_category` che caratterizza gli errori associati agli oggetti `future`.|
|[make_error_code](../standard-library/future-functions.md#make_error_code)|Crea un oggetto `error_code` che dispone dell'oggetto `error_category` che caratterizza gli errori `future`.|
|[make_error_condition](../standard-library/future-functions.md#make_error_condition)|Crea un oggetto `error_condition` che dispone dell'oggetto `error_category` che caratterizza gli errori `future`.|
|[swap](../standard-library/future-functions.md#swap)|Scambia lo stato asincrono associato di un oggetto `promise` con quello di un altro oggetto.|

### <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|----------|-----------------|
|[future_errc](../standard-library/future-enums.md#future_errc)|Fornisce i nomi simbolici per tutti gli errori segnalati dalla classe `future_error`.|
|[future_status](../standard-library/future-enums.md#future_status)|Fornisce i nomi simbolici per i motivi che una funzione di attesa temporizzata può restituire.|
|[launch](../standard-library/future-enums.md#launch)|Rappresenta un tipo di maschera di bit che descrive le possibili modalità per la funzione modello `async`.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
