---
title: Classe critical_section | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- critical_section class
ms.assetid: fa3c89d6-be5d-4d1b-bddb-8232814e6cf6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c35a75f7401c436e14ccb4a7eff6fc88348a7412
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46429058"
---
# <a name="criticalsection-class"></a>Classe critical_section

Un'esclusione reciproca non rientrante che tiene conto in modo esplicito del runtime di concorrenza.

## <a name="syntax"></a>Sintassi

```
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
|[Classe critical_section:: scoped_lock](#critical_section__scoped_lock_class)|Un'eccezione-safe wrapper RAII per un `critical_section` oggetto.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[critical_section](#ctor)|Costruisce una nuova sezione critica.|
|[~ critical_section distruttore](#dtor)|Elimina una sezione critica.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock](#lock)|Acquisisce la sezione critica.|
|[native_handle](#native_handle)|Restituisce un handle nativo specifici di piattaforma, se ne esiste.|
|[try_lock](#try_lock)|Tenta di acquisire il blocco senza bloccarsi.|
|[try_lock_for](#try_lock_for)|Tenta di acquisire il blocco senza bloccarsi per un numero specifico di millisecondi.|
|[unlock](#unlock)|Sblocca la sezione critica.|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`critical_section`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a> critical_section

Costruisce una nuova sezione critica.

```
critical_section();
```

##  <a name="dtor"></a> ~critical_section

Elimina una sezione critica.

```
~critical_section();
```

### <a name="remarks"></a>Note

È previsto che il blocco non è più quando il distruttore viene eseguito. Consentire la sezione critica distruggere con il blocco mantenuto ancora causa un comportamento indefinito.

##  <a name="lock"></a> Blocco

Acquisisce la sezione critica.

```
void lock();
```

### <a name="remarks"></a>Note

È spesso preferibile usare il [scoped_lock](#critical_section__scoped_lock_class) costrutto per acquisire e rilasciare un `critical_section` oggetto un'eccezione modo indipendente.

Se il blocco è già utilizzato dal contesto del chiamante, un' [improper_lock](improper-lock-class.md) verrà generata l'eccezione.

##  <a name="native_handle"></a> native_handle

Restituisce un handle nativo specifici di piattaforma, se ne esiste.

```
native_handle_type native_handle();
```

### <a name="return-value"></a>Valore restituito

Un riferimento alla sezione critica.

### <a name="remarks"></a>Note

Oggetto `critical_section` oggetto non è associato a un handle nativo specifico della piattaforma per il sistema operativo Windows. Il metodo restituisce semplicemente un riferimento all'oggetto stesso.

##  <a name="critical_section__scoped_lock_class"></a>  Classe critical_section:: scoped_lock

Un'eccezione-safe wrapper RAII per un `critical_section` oggetto.

```
class scoped_lock;
```

##  <a name="critical_section__scoped_lock_ctor"></a> scoped_lock::scoped_lock

Costruisce un `scoped_lock` dell'oggetto e acquisisce la `critical_section` oggetto passato nel `_Critical_section` parametro. Se la sezione critica viene mantenuta da un altro thread, la chiamata non bloccherà.

```
explicit _CRTIMP scoped_lock(critical_section& _Critical_section);
```

### <a name="parameters"></a>Parametri

*Critical_section*<br/>
La sezione critica da bloccare.

##  <a name="critical_section__scoped_lock_dtor"></a> scoped_lock:: ~ scoped_lock

Elimina definitivamente un `scoped_lock` dell'oggetto e rilascia la sezione critica fornita nel suo costruttore.

```
~scoped_lock();
```

##  <a name="try_lock"></a> try_lock

Tenta di acquisire il blocco senza bloccarsi.

```
bool try_lock();
```

### <a name="return-value"></a>Valore restituito

Se è stato acquisito il blocco, il valore `true`; in caso contrario, il valore `false`.

##  <a name="try_lock_for"></a> try_lock_for

Tenta di acquisire il blocco senza bloccarsi per un numero specifico di millisecondi.

```
bool try_lock_for(unsigned int _Timeout);
```

### <a name="parameters"></a>Parametri

*Timeout*<br/>
Numero di millisecondi che si devono attendere prima del timeout.

### <a name="return-value"></a>Valore restituito

Se è stato acquisito il blocco, il valore `true`; in caso contrario, il valore `false`.

##  <a name="unlock"></a> Lo sblocco

Sblocca la sezione critica.

```
void unlock();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe reader_writer_lock](reader-writer-lock-class.md)
