---
title: _setmbcp
ms.date: 11/04/2016
apiname:
- _setmbcp
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
- api-ms-win-crt-locale-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _setmbcp
- setmbcp
helpviewer_keywords:
- setmbcp function
- _setmbcp function
- multibyte code pages
ms.assetid: cfde53b5-0b73-4684-81b1-a8d3aafc85de
ms.openlocfilehash: c1f4967baa5fda68a7df33bcd08935dca23fab16
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62356459"
---
# <a name="setmbcp"></a>_setmbcp

Imposta una nuova tabella codici multibyte.

## <a name="syntax"></a>Sintassi

```C
int _setmbcp(
   int codepage
);
```

### <a name="parameters"></a>Parametri

*codepage*<br/>
Nuova impostazione della tabella codici per le routine multibyte indipendenti dalle impostazioni locali.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se la tabella codici è impostata correttamente. Se viene fornito un valore di tabella codici non valida per *codepage*, restituisce -1 e l'impostazione della tabella codici rimane invariata. Set **errno** al **EINVAL** se si verifica un errore di allocazione di memoria.

## <a name="remarks"></a>Note

Il **setmbcp** funzione specifica una nuova tabella codici multibyte. Per impostazione predefinita, il sistema di runtime imposta automaticamente la tabella codici multibyte sulla tabella codici ANSI predefinita del sistema. L'impostazione della tabella codici multibyte influisce su tutte le routine multibyte non dipendenti dalle impostazioni locali. Tuttavia, è possibile indicare **setmbcp** per usare la tabella codici definita per le impostazioni locali correnti (vedere l'elenco seguente di costanti manifeste e associati i risultati di comportamento). Per un elenco delle routine multibyte dipendenti dalla tabella codici delle impostazioni locali, anziché dalla tabella codici multibyte, vedere [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md).

La tabella codici multibyte influisce anche sull'elaborazione dei caratteri multibyte per le routine della libreria di runtime seguenti:

||||
|-|-|-|
|[Funzioni _exec](../../c-runtime-library/exec-wexec-functions.md)|[_mktemp](mktemp-wmktemp.md)|[_stat](stat-functions.md)|
|[_fullpath](fullpath-wfullpath.md)|[Funzioni _spawn](../../c-runtime-library/spawn-wspawn-functions.md)|[_tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|
|[_makepath](makepath-wmakepath.md)|[_splitpath](splitpath-wsplitpath.md)|[tmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|

Inoltre, tutte le routine di libreria di runtime che ricevono i caratteri multibyte *argv* o *envp* argomenti come parametri di programma (ad esempio il **Exec** e**spawn** famiglie) elaborano queste stringhe in base alla tabella codici multibyte. Pertanto, queste routine sono anche interessate da una chiamata a **setmbcp** che modifica la tabella codici multibyte.

Il *codepage* argomento può essere impostato su uno qualsiasi dei valori seguenti:

- **_MB_CP_ANSI** tabella codici ANSI di uso ottenuta dal sistema operativo all'avvio del programma.

- **Mb_cp_locale** usare codici di impostazioni locali correnti ottenuta da una precedente chiamata a [setlocale](setlocale-wsetlocale.md).

- **_MB_CP_OEM** tabella codici OEM usare ottenuta dal sistema operativo all'avvio del programma.

- **_MB_CP_SBCS** tabella codici a byte singolo di uso. Quando la tabella codici è impostata su **_MB_CP_SBCS**, una routine, ad esempio [ismbblead](ismbblead-ismbblead-l.md) restituisce sempre false.

- Qualsiasi altro valore di tabella codici valido, indipendentemente dal fatto che il valore corrisponda a una tabella codici ANSI, OEM o qualsiasi altra tabella codici supportata dal sistema operativo (ad eccezione di UTF-7 e UTF-8, che non sono supportati).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_setmbcp**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_getmbcp](getmbcp.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
