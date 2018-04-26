---
title: isleadbyte, _isleadbyte_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _isleadbyte_l
- isleadbyte
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _istleadbyte
- _isleadbyte_l
- isleadbyte
dev_langs:
- C++
helpviewer_keywords:
- lead bytes
- _isleadbyte_l function
- _istleadbyte function
- istleadbyte function
- isleadbyte function
ms.assetid: 3b2bcf09-d82b-4803-9e80-59d04942802a
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dacf22d33f166527e7c464e0632366d2e39315f8
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="isleadbyte-isleadbytel"></a>isleadbyte, _isleadbyte_l

Determina se un carattere è il byte iniziale di un carattere multibyte.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int isleadbyte( int c );
int _isleadbyte_l( int c );
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare.

## <a name="return-value"></a>Valore restituito

**isleadbyte** restituisce un valore diverso da zero se l'argomento soddisfa la condizione di test oppure 0 se non esiste. Nelle impostazioni locali "C" e a byte singolo impostazioni locali (SBCS), del set di caratteri **isleadbyte** restituisce sempre 0.

## <a name="remarks"></a>Note

Il **isleadbyte** (macro) restituisce un valore diverso da zero se l'argomento è il primo byte di un carattere multibyte. **isleadbyte** produce un risultato significativo per qualsiasi argomento integer da -1 (**EOF**) per **UCHAR_MAX** (0xFF), inclusivo.

Il tipo di argomento previsto **isleadbyte** viene **int**; se un carattere signed viene passato, il compilatore potrebbe convertirlo in un intero con l'estensione del segno, generando risultati imprevisti.

La versione di questa funzione con il **l** suffisso è identico ad eccezione del fatto che usa le impostazioni locali passate anziché le impostazioni locali correnti per il relativo comportamento dipendente dalle impostazioni locali.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**istleadbyte**|Restituisce sempre false|**_isleadbyte**|Restituisce sempre false|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**isleadbyte**|\<ctype.h>|
|**_isleadbyte_l**|\<ctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
