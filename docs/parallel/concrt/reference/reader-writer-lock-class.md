---
title: Classe reader_writer_lock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- reader_writer_lock
- CONCRT/concurrency::reader_writer_lock
- CONCRT/concurrency::reader_writer_lock::scoped_lock
- CONCRT/concurrency::reader_writer_lock::scoped_lock_read
- CONCRT/concurrency::reader_writer_lock::reader_writer_lock
- CONCRT/concurrency::reader_writer_lock::lock
- CONCRT/concurrency::reader_writer_lock::lock_read
- CONCRT/concurrency::reader_writer_lock::try_lock
- CONCRT/concurrency::reader_writer_lock::try_lock_read
- CONCRT/concurrency::reader_writer_lock::unlock
dev_langs:
- C++
helpviewer_keywords:
- reader_writer_lock class
ms.assetid: 91a59cd2-ca05-4b74-8398-d826d9f86736
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1f9eeea62e1872cbea737313192b3822c23bb433
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50064485"
---
# <a name="readerwriterlock-class"></a>Classe reader_writer_lock

Un blocco reader-writer basato sulla coda di preferenza writer con solo spin locale. Il blocco concede l'accesso FIFO (First in First out) a writer e può essere dannoso per i reader in condizioni di continuo caricamento di writer.

## <a name="syntax"></a>Sintassi

```
class reader_writer_lock;
```

