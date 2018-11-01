---
title: _mbsnbicmp, _mbsnbicmp_l
ms.date: 11/04/2016
apiname:
- _mbsnbicmp_l
- _mbsnbicmp
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
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _strnicmp
- _wcsnicmp_l
- _mbsnbicmp
- mbsnbicmp
- mbsnbicmp_l
- _tcsnicmp
- _strnicmp_l
- _tcsnicmp_l
- _wcsnicmp
- _mbsnbicmp_l
helpviewer_keywords:
- _tcsnicmp_l function
- _strnicmp function
- mbsnbicmp_l function
- _wcsnicmp_l function
- _mbsnbicmp function
- _mbsnbicmp_l function
- _tcsnicmp function
- _strnicmp_l function
- mbsnbicmp function
- _wcsnicmp function
ms.assetid: ddb44974-8b0c-42f0-90d0-56c9350bae0c
ms.openlocfilehash: 059d0781e465f6491f27fd634bbc4479104bc12f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50581896"
---
# <a name="mbsnbicmp-mbsnbicmpl"></a>_mbsnbicmp, _mbsnbicmp_l

Confronta **n** byte di caratteri multibyte due stringhe e ignorare maiuscole e minuscole.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _mbsnbicmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
```

### <a name="parameters"></a>Parametri

*String1*, *stringa2*<br/>
Stringhe che terminano con Null da confrontare.

*count*<br/>
Numero di byte da confrontare.

## <a name="return-value"></a>Valore restituito

Il valore restituito indica la relazione ordinale tra le sottostringhe.

|Valore restituito|Descrizione|
|------------------|-----------------|
|< 0|*String1* sottostringa minore *string2* sottostringa.|
|0|*String1* identica alla sottostringa *string2* sottostringa.|
|> 0|*String1* sottostringa maggiore *string2* sottostringa.|

In caso di errore, **mbsnbicmp** restituisce **_NLSCMPERROR**, definito in String. h e Mbstring. h.

## <a name="remarks"></a>Note

Il **mbsnbicmp** funzione esegue un confronto ordinale al massimo i primi *conteggio* byte del *string1* e *string2*. Il confronto viene eseguito convertendo ogni carattere in minuscolo; [mbsnbcmp](mbsnbcmp-mbsnbcmp-l.md) è una versione di distinzione maiuscole/minuscole **mbsnbicmp**. Il confronto termina se viene raggiunto un carattere di terminazione null in entrambe le stringhe prima *conteggio* i caratteri vengono confrontati. Se le stringhe sono uguali quando un carattere di terminazione null viene raggiunta in entrambe le stringhe prima *conteggio* i caratteri vengono confrontati, la stringa più corta sarà minore.

**mbsnbicmp** è simile a [mbsnbcmp](mbsnbcmp-mbsnbcmp-l.md), ad eccezione del fatto che confronta le stringhe fino a *conteggio* byte anziché per caratteri.

Due stringhe che contengono caratteri compresi tra "Z" e "a" nella tabella ASCII ('[', '\\', ']', '^', '_' e '\`') vengono confrontate in modo diverso, a seconda della combinazione di maiuscole e minuscole. Ad esempio le due stringhe "ABCDE" e "ABCD ^" confrontate in un modo se il confronto è in minuscolo ("abcde" > "abcd ^") e l'altro modo ("ABCDE" < "ABCD ^") se è in maiuscolo.

**mbsnbicmp** riconosce le sequenze di caratteri multibyte in base al [tabella codici multibyte](../../c-runtime-library/code-pages.md) attualmente in uso. Non viene influenzata dalle impostazioni locali correnti.

Se uno dei due *string1* o *string2* è un puntatore null **mbsnbicmp** richiama il gestore di parametri non validi, come descritto in [convalidadeiparametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce **_NLSCMPERROR** e imposta **errno** al **EINVAL**.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**tcsnicmp**|**_strnicmp**|**_mbsnbicmp**|**_wcsnicmp**|
|**tcsnicmp_l**|**_strnicmp_l**|**_mbsnbicmp_l**|**_wcsnicmp_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_mbsnbicmp**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md).

## <a name="see-also"></a>Vedere anche

[Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)<br/>
