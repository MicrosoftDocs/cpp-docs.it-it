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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: 61086471c6194aaa8434d291647978bf891a8aea
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337597"
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

*Codepage*<br/>
Nuova impostazione della tabella codici per le routine multibyte indipendenti dalle impostazioni locali.

## <a name="return-value"></a>Valore restituito

Restituisce 0 se la tabella codici è impostata correttamente. Se viene fornito un valore di tabella codici non valido per la *tabella codici*, restituisce -1 e l'impostazione della tabella codici non viene modificata. Imposta **errno** su **EINVAL** se si verifica un errore di allocazione della memoria.

## <a name="remarks"></a>Osservazioni

La funzione **_setmbcp** specifica una nuova tabella codici multibyte. Per impostazione predefinita, il sistema di runtime imposta automaticamente la tabella codici multibyte sulla tabella codici ANSI predefinita del sistema. L'impostazione della tabella codici multibyte influisce su tutte le routine multibyte non dipendenti dalle impostazioni locali. Tuttavia, è possibile indicare a **_setmbcp** di utilizzare la tabella codici definita per le impostazioni locali correnti (vedere l'elenco seguente di costanti manifesto e risultati di comportamento associati). Per un elenco delle routine multibyte dipendenti dalla tabella codici delle impostazioni locali, anziché dalla tabella codici multibyte, vedere [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md).

La tabella codici multibyte influisce anche sull'elaborazione dei caratteri multibyte per le routine della libreria di runtime seguenti:

||||
|-|-|-|
|[Funzioni _exec](../../c-runtime-library/exec-wexec-functions.md)|[_mktemp](mktemp-wmktemp.md)|[_stat](stat-functions.md)|
|[_fullpath](fullpath-wfullpath.md)|[Funzioni _spawn](../../c-runtime-library/spawn-wspawn-functions.md)|[_tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|
|[_makepath](makepath-wmakepath.md)|[_splitpath](splitpath-wsplitpath.md)|[tmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|

Inoltre, tutte le routine della libreria di runtime che ricevono il carattere multibyte *argv* o gli argomenti del programma *envp* come parametri (ad esempio **le famiglie _exec** e **_spawn)** elaborano queste stringhe in base alla tabella codici multibyte. Pertanto, queste routine sono influenzate anche da una chiamata a **_setmbcp** che modifica la tabella codici multibyte.

L'argomento *codepage* può essere impostato su uno dei seguenti valori:

- **_MB_CP_ANSI** Utilizzare la tabella codici ANSI ottenuta dal sistema operativo all'avvio del programma.

- **_MB_CP_LOCALE** Utilizzare la tabella codici delle impostazioni locali correnti ottenuta da una precedente chiamata a [setlocale](setlocale-wsetlocale.md).

- **_MB_CP_OEM** Utilizzare la tabella codici OEM ottenuta dal sistema operativo all'avvio del programma.

- **_MB_CP_SBCS** Utilizzare una tabella codici a byte singolo. Quando la tabella codici è impostata su **_MB_CP_SBCS**, una routine come [_ismbblead](ismbblead-ismbblead-l.md) restituisce sempre false.

- **_MB_CP_UTF8** Utilizzare UTF-8.  Quando la tabella codici è impostata su **_MB_CP_UTF8**, una routine, ad esempio [_ismbblead](ismbblead-ismbblead-l.md) restituisce sempre false.

- Qualsiasi altro valore di tabella codici valido, indipendentemente dal fatto che il valore sia ANSI, OEM o un'altra tabella codici supportata dal sistema operativo (ad eccezione di UTF-7, che non è supportato).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_setmbcp**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[_getmbcp](getmbcp.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
