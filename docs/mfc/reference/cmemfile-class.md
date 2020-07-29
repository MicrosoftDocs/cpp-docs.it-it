---
title: Classe CMemFile
description: Descrive le funzioni disponibili nella classe CMemFile che consente di usare i file di memoria.
ms.date: 07/23/2020
f1_keywords:
- CMemFile
- AFX/CMemFile
- AFX/CMemFile::CMemFile
- AFX/CMemFile::Attach
- AFX/CMemFile::Detach
- AFX/CMemFile::Alloc
- AFX/CMemFile::Free
- AFX/CmemFile::GetBufferPtr
- AFX/CMemFile::GrowFile"
- AFX/CMemFile::Memcpy
- AFX/CMemFile::Realloc
helpviewer_keywords:
- CMemFile [MFC], CMemFile
- CMemFile [MFC], Attach
- CMemFile [MFC], Detach
- CMemFile [MFC], Alloc
- CMemFile [MFC], Free
- CMemFile [MFC], GetBufferPtr
- CMemFile [MFC], GrowFile
- CMemFile [MFC], Memcpy
- CMemFile [MFC], Realloc
ms.assetid: 20e86515-e465-4f73-b2ea-e49789d63165
ms.openlocfilehash: edd1d8b8d3979427602bdb61fc7647aec15d58b5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87222940"
---
# <a name="cmemfile-class"></a>Classe CMemFile

Classe derivata da [CFile](../../mfc/reference/cfile-class.md)che supporta i file di memoria.

## <a name="syntax"></a>Sintassi

```
class CMemFile : public CFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMemFile:: CMemFile](#cmemfile)|Costruisce un oggetto file di memoria.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMemFile:: Connetti](#attach)|Connette un blocco di memoria a `CMemFile` .|
|[CMemFile::D etach](#detach)|Scollega il blocco di memoria da `CMemFile` e restituisce un puntatore al blocco di memoria scollegato.|
|[CMemFile:: GetBufferPtr](#getbufferptr)|Ottenere o scrivere nel buffer di memoria che esegue il backup di un file di memoria.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMemFile:: Alloc](#alloc)|Override per modificare il comportamento di allocazione della memoria.|
|[CMemFile:: Free](#free)|Eseguire l'override per modificare il comportamento della deallocazione della memoria.|
|[CMemFile:: GrowFile](#growfile)|Eseguire l'override di per modificare il comportamento quando si cresce un file.|
|[CMemFile:: memcpy](#memcpy)|Override per modificare il comportamento della copia di memoria durante la lettura e la scrittura di file.|
|[CMemFile:: realloc](#realloc)|Eseguire l'override per modificare il comportamento di riallocazione della memoria.|

## <a name="remarks"></a>Osservazioni

Questi file di memoria si comportano come file su disco, ad eccezione del fatto che il file viene archiviato in RAM anziché su disco. Un file di memoria è utile per:

- archiviazione temporanea veloce
- trasferimento di byte non elaborati tra processi indipendenti
- trasferimento di oggetti serializzati tra processi indipendenti

`CMemFile`gli oggetti possono allocare automaticamente la propria memoria. In alternativa, è possibile alleghi il proprio blocco di memoria all' `CMemFile` oggetto chiamando [Connetti](#attach). In entrambi i casi, la memoria per aumentare automaticamente il file di memoria viene allocata in `nGrowBytes` incrementi di dimensioni se `nGrowBytes` non è zero.

Il blocco di memoria verrà eliminato automaticamente al momento dell'eliminazione dell' `CMemFile` oggetto se la memoria è stata originariamente allocata dall' `CMemFile` oggetto; in caso contrario, si è responsabili della deallocazione della memoria collegata all'oggetto.

È possibile accedere al blocco di memoria tramite il puntatore fornito quando lo si scollega dall' `CMemFile` oggetto chiamando [Detach](#detach).

L'uso più comune di `CMemFile` consiste nel creare un `CMemFile` oggetto e usarlo chiamando le funzioni membro [CFile](../../mfc/reference/cfile-class.md) . La creazione di un oggetto `CMemFile` lo apre automaticamente: non viene chiamato [CFile:: Open](../../mfc/reference/cfile-class.md#open), che viene usato solo per i file su disco. Poiché `CMemFile` non usa un file su disco, il membro dati `CFile::m_hFile` non viene usato.

Le `CFile` funzioni membro [duplicate](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange)e [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) non sono implementate per `CMemFile` . Se si chiamano queste funzioni su un `CMemFile` oggetto, si otterrà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

`CMemFile`Usa le funzioni della libreria di runtime [malloc](../../c-runtime-library/reference/malloc.md), [realloc](../../c-runtime-library/reference/realloc.md)e [Free](../../c-runtime-library/reference/free.md) per allocare, riallocare e deallocare memoria; e il [memcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md) intrinseco per bloccare la copia della memoria durante la lettura e la scrittura. Se si vuole modificare questo comportamento o il comportamento quando si `CMemFile` espande un file, derivare la propria classe da `CMemFile` ed eseguire l'override delle funzioni appropriate.

Per ulteriori informazioni su `CMemFile` , vedere i file degli articoli [in](../../mfc/files-in-mfc.md) MFC e [Gestione memoria (MFC)](../../mfc/memory-management.md) e vedere [gestione dei file](../../c-runtime-library/file-handling.md) in riferimenti alla libreria di *Runtime*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CMemFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cmemfilealloc"></a><a name="alloc"></a>CMemFile:: Alloc

Questa funzione viene chiamata dalle `CMemFile` funzioni membro.

```
virtual BYTE* Alloc(SIZE_T nBytes);
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte di memoria da allocare.

