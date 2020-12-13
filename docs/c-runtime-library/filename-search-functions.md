---
description: 'Altre informazioni su: funzioni di ricerca filename'
title: Funzioni di ricerca dei nomi file
ms.date: 11/04/2016
api_location:
- msvcr100.dll
- msvcr120.dll
- msvcr90.dll
- msvcrt.dll
- msvcr80.dll
- msvcr110.dll
- msvcr110_clr0400.dll
api_type:
- DLLExport
topic_type:
- apiref
helpviewer_keywords:
- file names [C++], searching for
- _find function
- wfind function
- find function
- _wfind function
ms.assetid: 2bc2f8ef-44e4-4271-b3e8-666d36fde828
ms.openlocfilehash: 1ab547de95906909a75bdd73f653c5cdae519879
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332943"
---
# <a name="filename-search-functions"></a>Funzioni di ricerca dei nomi file

Queste funzioni eseguono e terminano le ricerche per i nomi di file specificati:

- [_findnext, _wfindnext](../c-runtime-library/reference/findnext-functions.md)

- [_findfirst, _wfindfirst](../c-runtime-library/reference/findfirst-functions.md)

- [_findclose](../c-runtime-library/reference/findclose.md)

## <a name="remarks"></a>Commenti

La funzione `_findfirst` fornisce informazioni sulla prima istanza di un nome file che corrisponde al file specificato nell'argomento `filespec` . In `filespec` è possibile usare qualsiasi combinazione di caratteri jolly supportata dal sistema operativo host.

Le funzioni restituiscono informazioni sui file in una struttura `_finddata_t`, definita in IO.h. Le diverse funzioni della famiglia di prodotti usano più varianti nella struttura `_finddata_t` . La struttura `_finddata_t` di base include i seguenti elementi:

`unsigned attrib`<br/>
Attributo del file.

`time_t time_create`<br/>
Ora di creazione del file (-1L per file system FAT). Questo orario viene archiviato in formato UTC. Per convertirlo nell'ora locale, usare [localtime_s](../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md).

`time_t time_access`<br/>
Ora dell'ultimo accesso al file (-1L per i file system FAT). Questo orario viene archiviato in formato UTC. Per convertirlo nell'ora locale, usare `localtime_s`.

`time_t time_write`<br/>
Ora dell'ultima scrittura nel file. Questo orario viene archiviato in formato UTC. Per convertirlo nell'ora locale, usare `localtime_s`.

`_fsize_t size`<br/>
Lunghezza del file in byte.

`char name`[ `_MAX_PATH`] Nome con terminazione Null del file o della directory corrispondente, senza il percorso.

Nei file system che non supportano le ore di creazione e di ultimo accesso di un file, ad esempio i file system FAT, i campi `time_create` e `time_access` sono sempre -1L.

`_MAX_PATH` è definito in Stdlib.h come 260 byte.

Non è possibile specificare gli attributi di destinazione (ad esempio `_A_RDONLY`) per limitare l'operazione di ricerca. Questi attributi vengono restituiti nel campo `attrib` della struttura `_finddata_t` e possono includere i valori seguenti (definiti in IO.h). Gli utenti non devono considerarli gli unici valori possibili per il campo `attrib` .

`_A_ARCH`<br/>
Archiviazione. Viene impostato ogni volta che il file viene modificato ed eliminato dal comando **BACKUP** . Valore: 0x20.

`_A_HIDDEN`<br/>
File nascosto. In genere non viene visualizzato con il comando DIR, a meno che non venga usata l'opzione **/AH** . Restituisce informazioni sui file con questo attributo e sui file normali. Valore: 0x02.

`_A_NORMAL`<br/>
Normale. File non contiene altri set di attributi e può essere letto o scritto senza alcuna restrizione. Valore: 0x00.

`_A_RDONLY`<br/>
Di sola lettura. Il file non può essere aperto per la scrittura e non è possibile creare un file con lo stesso nome. Valore: 0x01.

`_A_SUBDIR`<br/>
Sottodirectory. Valore: 0x10.

`_A_SYSTEM`<br/>
File di sistema. In genere non viene visualizzato con il comando **DIR** , a meno che venga usata l'opzione **/A** o **/A:S** . Valore: 0x04.

`_findnext` trova il nome successivo, se presente, che corrisponde all'argomento `filespec` specificato in una precedente chiamata a `_findfirst`. L'argomento `fileinfo` deve puntare a una struttura inizializzata dalla chiamata precedente a `_findfirst`. Se viene trovata una corrispondenza, i contenuti della struttura `fileinfo` vengono modificati come descritto in precedenza. In caso contrario, vengono lasciati invariati. `_findclose` chiude l'handle di ricerca specificato e rilascia tutte le risorse associate per `_findfirst` e `_findnext`. L'handle restituito da `_findfirst` o `_findnext` deve essere passato a `_findclose`prima di eseguire operazioni di modifica, ad esempio l'eliminazione, nelle directory che formano i percorsi passati a tali operazioni.

