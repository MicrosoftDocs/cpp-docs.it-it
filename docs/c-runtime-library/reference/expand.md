---
title: _expand
ms.date: 11/04/2016
api_name:
- _expand
api_location:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-heap-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _bexpand
- fexpand
- expand
- nexpand
- _fexpand
- _nexpand
- bexpand
- _expand
helpviewer_keywords:
- memory blocks, changing size
- _expand function
- expand function
ms.assetid: 4ac55410-39c8-45c7-bccd-3f1042ae2ed3
ms.openlocfilehash: cb986d893bd862e61ae595317a890fb489c19919
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70941551"
---
# <a name="_expand"></a>_expand

Modifica la dimensione di un blocco di memoria.

## <a name="syntax"></a>Sintassi

```C
void *_expand(
   void *memblock,
   size_t size
);
```

### <a name="parameters"></a>Parametri

*memblock*<br/>
Puntatore al blocco di memoria allocato in precedenza.

*size*<br/>
Nuova dimensione in byte.

## <a name="return-value"></a>Valore restituito

**_expand** restituisce un puntatore void al blocco di memoria riallocato. **_expand**, a differenza di **realloc**, non è in grado di spostare un blocco per modificarne le dimensioni. Pertanto, se è disponibile memoria sufficiente per espandere il blocco senza lo stato spostato, il parametro *memblock* per **_expand** è uguale al valore restituito.

**_expand** restituisce **null** quando viene rilevato un errore durante l'operazione. Ad esempio, se **_expand** viene usato per compattare un blocco di memoria, potrebbe rilevare il danneggiamento nell'heap a blocchi piccoli o un puntatore di blocco non valido e restituire **null**.

Se la memoria disponibile non è sufficiente per espandere il blocco alla dimensione specificata senza che lo si sposti, la funzione restituisce **null**. **_expand** non restituisce mai un blocco espanso a dimensioni inferiori a quelle richieste. Se si verifica un errore, **errno** indica la natura dell'errore. Per ulteriori informazioni su **errno**, vedere [errno, doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per controllare la nuova dimensione dell'elemento, usare **_msize**. Per ottenere un puntatore a un tipo diverso da **void**, usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Note

La funzione **_expand** modifica la dimensione di un blocco di memoria allocato in precedenza tentando di espandere o comprimere il blocco senza spostarne la posizione nell'heap. Il parametro *memblock* punta all'inizio del blocco. Il parametro *size* fornisce le nuove dimensioni del blocco, in byte. Il contenuto del blocco rimane invariato fino alla dimensione nuova o alla precedente, a seconda di quale delle due è la più breve. *memblock* non deve essere un blocco che è stato liberato.

> [!NOTE]
> Sulle piattaforme a 64 bit, **_expand** potrebbe non comprimere il blocco se la nuova dimensione è inferiore alle dimensioni correnti; in particolare, se le dimensioni del blocco sono inferiori a 16K e pertanto allocate nell'heap di frammentazione basso, **_expand** lascia il blocco invariato e restituisce *memblock*.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, **_expand** si risolve in [_expand_dbg](expand-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

Questa funzione convalida i relativi parametri. Se *memblock* è un puntatore null, questa funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e la funzione restituisce **null**. Se *size* è maggiore di **_HEAP_MAXREQ**, **errno** viene impostato su **ENOMEM** e la funzione restituisce **null**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**_expand**|\<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_expand.c

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main( void )
{
   char *bufchar;
   printf( "Allocate a 512 element buffer\n" );
   if( (bufchar = (char *)calloc( 512, sizeof( char ) )) == NULL )
      exit( 1 );
   printf( "Allocated %d bytes at %Fp\n",
         _msize( bufchar ), (void *)bufchar );
   if( (bufchar = (char *)_expand( bufchar, 1024 )) == NULL )
      printf( "Can't expand" );
   else
      printf( "Expanded block to %d bytes at %Fp\n",
            _msize( bufchar ), (void *)bufchar );
   // Free memory
   free( bufchar );
   exit( 0 );
}
```

```Output
Allocate a 512 element buffer
Allocated 512 bytes at 002C12BC
Expanded block to 1024 bytes at 002C12BC
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[malloc](malloc.md)<br/>
[_msize](msize.md)<br/>
[realloc](realloc.md)<br/>
