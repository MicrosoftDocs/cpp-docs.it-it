---
title: expm1, expm1f, expm1l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- expm1l
- expm1
- expm1f
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
- expm1l
- expm1
- expm1f
dev_langs:
- C++
helpviewer_keywords:
- expm1f function
- expm1l function
- expm1 function
ms.assetid: 2a4dd2d9-370c-42b0-9067-0625efa272e0
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2e02b2b481e1b773e780623d43ae94d8abe0cba2
ms.sourcegitcommit: 185e11ab93af56ffc650fe42fb5ccdf1683e3847
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2018
---
# <a name="expm1-expm1f-expm1l"></a>expm1, expm1f, expm1l
Calcola l'esponenziale in base e di un valore, meno uno.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double expm1(   
   double x   
);  
float expm1(  
   float x  
);  // C++ only  
long double expm1(  
   long double x  
);  // C++ only  
float expm1f(  
   float x  
);  
long double expm1l(  
   long double x  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Il valore esponenziale a virgola mobile.  
  
## <a name="return-value"></a>Valore restituito  
 Il `expm1` funzioni restituiscono un valore a virgola mobile che rappresenta e<sup>x</sup> - 1, se ha esito positivo. In caso di overflow `expm1` restituisce `HUGE_VAL`, `expm1f` restituisce `HUGE_VALF`, `expm1l` restituisce `HUGE_VALL`, e `errno` viene impostato su `ERANGE`. Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare degli overload di `expm1` che accettino e restituiscano valori `float` e `long double`. In un programma C `expm1` accetta e restituisce sempre un valore `double`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`expm1`, `expm1f`, `expm1l`|\<math.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto a virgola mobile)  
 [exp2, exp2f, exp2l](exp2-exp2f-exp2l.md)   
 [pow, powf, powl](../../c-runtime-library/reference/pow-powf-powl.md)