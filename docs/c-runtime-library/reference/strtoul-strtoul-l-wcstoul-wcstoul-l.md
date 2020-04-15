---
title: strtoul, _strtoul_l, wcstoul, _wcstoul_l
ms.date: 4/2/2020
api_name:
- _wcstoul_l
- _strtoul_l
- strtoul
- wcstoul
- _o__strtoul_l
- _o__wcstoul_l
- _o_strtoul
- _o_wcstoul
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
- strtoul
- _tcstoul
- wcstoul
helpviewer_keywords:
- _wcstoul_l function
- _tcstoul function
- _strtoul_l function
- string conversion, to integers
- wcstoul function
- strtoul function
- wcstoul_l function
- strtoul_l function
- tcstoul function
ms.assetid: 38f2afe8-8178-4e0b-8bbe-d5c6ad66e3ab
ms.openlocfilehash: 60ae432fb11c5a29da2c4830c2a85305c6eaa46c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365621"
---
# <a name="strtoul-_strtoul_l-wcstoul-_wcstoul_l"></a>strtoul, _strtoul_l, wcstoul, _wcstoul_l

Converte le stringhe in un valore long integer senza segno.

## <a name="syntax"></a>Sintassi

```C
unsigned long strtoul(
   const char *strSource,
   char **endptr,
   int base
);
unsigned long _strtoul_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
unsigned long wcstoul(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
unsigned long _wcstoul_l(
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

**strtoul** restituisce il valore convertito, se presente, o **ULONG_MAX** in caso di overflow. **strtoul** restituisce 0 se non è possibile eseguire alcuna conversione. **wcstoul** restituisce i valori analogamente a **strtoul**. Per entrambe le funzioni, **errno** è impostato su **ERANGE** se si verifica un overflow o un underflow.

Per ulteriori informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr.](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)

## <a name="remarks"></a>Osservazioni

Ognuna di queste funzioni converte la stringa di input *strSource* in **un unsigned** **long**.

**strtoul** interrompe la lettura della stringa *strSource* al primo carattere che non è in grado di riconoscere come parte di un numero. Può trattarsi del carattere di terminazione null oppure del primo carattere numerico maggiore o uguale a *base*. L'impostazione di **categoria LC_NUMERIC** delle impostazioni locali determina il riconoscimento del carattere radix in *strSource*; Per ulteriori informazioni, vedere [setlocale](setlocale-wsetlocale.md). **strtoul** e **wcstoul** utilizzano le impostazioni locali correnti; **_strtoul_l** e **_wcstoul_l** sono identici, ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **NULL**, un puntatore al carattere che ha interrotto l'analisi viene memorizzato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**wcstoul** è una versione a caratteri wide di **strtoul**; il relativo argomento *strSource* è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoul**|**strtoul**|**strtoul**|**wcstoul**|
|**_tcstoul_l**|**strtoul_l**|**_strtoul_l**|**_wcstoul_l**|

**strtoul** prevede che *strSource* punti a una stringa del formato seguente:

> [*spazio vuoto*] **-**[&#124;]**+** [**0** **[x** &#124; **X]]** [*cifre* &#124; *lettere*]

Uno *spazio vuoto* può essere costituito da spazi e caratteri di tabulazione, che vengono ignorati. *cifre* sono una o più cifre decimali. *lettere* sono una o più lettere tra 'a' e 'z' (o da 'A' a '''). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene utilizzato come base del numero. Se *base* è 0, i caratteri iniziali della stringa a cui *punta strSource* vengono utilizzati per determinare la base. Se il primo carattere è 0 e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un Integer ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se *base* è 0 e il primo carattere analizzato è '0', si presuppone un numero intero ottale e un carattere '8' o '9' interromperà la scansione. **strtoul** consente un**+** prefisso**-** di segno più ( ) o meno ( ); prefisso di segno; un segno meno iniziale indica che il valore restituito è negato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtoul**|\<stdlib.h>|
|**wcstoul**|\<stdlib.h> o \<wchar.h>|
|**_strtoul_l**|\<stdlib.h>|
|**_wcstoul_l**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [strtod](strtod-strtod-l-wcstod-wcstod-l.md).

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