## <a name="members"></a>Membri

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe reader_writer_lock:: scoped_lock](#scoped_lock_class)|Un'eccezione-safe wrapper RAII che può essere usata per acquisire `reader_writer_lock` bloccare gli oggetti come writer.|
|[Classe reader_writer_lock:: scoped_lock_read](#scoped_lock_read_class)|Un'eccezione-safe wrapper RAII che può essere usata per acquisire `reader_writer_lock` bloccare gli oggetti come un lettore.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[reader_writer_lock](#ctor)|Costruisce un nuovo oggetto `reader_writer_lock`.|
|[~ reader_writer_lock distruttore](#dtor)|Elimina definitivamente il `reader_writer_lock` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock](#lock)|Acquisisce il blocco di lettura / scrittura come writer.|
|[lock_read](#lock_read)|Acquisisce il blocco di lettura / scrittura come un lettore. Se sono presenti i writer, lettori attivi dovranno attendere fino a quando non vengono eseguite. Il lettore semplicemente registra un interesse del blocco ed è in attesa per i writer per rilasciarlo.|
|[try_lock](#try_lock)|È stato effettuato un tentativo di acquisire il blocco di lettura / scrittura come writer senza bloccare.|
|[try_lock_read](#try_lock_read)|È stato effettuato un tentativo di acquisire il blocco di lettura / scrittura come un lettore senza bloccare.|
|[unlock](#unlock)|Sblocca il blocco di lettura / scrittura basato che ha bloccato, lettore o writer.|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`reader_writer_lock`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

##  <a name="lock"></a> Blocco

Acquisisce il blocco di lettura / scrittura come writer.

```
void lock();
```

### <a name="remarks"></a>Note

È spesso preferibile usare il [scoped_lock](#scoped_lock_class) costrutto per acquisire e rilasciare un `reader_writer_lock` oggetto come writer in un'eccezione modo indipendente.

Dopo il tentativo di acquisizione del blocco da parte di un writer, qualsiasi lettore futuro si bloccherà finché il blocco non sarà stato acquisito e rilasciato correttamente dai writer. Questo blocco è orientato verso i writer e può essere dannoso per i reader in un continuo caricamento di writer.

I writer sono concatenati, in modo che un writer di disattivazione del blocco rilascia il writer nella riga successivo.

Se il blocco è già utilizzato dal contesto del chiamante, un' [improper_lock](improper-lock-class.md) verrà generata l'eccezione.

##  <a name="lock_read"></a> lock_read

Acquisisce il blocco di lettura / scrittura come un lettore. Se sono presenti i writer, lettori attivi dovranno attendere fino a quando non vengono eseguite. Il lettore semplicemente registra un interesse del blocco ed è in attesa per i writer per rilasciarlo.

```
void lock_read();
```

### <a name="remarks"></a>Note

È spesso preferibile usare il [scoped_lock_read](#scoped_lock_read_class) costrutto per acquisire e rilasciare un `reader_writer_lock` oggetto come un lettore di un'eccezione modo indipendente.

Se ci sono in attesa sul blocco del writer, il lettore attenderà fino a quando tutti i writer in linea hanno acquisito e rilasciato il blocco. Questo blocco è orientato verso i writer e può essere dannoso per i reader in un continuo caricamento di writer.

##  <a name="ctor"></a> reader_writer_lock

Costruisce un nuovo oggetto `reader_writer_lock`.

```
reader_writer_lock();
```

##  <a name="dtor"></a> ~reader_writer_lock

Elimina definitivamente il `reader_writer_lock` oggetto.

```
~reader_writer_lock();
```

### <a name="remarks"></a>Note

È previsto che il blocco non è più quando il distruttore viene eseguito. Consentire il blocco reader-writer distruggere con il blocco mantenuto ancora causa un comportamento indefinito.

##  <a name="scoped_lock_class"></a>  Classe reader_writer_lock:: scoped_lock

Un'eccezione-safe wrapper RAII che può essere usata per acquisire `reader_writer_lock` bloccare gli oggetti come writer.

```
class scoped_lock;
```

## <a name="scoped_lock_ctor"></a> scoped_lock::scoped_lock

Costruisce un `scoped_lock` dell'oggetto e acquisisce la `reader_writer_lock` oggetto passato nel `_Reader_writer_lock` parametro come un agente di scrittura. Se il blocco è mantenuto da un altro thread, la chiamata non bloccherà.

```
explicit _CRTIMP scoped_lock(reader_writer_lock& _Reader_writer_lock);
```

#### <a name="parameters"></a>Parametri

*Reader_writer_lock*<br/>
Il `reader_writer_lock` oggetto da acquisire come writer.

## <a name="scoped_lock_dtor"></a> scoped_lock:: ~ scoped_lock

Elimina definitivamente un `reader_writer_lock` dell'oggetto e rilascia il blocco specificato nel relativo costruttore.

```
~scoped_lock();
```

##  <a name="scoped_lock_read_class"></a>  Classe reader_writer_lock:: scoped_lock_read

Un'eccezione-safe wrapper RAII che può essere usata per acquisire `reader_writer_lock` bloccare gli oggetti come un lettore.

```
class scoped_lock_read;
```

##  <a name="try_lock"></a> try_lock

È stato effettuato un tentativo di acquisire il blocco di lettura / scrittura come writer senza bloccare.

## <a name="scoped_lock_read_ctor"></a> scoped_lock_read::scoped_lock_read

Costruisce un `scoped_lock_read` dell'oggetto e acquisisce la `reader_writer_lock` oggetto passato nel `_Reader_writer_lock` parametro come un lettore. Se il blocco è mantenuto da un altro thread come un agente di scrittura o in sospeso i writer, la chiamata non bloccherà.

```
explicit _CRTIMP scoped_lock_read(reader_writer_lock& _Reader_writer_lock);
```

#### <a name="parameters"></a>Parametri

*Reader_writer_lock*<br/>
Il `reader_writer_lock` oggetto da acquisire come un lettore.

## <a name="a-namescopedlockreaddtor--readerwriterlockscopedlockreadscopedlockread-destructor"></a><a name="scoped_lock_read_dtor">  reader_writer_lock:: scoped_lock_read:: ~ scoped_lock_read distruttore

Elimina definitivamente un `scoped_lock_read` dell'oggetto e rilascia il blocco specificato nel relativo costruttore.

```
~scoped_lock_read();
```

## <a name="try_lock"></a> try_lock

```
bool try_lock();
```

### <a name="return-value"></a>Valore restituito

Se è stato acquisito il blocco, il valore **true**; in caso contrario, il valore **false**.

##  <a name="try_lock_read"></a> try_lock_read

È stato effettuato un tentativo di acquisire il blocco di lettura / scrittura come un lettore senza bloccare.

```
bool try_lock_read();
```

### <a name="return-value"></a>Valore restituito

Se è stato acquisito il blocco, il valore **true**; in caso contrario, il valore **false**.

##  <a name="unlock"></a> Lo sblocco

Sblocca il blocco di lettura / scrittura basato che ha bloccato, lettore o writer.

```
void unlock();
```

### <a name="remarks"></a>Note

Se sono presenti i writer in attesa del blocco, il rilascio del blocco sempre entra nel writer successivo nell'ordine FIFO. Questo blocco è orientato verso i writer e può essere dannoso per i reader in un continuo caricamento di writer.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe critical_section](critical-section-class.md)
