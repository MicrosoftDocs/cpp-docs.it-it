---
description: 'Altre informazioni su: strtof, _strtof_l, wcstof, _wcstof_l'
title: strtof, _strtof_l, wcstof, _wcstof_l
ms.date: 4/2/2020
api_name:
- _strtof_l
- wcstof
- strtof
- _wcstof_l
- _o__strtof_l
- _o__wcstof_l
- _o_strtof
- _o_wcstof
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
- api-ms-win-crt-convert-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _tcstof
- _tcstof_l
- stdlib/strtof
- strtof
- stdlib/_strtof_l
- _strtof_l
- corecrt_wstdlib/wcstof
- wcstof
- corecrt_wstdlib/_wcstof_l
- _wcstof_l
helpviewer_keywords:
- _strtof_l function
- _tcstof function
- _wcstof_l function
- wcstof function
- _tcstof_l function
- strtof function
ms.assetid: 52221b46-876d-4fcc-afb1-97512c17a43b
ms.openlocfilehash: 7a73df80fefb8d86431027650be2ecd236135dfd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322420"
---
# <a name="strtof-_strtof_l-wcstof-_wcstof_l"></a>strtof, _strtof_l, wcstof, _wcstof_l

Converte le stringhe in un valore a virgola mobile e precisione singola.

## <a name="syntax"></a>Sintassi

```C
float strtof(
   const char *strSource,
   char **endptr
);
float _strtof_l(
   const char *strSource,
   char **endptr,
   _locale_t locale
);
float wcstof(
   const wchar_t *strSource,
   wchar_t **endptr
);
float wcstof_l(
   const wchar_t *strSource,
   wchar_t **endptr,
   _locale_t locale
);
```

## <a name="parameters"></a>Parametri

*strSource*<br/>
Stringa con terminazione Null da convertire.

*endptr*<br/>
Puntatore al carattere che interrompe la lettura.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strtof** restituisce il valore del numero a virgola mobile, tranne quando la rappresentazione potrebbe causare un overflow, nel qual caso la funzione restituisce +/-**HUGE_VALF**. Il segno di **HUGE_VALF** corrisponde al segno del valore che non può essere rappresentato. **strtof** restituisce 0 se non è possibile eseguire alcuna conversione o si verifica un underflow.

**wcstof** restituisce i valori in modo analogo a **strtof**. Per entrambe le funzioni, **errno** viene impostato su **ERANGE** se si verifica un overflow o un underflow e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Ogni funzione converte la stringa di input *strSource* in un oggetto **`float`** . La funzione **strtof** converte *strSource* in un valore a precisione singola. **strtof** interrompe la lettura della stringa *strSource* al primo carattere che non riconosce come parte di un numero. Questo può essere il carattere Null di terminazione. **wcstof** è una versione a caratteri wide di **strtof**; il relativo argomento *strSource* è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstof**|**strtof**|**strtof**|**wcstof**|
|**_tcstof_l**|**_strtof_l**|**_strtof_l**|**_wcstof_l**|

L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali correnti determina il riconoscimento del carattere radice in *strSource*; Per ulteriori informazioni, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md). Le funzioni che non hanno il suffisso **_L** usano le impostazioni locali correnti; quelle con il suffisso sono identiche, ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **null**, un puntatore al carattere che ha interrotto l'analisi viene archiviato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**strtof** prevede che *strSource* faccia riferimento a una stringa nel formato seguente:

[*spazi vuoti*] [*segno*] [*cifre*] [__.__ *cifre*] [{**e** &#124; **e**} [*Sign*] *digits*]

Uno spazio *vuoto* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati; il *segno* è più ( **+** ) o meno ( **-** ) e le *cifre* sono costituite da una o più cifre decimali. Se non viene visualizzata alcuna cifra prima del carattere di base, deve essercene almeno una dopo il carattere di base. Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**e** o **e**) e un intero con segno facoltativo. Se non viene visualizzata una parte esponente né un carattere di base, si presuppone che l'ultima cifra nella stringa sia seguita da un carattere di base. Il primo carattere che non corrisponde a questo formato interrompe la lettura.

Le versioni UCRT di queste funzioni non supportano la conversione di lettere esponenti di tipo FORTRAN (**d** o **d**). Questa estensione non standard è supportata dalle versioni precedenti della libreria CRT e può rappresentare una modifica con impatto significativo per il codice esistente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtof**, **_strtof_l**|C: \<stdlib.h> C++: &lt; cstdlib> o \<stdlib.h>|
|**wcstof**, **_wcstof_l**|C: \<stdlib.h> o \<wchar.h> C++: &lt; cstdlib> \<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strtof.c
// This program uses strtof to convert a
// string to a single-precision value.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char *string;
   char *stopstring;
   float x;

   string = "3.14159This stopped it";
   x = strtof(string, &stopstring);
   printf("string = %s\n", string);
   printf("   strtof = %f\n", x);
   printf("   Stopped scan at: %s\n\n", stopstring);
}
```

```Output
string = 3.14159This stopped it
   strtof = 3.141590
   Stopped scan at: This stopped it
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Interpretazione delle sequenze di Multibyte-Character](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[localeconv](localeconv.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
