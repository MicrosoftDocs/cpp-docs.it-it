---
title: iscsym, iscsymf, __iscsym, __iswcsym, __iscsymf, __iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _iswcsym_l
- __iswcsym
- __iscsym
- _iswcsymf_l
- _iscsym_l
- __iswcsymf
- __iscsymf
- _iscsymf_l
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
- _iswcsym_l
- _iswcsymf_l
- iscsymf
- iswcsymf
- __iswcsym
- __iswcsymf
- iscsym
- iswcsym
- __iscsym
- _iscsym_l
- _iscsymf_l
- __iscsymf
- ctype/iscsym
- ctype/iscsymf
- ctype/__iscsym
- ctype/__iscsymf
- ctype/__iscsym_l
- ctype/__iscsymf_l
- ctype/__iswcsym
- ctype/__iswcsymf
- ctype/__iswcsym_l
- ctype/__iswcsymf_l
dev_langs:
- C++
helpviewer_keywords:
- iscsymf_l function
- iswsym_l function
- _iswcsym_l function
- iscsym_l function
- _iscsymf_l function
- _iswcsymf_l function
- _iscsym_l function
- __iscsym function
- __iswcsymf function
- iswsymf_l function
- __iscsymf function
- __iswcsym function
- iscsym function
- iscsymf function
ms.assetid: 944dfb99-f2b8-498c-9f55-dbcf370d0a2c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b1561e93fc19832607d304f3d087ab33b04040de
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32401922"
---
# <a name="iscsym-iscsymf-iscsym-iswcsym-iscsymf-iswcsymf-iscsyml-iswcsyml-iscsymfl-iswcsymfl"></a>iscsym, iscsymf, __iscsym, __iswcsym, __iscsymf, __iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l

Determinare se un Integer rappresenta un carattere che può essere utilizzato in un identificatore.

## <a name="syntax"></a>Sintassi

```C
int __iscsym(
   int c
);
int __iswcsym(
   wint_t c
);
int __iscsymf(
   int c
);
int __iswcsymf(
   wint_t c
);
int _iscsym_l(
   int c,
   _locale_t locale
);
int _iswcsym_l(
   wint_t c,
   _locale_t locale
);
int _iscsymf_l(
   int c,
   _locale_t locale
);
int _iswcsymf_l(
   wint_t c,
   _locale_t locale
);
#define iscsym __iscsym
#define iscsymf __iscsymf
```

### <a name="parameters"></a>Parametri

*c*<br/>
Valore Integer da testare. *c* deve essere compreso nell'intervallo tra 0 e 255 per la versione a caratteri narrow della funzione.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Entrambi **iscsym** e **iswcsym** restituiscono un valore diverso da zero se *c* è una lettera, un carattere di sottolineatura o una cifra. Entrambi **iscsymf** e **iswcsymf** restituiscono un valore diverso da zero se *c* è una lettera o un carattere di sottolineatura. Ognuna di queste routine restituisce 0 se *c* non soddisfa la condizione di test. Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il *delle impostazioni locali* passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

## <a name="remarks"></a>Note

Queste routine sono definite come macro, a meno che non sia definita la macro del preprocessore _CTYPE_DISABLE_MACROS. Quando si usano le versioni definite come macro di queste routine, gli argomenti possono essere valutati più volte. Prestare attenzione quando si usano espressioni con effetti collaterali nell'elenco degli argomenti.

Per motivi di compatibilità **iscsym** e **iscsymf** sono definiti come macro solo quando [ &#95; &#95;STDC&#95; &#95; ](../../preprocessor/predefined-macros.md) non è definito o è definito come 0; in caso contrario, sono definiti.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**iscsym**, **iscsymf**, **iscsym**, **iswcsym**, **iscsymf**, **iswcsymf**, **iscsym_l**, **iswcsym_l**, **iscsymf_l**, **iswcsymf_l**|C: \<ctype.h><br /><br /> C++: \<cctype> o \<ctype.h>|

Il **iscsym**, **iscsymf**, **iscsym**, **iswcsym**, **iscsymf**, **_ iswcsymf**, **iscsym_l**, **iswcsym_l**, **iscsymf_l**, e **iswcsymf_l** routine sono Sezione specifica Microsoft. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Classificazione di caratteri](../../c-runtime-library/character-classification.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Routine is, isw](../../c-runtime-library/is-isw-routines.md)<br/>
