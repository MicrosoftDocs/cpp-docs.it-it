---
title: _mktemp_s, _wmktemp_s
ms.date: 11/04/2016
apiname:
- _mktemp_s
- _wmktemp_s
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
- wmktemp_s
- mktemp_s
- _mktemp_s
- _wmktemp_s
helpviewer_keywords:
- _tmktemp_s function
- mktemp_s function
- _wmktemp_s function
- _mktemp_s function
- files [C++], temporary
- tmktemp_s function
- wmktemp_s function
- temporary files [C++]
ms.assetid: 92a7e269-7f3d-4c71-bad6-14bc827a451d
ms.openlocfilehash: fef10f2cfbcc0332741d560a41a782b70ed14798
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62156538"
---
# <a name="mktemps-wmktemps"></a>_mktemp_s, _wmktemp_s

Crea un nome di file univoco. Queste sono versioni di [_mktemp, _wmktemp](mktemp-wmktemp.md) con miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
errno_t _mktemp_s(
   char *nameTemplate,
   size_t sizeInChars
);
errno_t _wmktemp_s(
   wchar_t *nameTemplate,
   size_t sizeInChars
);
template <size_t size>
errno_t _mktemp_s(
   char (&nameTemplate)[size]
); // C++ only
template <size_t size>
errno_t _wmktemp_s(
   wchar_t (&nameTemplate)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*nameTemplate*<br/>
Modello di nome di file.

*sizeInChars*<br/>
Le dimensioni del buffer in caratteri a byte singolo nel **mktemp_s**; wide caratteri **wmktemp_s**, compreso il terminatore null.

## <a name="return-value"></a>Valore restituito

Entrambe queste funzioni restituiscono zero in caso di esito positivo e un codice di errore in caso di esito negativo.

### <a name="error-conditions"></a>Condizioni di errore

|*nameTemplate*|*sizeInChars*|Valore restituito|Nuovo valore nella *nameTemplate*|
|----------------|-------------------|----------------------|-------------------------------|
|**NULL**|qualsiasi|**EINVAL**|**NULL**|
|Formato non corretto (vedere la sezione Osservazioni sezione per il formato corretto)|qualsiasi|**EINVAL**|stringa vuota|
|qualsiasi|<= numero di X|**EINVAL**|stringa vuota|

Se si verifica una delle condizioni di errore precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** è impostata su **EINVAL** e le funzioni restituiscono **EINVAL**.

## <a name="remarks"></a>Note

Il **mktemp_s** funzione crea un nome file univoco modificando il *nameTemplate* argomento, in modo che dopo la chiamata, il *nameTemplate* puntatore punta a una stringa contenente il nuovo nome di file. **mktemp_s** gestisce automaticamente gli argomenti stringa di caratteri multibyte come appropriato, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente in uso dal sistema in fase di esecuzione. **wmktemp_s** è una versione a caratteri wide di **mktemp_s**; l'argomento della **wmktemp_s** è una stringa di caratteri "wide". **wmktemp_s** e **mktemp_s** hanno lo stesso comportamento in caso contrario, con la differenza che **wmktemp_s** non gestisce le stringhe di caratteri multibyte.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tmktemp_s**|**_mktemp_s**|**_mktemp_s**|**_wmktemp_s**|

Il *nameTemplate* argomento ha il formato **baseXXXXXX**, dove *base* è la parte del nome del nuovo file che viene fornito e ogni X è un segnaposto per un carattere fornito da **mktemp_s**. Ogni carattere del segnaposto nella *nameTemplate* deve essere una x maiuscola. **mktemp_s** mantiene *base* e sostituisce la prima X finale con un carattere alfabetico. **mktemp_s** sostituisce il carattere finale seguente x con un valore di cinque cifre; questo valore è un numero univoco che identifica il processo chiamante oppure nei programmi multithreading, il thread chiamante.

Ogni chiamata completata a **mktemp_s** modificato *nameTemplate*. In ogni chiamata successiva dallo stesso processo o thread con lo stesso *nameTemplate* argomento **mktemp_s** controlli per i nomi di file che corrispondono ai nomi restituiti da **mktemp_s** nelle chiamate precedenti. Se non esiste alcun file per un determinato nome, **mktemp_s** restituisce tale nome. Se sono presenti file per tutti i nomi, in precedenza restituiti **mktemp_s** crea un nuovo nome sostituendo il carattere alfabetico usato nel nome restituito in precedenza con la successiva lettera minuscola disponibile, in ordine dalla 'a' a 'z'. Ad esempio, se *base* è:

> **fn**

e il valore di cinque cifre fornito da **mktemp_s** è 12345, il primo nome restituito è:

> **fna12345**

Se questo nome viene usato per creare il file FNA12345 e questo file esiste ancora, il successivo nome restituito in una chiamata dallo stesso processo o thread con lo stesso *base* per *nameTemplate* è:

> **fnb12345**

Se FNA12345 non esiste, il successivo nome restituito è:

> **fna12345**

**mktemp_s** può creare al massimo 26 nomi di file univoci per qualsiasi combinazione specificata di *base* e *nameTemplate* valori. Pertanto, FNZ12345 è l'ultimo nome file univoco **mktemp_s** possono creare per il *base* e *nameTemplate* valori usati in questo esempio.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mktemp_s**|\<io.h>|
|**_wmktemp_s**|\<io.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```cpp
// crt_mktemp_s.cpp
/* The program uses _mktemp to create
* five unique filenames. It opens each filename
* to ensure that the next name is unique.
*/

#include <io.h>
#include <string.h>
#include <stdio.h>

char *fnTemplate = "fnXXXXXX";
char names[5][9];

int main()
{
   int i, err, sizeInChars;
   FILE *fp;

   for( i = 0; i < 5; i++ )
   {
      strcpy_s( names[i], sizeof(names[i]), fnTemplate );
      /* Get the size of the string and add one for the null terminator.*/
      sizeInChars = strnlen(names[i], 9) + 1;
      /* Attempt to find a unique filename: */
      err = _mktemp_s( names[i], sizeInChars );
      if( err != 0 )
         printf( "Problem creating the template" );
      else
      {
         if( fopen_s( &fp, names[i], "w" ) == 0 )
            printf( "Unique filename is %s\n", names[i] );
         else
            printf( "Cannot open %s\n", names[i] );
         fclose( fp );
      }
   }

   return 0;
}
```

### <a name="sample-output"></a>Esempio di output

```Output
Unique filename is fna03188
Unique filename is fnb03188
Unique filename is fnc03188
Unique filename is fnd03188
Unique filename is fne03188
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_getpid](getpid.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
[tmpfile_s](tmpfile-s.md)<br/>
