---
title: strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l
ms.date: 4/2/2020
api_name:
- strxfrm
- _wcsxfrm_l
- _strxfrm_l
- wcsxfrm
- _o__strxfrm_l
- _o__wcsxfrm_l
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
- api-ms-win-crt-string-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- strxfrm
- _tcsxfrm
- wcsxfrm
helpviewer_keywords:
- strxfrm_l function
- _tcsxfrm function
- _strxfrm_l function
- strxfrm function
- wcsxfrm_l function
- wcsxfrm function
- string comparison [C++], transforming strings
- tcsxfrm function
- strings [C++], comparing locale
- _wcsxfrm_l function
ms.assetid: 6ba8e1f6-4484-49aa-83b8-bc2373187d9e
ms.openlocfilehash: aabe7e7c2e44f558b936e0fd4c6fa4a85dc582f5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81362977"
---
# <a name="strxfrm-wcsxfrm-_strxfrm_l-_wcsxfrm_l"></a>strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l

Trasformare una stringa basata sulle informazioni specifiche delle impostazioni locali.

## <a name="syntax"></a>Sintassi

```C
size_t strxfrm(
   char *strDest,
   const char *strSource,
   size_t count
);
size_t wcsxfrm(
   wchar_t *strDest,
   const wchar_t *strSource,
   size_t count
);
size_t _strxfrm_l(
   char *strDest,
   const char *strSource,
   size_t count,
   _locale_t locale
);
size_t wcsxfrm_l(
   wchar_t *strDest,
   const wchar_t *strSource,
   size_t count,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*strDest*<br/>
Stringa di destinazione.

*Strsource*<br/>
Stringa di origine.

*count*<br/>
Numero massimo di caratteri da inserire in *strDest*.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce la lunghezza della stringa trasformata, senza contare il carattere di terminazione null. Se il valore restituito è maggiore o uguale a *count*, il contenuto di *strDest* è imprevedibile. In caso di errore, ogni funzione imposta **errno** e restituisce **INT_MAX**. Per un carattere non valido, **errno** è impostato su **EILSEQ**.

## <a name="remarks"></a>Osservazioni

La funzione **strxfrm** trasforma la stringa a cui *punta strSource* in una nuova forma fascicolata archiviata in *strDest*. Non più di *count* caratteri, incluso il carattere null, vengono trasformati e inseriti nella stringa risultante. La trasformazione viene effettuata utilizzando l'impostazione della categoria **LC_COLLATE** delle impostazioni locali. Per ulteriori informazioni su **LC_COLLATE**, vedere [setlocale](setlocale-wsetlocale.md). **strxfrm** utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; **_strxfrm_l** è identica, ad eccezione del fatto che utilizza le impostazioni locali passate anziché le impostazioni locali correnti. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Dopo la trasformazione, una chiamata a **strcmp** con le due stringhe trasformate restituisce risultati identici a quelli di una chiamata a **strcoll** applicata alle due stringhe originali. Come per **strcoll** e **stricoll**, **strxfrm** gestisce automaticamente le stringhe di caratteri multibyte in base alle esigenze.

**wcsxfrm** è una versione a caratteri wide di **strxfrm**; gli argomenti stringa di **wcsxfrm** sono puntatori a caratteri wide. Per **wcsxfrm**, dopo la trasformazione di stringa, una chiamata a **wcscmp** con le due stringhe trasformate produce risultati identici a quelli di una chiamata a **wcscoll** applicata alle due stringhe originali. **wcsxfrm** e **strxfrm** si comportano in modo identico in caso contrario. **wcsxfrm** utilizza le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; **_wcsxfrm_l** utilizza le impostazioni locali passate anziché le impostazioni locali correnti.

Queste funzioni convalidano i relativi parametri. Se *strSource* è un puntatore null o *strDest* è un puntatore **NULL** (a meno che count non sia zero) o se *count* è maggiore di **INT_MAX**, viene richiamato il gestore di parametri non validi, come descritto in Convalida [dei parametri](../../c-runtime-library/parameter-validation.md) . Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono **INT_MAX**.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsxfrm**|**strxfrm**|**strxfrm**|**wcsxfrm**|
|**_tcsxfrm_l**|**_strxfrm_l**|**_strxfrm_l**|**_wcsxfrm_l**|

Nelle impostazioni locali "C", l'ordine dei caratteri nel set di caratteri (set di caratteri ASCII) è lo stesso dell'ordine lessicografico dei caratteri. Tuttavia, in altre impostazioni locali, l'ordine dei caratteri nel set di caratteri può differire dall'ordine lessicografico dei caratteri. Ad esempio, in alcune impostazioni locali europee, il carattere 'a' (valore 0x61) precede il carattere '&\#x00E4;' (valore 0xE4) nel set di caratteri, ma il carattere 'ä' precede lessicograficamente il carattere 'a'.

Nelle impostazioni locali per cui il set di caratteri e l'ordine lessicografico dei caratteri differiscono, utilizzare **strxfrm** sulle stringhe originali e quindi **strcmp** sulle stringhe risultanti per produrre un confronto lessicografico tra stringhe in base all'impostazione della categoria **LC_COLLATE** delle impostazioni locali correnti. Pertanto, per confrontare due stringhe lessicograficamente nelle impostazioni locali precedenti, utilizzare **strxfrm** sulle stringhe originali, quindi **strcmp** sulle stringhe risultanti. In alternativa, è possibile utilizzare **strcoll** anziché **strcmp** sulle stringhe originali.

**strxfrm** è fondamentalmente un wrapper intorno [a LCMapString](/windows/win32/api/winnls/nf-winnls-lcmapstringw) con **LCMAP_SORTKEY**.

Il valore dell'espressione seguente è la dimensione della matrice necessaria per contenere la trasformazione **strxfrm** della stringa di origine:

`1 + strxfrm( NULL, string, 0 )`

Solo nelle impostazioni locali "C", **strxfrm** è equivalente a quanto segue:

```C
strncpy( _string1, _string2, _count );
return( strlen( _string1 ) );
```

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strxfrm**|\<string.h>|
|**wcsxfrm**|\<string.h> o \<wchar.h>|
|**_strxfrm_l**|\<string.h>|
|**_wcsxfrm_l**|\<string.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Manipolazione delle stringheString Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Funzioni strcoll](../../c-runtime-library/strcoll-functions.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
