---
title: Classe CMemFile
ms.date: 11/04/2016
f1_keywords:
- CMemFile
- AFX/CMemFile
- AFX/CMemFile::CMemFile
- AFX/CMemFile::Attach
- AFX/CMemFile::Detach
- AFX/CMemFile::Alloc
- AFX/CMemFile::Free
- AFX/CMemFile::GrowFile
- AFX/CMemFile::Memcpy
- AFX/CMemFile::Realloc
helpviewer_keywords:
- CMemFile [MFC], CMemFile
- CMemFile [MFC], Attach
- CMemFile [MFC], Detach
- CMemFile [MFC], Alloc
- CMemFile [MFC], Free
- CMemFile [MFC], GrowFile
- CMemFile [MFC], Memcpy
- CMemFile [MFC], Realloc
ms.assetid: 20e86515-e465-4f73-b2ea-e49789d63165
ms.openlocfilehash: 1bd88ad17bdb047de4c344ab96f3d9aecbe23c31
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752643"
---
# <a name="cmemfile-class"></a>Classe CMemFile

La classe derivata da [CFile](../../mfc/reference/cfile-class.md)che supporta i file di memoria.

## <a name="syntax"></a>Sintassi

```
class CMemFile : public CFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[File CMem::CMemFile](#cmemfile)|Costruisce un oggetto file di memoria.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[FileCMem::Associare](#attach)|Associa un blocco di `CMemFile`memoria a .|
|[FileC::Detach](#detach)|Scollega il blocco di `CMemFile` memoria da e restituisce un puntatore al blocco di memoria scollegato.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CMemFile::Alloc](#alloc)|Eseguire l'override per modificare il comportamento di allocazione della memoria.|
|[CMemFile::Gratuito](#free)|Eseguire l'override per modificare il comportamento di deallocazione della memoria.|
|[FileCMemFile::GrowFile](#growfile)|Eseguire l'override per modificare il comportamento durante l'aumento delle dimensioni di un file.|
|[FileCMem::Memcpy](#memcpy)|Eseguire l'override per modificare il comportamento della copia di memoria durante la lettura e la scrittura dei file.|
|[CMemFile::Realloc](#realloc)|Eseguire l'override per modificare il comportamento di riallocazione della memoria.|

## <a name="remarks"></a>Osservazioni

Questi file di memoria si comportano come file su disco, ad eccezione del fatto che il file è memorizzato nella RAM piuttosto che su disco. Un file di memoria è utile per l'archiviazione temporanea rapida o per il trasferimento di byte non elaborati o oggetti serializzati tra processi indipendenti.

`CMemFile`Gli oggetti possono allocare automaticamente la propria memoria `CMemFile` oppure è possibile collegare il proprio blocco di memoria all'oggetto chiamando [Attach](#attach). In entrambi i casi, la memoria per `nGrowBytes`la crescita `nGrowBytes` automatica del file di memoria viene allocata in incrementi di dimensioni se non è zero.

Il blocco di memoria verrà eliminato `CMemFile` automaticamente dopo la distruzione `CMemFile` dell'oggetto se la memoria è stata originariamente allocata dall'oggetto; in caso contrario, l'utente è responsabile della deallocazione della memoria associata all'oggetto.

È possibile accedere al blocco di memoria tramite `CMemFile` il puntatore fornito quando lo si scollega dall'oggetto chiamando [Detach](#detach).

L'utilizzo più `CMemFile` comune di `CMemFile` consiste nel creare un oggetto e utilizzarlo chiamando [CFile](../../mfc/reference/cfile-class.md) funzioni membro. Si noti `CMemFile` che la creazione di un oggetto lo apre automaticamente: non si chiama [CFile::Open](../../mfc/reference/cfile-class.md#open), che viene utilizzato solo per i file su disco. Poiché `CMemFile` non utilizza un file su `CFile::m_hFile` disco, il membro dati non viene utilizzato.

Le `CFile` funzioni membro [Duplicate](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange)e `CMemFile` [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) non sono implementate per . Se si chiamano queste `CMemFile` funzioni su un oggetto, si otterrà un [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

`CMemFile`utilizza le funzioni della libreria di runtime [malloc](../../c-runtime-library/reference/malloc.md), [realloc](../../c-runtime-library/reference/realloc.md)e [free](../../c-runtime-library/reference/free.md) per allocare, riallocare e deallocare la memoria; e il [memcpy intrinseco](../../c-runtime-library/reference/memcpy-wmemcpy.md) per bloccare la memoria di copia durante la lettura e la scrittura. Se si desidera modificare questo comportamento o `CMemFile` il comportamento quando cresce `CMemFile` un file, derivare la propria classe da ed eseguire l'override delle funzioni appropriate.

Per ulteriori `CMemFile`informazioni su , vedere gli articoli [File in MFC](../../mfc/files-in-mfc.md) e Gestione memoria [(MFC)](../../mfc/memory-management.md) e vedere [Gestione dei file](../../c-runtime-library/file-handling.md) in Riferimenti alla libreria di *runtime*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CMemFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cmemfilealloc"></a><a name="alloc"></a>CMemFile::Alloc

Questa funzione viene `CMemFile` chiamata dalle funzioni membro.

```
virtual BYTE* Alloc(SIZE_T nBytes);
```

### <a name="parameters"></a>Parametri

*nByte*<br/>
Numero di byte di memoria da allocare.

### <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria allocato oppure NULL se l'allocazione non è riuscita.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per implementare l'allocazione di memoria personalizzata. Se si esegue l'override di questa funzione, è probabile che si desidera eseguire l'override [di Free](#free) e [Realloc](#realloc) pure.

L'implementazione predefinita utilizza la funzione della libreria di runtime [malloc](../../c-runtime-library/reference/malloc.md) per allocare memoria.

## <a name="cmemfileattach"></a><a name="attach"></a>FileCMem::Associare

Chiamare questa funzione per collegare `CMemFile`un blocco di memoria a .

```cpp
void Attach(
    BYTE* lpBuffer,
    UINT nBufferSize,
    UINT nGrowBytes = 0);
