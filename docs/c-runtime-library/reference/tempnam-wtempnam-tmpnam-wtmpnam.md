---
title: _tempnam, _wtempnam, tmpnam, _wtmpnam | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _wtempnam
- _wtmpnam
- tmpnam
- _tempnam
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- wtempnam
- _wtmpnam
- wtmpnam
- tmpnam
- _wtempnam
- _tempnam
dev_langs:
- C++
helpviewer_keywords:
- wtempnam function
- file names [C++], creating temporary
- _tempnam function
- ttmpnam function
- tmpnam function
- tempnam function
- wtmpnam function
- temporary files, creating
- file names [C++], temporary
- _ttmpnam function
- _wtmpnam function
- _wtempnam function
ms.assetid: 3ce75f0f-5e30-42a6-9791-8d7cbfe70fca
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4ba00c1998a41f2d17408babc87b0bf45cad689b
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="tempnam-wtempnam-tmpnam-wtmpnam"></a>_tempnam, _wtempnam, tmpnam, _wtmpnam

Genera i nomi che è possibile usare per creare file temporanei. Sono disponibili versioni più sicure di alcune di queste funzioni. Vedere [tmpnam_s, _wtmpnam_s](tmpnam-s-wtmpnam-s.md).

## <a name="syntax"></a>Sintassi

```C
char *_tempnam(
   const char *dir,
   const char *prefix
);
wchar_t *_wtempnam(
   const wchar_t *dir,
   const wchar_t *prefix
);
char *tmpnam(
   char *str
);
wchar_t *_wtmpnam(
   wchar_t *str
);
```

### <a name="parameters"></a>Parametri

*prefix*<br/>
La stringa che verrà anteposto ai nomi restituiti da **tempnam**.

*dir*<br/>
Percorso usato nel nome del file se non è presente alcuna variabile di ambiente TMP o se TMP non è una directory valida.

*str*<br/>
Puntatore che conterrà il nome generato e sarà identico a quello restituito dalla funzione. Questo è un modo pratico per salvare il nome generato.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al nome generato o **NULL** se si verifica un errore. Errore può verificarsi se si tenta di oltre **TMP_MAX** (vedere STDIO. H) chiamate con **tmpnam** oppure se si utilizza **tempnam** ed è presente un nome di directory non valido specificato nella variabile di ambiente TMP e nel *dir* parametro.

> [!NOTE]
> I puntatori restituiti da **tmpnam** e **wtmpnam** scegliere buffer interni statici. Non chiamare [free](free.md) per deallocare questi puntatori. **libera** deve essere chiamato per puntatori allocati da **tempnam** e **wtempnam**.

## <a name="remarks"></a>Note

Ognuna di queste funzioni restituisce il nome di un file che non esiste. **tmpnam** restituisce un nome univoco nella directory di lavoro corrente e **tempnam** consente di generare un nome univoco in una directory diversa da quella corrente. Tenere presente che quando un nome di file è preceduto da una barra rovesciata senza informazioni sul percorso, ad esempio \nomef21, significa che il nome è valido per la directory di lavoro corrente.

Per **tmpnam**, è possibile archiviare questo nome file generato nel *str*. Se *str* viene **NULL**, quindi **tmpnam** lascia il risultato in un buffer interno statico. Le eventuali chiamate successive eliminano quindi questo valore. Il nome generato dal **tmpnam** composto da un nome file generato automaticamente e, dopo la prima chiamata a **tmpnam**, un'estensione di file di numeri sequenziali in base 32 (1 alla copia-.vvu quando **TMP_MAX**  in STDIO. H è 32.767).

**tempnam** genererà un nome file univoco per una directory selezionata per le regole seguenti:

- Se la variabile di ambiente TMP è definita e impostata su un nome di directory valido, verranno generati nomi di file univoci per la directory specificata da TMP.

- Se non è definita la variabile di ambiente TMP o se è impostata sul nome di una directory che non esiste, **tempnam** utilizzerà il *dir* parametro come il percorso per il quale saranno generati nomi univoci.

- Se non è definita la variabile di ambiente TMP o se è impostato sul nome di una directory che non esiste e se *dir* può essere **NULL** o impostare il nome di una directory che non esiste, **_ tempnam** userà la directory di lavoro corrente per generare nomi univoci. Attualmente, se entrambi TMP e *dir* specificare nomi di directory che non esistono, il **tempnam** chiamata di funzione non riuscirà.

Il nome restituito da **tempnam** sarà una concatenazione di *prefisso* e un numero sequenza, che verrà combinati per creare un nome file univoco per la directory specificata. **tempnam** genera i nomi di file senza estensione. **tempnam** utilizza [malloc](malloc.md) per allocare spazio per il nome del file; il programma è responsabile per il rilascio di questo spazio quando non è più necessario.

**tempnam** e **tmpnam** handle di stringa di caratteri multibyte gli argomenti alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici OEM ottengono automaticamente dal sistema operativo. **wtempnam** è una versione a caratteri wide **tempnam**; gli argomenti e i valori restituiti **wtempnam** sono stringhe a caratteri "wide". **wtempnam** e **tempnam** si comportano in modo identico con la differenza che **wtempnam** gestiscono le stringhe di caratteri multibyte. **wtmpnam** è una versione a caratteri wide **tmpnam**; l'argomento e il valore restituito di **wtmpnam** sono stringhe a caratteri "wide". **wtmpnam** e **tmpnam** si comportano in modo identico con la differenza che **wtmpnam** gestiscono le stringhe di caratteri multibyte.

Se **debug** e **CRTDBG_MAP_ALLOC** sono definiti **tempnam** e **wtempnam** vengono sostituiti dalle chiamate a [tempnam DBG e wtempnam_dbg](tempnam-dbg-wtempnam-dbg.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**ttmpnam**|**tmpnam**|**tmpnam**|**_wtmpnam**|
|**_ttempnam**|**_tempnam**|**_tempnam**|**_wtempnam**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_tempnam**|\<stdio.h>|
|**wtempnam**, **wtmpnam**|\<stdio.h> o \<wchar.h>|
|**tmpnam**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_tempnam.c
// compile with: /W3
// This program uses tmpnam to create a unique filename in the
// current working directory, then uses _tempnam to create
// a unique filename with a prefix of stq.

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   char* name1 = NULL;
   char* name2 = NULL;

   // Create a temporary filename for the current working directory:
   if( ( name1 = tmpnam( NULL ) ) != NULL ) // C4996
   // Note: tmpnam is deprecated; consider using tmpnam_s instead
      printf( "%s is safe to use as a temporary file.\n", name1 );
   else
      printf( "Cannot create a unique filename\n" );

   // Create a temporary filename in temporary directory with the
   // prefix "stq". The actual destination directory may vary
   // depending on the state of the TMP environment variable and
   // the global variable P_tmpdir.

   if( ( name2 = _tempnam( "c:\\tmp", "stq" ) ) != NULL )
      printf( "%s is safe to use as a temporary file.\n", name2 );
   else
      printf( "Cannot create a unique filename\n" );

   // When name2 is no longer needed :
   if(name2)
     free(name2);

}
```

```Output
\s1gk. is safe to use as a temporary file.
C:\DOCUME~1\user\LOCALS~1\Temp\2\stq2 is safe to use as a temporary file.
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[malloc](malloc.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[tmpfile](tmpfile.md)<br/>
[tmpfile_s](tmpfile-s.md)<br/>
