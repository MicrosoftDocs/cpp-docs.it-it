---
title: _mktemp, _wmktemp
ms.date: 11/04/2016
api_name:
- _wmktemp
- _mktemp
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
- _tmktemp
- wmktemp
- tmktemp
- _wmktemp
- _mktemp
helpviewer_keywords:
- _wmktemp function
- _mktemp function
- files [C++], temporary
- tmktemp function
- _tmktemp function
- wmktemp function
- mktemp function
- temporary files [C++]
ms.assetid: 055eb539-a8c2-4a7d-be54-f5b6d1eb5c85
ms.openlocfilehash: 7cfca04d4f0df2673a2221f00a1263f73e8516ec
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70951574"
---
# <a name="_mktemp-_wmktemp"></a>_mktemp, _wmktemp

Crea un nome di file univoco. Sono disponibili versioni più sicure di queste funzioni. Vedere [_mktemp_s, _wmktemp_s](mktemp-s-wmktemp-s.md).

## <a name="syntax"></a>Sintassi

```C
char *_mktemp(
   char *nameTemplate
);
wchar_t *_wmktemp(
   wchar_t *nameTemplate
);
template <size_t size>
char *_mktemp(
   char (&nameTemplate)[size]
); // C++ only
template <size_t size>
wchar_t *_wmktemp(
   wchar_t (&nameTemplate)[size]
); // C++ only
```

### <a name="parameters"></a>Parametri

*nameTemplate*<br/>
Modello di nome di file.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce un puntatore al nameTemplate modificato. La funzione restituisce **null** se *nameTemplate* non è in formato corretto o se non è possibile creare più nomi univoci dal nameTemplate specificato.

## <a name="remarks"></a>Note

La funzione **_mktemp** crea un nome di file univoco modificando l'argomento *nameTemplate* . **_mktemp** gestisce automaticamente gli argomenti della stringa di caratteri multibyte in base alle esigenze, riconoscendo le sequenze di caratteri multibyte in base alla tabella codici multibyte attualmente utilizzata dal sistema di Runtime. **_wmktemp** è una versione a caratteri wide di **_mktemp**; l'argomento e il valore restituito di **_wmktemp** sono stringhe a caratteri wide. **_wmktemp** e **_mktemp** si comportano in modo identico, ad eccezione del fatto che **_wmktemp** non gestisce le stringhe di caratteri multibyte.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tmktemp**|**_mktemp**|**_mktemp**|**_wmktemp**|

L'argomento *nameTemplate* ha il formato xxxxxx *base*, dove *base* è la parte del nuovo nome file specificato e ogni X è un segnaposto per un carattere fornito da **_mktemp**. Ogni carattere segnaposto in *nameTemplate* deve essere una x maiuscola. **_mktemp** conserva la *base* e sostituisce la prima x finale con un carattere alfabetico. **_mktemp** sostituisce le seguenti X finali con un valore di cinque cifre; Questo valore è un numero univoco che identifica il processo chiamante o nei programmi multithread, il thread chiamante.

Ogni chiamata riuscita a **_mktemp** modifica *nameTemplate*. In ogni chiamata successiva dallo stesso processo o thread con lo stesso argomento *nameTemplate* , **_mktemp** controlla i nomi file che corrispondono ai nomi restituiti da **_mktemp** nelle chiamate precedenti. Se non esiste alcun file per un nome specificato, **_mktemp** restituisce tale nome. Se sono presenti file per tutti i nomi restituiti in precedenza, **_mktemp** crea un nuovo nome sostituendo il carattere alfabetico usato nel nome restituito in precedenza con la lettera minuscola disponibile successiva, in ordine, da "a" a "z". Ad esempio, se *base* è:

> **fn**

e il valore a cinque cifre fornito da **_mktemp** è 12345, il primo nome restituito è:

> **fna12345**

Se questo nome viene usato per creare il file FNA12345 e il file esiste ancora, il nome successivo restituito per una chiamata dallo stesso processo o thread con lo stesso valore di *base* per *nameTemplate* è:

> **fnb12345**

Se FNA12345 non esiste, il successivo nome restituito è:

> **fna12345**

**_mktemp** può creare un massimo di 26 nomi file univoci per qualsiasi combinazione specificata di valori di *base* e *nameTemplate* . Pertanto, FNZ12345 è l'ultimo nome file univoco **_mktemp** può creare per i valori di *base* e *nameTemplate* usati in questo esempio.

In caso di errore, **errno** è impostato. Se *nameTemplate* ha un formato non valido, ad esempio meno di 6 X, **errno** viene impostato su **EINVAL**. Se **_mktemp** non è in grado di creare un nome univoco perché tutti i 26 nomi file possibili esistono già, **_mktemp** imposta nameTemplate su una stringa vuota e restituisce **EEXIST**.

In C++ queste funzioni presentano overload di modello che richiamano le relative controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mktemp**|\<io.h>|
|**_wmktemp**|\<io.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_mktemp.c
// compile with: /W3
/* The program uses _mktemp to create
* unique filenames. It opens each filename
* to ensure that the next name is unique.
*/

#include <io.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

char *template = "fnXXXXXX";
char *result;
char names[27][9];

int main( void )
{
   int i;
   FILE *fp;

   for( i = 0; i < 27; i++ )
   {
      strcpy_s( names[i], sizeof( names[i] ), template );
      /* Attempt to find a unique filename: */
      result = _mktemp( names[i] );  // C4996
      // Note: _mktemp is deprecated; consider using _mktemp_s instead
      if( result == NULL )
      {
         printf( "Problem creating the template\n" );
         if (errno == EINVAL)
         {
             printf( "Bad parameter\n");
         }
         else if (errno == EEXIST)
         {
             printf( "Out of unique filenames\n");
         }
      }
      else
      {
         fopen_s( &fp, result, "w" );
         if( fp != NULL )
            printf( "Unique filename is %s\n", result );
         else
            printf( "Cannot open %s\n", result );
         fclose( fp );
      }
   }
}
```

```Output
Unique filename is fna03912
Unique filename is fnb03912
Unique filename is fnc03912
Unique filename is fnd03912
Unique filename is fne03912
Unique filename is fnf03912
Unique filename is fng03912
Unique filename is fnh03912
Unique filename is fni03912
Unique filename is fnj03912
Unique filename is fnk03912
Unique filename is fnl03912
Unique filename is fnm03912
Unique filename is fnn03912
Unique filename is fno03912
Unique filename is fnp03912
Unique filename is fnq03912
Unique filename is fnr03912
Unique filename is fns03912
Unique filename is fnt03912
Unique filename is fnu03912
Unique filename is fnv03912
Unique filename is fnw03912
Unique filename is fnx03912
Unique filename is fny03912
Unique filename is fnz03912
Problem creating the template.
Out of unique filenames.
```

## <a name="see-also"></a>Vedere anche

[Gestione di file](../../c-runtime-library/file-handling.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_getpid](getpid.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_setmbcp](setmbcp.md)<br/>
[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
[tmpfile](tmpfile.md)<br/>
