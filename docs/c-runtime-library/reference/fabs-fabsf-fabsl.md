---
title: fabs, fabsf, fabsl | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- fabsf
- fabs
- fabsl
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
- api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- fabs
- fabsf
- fabsl
- "math\fabs"
- "math\fabsf"
- "math\fabsl"
dev_langs:
- C++
helpviewer_keywords:
- absolute values
- fabsf function
- calculating absolute values
- fabs function
- fabsl function
ms.assetid: 23bca210-f408-4f5e-b46b-0ccaaec31e36
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 95f34d81045aef90832a1d05090c548c1bf27dec
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="fabs-fabsf-fabsl"></a>fabs, fabsf, fabsl

Calcola il valore assoluto dell'argomento a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
double fabs(
   double x
);
float fabs(
   float x
); // C++ only
long double fabs(
   long double x
); // C++ only
float fabsf(
   float x
);
long double fabsl(
   long double x
);
```

### <a name="parameters"></a>Parametri

*x*<br/>
Valore a virgola mobile.

## <a name="return-value"></a>Valore restituito

Il **fabs** le funzioni restituiscono il valore assoluto dell'argomento *x*. Non vi è restituzione di errori.

|Input|Eccezione SEH|Eccezione Matherr|
|-----------|-------------------|-----------------------|
|± QNAN,IND|none|_DOMAIN|

## <a name="remarks"></a>Note

C++ consente l'overload, pertanto è possibile chiamare degli overload di **fabs** se si include il \<cmath > intestazione. In un programma C **fabs** accetta e restituisce sempre un **doppie**.

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione C obbligatoria|Intestazione C++ obbligatoria|
|--------------|-----------------------|---------------------------|
|**fabs**, **fabsf**, **fabsl**|\<math.h>|\<cmath> o \<math.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [abs](abs-labs-llabs-abs64.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[abs, labs, llabs, _abs64](abs-labs-llabs-abs64.md)<br/>
[_cabs](cabs.md)<br/>
