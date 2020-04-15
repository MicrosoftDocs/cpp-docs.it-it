---
title: malloc
ms.date: 4/2/2020
api_name:
- malloc
- _o_malloc
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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: afe9264351110bc062d6168ef803fa6fb796538a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81341580"
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

*Dimensione*<br/>
Byte da allocare.

## <a name="return-value"></a>Valore restituito

**malloc** restituisce un puntatore void allo spazio allocato oppure **NULL** se la memoria disponibile è insufficiente. Per restituire un puntatore a un tipo diverso da **void**, utilizzare un cast di tipo sul valore restituito. Lo spazio di archiviazione a cui punta il valore restituito è sicuramente allineato in modo corretto per l'archiviazione di qualsiasi tipo di oggetto con un requisito di allineamento minore o uguale a quello dell'allineamento fondamentale. (In Visual C, l'allineamento fondamentale è l'allineamento necessario per un **doppio**, o 8 byte. Nel codice destinato a piattaforme a 64 bit, è 16 byte.) Utilizzare [_aligned_malloc](aligned-malloc.md) per allocare spazio di archiviazione per gli oggetti con un requisito di allineamento `__declspec(align( n ))` maggiore, ad esempio i tipi SSE [__m128](../../cpp/m128.md) e **__m256**e i tipi dichiarati utilizzando il punto in cui **n** è maggiore di 8. Se *size* è 0, **malloc** alloca un elemento di lunghezza zero nell'heap e restituisce un puntatore valido a tale elemento. Controllare sempre il ritorno da **malloc**, anche se la quantità di memoria richiesta è piccola.

## <a name="remarks"></a>Osservazioni

La funzione **malloc** alloca un blocco di memoria di almeno byte di *dimensione.* Il blocco può essere maggiore di byte di *dimensioni* a causa dello spazio necessario per le informazioni di allineamento e manutenzione.

**malloc** imposta **errno** su **ENOMEM** se un'allocazione di memoria non riesce o se la quantità di memoria richiesta supera **_HEAP_MAXREQ**. Per informazioni su questo e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

Il codice di avvio utilizza **malloc** per allocare spazio di archiviazione per le variabili **_environ**, *envp*e *argv* . Le funzioni seguenti e le relative controparti a caratteri wide chiamano anche **malloc**.

|||||
|-|-|-|-|
|[calloc](calloc.md)|[fscanf](fscanf-fscanf-l-fwscanf-fwscanf-l.md)|[_getw](getw.md)|[setvbuf](setvbuf.md)|
|[Funzioni _exec](../../c-runtime-library/exec-wexec-functions.md)|[fseek](fseek-fseeki64.md)|[_popen](popen-wpopen.md)|[Funzioni _spawn](../../c-runtime-library/spawn-wspawn-functions.md)|
|[fgetc](fgetc-fgetwc.md)|[fsetpos](fsetpos.md)|[printf](printf-printf-l-wprintf-wprintf-l.md)|[_strdup](strdup-wcsdup-mbsdup.md)|
|[_fgetchar](fgetc-fgetwc.md)|[_fullpath](fullpath-wfullpath.md)|[putc](putc-putwc.md)|[sistema](system-wsystem.md)|
|[fgets](fgets-fgetws.md)|[fwrite](fwrite.md)|[putchar](putc-putwc.md)|[_tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|
|[fprintf](fprintf-fprintf-l-fwprintf-fwprintf-l.md)|[getc](getc-getwc.md)|[_putenv](putenv-wputenv.md)|[ungetc](ungetc-ungetwc.md)|
|[fputc](fputc-fputwc.md)|[getchar](getc-getwc.md)|[puts](puts-putws.md)|[vfprintf](vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)|
|[_fputchar](fputc-fputwc.md)|[_getcwd](getcwd-wgetcwd.md)|[_putw](putw.md)|[vprintf](vprintf-vprintf-l-vwprintf-vwprintf-l.md)|
|[fputs](fputs-fputws.md)|[_getdcwd](getcwd-wgetcwd.md)|[scanf](scanf-scanf-l-wscanf-wscanf-l.md)||
|[fread](fread.md)|[get](../../c-runtime-library/gets-getws.md)|[_searchenv](searchenv-wsearchenv.md)||

La funzione C++ [_set_new_mode](set-new-mode.md) imposta la nuova modalità del gestore per **malloc**. La nuova modalità del gestore indica se, in caso di errore, **malloc** deve chiamare la nuova routine del gestore come impostato da [_set_new_handler](set-new-handler.md). Per impostazione predefinita, **malloc** non chiama la nuova routine del gestore in caso di errore nell'allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando **malloc** non riesce ad allocare memoria, **malloc** chiama la nuova routine del gestore nello stesso modo in cui l'operatore **new** esegue quando non riesce per lo stesso motivo. Per ignorare l'impostazione predefinita, chiamare `_set_new_mode(1)` all'inizio del programma o collegarsi a NEWMODE. OBJ (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).

Quando l'applicazione è collegata a una versione di debug delle librerie di runtime del linguaggio C, **malloc** viene risolto [in _malloc_dbg](malloc-dbg.md). Per altre informazioni su come viene gestito l'heap durante il processo di debug, vedere [Informazioni dettagliate sull'heap di debug CRT](/visualstudio/debugger/crt-debug-heap-details).

**malloc** è `__declspec(noalias)` `__declspec(restrict)`contrassegnato e ; ciò significa che la funzione è garantita per non modificare le variabili globali e che il puntatore restituito non è un alias. Per altre informazioni, vedere [noalias](../../cpp/noalias.md) e [restrict](../../cpp/restrict.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

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

[Allocazione della memoria](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[Gratuito](free.md)<br/>
[realloc](realloc.md)<br/>
[_aligned_malloc](aligned-malloc.md)<br/>
