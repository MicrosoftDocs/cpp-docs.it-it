---
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
ms.openlocfilehash: e86e64c1de232aba0c17a0fdfb3600e480567a57
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324129"
---
# <a name="csharedfile-class"></a>Classe CSharedFile

Il [CMemFile](../../mfc/reference/cmemfile-class.md)-classe derivata che supporta file di memoria condivisi.

## <a name="syntax"></a>Sintassi

```
class CSharedFile : public CMemFile
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSharedFile::CSharedFile](#csharedfile)|Costruisce un oggetto `CSharedFile`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSharedFile::Detach](#detach)|Chiude il file di memoria condivisa e restituisce l'handle del relativo blocco di memoria.|
|[CSharedFile::SetHandle](#sethandle)|Il file di memoria condivisa può essere allegato a un blocco di memoria.|

## <a name="remarks"></a>Note

File in memoria si comportano come i file del disco, ad eccezione del fatto che il file viene archiviato nella memoria RAM, piuttosto che sul disco. Un file di memoria è utile per l'archiviazione temporanea a velocità o per il trasferimento dei byte non elaborati o oggetti serializzati tra processi indipendenti.

I file di memoria condivisa differiscono da altri file di memoria viene allocata memoria per essi con il [GlobalAlloc](/windows/desktop/api/winbase/nf-winbase-globalalloc) funzione Windows. Il `CSharedFile` classe archivia i dati in un blocco di memoria globale allocato (creato utilizzando `GlobalAlloc`), e questo blocco di memoria può essere condivise tramite DDE, negli Appunti o altri OLE/COM uniform operazioni di trasferimento dati, ad esempio, usando `IDataObject`.

`GlobalAlloc` Restituisce un HGLOBAL gestire invece di un puntatore alla memoria, ad esempio il puntatore restituito da [malloc](../../c-runtime-library/reference/malloc.md). L'handle HGLOBAL è necessaria in determinate applicazioni. Per inserire dati negli Appunti, ad esempio, è necessario un handle HGLOBAL.

Si noti che `CSharedFile` non file mappato alla memoria utilizzo e i dati non possono essere condiviso direttamente tra processi.

`CSharedFile` gli oggetti possono allocare automaticamente la memoria o è possibile collegare il proprio blocco di memoria per il `CSharedFile` chiamando [CSharedFile::SetHandle](#sethandle). In entrambi i casi, viene allocata la memoria per l'aumento delle dimensioni automaticamente nel file di memoria `nGrowBytes`-dimensioni incrementi se `nGrowBytes` è diverso da zero.

Per altre informazioni, vedere l'articolo [file in MFC](../../mfc/files-in-mfc.md) e [gestione dei File](../../c-runtime-library/file-handling.md) nel *Run-Time Library Reference*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CMemFile](../../mfc/reference/cmemfile-class.md)

`CSharedFile`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxadv.h

##  <a name="csharedfile"></a>  CSharedFile::CSharedFile

Costruisce un `CSharedFile` dell'oggetto e ne alloca memoria.

```
CSharedFile(
    UINT nAllocFlags = GMEM_DDESHARE | GMEM_MOVEABLE,
    UINT nGrowBytes = 4096);
```

### <a name="parameters"></a>Parametri

*nAllocFlags*<br/>
Flag che indica come è possibile allocare memoria. Visualizzare [GlobalAlloc](/windows/desktop/api/winbase/nf-winbase-globalalloc) per un elenco di valori di flag validi.

*nGrowBytes*<br/>
L'incremento di allocazione di memoria in byte.

##  <a name="detach"></a>  CSharedFile::Detach

Chiamare questa funzione per chiudere il file di memoria e rimuoverlo dal blocco di memoria.

```
HGLOBAL Detach();
```

### <a name="return-value"></a>Valore restituito

L'handle del blocco di memoria che contiene il contenuto del file di memoria.

### <a name="remarks"></a>Note

È possibile riaprirlo chiamando [SetHandle](#sethandle), usando l'handle restituito da **Detach**.

##  <a name="sethandle"></a>  CSharedFile::SetHandle

Chiamare questa funzione per collegare un blocco di memoria globale per il `CSharedFile` oggetto.

```
void SetHandle(
    HGLOBAL hGlobalMemory,
    BOOL bAllowGrow = TRUE);
```

### <a name="parameters"></a>Parametri

*hGlobalMemory*<br/>
Handle per la memoria globale da allegare al `CSharedFile`.

*bAllowGrow*<br/>
Specifica se il blocco di memoria può raggiungere.

### <a name="remarks"></a>Note

Se *bAllowGrow* è diverso da zero, la dimensione del blocco di memoria viene aumentata in base alle esigenze, ad esempio, se un tentativo di tentato di scrivere più byte nel file che sono stati allocati per il blocco di memoria.

## <a name="see-also"></a>Vedere anche

[Classe CMemFile](../../mfc/reference/cmemfile-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CMemFile](../../mfc/reference/cmemfile-class.md)