```

### <a name="parameters"></a>Parametri

*lpBuffer (il buffer)*<br/>
Puntatore al buffer da `CMemFile`associare a .

*nDimensioni buffer*<br/>
Intero che specifica la dimensione del buffer in byte.

*nGrowBytes (Byte)*<br/>
Incremento di allocazione della memoria in byte.

### <a name="remarks"></a>Osservazioni

In `CMemFile` questo modo utilizzare il blocco di memoria come file di memoria.

Se *nGrowBytes* è `CMemFile` 0, imposterà la lunghezza del file su *nBufferSize*. Ciò significa che i dati nel blocco `CMemFile` di memoria prima di essere collegati verranno utilizzati come file. I file di memoria creati in questo modo non possono essere aumentati.

Poiché il file non può essere `CMemFile` aumentato, fare attenzione a non causare il tentativo di aumentare il file. Ad esempio, non chiamare `CMemFile` gli override di [CFile:Write](../../mfc/reference/cfile-class.md#write) per scrivere oltre la fine o non chiamare [CFile:SetLength](../../mfc/reference/cfile-class.md#setlength) con una lunghezza maggiore *di nBufferSize*.

Se *nGrowBytes* è maggiore `CMemFile` di 0, ignorerà il contenuto del blocco di memoria collegato. Sarà necessario scrivere il contenuto del file di `CMemFile` memoria `CFile::Write`da zero utilizzando l'override di . Se si tenta di scrivere oltre la fine del `CMemFile` file `CFile::SetLength`o `CMemFile` di grandi dimensioni il file chiamando l'override di , aumenterà l'allocazione di memoria in incrementi di *nGrowBytes*. L'aumento dell'allocazione di memoria `Attach` avrà esito negativo se il blocco di memoria passato non è stato allocato con un metodo compatibile con [Alloc](#alloc). Per essere compatibile con `Alloc`l'implementazione predefinita di , è necessario allocare la memoria con la funzione della libreria di runtime [malloc](../../c-runtime-library/reference/malloc.md) o [calloc](../../c-runtime-library/reference/calloc.md).

## <a name="cmemfilecmemfile"></a><a name="cmemfile"></a>File CMem::CMemFile

Il primo overload apre un file di memoria vuoto.

```
CMemFile(UINT nGrowBytes = 1024);

CMemFile(
    BYTE* lpBuffer,
    UINT nBufferSize,
    UINT nGrowBytes = 0);
