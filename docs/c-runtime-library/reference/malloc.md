---
title: malloc
ms.date: 11/04/2016
api_name:
- malloc
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
- malloc
helpviewer_keywords:
- malloc function
- memory allocation
ms.assetid: 144fcee2-be34-4a03-bb7e-ed6d4b99eea0
ms.openlocfilehash: 8001726bcc2f1b384d527c6f4edcbf8eb92b0d2a
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70952824"
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

**malloc** restituisce un puntatore void allo spazio allocato o **null** se la memoria disponibile è insufficiente. Per restituire un puntatore a un tipo diverso da **void**, usare un cast del tipo sul valore restituito. Lo spazio di archiviazione a cui punta il valore restituito è sicuramente allineato in modo corretto per l'archiviazione di qualsiasi tipo di oggetto con un requisito di allineamento minore o uguale a quello dell'allineamento fondamentale. In Visual C++l'allineamento fondamentale è l'allineamento richiesto per un **valore Double**o 8 byte. Nel codice destinato a piattaforme a 64 bit, è 16 byte.) Usare [_aligned_malloc](aligned-malloc.md) per allocare spazio di archiviazione per gli oggetti con un requisito di allineamento maggiore, ad esempio i tipi SSE [__m128](../../cpp/m128.md) e **__m256**e i tipi dichiarati usando `__declspec(align( n ))` dove **n** è maggiore di 8. Se *size* è 0, **malloc** alloca un elemento di lunghezza zero nell'heap e restituisce un puntatore valido a tale elemento. Controllare sempre il ritorno da **malloc**, anche se la quantità di memoria richiesta è ridotta.

## <a name="remarks"></a>Note

La funzione **malloc** alloca un blocco di memoria di almeno *dimensioni* pari a byte. Il blocco può essere maggiore di *size* bytes a causa dello spazio necessario per l'allineamento e le informazioni di manutenzione.

**malloc** imposta **errno** su **ENOMEM** se un'allocazione di memoria ha esito negativo o se la quantità di memoria richiesta supera **_HEAP_MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Il codice di avvio usa **malloc** per allocare spazio di archiviazione per le variabili **Environ**, *envp*e *argv* . Anche le funzioni seguenti e le relative controparti a caratteri wide chiamano **malloc**.

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

La funzione C++ [_set_new_mode](set-new-mode.md) imposta la nuova modalità del gestore per **malloc**. La nuova modalità del gestore indica se, in caso di errore, **malloc** deve chiamare la routine del nuovo gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **malloc** non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **malloc** non riesce ad allocare memoria, **malloc** chiama la routine del nuovo gestore nello stesso modo in cui il **nuovo** operatore esegue quando si verifica un errore per lo stesso motivo. Per eseguire l'override dell'impostazione `_set_new_mode(1)` predefinita, chiamare all'inizio del programma o collegarsi a NewMode. OBJ (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime C, **malloc** viene risolto in [differenze](malloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).

**malloc** è contrassegnato `__declspec(noalias)` come `__declspec(restrict)`e; ciò significa che la funzione non modifica le variabili globali e che il puntatore restituito non è associato a un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

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
