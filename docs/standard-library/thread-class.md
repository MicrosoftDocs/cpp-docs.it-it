---
description: 'Altre informazioni su: classe thread'
title: Classe thread
ms.date: 11/04/2016
f1_keywords:
- thread/std::thread
- thread/std::thread::id Class
- thread/std::thread::thread
- thread/std::thread::detach
- thread/std::thread::get_id
- thread/std::thread::hardware_concurrency
- thread/std::thread::join
- thread/std::thread::joinable
- thread/std::thread::native_handle
- thread/std::thread::swap
ms.assetid: df249bc7-ff81-4ff9-a6d6-5e3d9a8f56a1
helpviewer_keywords:
- std::thread [C++]
- std::thread [C++], thread
- std::thread [C++], detach
- std::thread [C++], get_id
- std::thread [C++], hardware_concurrency
- std::thread [C++], join
- std::thread [C++], joinable
- std::thread [C++], native_handle
- std::thread [C++], swap
ms.openlocfilehash: b9afa8e649fd2b3fb0fdaf339e4a6fbead5b4ef6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207462"
---
# <a name="thread-class"></a>Classe thread

Definisce un oggetto usato per verificare e gestire un thread di esecuzione all'interno di un'applicazione.

## <a name="syntax"></a>Sintassi

```cpp
class thread;
```

## <a name="remarks"></a>Osservazioni

È possibile usare un oggetto `thread` per verificare e gestire un thread di esecuzione all'interno di un'applicazione. Un oggetto thread creato mediante il costruttore predefinito non è associato ad alcun thread di esecuzione. Un oggetto thread costruito mediante un oggetto chiamabile crea un nuovo thread di esecuzione e chiama l'oggetto chiamabile in tale thread. Gli oggetti thread possono essere spostati ma non copiati. Di conseguenza, un thread di esecuzione può essere associato a un solo oggetto thread.

Ogni thread di esecuzione ha un identificatore univoco di tipo `thread::id`. La funzione `this_thread::get_id` restituisce l'identificatore del thread chiamante. La funzione membro `thread::get_id` restituisce l'identificatore del thread gestito da un oggetto thread. Per un oggetto thread costruito in modo predefinito, il metodo `thread::get_id` restituisce un oggetto di valore uguale a quello di tutti gli oggetti thread costruiti in modo predefinito e diverso dal valore restituito da `this_thread::get_id` per qualsiasi thread di esecuzione che è possibile sottoporre a join al momento della chiamata.

## <a name="members"></a>Membri

### <a name="public-classes"></a>Classi pubbliche

