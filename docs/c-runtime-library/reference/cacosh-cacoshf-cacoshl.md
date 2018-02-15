---
title: cacosh, cacoshf, cacoshl | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- cacosh
- cacoshf
- cacoshl
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
- cacosh
- cacoshf
- cacoshl
- complex/cacosh
- complex/cacoshf
- complex/cacoshl
dev_langs:
- C++
helpviewer_keywords:
- cacosh function
- cacoshf function
- cacoshl function
ms.assetid: 83fd05eb-3587-4741-9be6-589a830a1703
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ee72bfe40719b5a6c4c753c2b7de1ec9ef6bb468
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cacosh-cacoshf-cacoshl"></a>cacosh, cacoshf, cacoshl
Ottiene il coseno iperbolico inverso di un numero complesso con discontinuità della funzione corrispondente ai valori minori di 1 lungo l'asse reale. .  
  
## <a name="syntax"></a>Sintassi  
  
```  
_Dcomplex cacosh(   
   _Dcomplex z   
);  
_Fcomplex cacosh(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex cacosh(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex cacoshf(   
   _Fcomplex z   
);  
_Lcomplex cacoshl(   
   _Lcomplex z   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `z`  
 Numero complesso che rappresenta un angolo, espresso in radianti.  
  
## <a name="return-value"></a>Valore restituito  
 Coseno iperbolico inverso di `z`, espresso in radianti. Il risultato è illimitata e non negativo lungo l'asse reale e nell'intervallo [-iπ, iπ +] lungo l'asse immaginaria.  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare degli overload di `cacosh` che accettino e restituiscano valori `_Fcomplex` e `_Lcomplex`. In un programma C `cacosh` accetta e restituisce sempre un valore `_Dcomplex` .  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione C|Intestazione C++|  
|-------------|--------------|------------------|  
|`cacosh`,               `cacoshf`, `cacoshl`|\<complex.h>|\<ccomplex>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [catanh, catanhf, catanhl](../../c-runtime-library/reference/catanh-catanhf-catanhl.md)   
 [ctanh, ctanhf, ctanhl](../../c-runtime-library/reference/ctanh-ctanhf-ctanhl.md)   
 [catan, catanf, catanl](../../c-runtime-library/reference/catan-catanf-catanl.md)   
 [csinh, csinhf, csinhl](../../c-runtime-library/reference/csinh-csinhf-csinhl.md)   
 [casinh, casinhf, casinhl](../../c-runtime-library/reference/casinh-casinhf-casinhl.md)   
 [ccosh, ccoshf, ccoshl](../../c-runtime-library/reference/ccosh-ccoshf-ccoshl.md)   
 [cacos, cacosf, cacosl](../../c-runtime-library/reference/cacos-cacosf-cacosl.md)   
 [ctan, ctanf, ctanl](../../c-runtime-library/reference/ctan-ctanf-ctanl.md)   
 [csin, csinf, csinl](../../c-runtime-library/reference/csin-csinf-csinl.md)   
 [casin, casinf, casinl](../../c-runtime-library/reference/casin-casinf-casinl.md)   
 [ccos, ccosf, ccosl](../../c-runtime-library/reference/ccos-ccosf-ccosl.md)   
 [csqrt, csqrtf, csqrtl](../../c-runtime-library/reference/csqrt-csqrtf-csqrtl.md)