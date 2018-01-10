---
title: ctanh, ctanhf, ctanhl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- ctanh
- ctahf
- ctahl
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
- ctanh
- ctanhf
- ctanhl
- complex/ctanh
- complex/ctanhf
- complex/ctanhl
dev_langs: C++
helpviewer_keywords:
- ctanh function
- ctanhl function
- ctanhf function
ms.assetid: 807f2cd1-8740-4988-afff-5911c346385b
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 868c05475de663aa4e82d8f1ad39c621438b2103
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ctanh-ctanhf-ctanhl"></a>ctanh, ctanhf, ctanhl
Calcola la tangente iperbolica complessa di un numero complesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_Dcomplex ctanh(   
   _Dcomplex z   
);  
_Fcomplex ctanh(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex ctanh(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex ctanhf(   
   _Fcomplex z   
);  
_Lcomplex ctanhl(   
   _Lcomplex z   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `z`  
 Numero complesso che rappresenta un angolo, espresso in radianti.  
  
## <a name="return-value"></a>Valore restituito  
 Tangente iperbolica complessa di `z`.  
  
|Input|Eccezione SEH|Eccezione `_matherr`|  
|-----------|-------------------|--------------------------|  
|± ∞, QNAN, IND|none|_DOMAIN|  
|± ∞ (tan, tanf)|NON VALIDO|_DOMAIN|  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare degli overload di `ctanh` che accettino e restituiscano valori `_Fcomplex` e `_Lcomplex`. In un programma C `ctanh` accetta e restituisce sempre un valore `_Dcomplex` .  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione C|Intestazione C++|  
|-------------|--------------|------------------|  
|`ctanh`,               `ctanhf`, `ctanhl`|\<complex.h>|\<ccomplex>|  
  
 Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [catanh, catanhf, catanhl](../../c-runtime-library/reference/catanh-catanhf-catanhl.md)   
 [catan, catanf, catanl](../../c-runtime-library/reference/catan-catanf-catanl.md)   
 [csinh, csinhf, csinhl](../../c-runtime-library/reference/csinh-csinhf-csinhl.md)   
 [casinh, casinhf, casinhl](../../c-runtime-library/reference/casinh-casinhf-casinhl.md)   
 [ccosh, ccoshf, ccoshl](../../c-runtime-library/reference/ccosh-ccoshf-ccoshl.md)   
 [cacosh, cacoshf, cacoshl](../../c-runtime-library/reference/cacosh-cacoshf-cacoshl.md)   
 [cacos, cacosf, cacosl](../../c-runtime-library/reference/cacos-cacosf-cacosl.md)   
 [ctan, ctanf, ctanl](../../c-runtime-library/reference/ctan-ctanf-ctanl.md)   
 [csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)   
 [casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)   
 [ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)   
 [csqrt, csqrtf, csqrtl](../../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)