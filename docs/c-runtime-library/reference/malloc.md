---
title: malloc | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- malloc
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
- malloc
dev_langs:
- C++
helpviewer_keywords:
- malloc function
- memory allocation
ms.assetid: 144fcee2-be34-4a03-bb7e-ed6d4b99eea0
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 39907fec3e169c4a49380e80b528a4af7fe22476
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="malloc"></a>malloc

Alloca blocchi di memoria.

## <a name="syntax"></a>Sintassi

```C
void *malloc(
   size_t size
);
```

### <a name="parameters"></a>Parametri

*size*<br/>
Byte da allocare.

## <a name="return-value"></a>Valore restituito

**malloc** restituisce un puntatore void allo spazio allocato o **NULL** se è disponibile memoria sufficiente. Per restituire un puntatore a un tipo diverso da **void**, usare un cast del tipo sul valore restituito. Lo spazio di archiviazione a cui punta il valore restituito è sicuramente allineato in modo corretto per l'archiviazione di qualsiasi tipo di oggetto con un requisito di allineamento minore o uguale a quello dell'allineamento fondamentale. (In Visual C++, l'allineamento a fondamentale è l'allineamento richiesto per un **doppie**, o 8 byte. Nel codice destinato a piattaforme a 64 bit, è 16 byte.) Uso [aligned_malloc](aligned-malloc.md) allocare spazio di archiviazione per gli oggetti che dispongono di un requisito di allineamento maggiore, ad esempio, i tipi di istruzioni SSE [__m128](../../cpp/m128.md) e **__m256**e i tipi che sono dichiarata utilizzando `__declspec(align( n ))` in cui **n** è maggiore di 8. Se *dimensioni* è 0, **malloc** alloca un elemento di lunghezza zero nell'heap e restituisce un puntatore valido a tale elemento. Verificare sempre il valore restituito da **malloc**, anche se la quantità di memoria richiesta è limitata.

## <a name="remarks"></a>Note

Il **malloc** funzione alloca un blocco di memoria di almeno *dimensioni* byte. Il blocco può essere più grande *dimensioni* byte a causa di spazio necessaria per le informazioni di allineamento e la manutenzione.

**malloc** imposta **errno** a **ENOMEM** se fallisce un'allocazione di memoria o se la quantità di memoria richiesto supera **heap_maxreq**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Usa il codice di avvio **malloc** allocare spazio di archiviazione per il **Environ**, *envp*, e *argv* variabili. Le seguenti funzioni e le relative controparti a caratteri wide anche chiamano **malloc**.

|||||
|-|-|-|-|
|[calloc](calloc.md)|[fscanf](fscanf-fscanf-l-fwscanf-fwscanf-l.md)|[_getw](getw.md)|[setvbuf](setvbuf.md)|
|[Funzioni _exec](../../c-runtime-library/exec-wexec-functions.md)|[fseek](fseek-fseeki64.md)|[_popen](popen-wpopen.md)|[Funzioni _spawn](../../c-runtime-library/spawn-wspawn-functions.md)|
|[fgetc](fgetc-fgetwc.md)|[fsetpos](fsetpos.md)|[printf](printf-printf-l-wprintf-wprintf-l.md)|[_strdup](strdup-wcsdup-mbsdup.md)|
|[_fgetchar](fgetc-fgetwc.md)|[_fullpath](fullpath-wfullpath.md)|[putc](putc-putwc.md)|[system](system-wsystem.md)|
|[fgets](fgets-fgetws.md)|[fwrite](fwrite.md)|[putchar](putc-putwc.md)|[_tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|
|[fprintf](fprintf-fprintf-l-fwprintf-fwprintf-l.md)|[getc](getc-getwc.md)|[_putenv](putenv-wputenv.md)|[ungetc](ungetc-ungetwc.md)|
|[fputc](fputc-fputwc.md)|[getchar](getc-getwc.md)|[puts](puts-putws.md)|[vfprintf](vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)|
|[_fputchar](fputc-fputwc.md)|[_getcwd](getcwd-wgetcwd.md)|[_putw](putw.md)|[vprintf](vprintf-vprintf-l-vwprintf-vwprintf-l.md)|
|[fputs](fputs-fputws.md)|[_getdcwd](getcwd-wgetcwd.md)|[scanf](scanf-scanf-l-wscanf-wscanf-l.md)||
|[fread](fread.md)|[gets](../../c-runtime-library/gets-getws.md)|[_searchenv](searchenv-wsearchenv.md)||

La funzione C++ [_set_new_mode](set-new-mode.md) imposta la nuova modalità del gestore per **malloc**. Indica la nuova modalità di gestione se, in caso di errore, **malloc** consiste nel chiamare la routine del gestore di nuovo l'impostazione [set_new_handler](set-new-handler.md). Per impostazione predefinita **malloc** non chiama la nuova routine del gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **malloc** non riesce ad allocare memoria, **malloc** chiama la routine del gestore nuovo nello stesso modo in cui il **nuova** (operatore) Quando non riesce per lo stesso motivo. Per ignorare il valore predefinito, chiamare `_set_new_mode(1)` anticipata nel programma, o il collegamento con NEWMODE. OBJ (vedere [Opzioni collegamento](../../c-runtime-library/link-options.md)).

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C **malloc** risolve [malloc_dbg](malloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).

**malloc** contrassegnato `__declspec(noalias)` e `__declspec(restrict)`; ciò significa che la funzione è sicuramente non per modificare le variabili globali e che il puntatore restituito non è associato un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**malloc**|\<stdlib.h> e \<malloc.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_malloc.c
// This program allocates memory with
// malloc, then frees the memory with free.

#include <stdlib.h>   // For _MAX_PATH definition
#include <stdio.h>
#include <malloc.h>

int main( void )
{
   char *string;

   // Allocate space for a path name
   string = malloc( _MAX_PATH );

   // In a C++ file, explicitly cast malloc's return.  For example,
   // string = (char *)malloc( _MAX_PATH );

   if( string == NULL )
      printf( "Insufficient memory available\n" );
   else
   {
      printf( "Memory space allocated for path name\n" );
      free( string );
      printf( "Memory freed\n" );
   }
}
```

```Output
Memory space allocated for path name
Memory freed
```

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[free](free.md)<br/>
[realloc](realloc.md)<br/>
[_aligned_malloc](aligned-malloc.md)<br/>
