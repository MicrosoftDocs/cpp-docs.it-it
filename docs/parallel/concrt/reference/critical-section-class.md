---
title: Classe critical_section
ms.date: 11/04/2016
f1_keywords:
- critical_section
- CONCRT/concurrency::critical_section
- CONCRT/concurrency::critical_section::critical_section::scoped_lock Class
- CONCRT/concurrency::critical_section::critical_section
- CONCRT/concurrency::critical_section::lock
- CONCRT/concurrency::critical_section::native_handle
- CONCRT/concurrency::critical_section::try_lock
- CONCRT/concurrency::critical_section::try_lock_for
- CONCRT/concurrency::critical_section::unlock
helpviewer_keywords:
- critical_section class
ms.assetid: fa3c89d6-be5d-4d1b-bddb-8232814e6cf6
ms.openlocfilehash: f7df639a879bad7af1b4de401460ff298e466c78
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215816"
---
# <a name="critical_section-class"></a>Classe critical_section

Un'esclusione reciproca non rientrante che tiene conto in modo esplicito del runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```cpp
class critical_section;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`native_handle_type`|Riferimento a un oggetto `critical_section`.|

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe critical_section::scoped_lock](#critical_section__scoped_lock_class)|Wrapper RAII safe di eccezione per un `critical_section` oggetto.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[critical_section](#ctor)|Costruisce una nuova sezione critica.|
|[Distruttore ~ critical_section](#dtor)|Elimina una sezione critica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[blocco](#lock)|Acquisisce questa sezione critica.|
|[native_handle](#native_handle)|Restituisce un handle nativo specifico della piattaforma, se ne esiste uno.|
|[try_lock](#try_lock)|Tenta di acquisire il blocco senza bloccarsi.|
|[try_lock_for](#try_lock_for)|Tenta di acquisire il blocco senza bloccarsi per un numero specifico di millisecondi.|
|[sbloccare](#unlock)|Sblocca la sezione critica.|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [Synchronization Data Structures](../../../parallel/concrt/synchronization-data-structures.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`critical_section`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="critical_section"></a><a name="ctor"></a>critical_section

Costruisce una nuova sezione critica.

```cpp
critical_section();
```

## <a name="critical_section"></a><a name="dtor"></a>~ critical_section

Elimina una sezione critica.

```cpp
~critical_section();
```

### <a name="remarks"></a>Osservazioni

Si prevede che il blocco non venga più mantenuto durante l'esecuzione del distruttore. Consentire alla sezione critica di distruggersi con il blocco ancora mantenuto comporta un comportamento non definito.

## <a name="lock"></a><a name="lock"></a>blocco

Acquisisce questa sezione critica.

```cpp
void lock();
```

### <a name="remarks"></a>Osservazioni

Spesso è più sicuro usare il costrutto [scoped_lock](#critical_section__scoped_lock_class) per acquisire e rilasciare un `critical_section` oggetto in modo sicuro.

Se il blocco è già utilizzato dal contesto chiamante, verrà generata un'eccezione [improper_lock](improper-lock-class.md) .

## <a name="native_handle"></a><a name="native_handle"></a>native_handle

Restituisce un handle nativo specifico della piattaforma, se ne esiste uno.

```cpp
native_handle_type native_handle();
```

### <a name="return-value"></a>Valore restituito

Riferimento alla sezione critica.

### <a name="remarks"></a>Osservazioni

Un `critical_section` oggetto non è associato a un handle nativo specifico della piattaforma per il sistema operativo Windows. Il metodo restituisce semplicemente un riferimento all'oggetto stesso.

## <a name="critical_sectionscoped_lock-class"></a><a name="critical_section__scoped_lock_class"></a>Classe critical_section:: scoped_lock

Wrapper RAII safe di eccezione per un `critical_section` oggetto.

```cpp
class scoped_lock;
```

## <a name="scoped_lockscoped_lock"></a><a name="critical_section__scoped_lock_ctor"></a>scoped_lock:: scoped_lock

Costruisce un `scoped_lock` oggetto e acquisisce l' `critical_section` oggetto passato nel `_Critical_section` parametro. Se la sezione critica è mantenuta da un altro thread, questa chiamata si bloccherà.

```cpp
explicit _CRTIMP scoped_lock(critical_section& _Critical_section);
```

### <a name="parameters"></a>Parametri

*_Critical_section*<br/>
Sezione critica da bloccare.

## <a name="scoped_lockscoped_lock"></a><a name="critical_section__scoped_lock_dtor"></a>scoped_lock:: ~ scoped_lock

Elimina un `scoped_lock` oggetto e rilascia la sezione critica fornita nel relativo costruttore.

```cpp
~scoped_lock();
```

## <a name="try_lock"></a><a name="try_lock"></a>try_lock

Tenta di acquisire il blocco senza bloccarsi.

```cpp
bool try_lock();
```

### <a name="return-value"></a>Valore restituito

Se il blocco è stato acquisito, il valore **`true`** ; in caso contrario, il valore **`false`** .

## <a name="try_lock_for"></a><a name="try_lock_for"></a>try_lock_for

Tenta di acquisire il blocco senza bloccarsi per un numero specifico di millisecondi.

```cpp
bool try_lock_for(unsigned int _Timeout);
```

### <a name="parameters"></a>Parametri

*_Timeout*<br/>
Numero di millisecondi che si devono attendere prima del timeout.

### <a name="return-value"></a>Valore restituito

Se il blocco è stato acquisito, il valore **`true`** ; in caso contrario, il valore **`false`** .

## <a name="unlock"></a><a name="unlock"></a>sbloccare

Sblocca la sezione critica.

```cpp
void unlock();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe reader_writer_lock](reader-writer-lock-class.md)
