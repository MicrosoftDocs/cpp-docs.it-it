---
title: _setmbcp
ms.date: 4/2/2020
api_name:
- _setmbcp
- _o__setmbcp
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
- api-ms-win-crt-locale-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _setmbcp
- setmbcp
helpviewer_keywords:
- setmbcp function
- _setmbcp function
- multibyte code pages
ms.assetid: cfde53b5-0b73-4684-81b1-a8d3aafc85de
ms.openlocfilehash: 18712661b2bda1eaaf0c583b922ad73a781b4abc
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918821"
---
# <a name="_setmbcp"></a>_setmbcp

Imposta una nuova tabella codici multibyte.

## <a name="syntax"></a>Sintassi

```C
int _setmbcp(
   int codepage
);
```

### <a name="parameters"></a>Parametri

*CodePage*<br/>
Nuova impostazione della tabella codici per le routine multibyte indipendenti dalle impostazioni locali.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se la tabella codici è impostata correttamente. Se per *codepage*viene specificato un valore di tabella codici non valido, restituisce-1 e l'impostazione della tabella codici è invariata. Imposta **errno** su **EINVAL** se si verifica un errore di allocazione della memoria.

## <a name="remarks"></a>Osservazioni

La funzione **_setmbcp** specifica una nuova tabella codici multibyte. Per impostazione predefinita, il sistema di runtime imposta automaticamente la tabella codici multibyte sulla tabella codici ANSI predefinita del sistema. L'impostazione della tabella codici multibyte influisce su tutte le routine multibyte non dipendenti dalle impostazioni locali. Tuttavia, è possibile indicare **_setmbcp** di usare la tabella codici definita per le impostazioni locali correnti. vedere l'elenco seguente di costanti manifeste e i risultati del comportamento associati. Per un elenco delle routine multibyte dipendenti dalla tabella codici delle impostazioni locali, anziché dalla tabella codici multibyte, vedere [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md).

La tabella codici multibyte influisce anche sull'elaborazione dei caratteri multibyte per le routine della libreria di runtime seguenti:

||||
|-|-|-|
|[Funzioni _exec](../../c-runtime-library/exec-wexec-functions.md)|[_mktemp](mktemp-wmktemp.md)|[_stat](stat-functions.md)|
|[_fullpath](fullpath-wfullpath.md)|[Funzioni _spawn](../../c-runtime-library/spawn-wspawn-functions.md)|[_tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|
|[_makepath](makepath-wmakepath.md)|[_splitpath](splitpath-wsplitpath.md)|[tmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|

Inoltre, tutte le routine della libreria di runtime che ricevono argomenti di programma *argv* o *envp* di caratteri multibyte come parametri, ad esempio le famiglie **_exec** e **_spawn** , elaborano queste stringhe in base alla tabella codici multibyte. Queste routine sono pertanto interessate anche da una chiamata a **_setmbcp** che modifica la tabella codici multibyte.

L'argomento *codepage* può essere impostato su uno dei valori seguenti:

- **_MB_CP_ANSI** Usare la tabella codici ANSI ottenuta dal sistema operativo all'avvio del programma.

- **_MB_CP_LOCALE** Usare la tabella codici delle impostazioni locali correnti ottenuta da una precedente chiamata a [setlocale](setlocale-wsetlocale.md).

- **_MB_CP_OEM** Usare la tabella codici OEM ottenuta dal sistema operativo all'avvio del programma.

- **_MB_CP_SBCS** Usare la tabella codici a byte singolo. Quando la tabella codici è impostata su **_MB_CP_SBCS**, una routine, ad esempio [_ismbblead](ismbblead-ismbblead-l.md) restituisce sempre false.

- **_MB_CP_UTF8** Usare UTF-8.  Quando la tabella codici è impostata su **_MB_CP_UTF8**, una routine, ad esempio [_ismbblead](ismbblead-ismbblead-l.md) restituisce sempre false.

- Qualsiasi altro valore valido della tabella codici, indipendentemente dal fatto che il valore sia una tabella codici ANSI, OEM o un'altra tabella codici supportata dal sistema operativo (ad eccezione di UTF-7, che non è supportata).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_setmbcp**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_getmbcp](getmbcp.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
