---
title: _strtoui64, _wcstoui64, _strtoui64_l, _wcstoui64_l
ms.date: 4/2/2020
api_name:
- _strtoui64
- _strtoui64_l
- _wcstoui64
- _wcstoui64_l
- _o__strtoui64
- _o__strtoui64_l
- _o__wcstoui64
- _o__wcstoui64_l
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
- ntoskrnl.exe
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _wcstoui64_l
- strtoui64_l
- wcstoui64
- _wcstoui64
- _strtoui64_l
- strtoui64
- _strtoui64
- wcstoui64_l
helpviewer_keywords:
- _strtoui64_l function
- _wcstoui64_l function
- string conversion, to integers
- wcstoui64_l function
- _strtoui64 function
- _wcstoui64 function
- wcstoui64 function
- strtoui64_l function
- strtoui64 function
ms.assetid: 7fcb537e-4554-4ceb-a5b6-bc09244e72ef
ms.openlocfilehash: f3c5631a34c35ed5f5b74e15dfc4225224215b89
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365470"
---
# <a name="_strtoui64-_wcstoui64-_strtoui64_l-_wcstoui64_l"></a>_strtoui64, _wcstoui64, _strtoui64_l, _wcstoui64_l

Convertire una stringa in un valore **di __int64.**

## <a name="syntax"></a>Sintassi

```C
unsigned __int64 _strtoui64(
   const char *strSource,
   char **endptr,
   int base
);
unsigned __int64 _wcstoui64(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
unsigned __int64 _strtoui64_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
unsigned __int64 _wcstoui64(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*Strsource*<br/>
Stringa con terminazione Null da convertire.

*endptr (in base alla data in*<br/>
Puntatore al carattere che interrompe la lettura.

*base*<br/>
Base numerica da usare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_strtoui64** restituisce il valore rappresentato nella stringa *strSource*, tranne quando la rappresentazione causerebbe un overflow, nel qual caso restituisce **_UI64_MAX**. **_strtoui64** restituisce 0 se non è possibile eseguire alcuna conversione.

**_UI64_MAX** è definita in LIMITI. H.

Se *strSource* è **NULL** o la *base* è diversa da zero e minore di 2 o maggiore di 36, **errno** è impostato su **EINVAL**.

Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_strtoui64** converte *strSource* in un **oggetto __int64** **unsigned** . **_wcstoui64** è una versione a caratteri wide di **_strtoui64**; il relativo argomento *strSource* è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.

Entrambe le funzioni interrompono la lettura della stringa *strSource* al primo carattere che non possono riconoscere come parte di un numero. Può trattarsi del carattere di terminazione null oppure del primo carattere numerico maggiore o uguale a *base*.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoui64**|**_strtoui64**|**_strtoui64**|**_wstrtoui64**|
|**_tcstoui64_l**|**_strtoui64_l**|**_strtoui64_l**|**_wstrtoui64_l**|

L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali correnti determina il riconoscimento del carattere di radice in *strSource*; Per ulteriori informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le funzioni senza il suffisso _l utilizzano le impostazioni locali correnti; **_strtoui64_l** e **_wcstoui64_l** sono identici alle funzioni corrispondenti senza il **suffisso _l,** ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **NULL**, un puntatore al carattere che ha interrotto l'analisi viene memorizzato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**_strtoui64** prevede che *strSource* punti a una stringa del formato seguente:

> [*spazio vuoto*] **-**[&#124;]**+** [**0** **[x** &#124; **X]]** [*cifre* &#124; *lettere*]

Uno *spazio vuoto* può essere costituito da spazi e caratteri di tabulazione, che vengono ignorati. *cifre* sono una o più cifre decimali. *lettere* sono una o più lettere tra 'a' e 'z' (o da 'A' a '''). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene utilizzato come base del numero. Se *base* è 0, i caratteri iniziali della stringa a cui *punta strSource* vengono utilizzati per determinare la base. Se il primo carattere è 0 e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un Integer ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se *base* è 0 e il primo carattere analizzato è '0', si presuppone un numero intero ottale e un carattere '8' o '9' interromperà la scansione.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strtoui64**|\<stdlib.h>|
|**_wcstoui64**|\<stdlib.h> o \<wchar.h>|
|**_strtoui64_l**|\<stdlib.h>|
|**_wcstoui64_l**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strtoui64.c
#include <stdio.h>

unsigned __int64 atoui64(const char *szUnsignedInt) {
   return _strtoui64(szUnsignedInt, NULL, 10);
}

int main() {
   unsigned __int64 u = atoui64("18446744073709551615");
   printf( "u = %I64u\n", u );
}
```

```Output
u = 18446744073709551615
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