```

### <a name="parameters"></a>Parametri

*nGrowBytes (Byte)*<br/>
Incremento di allocazione della memoria in byte.

*lpBuffe*r Puntatore a un buffer che riceve informazioni sulla dimensione *nBufferSize*.

*nDimensioni buffer*<br/>
Un numero intero che specifica la dimensione del buffer del file, in byte.

### <a name="remarks"></a>Osservazioni

Si noti che il file viene aperto dal costruttore e che non è necessario chiamare [CFile::Open](../../mfc/reference/cfile-class.md#open).

Il secondo overload si comporta come se fosse stato utilizzato il primo costruttore e chiamato immediatamente [Attach](#attach) con gli stessi parametri. Per informazioni dettagliate, vedere `Attach`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCFiles#36](../../atl-mfc-shared/reference/codesnippet/cpp/cmemfile-class_1.cpp)]

## <a name="cmemfiledetach"></a><a name="detach"></a>FileC::Detach

Chiamare questa funzione per ottenere un puntatore `CMemFile`al blocco di memoria utilizzato da .

```
BYTE* Detach();
```

### <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria che include il contenuto del file di memoria.

### <a name="remarks"></a>Osservazioni

La chiamata a questa `CMemFile`funzione chiude anche l'oggetto . È possibile ricollegare il `CMemFile` blocco di memoria a chiamando [Attach](#attach). Se si desidera ricollegare il file e utilizzare i dati in esso in esso allegati, è `Detach`necessario chiamare [CFile::GetLength](../../mfc/reference/cfile-class.md#getlength) per ottenere la lunghezza del file prima di chiamare . Si noti che se `CMemFile` si collega un blocco `nGrowBytes` di memoria in modo che sia possibile utilizzare i relativi dati (0), non sarà possibile aumentare le dimensioni del file di memoria.

## <a name="cmemfilefree"></a><a name="free"></a>CMemFile::Gratuito

Questa funzione viene `CMemFile` chiamata dalle funzioni membro.

```
virtual void Free(BYTE* lpMem);
```

### <a name="parameters"></a>Parametri

*lpMem*<br/>
Puntatore alla memoria da deallocare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per implementare la deallocazione di memoria personalizzata. Se si esegue l'override di questa funzione, è probabile che si desideri eseguire l'override anche di [Alloc](#alloc) e [Realloc.](#realloc)

## <a name="cmemfilegrowfile"></a><a name="growfile"></a>FileCMemFile::GrowFile

Questa funzione viene chiamata `CMemFile` da diverse delle funzioni membro.

```
virtual void GrowFile(SIZE_T dwNewLen);
```

### <a name="parameters"></a>Parametri

*dwNewLen*<br/>
Nuova dimensione del file di memoria.

### <a name="remarks"></a>Osservazioni

È possibile eseguirne l'override `CMemFile` se si desidera modificare la modalità di estensione del file. L'implementazione predefinita chiama [Realloc](#realloc) per far crescere un blocco esistente (o [Alloc](#alloc) per creare un blocco di memoria), allocando memoria in multipli del `nGrowBytes` valore specificato nel costruttore o [Attach](#attach) chiamata.

## <a name="cmemfilememcpy"></a><a name="memcpy"></a>FileCMem::Memcpy

Questa funzione viene `CMemFile` chiamata dagli override di [CFile::Read](../../mfc/reference/cfile-class.md#read) e [CFile::Write](../../mfc/reference/cfile-class.md#write) per trasferire dati da e verso il file di memoria.

```
virtual BYTE* Memcpy(
    BYTE* lpMemTarget,
    const BYTE* lpMemSource,
    SIZE_T nBytes);
```

### <a name="parameters"></a>Parametri

*LpMemTarget (destinazione lpMemTarget)*<br/>
Puntatore al blocco di memoria in cui verrà copiata la memoria di origine.

*LpMemOrigine (informazioni in base a*<br/>
Puntatore al blocco di memoria di origine.

*nByte*<br/>
Numero di byte da copiare.

### <a name="return-value"></a>Valore restituito

Una copia di *lpMemTarget*.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione `CMemFile` se si desidera modificare il modo in cui queste copie di memoria.

## <a name="cmemfilerealloc"></a><a name="realloc"></a>CMemFile::Realloc

Questa funzione viene `CMemFile` chiamata dalle funzioni membro.

```
virtual BYTE* Realloc(
    BYTE* lpMem,
    SIZE_T nBytes);
```

### <a name="parameters"></a>Parametri

*lpMem*<br/>
Puntatore al blocco di memoria da riallocare.

*nByte*<br/>
Nuova dimensione per il blocco di memoria.

### <a name="return-value"></a>Valore restituito

Puntatore al blocco di memoria che è stato riallocato (e possibilmente spostato) o NULL se la riallocazione non è riuscita.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per implementare la riallocazione di memoria personalizzata. Se si esegue l'override di questa funzione, è probabile che si desideri eseguire l'override anche di [Alloc](#alloc) e [Free.](#free)

## <a name="see-also"></a>Vedere anche

[Classe CFile](../../mfc/reference/cfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
