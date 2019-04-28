---
title: _tempnam, _wtempnam, tmpnam, _wtmpnam
ms.date: 11/04/2016
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
ms.openlocfilehash: 29fa8fc836b1b52bcf66247b3f6aaba47b8c2eaa
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62284870"
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

Ognuna di queste funzioni restituisce un puntatore al nome generato o **NULL** se si verifica un errore. Può verificarsi un errore se si tenta di superare **TMP_MAX** (vedere STDIO. H) chiamate con **tmpnam** oppure se si utilizza **tempnam** ed è presente un nome di directory non valido specificato nella variabile di ambiente TMP e nel *dir* parametro.

> [!NOTE]
> I puntatori restituiti da **tmpnam** e **wtmpnam** puntare a buffer statici interni. Non chiamare [free](free.md) per deallocare questi puntatori. **libera** deve essere chiamato per puntatori allocati da **tempnam** e **wtempnam**.

## <a name="remarks"></a>Note

Ognuna di queste funzioni restituisce il nome di un file che non esiste. **tmpnam** restituisce un nome univoco nella directory temporanea designata di Windows restituita da [GetTempPathW](/windows/desktop/api/fileapi/nf-fileapi-gettemppathw). **\_tempnam** genera un nome univoco in una directory diversa da quella designata. Tenere presente che quando un nome di file è preceduto da una barra rovesciata senza informazioni sul percorso, ad esempio \nomef21, significa che il nome è valido per la directory di lavoro corrente.

Per la **tmpnam**, è possibile archiviare questo nome file generato nella *str*. Se *str* viene **NULL**, quindi **tmpnam** lascia il risultato in un buffer interno statico. Le eventuali chiamate successive eliminano quindi questo valore. Il nome generato da **tmpnam** è costituito da un nome file generato dal programma e, dopo la prima chiamata a **tmpnam**, un'estensione di file di numeri sequenziali in base 32 (.1-. vvu, quando **TMP_MAX**  in STDIO. H è 32.767).

**tempnam** genererà un nome file univoco per una directory scelto in base alle regole seguenti:

- Se la variabile di ambiente TMP è definita e impostata su un nome di directory valido, verranno generati nomi di file univoci per la directory specificata da TMP.

- Se la variabile di ambiente TMP non è definita o se è impostata sul nome di una directory che non esiste, **tempnam** utilizzerà il *dir* parametro come il percorso per il quale genererà i nomi univoci.

- Se la variabile di ambiente TMP non è definita o se è impostato sul nome di una directory che non esiste e se *dir* può essere **NULL** o impostato sul nome di una directory che non esiste, **_ tempnam** userà la directory di lavoro corrente per generare nomi univoci. Attualmente, se sia TMP e *dir* specificare i nomi delle directory che non esistono, il **tempnam** chiamata di funzione avrà esito negativo.

Il nome restituito da **tempnam** sarà una concatenazione del *prefisso* e un numero sequenza, che verrà combinati per creare un nome file univoco per la directory specificata. **tempnam** genera nomi di file senza estensione. **tempnam** viene utilizzato [malloc](malloc.md) per allocare spazio per il nome del file; il programma è responsabile della liberazione questo spazio quando non è più necessario.

**tempnam** e **tmpnam** automaticamente handle argomenti stringa di caratteri multibyte come appropriato, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici OEM ottengono dal sistema operativo. **wtempnam** è una versione a caratteri wide di **tempnam**; gli argomenti e il valore restituito **wtempnam** sono stringhe a caratteri wide. **wtempnam** e **tempnam** si comportano in modo identico con la differenza che **wtempnam** non gestisce le stringhe di caratteri multibyte. **wtmpnam** è una versione a caratteri wide di **tmpnam**; l'argomento e il valore restituito **wtmpnam** sono stringhe a caratteri wide. **wtmpnam** e **tmpnam** si comportano in modo identico con la differenza che **wtmpnam** non gestisce le stringhe di caratteri multibyte.

Se **debug** e **CRTDBG_MAP_ALLOC** vengono definiti **tempnam** e **wtempnam** vengono sostituite da chiamate agli [tempnam DBG e wtempnam_dbg](tempnam-dbg-wtempnam-dbg.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ttmpnam**|**tmpnam**|**tmpnam**|**_wtmpnam**|
|**_ttempnam**|**_tempnam**|**_tempnam**|**_wtempnam**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_tempnam**|\<stdio.h>|
|**_wtempnam**, **_wtmpnam**|\<stdio.h> o \<wchar.h>|
|**tmpnam**|\<stdio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_tempnam.c
// compile with: /W3
// This program uses tmpnam to create a unique filename in the
// temporary directory, and _tempname to create a unique filename
// in C:\\tmp.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char * name1 = NULL;
   char * name2 = NULL;
   char * name3 = NULL;

   // Create a temporary filename for the current working directory:
   if ((name1 = tmpnam(NULL)) != NULL) { // C4996
   // Note: tmpnam is deprecated; consider using tmpnam_s instead
      printf("%s is safe to use as a temporary file.\n", name1);
   } else {
      printf("Cannot create a unique filename\n");
   }

   // Create a temporary filename in temporary directory with the
   // prefix "stq". The actual destination directory may vary
   // depending on the state of the TMP environment variable and
   // the global variable P_tmpdir.

   if ((name2 = _tempnam("c:\\tmp", "stq")) != NULL) {
      printf("%s is safe to use as a temporary file.\n", name2);
   } else {
      printf("Cannot create a unique filename\n");
   }

   // When name2 is no longer needed:
   if (name2) {
      free(name2);
   }

   // Unset TMP environment variable, then create a temporary filename in C:\tmp.
   if (_putenv("TMP=") != 0) {
      printf("Could not remove TMP environment variable.\n");
   }

   // With TMP unset, we will use C:\tmp as the temporary directory.
   // Create a temporary filename in C:\tmp with prefix "stq".
   if ((name3 = _tempnam("c:\\tmp", "stq")) != NULL) {
      printf("%s is safe to use as a temporary file.\n", name3);
   }
   else {
      printf("Cannot create a unique filename\n");
   }

   // When name3 is no longer needed:
   if (name3) {
      free(name3);
   }

   return 0;
}
```

```Output
C:\Users\LocalUser\AppData\Local\Temp\sriw.0 is safe to use as a temporary file.
C:\Users\LocalUser\AppData\Local\Temp\stq2 is safe to use as a temporary file.
c:\tmp\stq3 is safe to use as a temporary file.
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[malloc](malloc.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[tmpfile](tmpfile.md)<br/>
[tmpfile_s](tmpfile-s.md)<br/>
