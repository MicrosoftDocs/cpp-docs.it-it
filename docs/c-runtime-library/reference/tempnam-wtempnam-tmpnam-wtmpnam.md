---
title: _tempnam, _wtempnam, tmpnam, _wtmpnam
ms.date: 11/04/2016
api_name:
- _wtempnam
- _wtmpnam
- tmpnam
- _tempnam
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
- api-ms-win-crt-stdio-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 9fd1eb9f2f718afec5b7d5555145fcd7e5cc17cf
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70957525"
---
# <a name="_tempnam-_wtempnam-tmpnam-_wtmpnam"></a>_tempnam, _wtempnam, tmpnam, _wtmpnam

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
Stringa che verrà pre-sospesa ai nomi restituiti da **_tempnam**.

*dir*<br/>
Percorso usato nel nome del file se non è presente alcuna variabile di ambiente TMP o se TMP non è una directory valida.

*str*<br/>
Puntatore che conterrà il nome generato e sarà identico a quello restituito dalla funzione. Questo è un modo pratico per salvare il nome generato.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al nome generato o **null** se si verifica un errore. È possibile che si verifichi un errore se si tenta di eseguire più di **TMP_MAX** (vedere STDIO. H) chiama con **tmpnam** o se si usa **_tempnam** ed è stato specificato un nome di directory non valido nella variabile di ambiente TMP e nel parametro *dir* .

> [!NOTE]
> I puntatori restituiti da **tmpnam** e **_wtmpnam** puntano a buffer statici interni. Non chiamare [free](free.md) per deallocare questi puntatori. è necessario chiamare **Free** per i puntatori allocati da **_tempnam** e **_wtempnam**.

## <a name="remarks"></a>Note

Ognuna di queste funzioni restituisce il nome di un file che non esiste. **tmpnam** restituisce un nome univoco nella directory temporanea di Windows designata restituita da [GetTempPathW](/windows/win32/api/fileapi/nf-fileapi-gettemppathw). tempnam genera un nome univoco in una directory diversa da quella designata.  **\_** Tenere presente che quando un nome di file è preceduto da una barra rovesciata senza informazioni sul percorso, ad esempio \nomef21, significa che il nome è valido per la directory di lavoro corrente.

Per **tmpnam**, è possibile archiviare questo nome file generato in *Str*. Se *Str* è **null**, **tmpnam** lascia il risultato in un buffer statico interno. Le eventuali chiamate successive eliminano quindi questo valore. Il nome generato da **tmpnam** è costituito da un nome di file generato dal programma e, dopo la prima chiamata a **tmpnam**, un'estensione di file di numeri sequenziali in base 32 (. 1-3. vvu, quando **TMP_MAX** in stdio. H è 32.767).

**_tempnam** genererà un nome file univoco per una directory scelta dalle regole seguenti:

- Se la variabile di ambiente TMP è definita e impostata su un nome di directory valido, verranno generati nomi di file univoci per la directory specificata da TMP.

- Se la variabile di ambiente TMP non è definita o se è impostata sul nome di una directory che non esiste, **_tempnam** utilizzerà il parametro *dir* come percorso per il quale genererà nomi univoci.

- Se la variabile di ambiente TMP non è definita o se è impostata sul nome di una directory che non esiste e se *dir* è **null** o è impostata sul nome di una directory che non esiste, **_tempnam** utilizzerà la directory di lavoro corrente per il gene valuta nomi univoci. Attualmente, se TMP e *dir* specificano i nomi delle directory che non esistono, la chiamata alla funzione **_tempnam** avrà esito negativo.

Il nome restituito da **_tempnam** sarà una concatenazione di *prefisso* e un numero sequenziale, che verrà combinato per creare un nome file univoco per la directory specificata. **_tempnam** genera nomi di file senza estensione. **_tempnam** USA [malloc](malloc.md) per allocare spazio per il nome file; il programma è responsabile di liberare questo spazio quando non è più necessario.

**_tempnam** e **tmpnam** gestiscono automaticamente gli argomenti stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici OEM ottenuta dal sistema operativo. **_wtempnam** è una versione a caratteri wide di **_tempnam**; gli argomenti e il valore restituito di **_wtempnam** sono stringhe a caratteri wide. **_wtempnam** e **_tempnam** si comportano in modo identico, ad eccezione del fatto che **_wtempnam** non gestisce le stringhe di caratteri multibyte. **_wtmpnam** è una versione a caratteri wide di **tmpnam**; l'argomento e il valore restituito di **_wtmpnam** sono stringhe a caratteri wide. **_wtmpnam** e **tmpnam** si comportano in modo identico, ad eccezione del fatto che **_wtmpnam** non gestisce le stringhe di caratteri multibyte.

Se _ **debug** e **_CRTDBG_MAP_ALLOC** sono definiti, **_tempnam** e **_wtempnam** vengono sostituiti dalle chiamate a [_tempnam_dbg e _wtempnam_dbg](tempnam-dbg-wtempnam-dbg.md).

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
