---
title: Classe shared_future
ms.date: 11/04/2016
f1_keywords:
- future/std::shared_future
- future/std::shared_future::shared_future
- future/std::shared_future::get
- future/std::shared_future::valid
- future/std::shared_future::wait
- future/std::shared_future::wait_for
- future/std::shared_future::wait_until
ms.assetid: 454ebedd-f42b-405f-99a5-a25cc9ad7c90
helpviewer_keywords:
- std::shared_future [C++]
- std::shared_future [C++], shared_future
- std::shared_future [C++], get
- std::shared_future [C++], valid
- std::shared_future [C++], wait
- std::shared_future [C++], wait_for
- std::shared_future [C++], wait_until
ms.openlocfilehash: 65ea01a9ced1ca69cd1b1526e7594c4b54387553
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81336786"
---
# <a name="shared_future-class"></a>Classe shared_future

Descrive un *oggetto restituito asincrono*. Diversamente da un oggetto [future](../standard-library/future-class.md), un *provider asincrono* può essere associato a un numero qualsiasi di oggetti `shared_future`.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
class shared_future;
```

## <a name="remarks"></a>Osservazioni

Non chiamare alcun metodo diverso da `valid`, `operator=` né il distruttore su un oggetto `shared_future`*vuoto*.

Gli oggetti `shared_future` non sono sincronizzati. La chiamata di metodi sullo stesso oggetto da più thread introduce una competizione tra dati con risultati imprevisti.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[shared_future](#shared_future)|Costruisce un oggetto `shared_future`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get](#get)|Recupera il risultato archiviato nello *stato asincrono associato*.|
|[Valido](#valid)|Specifica se l'oggetto non è vuoto.|
|[Aspettare](#wait)|Blocca il thread corrente finché lo stato asincrono associato non è ready.|
|[wait_for](#wait_for)|Blocca finché lo stato asincrono associato non è ready o finché non trascorre il periodo di tempo specificato.|
|[wait_until](#wait_until)|Blocca finché lo stato asincrono associato non è ready o fino al momento specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[shared_future::operatore](#op_eq)|Assegna un nuovo stato asincrono associato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> futuri

**Spazio dei nomi:** std

## <a name="shared_futureget"></a><a name="get"></a>shared_future::ottenere

Recupera il risultato archiviato nello *stato asincrono associato*.

```cpp
const Ty& get() const;

Ty& get() const;

void get() const;
```

### <a name="remarks"></a>Osservazioni

Se il risultato è un'eccezione, il metodo la genera nuovamente. In caso contrario, viene restituito il risultato.

Prima di recuperare il risultato, questo metodo blocca il thread corrente finché lo stato asincrono associato non è ready.

Per la specializzazione `shared_future<Ty&>`parziale , il valore archiviato è effettivamente un riferimento all'oggetto passato al provider *asincrono* come valore restituito.

Poiché non esiste alcun `shared_future<void>`valore archiviato per la specializzazione , il metodo restituisce **void**.

## <a name="shared_futureoperator"></a><a name="op_eq"></a>shared_future::operatore

Trasferisce *uno stato asincrono associato* da un oggetto specificato.

```cpp
shared_future& operator=(shared_future&& Right) noexcept;
shared_future& operator=(const shared_future& Right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Oggetto `shared_future` .

### <a name="return-value"></a>Valore restituito

`*this`

### <a name="remarks"></a>Osservazioni

Per il primo operatore, *Right* non ha più uno stato asincrono associato dopo l'operazione.

Per il secondo metodo, *Right* mantiene lo stato asincrono associato.

## <a name="shared_futureshared_future-constructor"></a><a name="shared_future"></a>Costruttore shared_future::shared_future

Costruisce un oggetto `shared_future`.

```cpp
shared_future() noexcept;
shared_future(future<Ty>&& Right) noexcept;
shared_future(shared_future&& Right) noexcept;
shared_future(const shared_future& Right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Oggetto [future](../standard-library/future-class.md) o `shared_future`.

### <a name="remarks"></a>Osservazioni

Il primo costruttore `shared_future` costruisce un oggetto a cui non è *associato alcuno stato asincrono.*

Il secondo e il `shared_future` terzo costruttore costruiscono un oggetto e trasferiscono lo stato asincrono associato da *Right*. *A destra* non è più associato uno stato asincrono.

Il quarto costruttore `shared_future` costruisce un oggetto con lo stesso stato asincrono associato *a Right*.

## <a name="shared_futurevalid"></a><a name="valid"></a>shared_future::valido

Specifica se all'oggetto è *associato uno stato asincrono.*

```cpp
bool valid() noexcept;
```

### <a name="return-value"></a>Valore restituito

**true** se all'oggetto è associato uno stato asincrono; in caso contrario, **false**.

## <a name="shared_futurewait"></a><a name="wait"></a>shared_future::attendere

Blocca il thread corrente finché *lo stato asincrono associato* non è *pronto.*

```cpp
void wait() const;
```

### <a name="remarks"></a>Osservazioni

Lo stato asincrono associato è ready solo se il relativo provider asincrono ha archiviato un valore restituito o un'eccezione.

## <a name="shared_futurewait_for"></a><a name="wait_for"></a>shared_future::wait_for

Blocca il thread corrente finché lo stato asincrono associato non è *ready* o finché non è trascorso un periodo di tempo specificato.

```cpp
template <class Rep, class Period>
future_status wait_for(
    const chrono::duration<Rep, Period>& Rel_time) const;
```

### <a name="parameters"></a>Parametri

*Rel_time*\
Oggetto [chrono::duration](../standard-library/duration-class.md) che specifica un intervallo di tempo massimo per il blocco del thread.

### <a name="return-value"></a>Valore restituito

Oggetto [future_status](../standard-library/future-enums.md#future_status) che indica il motivo della restituzione.

### <a name="remarks"></a>Osservazioni

Uno stato asincrono associato è *pronto* solo se il provider asincrono ha archiviato un valore restituito o archiviato un'eccezione.

## <a name="shared_futurewait_until"></a><a name="wait_until"></a>shared_future::wait_until

Blocca il thread corrente finché lo stato asincrono associato non è *ready* o fino a un determinato momento.

```cpp
template <class Clock, class Duration>
future_status wait_until(
    const chrono::time_point<Clock, Duration>& Abs_time) const;
```

### <a name="parameters"></a>Parametri

*Abs_time*\
Oggetto [chrono::time_point](../standard-library/time-point-class.md) che specifica un momento dopo il quale il thread può essere sbloccato.

### <a name="return-value"></a>Valore restituito

Oggetto [future_status](../standard-library/future-enums.md#future_status) che indica il motivo della restituzione.

### <a name="remarks"></a>Osservazioni

Lo stato asincrono associato è ready solo se il relativo provider asincrono ha archiviato un valore restituito o un'eccezione.

## <a name="see-also"></a>Vedere anche

[Riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<>futuro](../standard-library/future.md)
