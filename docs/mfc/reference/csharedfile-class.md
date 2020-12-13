---
description: 'Altre informazioni su: classe CSharedFile'
title: Classe CSharedFile
ms.date: 11/04/2016
f1_keywords:
- CSharedFile
- AFXADV/CSharedFile
- AFXADV/CSharedFile::CSharedFile
- AFXADV/CSharedFile::Detach
- AFXADV/CSharedFile::SetHandle
helpviewer_keywords:
- CSharedFile [MFC], CSharedFile
- CSharedFile [MFC], Detach
- CSharedFile [MFC], SetHandle
ms.assetid: 5d000422-9ede-4318-a8c9-f7412b674f39
ms.openlocfilehash: 0eb2f76bdfa9e10c660f405e225698289b506014
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342831"
---
# <a name="csharedfile-class"></a>Classe CSharedFile

Classe derivata da [CMemFile](../../mfc/reference/cmemfile-class.md)che supporta i file di memoria condivisa.

## <a name="syntax"></a>Sintassi

```
class CSharedFile : public CMemFile
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSharedFile:: CSharedFile](#csharedfile)|Costruisce un oggetto `CSharedFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSharedFile::D etach](#detach)|Chiude il file di memoria condivisa e restituisce l'handle del relativo blocco di memoria.|
|[CSharedFile:: filehandle](#sethandle)|Connette il file di memoria condivisa a un blocco di memoria.|

## <a name="remarks"></a>Commenti

I file di memoria si comportano come file su disco La differenza è che un file di memoria viene archiviato in RAM anziché su disco. Un file di memoria è utile per l'archiviazione temporanea veloce o per il trasferimento di byte non elaborati o oggetti serializzati tra processi indipendenti.

I file di memoria condivisa sono diversi da quelli di altri file di memoria in cui sono allocati con la funzione [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) di Windows. La `CSharedFile` classe archivia i dati in un blocco di memoria allocato a livello globale (creato mediante `GlobalAlloc` ) e questo blocco di memoria può essere condiviso tramite DDE, gli Appunti o altre operazioni di trasferimento di dati uniformi OLE/com, ad esempio utilizzando `IDataObject` .

`GlobalAlloc` Restituisce un handle HGLOBAL anziché un puntatore alla memoria, ad esempio il puntatore restituito da [malloc](../../c-runtime-library/reference/malloc.md). Per alcune applicazioni è necessario l'handle HGLOBAL. Ad esempio, per inserire i dati negli Appunti è necessario un handle HGLOBAL.

`CSharedFile` non usa file mappati alla memoria e i dati non possono essere condivisi direttamente tra i processi.

`CSharedFile` gli oggetti possono allocare automaticamente la propria memoria. In alternativa, è possibile aggiungere un blocco di memoria personalizzato all' `CSharedFile` oggetto chiamando [CSharedFile:: filehandle](#sethandle). In entrambi i casi, la memoria per aumentare automaticamente il file di memoria viene allocata in `nGrowBytes` incrementi di dimensioni se `nGrowBytes` non è zero.

Per ulteriori informazioni, vedere l'articolo relativo ai [file in MFC](../../mfc/files-in-mfc.md) e alla [gestione dei file](../../c-runtime-library/file-handling.md) in *riferimenti alla libreria di runtime*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CMemFile](../../mfc/reference/cmemfile-class.md)

`CSharedFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv. h

## <a name="csharedfilecsharedfile"></a><a name="csharedfile"></a> CSharedFile:: CSharedFile

Costruisce un `CSharedFile` oggetto e ne alloca la memoria.

```
CSharedFile(
    UINT nAllocFlags = GMEM_DDESHARE | GMEM_MOVEABLE,
    UINT nGrowBytes = 4096);
```

### <a name="parameters"></a>Parametri

*nAllocFlags*<br/>
Flag che indicano la modalità di allocazione della memoria. Per un elenco di valori di flag validi, vedere [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) .

*nGrowBytes*<br/>
Incremento in byte dell'allocazione di memoria.

## <a name="csharedfiledetach"></a><a name="detach"></a> CSharedFile::D etach

Chiamare questa funzione per chiudere il file di memoria e scollegarlo dal blocco di memoria.

```
HGLOBAL Detach();
```

### <a name="return-value"></a>Valore restituito

Handle del blocco di memoria che contiene il contenuto del file di memoria.

### <a name="remarks"></a>Commenti

È possibile riaprirla chiamando il [gestore](#sethandle), usando l'handle restituito da **Detach**.

## <a name="csharedfilesethandle"></a><a name="sethandle"></a> CSharedFile:: filehandle

Chiamare questa funzione per alleghi un blocco di memoria globale all' `CSharedFile` oggetto.

```cpp
void SetHandle(
    HGLOBAL hGlobalMemory,
    BOOL bAllowGrow = TRUE);
```

### <a name="parameters"></a>Parametri

*hGlobalMemory*<br/>
Handle per la memoria globale da collegare a `CSharedFile` .

*bAllowGrow*<br/>
Specifica se è consentito l'aumento delle dimensioni del blocco di memoria.

### <a name="remarks"></a>Commenti

Se *bAllowGrow* è diverso da zero, le dimensioni del blocco di memoria vengono aumentate se necessario, ad esempio se si tenta di scrivere più byte nel file rispetto alla dimensione del blocco di memoria.

## <a name="see-also"></a>Vedi anche

[Classe CMemFile](../../mfc/reference/cmemfile-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMemFile](../../mfc/reference/cmemfile-class.md)
