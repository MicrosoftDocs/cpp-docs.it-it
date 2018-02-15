---
title: _setmbcp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- setmbcp function
- _setmbcp function
- multibyte code pages
ms.assetid: cfde53b5-0b73-4684-81b1-a8d3aafc85de
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 42d2d43726ea533ab689a61c5211317c8dc033c4
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="setmbcp"></a>_setmbcp
Imposta una nuova tabella codici multibyte.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _setmbcp(  
   int codepage   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `codepage`  
 Nuova impostazione della tabella codici per le routine multibyte indipendenti dalle impostazioni locali.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce 0 se la tabella codici è impostata correttamente. Se viene fornito un valore di tabella codici non valida per `codepage`, restituisce -1 e l'impostazione di pagina del codice è rimasto invariato. Imposta `errno` su `EINVAL` se si verifica un errore di allocazione di memoria.  
  
## <a name="remarks"></a>Note  
 La funzione `_setmbcp` specifica una nuova tabella codici multibyte. Per impostazione predefinita, il sistema di runtime imposta automaticamente la tabella codici multibyte sulla tabella codici ANSI predefinita del sistema. L'impostazione della tabella codici multibyte influisce su tutte le routine multibyte non dipendenti dalle impostazioni locali. Tuttavia, è possibile indicare a `_setmbcp` di usare la tabella codici definita per le impostazioni locali correnti (vedere l'elenco seguente di costanti manifeste e i risultati a livello di comportamento associati). Per un elenco delle routine multibyte dipendenti dalla tabella codici delle impostazioni locali, anziché dalla tabella codici multibyte, vedere [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md).  
  
 La tabella codici multibyte influisce anche sull'elaborazione dei caratteri multibyte per le routine della libreria di runtime seguenti:  
  
||||  
|-|-|-|  
|[Funzioni _exec](../../c-runtime-library/exec-wexec-functions.md)|[_mktemp](../../c-runtime-library/reference/mktemp-wmktemp.md)|[_stat](../../c-runtime-library/reference/stat-functions.md)|  
|[_fullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)|[Funzioni _spawn](../../c-runtime-library/spawn-wspawn-functions.md)|[_tempnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)|  
|[_makepath](../../c-runtime-library/reference/makepath-wmakepath.md)|[_splitpath](../../c-runtime-library/reference/splitpath-wsplitpath.md)|[tmpnam](../../c-runtime-library/reference/tempnam-wtempnam-tmpnam-wtmpnam.md)|  
  
 Inoltre, tutte le routine della libreria di runtime che ricevono argomenti di programma `argv` o `envp` con caratteri multibyte (come le famiglie `_exec` e `_spawn`) elaborano queste stringhe in base alla tabella codici multibyte. Pertanto, una chiamata a `_setmbcp` che modifica la tabella codici multibyte influisce anche su queste routine.  
  
 L'argomento `codepage` può essere impostato su uno dei valori seguenti:  
  
-   `_MB_CP_ANSI` Per usare la tabella codici ANSI ottenuta dal sistema operativo all'avvio del programma.  
  
-   `_MB_CP_LOCALE` Per usare la tabella codici delle impostazioni locali correnti ottenuta da una chiamata precedente a [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
-   `_MB_CP_OEM` Per usare la tabella codici OEM ottenuta dal sistema operativo all'avvio del programma.  
  
-   `_MB_CP_SBCS` Per usare la tabella codici a byte singolo. Quando la tabella codici è impostata su `_MB_CP_SBCS`, una routine come [_ismbblead](../../c-runtime-library/reference/ismbblead-ismbblead-l.md) restituisce sempre false.  
  
-   Qualsiasi altro valore di tabella codici valido, indipendentemente dal fatto che il valore corrisponda a una tabella codici ANSI, OEM o qualsiasi altra tabella codici supportata dal sistema operativo (ad eccezione di UTF-7 e UTF-8, che non sono supportati).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_setmbcp`|\<mbctype.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [_getmbcp](../../c-runtime-library/reference/getmbcp.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)