|Nome|Description|
|----------|-----------------|
|[Classe thread::id](#id_class)|Identifica in modo univoco il thread associato.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[thread](#thread)|Costruisce un oggetto `thread`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[Scollegare](#detach)|Dissocia il thread associato dall'oggetto `thread`.|
|[get_id](#get_id)|Restituisce l'identificatore univoco del thread associato.|
|[hardware_concurrency](#hardware_concurrency)|Statico. Restituisce una stima del numero di contesti di thread hardware.|
|[join](#join)|Si blocca fino al completamento del thread associato.|
|[joinable](#joinable)|Specifica se il thread associato è sottoponibile a join.|
|[native_handle](#native_handle)|Restituisce il tipo specifico dell'implementazione che rappresenta l'handle del thread.|
|[scambio](#swap)|Scambia lo stato dell'oggetto con quello di un oggetto `thread` specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[thread:: operator =](#op_eq)|Associa un thread con l'oggetto `thread` corrente.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<thread>

**Spazio dei nomi:** std

## <a name="threaddetach"></a><a name="detach"></a> thread::d etach

Dissocia il thread associato. Il sistema operativo diventa responsabile del rilascio di risorse di thread al termine delle operazioni.

```cpp
void detach();
```

### <a name="remarks"></a>Commenti

Dopo una chiamata a `detach`, le successive chiamate a [get_id](#get_id) restituiscono [id](#id_class).

Se il thread associato all'oggetto chiamante non è sottoponibile a join, la funzione genera un oggetto [system_error](../standard-library/system-error-class.md) con codice di errore `invalid_argument`.

Se il thread associato all'oggetto chiamante non è valido la funzione genera un oggetto `system_error` con codice di errore `no_such_process`.

## <a name="threadget_id"></a><a name="get_id"></a> thread:: get_id

Restituisce un identificatore univoco per il thread associato.

```cpp
id get_id() const noexcept;
```

### <a name="return-value"></a>Valore restituito

Oggetto [thread::id](#id_class) che identifica in modo univoco il thread associato. Se all'oggetto non è associato alcun thread, viene restituito `thread::id()`.

## <a name="threadhardware_concurrency"></a><a name="hardware_concurrency"></a> thread:: hardware_concurrency

Metodo statico che restituisce una stima del numero di contesti di thread hardware.

```cpp
static unsigned int hardware_concurrency() noexcept;
```

### <a name="return-value"></a>Valore restituito

Una stima del numero di contesti di thread hardware. Se il valore non può essere calcolato o non è definito correttamente, il metodo restituisce 0.

## <a name="threadid-class"></a><a name="id_class"></a> Classe thread:: ID

Fornisce un identificatore univoco per ogni thread di esecuzione del processo.

```cpp
class thread::id {
    id() noexcept;
};
```

### <a name="remarks"></a>Commenti

Il costruttore predefinito crea un oggetto che non risulta uguale all'oggetto `thread::id` per alcun thread esistente.

Tutti gli oggetti `thread::id` costruiti in modo predefinito risultano uguali.

## <a name="threadjoin"></a><a name="join"></a> thread:: join

Si blocca fino al completamento del thread di esecuzione associato all'oggetto chiamante.

```cpp
void join();
```

### <a name="remarks"></a>Commenti

Se la chiamata ha esito positivo, le chiamate successive a [get_id](#get_id) per l'oggetto chiamante restituiscono un oggetto [thread::id](#id_class) predefinito che non risulta uguale al `thread::id` di alcun thread esistente. Se le chiamata ha esito negativo, il valore restituito da `get_id` rimane invariato.

## <a name="threadjoinable"></a><a name="joinable"></a> thread:: joinable

Specifica se il thread associato è *partecipabile*.

```cpp
bool joinable() const noexcept;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se il thread associato è *partecipabile*; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

Un oggetto thread è *sottoponibile a join* se `get_id() != id()`.

## <a name="threadnative_handle"></a><a name="native_handle"></a> thread:: native_handle

Restituisce il tipo specifico dell'implementazione che rappresenta l'handle del thread. L'handle del thread può essere usato in modi specifici dell'implementazione.

```cpp
native_handle_type native_handle();
```

### <a name="return-value"></a>Valore restituito

`native_handle_type` viene definito come `HANDLE` Win32 di cui viene eseguito il cast come `void *`.

## <a name="threadoperator"></a><a name="op_eq"></a> thread:: operator =

Associa il thread di un oggetto specificato all'oggetto corrente.

```cpp
thread& operator=(thread&& Other) noexcept;
```

### <a name="parameters"></a>Parametri

*Altri*\
Un oggetto `thread`.

### <a name="return-value"></a>Valore restituito

`*this`

### <a name="remarks"></a>Commenti

Il metodo chiama la funzione detach se l'oggetto è sottoponibile a join.

Dopo l'associazione, `Other` viene impostato su uno stato costruito in modo predefinito.

## <a name="threadswap"></a><a name="swap"></a> thread:: swap

Scambia lo stato dell'oggetto con quello di un oggetto `thread` specificato.

```cpp
void swap(thread& Other) noexcept;
```

### <a name="parameters"></a>Parametri

*Altri*\
Un oggetto `thread`.

## <a name="threadthread-constructor"></a><a name="thread"></a> Costruttore thread:: thread

Costruisce un oggetto `thread`.

```cpp
thread() noexcept;
template <class Fn, class... Args>
explicit thread(Fn&& F, Args&&... A);

thread(thread&& Other) noexcept;
```

### <a name="parameters"></a>Parametri

*F*\
Una funzione definita dall'applicazione che deve essere eseguita dal thread.

*Un*\
Elenco di argomenti da passare a *F*.

*Altri*\
Oggetto `thread` esistente.

### <a name="remarks"></a>Commenti

Il primo costruttore crea un oggetto non associato a un thread di esecuzione. Il valore restituito da una chiamata a `get_id` per l'oggetto costruito è `thread::id()`.

Il secondo costruttore crea un oggetto associato a un nuovo thread di esecuzione ed esegue la pseudo-funzione `INVOKE` definita in [\<functional>](../standard-library/functional.md) . Se non sono disponibili risorse sufficienti per avviare un nuovo thread, la funzione genera un oggetto [system_error](../standard-library/system-error-class.md) con codice di errore `resource_unavailable_try_again`. Se la chiamata a *F* termina con un'eccezione non rilevata, viene chiamato il metodo [Terminate](../standard-library/exception-functions.md#terminate) .

Il terzo costruttore crea un oggetto associato al thread a sua volta associato a `Other`. `Other` viene quindi impostato su uno stato costruito in modo predefinito.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<thread>](../standard-library/thread.md)
