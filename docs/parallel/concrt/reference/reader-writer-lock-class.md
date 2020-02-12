---
title: Classe reader_writer_lock
ms.date: 11/04/2016
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
helpviewer_keywords:
- reader_writer_lock class
ms.assetid: 91a59cd2-ca05-4b74-8398-d826d9f86736
ms.openlocfilehash: 1a7386e527b5327d928bfdcb3281c88666f1b106
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77140855"
---
# <a name="reader_writer_lock-class"></a>Classe reader_writer_lock

Un blocco reader-writer basato sulla coda di preferenza writer con solo spin locale. Il blocco concede l'accesso FIFO (First in First out) a writer e può essere dannoso per i reader in condizioni di continuo caricamento di writer.

## <a name="syntax"></a>Sintassi

```cpp
class reader_writer_lock;
```

## <a name="members"></a>Members

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe reader_writer_lock:: scoped_lock](#scoped_lock_class)|Wrapper RAII safe di eccezione che può essere utilizzato per acquisire `reader_writer_lock` bloccare gli oggetti come writer.|
|[Classe reader_writer_lock:: scoped_lock_read](#scoped_lock_read_class)|Wrapper RAII safe di eccezione che può essere utilizzato per acquisire `reader_writer_lock` bloccare gli oggetti come Reader.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[reader_writer_lock](#ctor)|Costruisce un oggetto `reader_writer_lock` nuovo.|
|[Distruttore ~ reader_writer_lock](#dtor)|Elimina definitivamente l'oggetto `reader_writer_lock`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock](#lock)|Acquisisce il blocco reader-writer come writer.|
|[lock_read](#lock_read)|Acquisisce il blocco reader-writer come lettore. Se sono presenti writer, i lettori attivi devono attendere fino a quando non vengono eseguiti. Il lettore registra semplicemente un interesse nel blocco e attende che i writer lo rilasci.|
|[try_lock](#try_lock)|Tenta di acquisire il blocco reader-writer come writer senza blocco.|
|[try_lock_read](#try_lock_read)|Tenta di acquisire il blocco reader-writer come lettore senza blocco.|
|[unlock](#unlock)|Sblocca il blocco del writer di lettura in base a chi lo ha bloccato, Reader o writer.|

## <a name="remarks"></a>Osservazioni

Per altre informazioni, vedere [Synchronization Data Structures](../../../parallel/concrt/synchronization-data-structures.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`reader_writer_lock`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="lock"></a>blocco

Acquisisce il blocco reader-writer come writer.

```cpp
void lock();
```

### <a name="remarks"></a>Osservazioni

Spesso è più sicuro usare il costrutto [scoped_lock](#scoped_lock_class) per acquisire e rilasciare un oggetto `reader_writer_lock` come writer in modo sicuro.

Dopo il tentativo di acquisizione del blocco da parte di un writer, qualsiasi lettore futuro si bloccherà finché il blocco non sarà stato acquisito e rilasciato correttamente dai writer. Questo blocco è distorto verso i writer e può diventare affamato dei lettori in un carico continuo di writer.

I writer sono concatenati in modo che un writer che esce dal blocco rilasci il writer successivo in linea.

Se il blocco è già utilizzato dal contesto chiamante, verrà generata un'eccezione [improper_lock](improper-lock-class.md) .

## <a name="lock_read"></a>lock_read

Acquisisce il blocco reader-writer come lettore. Se sono presenti writer, i lettori attivi devono attendere fino a quando non vengono eseguiti. Il lettore registra semplicemente un interesse nel blocco e attende che i writer lo rilasci.

```cpp
void lock_read();
```

### <a name="remarks"></a>Osservazioni

Spesso è più sicuro usare il costrutto [scoped_lock_read](#scoped_lock_read_class) per acquisire e rilasciare un oggetto `reader_writer_lock` come Reader in modo sicuro in un'eccezione.

Se sono presenti writer in attesa del blocco, il lettore resterà in attesa fino a quando tutti i writer in linea non hanno acquisito e rilasciato il blocco. Questo blocco è distorto verso i writer e può diventare affamato dei lettori in un carico continuo di writer.

## <a name="ctor"></a>reader_writer_lock

Costruisce un oggetto `reader_writer_lock` nuovo.

```cpp
reader_writer_lock();
```

## <a name="dtor"></a>~ reader_writer_lock

Elimina definitivamente l'oggetto `reader_writer_lock`.

```cpp
~reader_writer_lock();
```

### <a name="remarks"></a>Osservazioni

Si prevede che il blocco non venga più mantenuto durante l'esecuzione del distruttore. Il blocco del writer Reader per la distruzione con il blocco ancora mantenuto comporta un comportamento non definito.

## <a name="scoped_lock_class"></a>Classe reader_writer_lock:: scoped_lock

Wrapper RAII safe di eccezione che può essere utilizzato per acquisire `reader_writer_lock` bloccare gli oggetti come writer.

```cpp
class scoped_lock;
```

## <a name="scoped_lock_ctor"></a>scoped_lock:: scoped_lock

Costruisce un oggetto `scoped_lock` e acquisisce l'oggetto `reader_writer_lock` passato nel parametro `_Reader_writer_lock` come writer. Se il blocco è mantenuto da un altro thread, questa chiamata si bloccherà.

```cpp
explicit _CRTIMP scoped_lock(reader_writer_lock& _Reader_writer_lock);
```

### <a name="parameters"></a>Parametri

*_Reader_writer_lock*<br/>
Oggetto `reader_writer_lock` da acquisire come writer.

## <a name="scoped_lock_dtor"></a>scoped_lock:: ~ scoped_lock

Elimina un oggetto `reader_writer_lock` e rilascia il blocco fornito nel relativo costruttore.

```cpp
~scoped_lock();
```

## <a name="scoped_lock_read_class"></a>Classe reader_writer_lock:: scoped_lock_read

Wrapper RAII safe di eccezione che può essere utilizzato per acquisire `reader_writer_lock` bloccare gli oggetti come Reader.

```cpp
class scoped_lock_read;
```

## <a name="scoped_lock_read_ctor"></a>scoped_lock_read:: scoped_lock_read

Costruisce un oggetto `scoped_lock_read` e acquisisce l'oggetto `reader_writer_lock` passato nel parametro `_Reader_writer_lock` come Reader. Se il blocco è mantenuto da un altro thread come writer o se sono presenti writer in sospeso, la chiamata verrà bloccata.

```cpp
explicit _CRTIMP scoped_lock_read(reader_writer_lock& _Reader_writer_lock);
```

### <a name="parameters"></a>Parametri

*_Reader_writer_lock*<br/>
Oggetto `reader_writer_lock` da acquisire come Reader.

## <a name="a-namescoped_lock_read_dtor--reader_writer_lockscoped_lock_readscoped_lock_read-destructor"></a>distruttore <a name="scoped_lock_read_dtor"> reader_writer_lock:: scoped_lock_read:: ~ scoped_lock_read

Elimina un oggetto `scoped_lock_read` e rilascia il blocco fornito nel relativo costruttore.

```cpp
~scoped_lock_read();
```

## <a name="try_lock"></a>try_lock

Tenta di acquisire il blocco reader-writer come writer senza blocco.

### <a name="syntax"></a>Sintassi

```cpp
bool try_lock();
```

### <a name="return-value"></a>Valore restituito

Se il blocco è stato acquisito, il valore è **true**; in caso contrario, il valore è **false**.

## <a name="try_lock_read"></a>try_lock_read

Tenta di acquisire il blocco reader-writer come lettore senza blocco.

```cpp
bool try_lock_read();
```

### <a name="return-value"></a>Valore restituito

Se il blocco è stato acquisito, il valore è **true**; in caso contrario, il valore è **false**.

## <a name="unlock"></a>sbloccare

Sblocca il blocco del writer di lettura in base a chi lo ha bloccato, Reader o writer.

```cpp
void unlock();
```

### <a name="remarks"></a>Osservazioni

Se sono presenti writer in attesa del blocco, la versione del blocco passerà sempre al writer successivo nell'ordine FIFO. Questo blocco è distorto verso i writer e può diventare affamato dei lettori in un carico continuo di writer.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe critical_section](critical-section-class.md)
