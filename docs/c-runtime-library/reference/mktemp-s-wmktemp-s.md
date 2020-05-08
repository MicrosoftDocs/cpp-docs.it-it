---
title: _mktemp_s, _wmktemp_s
ms.date: 4/2/2020
api_name:
- _mktemp_s
- _wmktemp_s
- _o__mktemp_s
- _o__wmktemp_s
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
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 7834049fe8d28f7294976ac29a3daa663a06cff6
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82919136"
---
# <a name="_mktemp_s-_wmktemp_s"></a>_mktemp_s, _wmktemp_s

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
Dimensione del buffer in caratteri a byte singolo in **_mktemp_s**; caratteri wide in **_wmktemp_s**, incluso il terminatore null.

## <a name="return-value"></a>Valore restituito

Entrambe queste funzioni restituiscono zero in caso di esito positivo e un codice di errore in caso di esito negativo.

### <a name="error-conditions"></a>Condizioni di errore

|*nameTemplate*|*sizeInChars*|Valore restituito|Nuovo valore in *nameTemplate*|
|----------------|-------------------|----------------------|-------------------------------|
|**NULL**|any|**EINVAL**|**NULL**|
|Formato non corretto (vedere la sezione Osservazioni per il formato corretto)|any|**EINVAL**|stringa vuota|
|any|<= numero di X|**EINVAL**|stringa vuota|

Se si verifica una delle condizioni di errore precedenti, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **errno** viene impostato su **EINVAL** e le funzioni restituiscono **EINVAL**.

## <a name="remarks"></a>Osservazioni

La funzione **_mktemp_s** crea un nome file univoco modificando l'argomento *nameTemplate* , in modo che, dopo la chiamata, il puntatore *nameTemplate* punti a una stringa contenente il nuovo nome file. **_mktemp_s** gestisce automaticamente gli argomenti della stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente utilizzata dal sistema di Runtime. **_wmktemp_s** è una versione a caratteri wide di **_mktemp_s**; l'argomento di **_wmktemp_s** è una stringa di caratteri wide. **_wmktemp_s** e **_mktemp_s** si comportano in modo identico, ad eccezione del fatto che **_wmktemp_s** non gestisce le stringhe di caratteri multibyte.

Le versioni della libreria di debug di queste funzioni riempiono innanzitutto il buffer con 0xFE. Per disabilitare questo comportamento, usare [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tmktemp_s**|**_mktemp_s**|**_mktemp_s**|**_wmktemp_s**|

Il formato dell'argomento *nameTemplate* è **baseXXXXXX**, dove *base* è la parte del nuovo nome file specificato e ogni X è un segnaposto per un carattere fornito da **_mktemp_s**. Ogni carattere segnaposto in *nameTemplate* deve essere una x maiuscola. **_mktemp_s** conserva la *base* e sostituisce la prima x finale con un carattere alfabetico. **_mktemp_s** sostituisce le seguenti X finali con un valore di cinque cifre; Questo valore è un numero univoco che identifica il processo chiamante o nei programmi multithread, il thread chiamante.

Ogni chiamata riuscita a **_mktemp_s** modifica *nameTemplate*. In ogni chiamata successiva dallo stesso processo o thread con lo stesso argomento *nameTemplate* , **_mktemp_s** controlla i nomi di file che corrispondono ai nomi restituiti da **_mktemp_s** nelle chiamate precedenti. Se non esiste alcun file per un determinato nome, **_mktemp_s** restituisce tale nome. Se sono presenti file per tutti i nomi restituiti in precedenza, **_mktemp_s** crea un nuovo nome sostituendo il carattere alfabetico utilizzato nel nome restituito in precedenza con la lettera minuscola disponibile successiva, in ordine, da "a" a "z". Ad esempio, se *base* è:

> **FN**

e il valore a cinque cifre fornito da **_mktemp_s** è 12345, il primo nome restituito è:

> **FNA12345**

Se questo nome viene usato per creare il file FNA12345 e il file esiste ancora, il nome successivo restituito per una chiamata dallo stesso processo o thread con lo stesso valore di *base* per *nameTemplate* è:

> **fnb12345**

Se FNA12345 non esiste, il successivo nome restituito è:

> **FNA12345**

**_mktemp_s** possibile creare un massimo di 26 nomi file univoci per qualsiasi combinazione specificata di valori di *base* e *nameTemplate* . FNZ12345 è quindi l'ultimo nome file univoco **_mktemp_s** possibile creare per i valori di *base* e *nameTemplate* usati in questo esempio.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Overload di modelli sicuri](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mktemp_s**|\<io.h>|
|**_wmktemp_s**|\<io.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

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

### <a name="sample-output"></a>Output di esempio

```Output
Unique filename is fna03188
Unique filename is fnb03188
Unique filename is fnc03188
Unique filename is fnd03188
Unique filename is fne03188
```

## <a name="see-also"></a>Vedere anche

[Gestione dei file](../../c-runtime-library/file-handling.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_getpid](getpid.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
[tmpfile_s](tmpfile-s.md)<br/>
