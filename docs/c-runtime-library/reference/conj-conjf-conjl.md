---
title: conj, conjf, conjl | Microsoft Docs
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
- conj
- conjf
- conjl
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
- conj
- conjf
- conjl
- complex/conj
- complex/conjf
- complex/conjl
dev_langs: C++
helpviewer_keywords:
- conj function
- conjf function
- conjl function
ms.assetid: 792fccfa-19c6-4890-99f9-a3b89effccd6
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 82110e42b8cf28e3e285e0027ea31d61c8cc9370
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="conj-conjf-conjl"></a>conj, conjf, conjl
Restituisce il complesso coniugato di un numero complesso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
_Dcomplex conj(   
   _Dcomplex z   
);  
_Fcomplex conj(   
   _Fcomplex z   
);  // C++ only  
_Lcomplex conj(   
   _Lcomplex z   
);  // C++ only  
_Fcomplex conjf(   
   _Fcomplex z   
);  
_Lcomplex conjl(   
   _Lcomplex z   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `z`  
 Numero complesso.  
  
## <a name="return-value"></a>Valore restituito  
 Il complesso coniugato di `z`.  Il risultato ha la stessa parte reale e immaginaria di `z`, ma con segno opposto.  
  
## <a name="remarks"></a>Note  
 Dato che C++ consente l'overload, è possibile chiamare degli overload di `conj` che accettino e restituiscano valori `_Fcomplex` e `_Lcomplex`. In un programma C `conj` accetta e restituisce sempre un valore `_Dcomplex` .  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione C|Intestazione C++|  
|-------------|--------------|------------------|  
|`conj`,               `conjf`, `conjl`|\<complex.h>|\<ccomplex>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [norm, normf, norml](../../c-runtime-library/reference/norm-normf-norml1.md)   
 [creal, crealf, creall](../../c-runtime-library/reference/creal-crealf-creall.md)   
 [cproj, cprojf, cprojl](../../c-runtime-library/reference/cproj-cprojf-cprojl.md)   
 [cimag, cimagf, cimagl](../../c-runtime-library/reference/cimag-cimagf-cimagl.md)   
 [carg, cargf, cargl](../../c-runtime-library/reference/carg-cargf-cargl.md)   
 [cabs, cabsf, cabsl](../../c-runtime-library/reference/cabs-cabsf-cabsl.md)