### <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria allocato o NULL se l'allocazione non è riuscita.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per implementare l'allocazione di memoria personalizzata. Se si esegue l'override di questa funzione, è probabile che si desideri eseguire l'override anche di [Free](#free) e [realloc](#realloc) .

Nell'implementazione predefinita viene utilizzata la funzione della libreria di runtime [malloc](../../c-runtime-library/reference/malloc.md) per allocare memoria.

## <a name="cmemfileattach"></a><a name="attach"></a>CMemFile:: Connetti

Chiamare questa funzione per alleghi un blocco di memoria a `CMemFile` .

```cpp
void Attach(
    BYTE* lpBuffer,
    UINT nBufferSize,
    UINT nGrowBytes = 0);
```

### <a name="parameters"></a>Parametri

*lpBuffer*<br/>
Puntatore al buffer a cui collegare `CMemFile` .

*nBufferSize*<br/>
Integer che specifica la dimensione del buffer in byte.

*nGrowBytes*<br/>
Incremento in byte dell'allocazione di memoria.

### <a name="remarks"></a>Osservazioni

Questo fa `CMemFile` in modo che usi il blocco di memoria come file di memoria.

Se *nGrowBytes* è 0, `CMemFile` la lunghezza del file verrà impostata su *nBufferSize*. Ciò significa che i dati nel blocco di memoria prima del relativo allegato `CMemFile` verranno utilizzati come file. Non è possibile ampliare i file di memoria creati in questo modo.

