---
title: _expand
ms.date: 11/04/2016
apiname:
- _expand
apilocation:
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
apitype: DLLExport
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
ms.openlocfilehash: c1606bedbb1264bddb7674c829fe456f506d6584
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62335204"
---
# <a name="expand"></a>_expand

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

**Espandi** restituisce un puntatore void al blocco di memoria riallocato. **Espandi**, a differenza **realloc**, non è possibile spostare un blocco di modifica delle dimensioni. In questo modo, se vi è memoria sufficiente espandere il blocco senza spostarlo, il *memblock* parametro per **Espandi** corrisponde al valore restituito.

**Espandi** restituisce **NULL** quando viene rilevato un errore durante l'operazione. Ad esempio, se **Espandi** viene usato per la compattazione di un blocco di memoria, potrebbe rilevare il danneggiamento dell'heap di piccoli blocchi o un puntatore di blocco non valido e restituire **NULL**.

Se la memoria è insufficiente per espandere il blocco alla dimensione specificata senza spostarlo, la funzione restituisce **NULL**. **Espandi** non restituisce mai un blocco espanso a una dimensione minore di richiesta. Se si verifica un errore, **errno** indica la natura dell'errore. Per altre informazioni sulle **errno**, vedere [errno, doserrno, sys_errlist e sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Il valore restituito punta a uno spazio di archiviazione che garantisce il corretto allineamento per l'archiviazione di qualsiasi tipo di oggetto. Per verificare la nuova dimensione dell'elemento, usare **msize**. Per ottenere un puntatore a un tipo diverso da **void**, usare un cast del tipo sul valore restituito.

## <a name="remarks"></a>Note

Il **Espandi** funzione modifica la dimensione di un blocco di memoria precedentemente allocata dal tentativo di espandere o contrarre il blocco senza spostarne la posizione nell'heap. Il *memblock* parametro punta all'inizio del blocco. Il *dimensioni* parametro fornisce la nuova dimensione del blocco, espressa in byte. Il contenuto del blocco rimane invariato fino alla dimensione nuova o alla precedente, a seconda di quale delle due è la più breve. *memblock* non deve essere un blocco liberato.

> [!NOTE]
> Su piattaforme a 64 bit **Espandi** potrebbe non contrarre il blocco se la nuova dimensione è minore rispetto alla dimensione corrente; in particolare, se il blocco è stato inferiore a 16 KB e quindi allocato nel Low Fragmentation Heap, **Espandi**  lascia il blocco invariato e restituisce *memblock*.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, **Espandi** viene risolto [expand_dbg](expand-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details) (Informazioni dettagliate sull'heap di debug CRT).

Questa funzione convalida i relativi parametri. Se *memblock* è un puntatore null, questa funzione richiama un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e la funzione restituisce **NULL**. Se *dimensioni* è maggiore di quella **heap_maxreq**, **errno** è impostata su **ENOMEM** e la funzione restituisce **NULL**.

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
