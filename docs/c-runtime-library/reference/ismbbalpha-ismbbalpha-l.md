---
title: _ismbbalpha, _ismbbalpha_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _ismbbalpha
- _ismbbalpha_l
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
- ismbbalpha
- ismbbalpha_l
- _ismbbalpha
- _ismbbalpha_l
dev_langs:
- C++
helpviewer_keywords:
- ismbbalpha function
- ismbbalpha_l function
- _ismbbalpha function
- _ismbbalpha_l function
ms.assetid: 8e54cb92-fc2b-41f5-8ab4-b22ac8aa9ad0
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a3e1a5984333def50c31ed6395265afb424fd7e6
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="ismbbalpha-ismbbalphal"></a>_ismbbalpha, _ismbbalpha_l

Determina se un carattere multibyte specificato corrisponde ad alfa.

## <a name="syntax"></a>Sintassi

```C
int _ismbbalpha(
   unsigned int c
);
int _ismbbalpha_l(
   unsigned int c
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**ismbbalpha** restituisce un valore diverso da zero se l'espressione:

`isalpha(c) || _ismbbkalnum(c)`

è diverso da zero per *c*, oppure 0 in caso contrario. **ismbbalpha** utilizza le impostazioni locali correnti per le impostazioni dei caratteri dipendenti dalle impostazioni locali. **ismbbalpha_l** è identica ad eccezione del fatto che usa le impostazioni locali passata.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbbalpha**|\<mbctype.h>|
|**_ismbbalpha_l**|\<mbctype.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Classificazione per byte](../../c-runtime-library/byte-classification.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