Poiché il file non può essere aumentato, prestare attenzione a non provocare `CMemFile` il tentativo di espandere il file. Ad esempio, non chiamare le `CMemFile` sostituzioni di [CFile: Write](../../mfc/reference/cfile-class.md#write) per scrivere oltre la fine o non chiamare [CFile: FileLength](../../mfc/reference/cfile-class.md#setlength) con una lunghezza maggiore di *nBufferSize*.

Se *nGrowBytes* è maggiore di 0, `CMemFile` ignorerà il contenuto del blocco di memoria collegato. È necessario scrivere il contenuto del file di memoria da zero usando l' `CMemFile` override di `CFile::Write` . Se si tenta di scrivere oltre la fine del file o di aumentare il file chiamando l' `CMemFile` override di `CFile::SetLength` , `CMemFile` l'allocazione di memoria aumenterà in incrementi di *nGrowBytes*. La crescita dell'allocazione di memoria avrà esito negativo se il blocco di memoria passato a `Attach` non è stato allocato con un metodo compatibile con [Alloc](#alloc). Per essere compatibile con l'implementazione predefinita di `Alloc` , è necessario allocare la memoria con la funzione della libreria di runtime [malloc](../../c-runtime-library/reference/malloc.md) o [calloc](../../c-runtime-library/reference/calloc.md).

## <a name="cmemfilecmemfile"></a><a name="cmemfile"></a>CMemFile:: CMemFile

Il primo overload apre un file di memoria vuoto.

```
CMemFile(UINT nGrowBytes = 1024);

CMemFile(
    BYTE* lpBuffer,
    UINT nBufferSize,
    UINT nGrowBytes = 0);
```

### <a name="parameters"></a>Parametri

*nGrowBytes*<br/>
Incremento in byte dell'allocazione di memoria.

*lpBuffer* Puntatore a un buffer che riceve informazioni sulle dimensioni *nBufferSize*.

*nBufferSize*<br/>
Integer che specifica le dimensioni del buffer di file, in byte.

### <a name="remarks"></a>Osservazioni

Il file viene aperto dal costruttore. Non chiamare [CFile:: Open](../../mfc/reference/cfile-class.md#open).

Il secondo overload agisce in modo analogo a se si utilizza il primo costruttore e si chiama immediatamente [Connetti](#attach) con gli stessi parametri. Per informazioni dettagliate, vedere `Attach`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#36](../../atl-mfc-shared/reference/codesnippet/cpp/cmemfile-class_1.cpp)]

## <a name="cmemfiledetach"></a><a name="detach"></a>CMemFile::D etach

Chiamare questa funzione per ottenere un puntatore al blocco di memoria usato da `CMemFile` .

```
BYTE* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria che contiene il contenuto del file di memoria.

### <a name="remarks"></a>Osservazioni

La chiamata a questa funzione chiude anche l'oggetto `CMemFile` . È possibile riassegnare il blocco di memoria a chiamando `CMemFile` [Connetti](#attach). Se si desidera ricollegarlo e utilizzarne i dati, è necessario chiamare [CFile:: GetLength](../../mfc/reference/cfile-class.md#getlength) per ottenere la lunghezza del file prima di chiamare `Detach` . Se si connette un blocco di memoria a in `CMemFile` modo che sia possibile utilizzare i relativi dati ( `nGrowBytes` = = 0), non è possibile aumentare il file di memoria.

## <a name="cmemfilefree"></a><a name="free"></a>CMemFile:: Free

Questa funzione viene chiamata dalle `CMemFile` funzioni membro.

```
virtual void Free(BYTE* lpMem);
```

### <a name="parameters"></a>Parametri

*lpMem*<br/>
Puntatore alla memoria da deallocare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per implementare la deallocazione della memoria personalizzata. Se si esegue l'override di questa funzione, è probabile che si desideri eseguire l'override di [Alloc](#alloc) e [realloc](#realloc) .

## <a name="cmemfilegetbufferptr"></a><a name="getbufferptr"></a>CMemFile:: GetBufferPtr

Ottenere o scrivere nel buffer di memoria che esegue il backup di un file di memoria.

```cpp
virtual UINT GetBufferPtr(
    UINT nCommand,
    UINT nCount = 0,
    void** ppBufStart = NULL,
    void** ppBufMax = NULL
);
```

### <a name="parameters"></a>Parametri

*nCommand*<br/>
[BufferCommand](buffercommand-enumeration.md) da eseguire (,, `bufferCheck` `bufferCommit` `bufferRead` o `bufferWrite` ).

*nCount*<br/>
A seconda di *nCommand*, numero di byte nel buffer da leggere, scrivere o eseguire il commit. Quando si esegue la lettura dal buffer, specificare-1 per restituire un buffer dalla posizione corrente fino alla fine del file.

*ppBufStart*<br/>
out Inizio del buffer. Deve essere `NULL` quando *nCommand* è `bufferCommit` .

*ppBufMax*<br/>
out Fine del buffer. Deve essere `NULL` quando nCommand è `bufferCommit` .

### <a name="return-value"></a>Valore restituito

| valore del *comando* | Valore restituito |
|--|--|
| `buffercheck` | Restituisce [bufferDirect](buffercommand-enumeration.md) se il buffering diretto è supportato; in caso contrario, 0. |
| `bufferCommit` | Restituisce `0`. |
| `bufferRead` o `bufferWrite` | Restituisce il numero di byte nello spazio del buffer restituito. *ppBufStart* e *ppBufMax* puntano all'inizio e alla fine del buffer di lettura/scrittura.  |

### <a name="remarks"></a>Osservazioni

La posizione corrente nel buffer di memoria ( `m_nPosition` ) è avanzata nei modi seguenti, a seconda di *nCommand*:

| *nCommand* | posizione del buffer |
|-|-|
| `bufferCommit` | La posizione corrente avanza per la dimensione del buffer di cui è stato eseguito il commit. |
| `bufferRead` | La posizione corrente avanza per la dimensione del buffer di lettura. |

## <a name="cmemfilegrowfile"></a><a name="growfile"></a>CMemFile:: GrowFile

Questa funzione viene chiamata da diverse `CMemFile` funzioni membro.

```
virtual void GrowFile(SIZE_T dwNewLen);
```

### <a name="parameters"></a>Parametri

*dwNewLen*<br/>
Nuove dimensioni del file di memoria.

### <a name="remarks"></a>Osservazioni

È possibile eseguirne l'override se si vuole modificare il modo in cui `CMemFile` cresce il file. L'implementazione predefinita chiama [realloc](#realloc) per aumentare un blocco esistente (o [Alloc](#alloc) per creare un blocco di memoria), allocando memoria in multipli del `nGrowBytes` valore specificato nel costruttore o nella chiamata di [connessione](#attach) .

## <a name="cmemfilememcpy"></a><a name="memcpy"></a>CMemFile:: memcpy

Questa funzione viene chiamata dalle `CMemFile` sostituzioni di [CFile:: Read](../../mfc/reference/cfile-class.md#read) e [CFile:: Write](../../mfc/reference/cfile-class.md#write) per trasferire i dati da e verso il file di memoria.

```
virtual BYTE* Memcpy(
    BYTE* lpMemTarget,
    const BYTE* lpMemSource,
    SIZE_T nBytes);
```

### <a name="parameters"></a>Parametri

*lpMemTarget*<br/>
Puntatore al blocco di memoria in cui verrà copiata la memoria di origine.

*lpMemSource*<br/>
Puntatore al blocco di memoria di origine.

*nBytes*<br/>
Numero di byte da copiare.

### <a name="return-value"></a>Valore restituito

Copia di *lpMemTarget*.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione se si desidera modificare il modo in cui vengono `CMemFile` copiate le copie di memoria.

## <a name="cmemfilerealloc"></a><a name="realloc"></a>CMemFile:: realloc

Questa funzione viene chiamata dalle `CMemFile` funzioni membro.

```
virtual BYTE* Realloc(
    BYTE* lpMem,
    SIZE_T nBytes);
```

### <a name="parameters"></a>Parametri

*lpMem*<br/>
Puntatore al blocco di memoria da riallocare.

*nBytes*<br/>
Nuove dimensioni per il blocco di memoria.

### <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria che è stato riallocato (e possibilmente spostato) o NULL se la riallocazione non è riuscita.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per implementare la riallocazione della memoria personalizzata. Se si esegue l'override di questa funzione, probabilmente si desidera eseguire l'override di [Alloc](#alloc) e [Free](#free) .

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
