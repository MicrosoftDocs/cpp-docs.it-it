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
ms.openlocfilehash: 13b44387f3e9489090ec31345fe4347ff5f205ca
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376246"
---
# <a name="reader_writer_lock-class"></a>Classe reader_writer_lock

Un blocco reader-writer basato sulla coda di preferenza writer con solo spin locale. Il blocco concede l'accesso FIFO (First in First out) a writer e può essere dannoso per i reader in condizioni di continuo caricamento di writer.

## <a name="syntax"></a>Sintassi

```cpp
class reader_writer_lock;
```

## <a name="members"></a>Membri

### <a name="public-classes"></a>Classi pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Classe reader_writer_lock::scoped_lock](#scoped_lock_class)|Wrapper RAII indipendente dalle eccezioni `reader_writer_lock` che può essere utilizzato per acquisire oggetti di blocco come writer.|
|[Classe reader_writer_lock::scoped_lock_read](#scoped_lock_read_class)|Wrapper RAII indipendente dalle eccezioni `reader_writer_lock` che può essere utilizzato per acquisire oggetti di blocco come lettore.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[reader_writer_lock](#ctor)|Costruisce un oggetto `reader_writer_lock` nuovo.|
|[Destructor reader_writer_lock](#dtor)|Distrugge l'oggetto. `reader_writer_lock`|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock](#lock)|Acquisisce il blocco reader-writer come writer.|
|[lock_read](#lock_read)|Acquisisce il blocco reader-writer come lettore. Se ci sono scrittori, i lettori attivi devono attendere fino a quando non sono fatti. Il lettore registra semplicemente un interesse per il blocco e attende che gli scrittori lo rilascino.|
|[try_lock](#try_lock)|Tenta di acquisire il blocco reader-writer come writer senza bloccarlo.|
|[try_lock_read](#try_lock_read)|Tenta di acquisire il blocco reader-writer come lettore senza bloccarlo.|
|[Sbloccare](#unlock)|Sblocca il blocco reader-writer in base a chi lo ha bloccato, lettore o scrittore.|

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [Strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`reader_writer_lock`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt.h

**Spazio dei nomi:** Concurrency

## <a name="lock"></a><a name="lock"></a>Blocco

Acquisisce il blocco reader-writer come writer.

```cpp
void lock();
```

### <a name="remarks"></a>Osservazioni

Spesso è più sicuro utilizzare il costrutto [scoped_lock](#scoped_lock_class) per acquisire e rilasciare un `reader_writer_lock` oggetto come writer in modo sicuro per le eccezioni.

Dopo il tentativo di acquisizione del blocco da parte di un writer, qualsiasi lettore futuro si bloccherà finché il blocco non sarà stato acquisito e rilasciato correttamente dai writer. Questo blocco è di parte verso gli scrittori e può affamare i lettori sotto un carico continuo di scrittori.

I writer vengono concatenati in modo che un writer che esce dal blocco rilasci il writer successivo in linea.

Se il blocco è già mantenuto dal contesto di chiamata, verrà generata un'eccezione [improper_lock.](improper-lock-class.md)

## <a name="lock_read"></a><a name="lock_read"></a>lock_read

Acquisisce il blocco reader-writer come lettore. Se ci sono scrittori, i lettori attivi devono attendere fino a quando non sono fatti. Il lettore registra semplicemente un interesse per il blocco e attende che gli scrittori lo rilascino.

```cpp
void lock_read();
```

### <a name="remarks"></a>Osservazioni

Spesso è più sicuro utilizzare il [costrutto scoped_lock_read](#scoped_lock_read_class) per acquisire e rilasciare un `reader_writer_lock` oggetto come lettore in modo sicuro.

Se sono presenti writer in attesa sul blocco, il lettore attenderà fino a quando tutti i writer in linea hanno acquisito e rilasciato il blocco. Questo blocco è di parte verso gli scrittori e può affamare i lettori sotto un carico continuo di scrittori.

## <a name="reader_writer_lock"></a><a name="ctor"></a>reader_writer_lock

Costruisce un oggetto `reader_writer_lock` nuovo.

```cpp
reader_writer_lock();
```

## <a name="reader_writer_lock"></a><a name="dtor"></a>reader_writer_lock dollari

Distrugge l'oggetto. `reader_writer_lock`

```cpp
~reader_writer_lock();
```

### <a name="remarks"></a>Osservazioni

Si prevede che il blocco non viene più mantenuto quando viene eseguito il distruttore. Se si consente al writer del lettore lettore di eseguire la distruzione con il blocco mantenuto, si ottiene un comportamento indefinito.

## <a name="reader_writer_lockscoped_lock-class"></a><a name="scoped_lock_class"></a>Classe reader_writer_lock::scoped_lock

Wrapper RAII indipendente dalle eccezioni `reader_writer_lock` che può essere utilizzato per acquisire oggetti di blocco come writer.

```cpp
class scoped_lock;
```

## <a name="scoped_lockscoped_lock"></a><a name="scoped_lock_ctor"></a>scoped_lock::scoped_lock

Costruisce un `scoped_lock` oggetto e `reader_writer_lock` acquisisce l'oggetto passato nel `_Reader_writer_lock` parametro come writer. Se il blocco è mantenuto da un altro thread, questa chiamata si bloccherà.

```cpp
explicit _CRTIMP scoped_lock(reader_writer_lock& _Reader_writer_lock);
```

### <a name="parameters"></a>Parametri

*_Reader_writer_lock*<br/>
Oggetto `reader_writer_lock` da acquisire come writer.

## <a name="scoped_lockscoped_lock"></a><a name="scoped_lock_dtor"></a>scoped_lock:::SCOPED_LOCK

Elimina un `reader_writer_lock` oggetto e rilascia il blocco fornito nel relativo costruttore.

```cpp
~scoped_lock();
```

## <a name="reader_writer_lockscoped_lock_read-class"></a><a name="scoped_lock_read_class"></a>Reader_writer_lock::scoped_lock_read Classe

Wrapper RAII indipendente dalle eccezioni `reader_writer_lock` che può essere utilizzato per acquisire oggetti di blocco come lettore.

```cpp
class scoped_lock_read;
```

## <a name="scoped_lock_readscoped_lock_read"></a><a name="scoped_lock_read_ctor"></a>scoped_lock_read::scoped_lock_read

Costruisce un `scoped_lock_read` oggetto e `reader_writer_lock` acquisisce l'oggetto passato nel `_Reader_writer_lock` parametro come lettore. Se il blocco viene mantenuto da un altro thread come writer o sono presenti writer in sospeso, questa chiamata si bloccherà.

```cpp
explicit _CRTIMP scoped_lock_read(reader_writer_lock& _Reader_writer_lock);
```

### <a name="parameters"></a>Parametri

*_Reader_writer_lock*<br/>
Oggetto `reader_writer_lock` da acquisire come lettore.

## <a name="a-namescoped_lock_read_dtor--reader_writer_lockscoped_lock_readscoped_lock_read-destructor"></a><a name="scoped_lock_read_dtor">reader_writer_lock::scoped_lock_read:: distruttore scoped_lock_read

Elimina un `scoped_lock_read` oggetto e rilascia il blocco fornito nel relativo costruttore.

```cpp
~scoped_lock_read();
```

## <a name="try_lock"></a><a name="try_lock"></a>try_lock

Tenta di acquisire il blocco reader-writer come writer senza bloccarlo.

### <a name="syntax"></a>Sintassi

```cpp
bool try_lock();
```

### <a name="return-value"></a>Valore restituito

Se il blocco è stato acquisito, il valore **true**; in caso contrario, il valore **false**.

## <a name="try_lock_read"></a><a name="try_lock_read"></a>try_lock_read

Tenta di acquisire il blocco reader-writer come lettore senza bloccarlo.

```cpp
bool try_lock_read();
```

### <a name="return-value"></a>Valore restituito

Se il blocco è stato acquisito, il valore **true**; in caso contrario, il valore **false**.

## <a name="unlock"></a><a name="unlock"></a>Sbloccare

Sblocca il blocco reader-writer in base a chi lo ha bloccato, lettore o scrittore.

```cpp
void unlock();
```

### <a name="remarks"></a>Osservazioni

Se ci sono scrittori in attesa sul blocco, il rilascio del blocco andrà sempre al writer successivo in ordine FIFO. Questo blocco è di parte verso gli scrittori e può affamare i lettori sotto un carico continuo di scrittori.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe critical_section](critical-section-class.md)