È possibile annidare le funzioni `_find` . Ad esempio, se una chiamata a `_findfirst` o `_findnext` trova il file che corrisponde a una sottodirectory, è possibile avviare una nuova ricerca con un'altra chiamata a `_findfirst` o `_findnext`.

`_wfindfirst` e `_wfindnext` sono versioni a caratteri wide di `_findfirst` e `_findnext`. L'argomento della struttura delle versioni a caratteri wide contiene il tipo di dati `_wfinddata_t` definito in IO.h e WCHAR.h. I campi di questo tipo di dati sono identici a quelli del `_finddata_t` tipo di dati, ad eccezione del fatto che nel `_wfinddata_t` campo del nome è di tipo **`wchar_t`** anziché di tipo **`char`** . Per il resto, `_wfindfirst` e `_wfindnext` si comportano in modo identico a `_findfirst` e `_findnext`.

`_findfirst` e `_findnext` usano il tipo Time a 64 bit. Se è necessario usare il precedente tipo Time a 32 bit, è possibile definire `_USE_32BIT_TIME_T`. Le versioni di queste funzioni che contengono il suffisso `32` nei nomi usano il tipo Time a 32 bit, mentre quelle con il suffisso `64` usano il tipo Time a 64 bit.

Anche le funzioni `_findfirst32i64`, `_findnext32i64`, `_wfindfirst32i64`e `_wfindnext32i64` si comportano in modo analogo alle versioni di tipo Time a 32 bit ma usano e restituiscono lunghezze di file a 64 bit. Anche le funzioni `_findfirst64i32`, `_findnext64i32`, `_wfindfirst64i32`e `_wfindnext64i32` usano il tipo Time a 64 bit ma lunghezze di file a 32 bit. Queste funzioni usano le varianti appropriate del tipo `_finddata_t` in cui i campi hanno tipi diversi per Time e File size.

`_finddata_t` è una macro che restituisce `_finddata64i32_t` (o `_finddata32_t` se `_USE_32BIT_TIME_T` è definito). La tabella seguente riepiloga le variazioni in `_finddata_t`:

|Struttura|Tipo time|Tipo File size|
|---------------|---------------|--------------------|
|`_finddata_t`, `_wfinddata_t`|`__time64_t`|`_fsize_t`|
|`_finddata32_t`, `_wfinddata32_t`|`__time32_t`|`_fsize_t`|
|`__finddata64_t`, `__wfinddata64_t`|`__time64_t`|**`__int64`**|
|`_finddata32i64_t`, `_wfinddata32i64_t`|`__time32_t`|**`__int64`**|
|`_finddata64i32_t`, `_wfinddata64i32_t`|`__time64_t`|`_fsize_t`|

`_fsize_t` è **`typedef`** per **`unsigned long`** (32 bit).

## <a name="example"></a>Esempio

```c
// crt_find.c
// This program uses the 32-bit _find functions to print
// a list of all files (and their attributes) with a .C extension
// in the current directory.

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <time.h>

int main( void )
{
   struct _finddata_t c_file;
   intptr_t hFile;

   // Find first .c file in current directory
   if( (hFile = _findfirst( "*.c", &c_file )) == -1L )
      printf( "No *.c files in current directory!\n" );
   else
   {
      printf( "Listing of .c files\n\n" );
      printf( "RDO HID SYS ARC  FILE         DATE %25c SIZE\n", ' ' );
      printf( "--- --- --- ---  ----         ---- %25c ----\n", ' ' );
      do {
         char buffer[30];
         printf( ( c_file.attrib & _A_RDONLY ) ? " Y  " : " N  " );
         printf( ( c_file.attrib & _A_HIDDEN ) ? " Y  " : " N  " );
         printf( ( c_file.attrib & _A_SYSTEM ) ? " Y  " : " N  " );
         printf( ( c_file.attrib & _A_ARCH )   ? " Y  " : " N  " );
         ctime_s( buffer, _countof(buffer), &c_file.time_write );
         printf( " %-12s %.24s  %9ld\n",
            c_file.name, buffer, c_file.size );
      } while( _findnext( hFile, &c_file ) == 0 );
      _findclose( hFile );
   }
}
```

```Output
Listing of .c files

RDO HID SYS ARC  FILE         DATE                           SIZE
--- --- --- ---  ----         ----                           ----
N   N   N   Y   blah.c       Wed Feb 13 09:21:42 2002       1715
N   N   N   Y   test.c       Wed Feb 06 14:30:44 2002        312
```

## <a name="see-also"></a>Vedere anche

[Chiamate di sistema](../c-runtime-library/system-calls.md)
