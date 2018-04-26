---
title: _ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _ismbclower
- _ismbclower_l
- _ismbcupper_l
- _ismbcupper
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
- _ismbcupper
- _ismbclower
dev_langs:
- C++
helpviewer_keywords:
- _ismbcupper function
- ismbclower function
- _ismbclower_l function
- ismbcupper_l function
- _ismbclower function
- ismbcupper function
- ismbclower_l function
- _ismbcupper_l function
ms.assetid: 17d89587-65bc-477c-ba8f-a84e63cf59e7
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2350e8f3034d18dda32f3007d714d532828ee338
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="ismbclower-ismbclowerl-ismbcupper-ismbcupperl"></a>_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l

Verifica se un carattere multibyte è minuscolo o maiuscolo.

> [!IMPORTANT]
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```C
int _ismbclower(
   unsigned int c
);
int _ismbclower_l(
   unsigned int c,
   _locale_t locale
);
int _ismbcupper(
   unsigned int c
);
int _ismbcupper_l(
   unsigned int c,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*c*<br/>
Carattere da testare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test oppure 0 in caso contrario. Se *c*< = 255 ed è presente un corrispondente **ismbb** routine (ad esempio **ismbcalnum** corrisponde a **ismbbalnum**), il il risultato è il valore restituito dell'oggetto corrispondente **ismbb** routine.

## <a name="remarks"></a>Note

Ognuna di queste funzioni testa una particolare condizione su un determinato carattere multibyte.

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

|Routine|Condizione di test|Esempio della tabella codici 932|
|-------------|--------------------|---------------------------|
|**_ismbclower**|Carattere alfabetico minuscolo|Restituisce se diverso da zero e solo se *c* è una rappresentazione a un byte di una lettera minuscola ASCII: 0x61 < =*c*< = 0x7A.|
|**_ismbclower_l**|Carattere alfabetico minuscolo|Restituisce se diverso da zero e solo se *c* è una rappresentazione a un byte di una lettera minuscola ASCII: 0x61 < =*c*< = 0x7A.|
|**_ismbcupper**|Carattere alfabetico maiuscolo|Restituisce se diverso da zero e solo se *c* è una rappresentazione a un byte di una lettera maiuscola ASCII: 0x41 < =*c*< = 0x5A.|
|**_ismbcupper_l**|Carattere alfabetico maiuscolo|Restituisce se diverso da zero e solo se *c* è una rappresentazione a un byte di una lettera maiuscola ASCII: 0x41 < =*c*< = 0x5A.|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_ismbclower**|\<mbstring.h>|
|**_ismbclower_l**|\<mbstring.h>|
|**_ismbcupper**|\<mbstring.h>|
|**_ismbcupper_l**|\<mbstring.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Routine _ismbc](../../c-runtime-library/ismbc-routines.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
[Routine _ismbb](../../c-runtime-library/ismbb-routines.md)<br/>
