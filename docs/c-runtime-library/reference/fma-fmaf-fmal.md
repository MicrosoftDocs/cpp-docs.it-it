---
title: fma, fmaf, fmal | Microsoft Docs
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
- fma
- fmaf
- fmal
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
- fma
- fmaf
- fmal
- math/fma
- math/fmaf
- math/fmal
dev_langs: C++
helpviewer_keywords:
- fma function
- fmaf function
- fmal function
ms.assetid: 584a6037-da1e-4e86-9f0c-97aae86de0c0
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cd4178718380502e91bb7f019164f2398c93323c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fma-fmaf-fmal"></a>fma, fmaf, fmal
Moltiplica due valori, aggiunge un terzo valore e quindi arrotonda il risultato, senza perdita di precisione grazie all'arrotondamento intermedio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
double fma(  
   double x,   
   double y,   
   double z  
);  
  
float fma(  
   float  x,   
   float  y,   
   float z  
); //C++ only  
  
long double fma(  
   long double  x,   
   long double  y,   
   long double z  
); //C++ only  
  
float fmaf(  
   float  x,   
   float  y,   
   float z  
);  
  
long double fmal(  
   long double  x,   
   long double  y,   
   long double z  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `x`  
 Primo valore da moltiplicare.  
  
 [in] `y`  
 Secondo valore da moltiplicare.  
  
 [in] `z`  
 Il valore da aggiungere.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce `(x * y) + z`. Il valore restituito viene quindi arrotondato in base al formato di arrotondamento corrente.  
  
 In caso contrario, può restituire uno dei valori seguenti:  
  
|Problema|INVIO|  
|-----------|------------|  
|`x` = INFINITY, `y` = 0 o<br /><br /> `x` = 0, `y` = INFINITY|NaN|  
|`x`o `y` = ± esatta infinito, `z` = infinito con segno opposto|NaN|  
|`x` o `y` = NaN|NaN|  
|not (`x` = 0, `y`= indefinito) e `z` = NaN<br /><br /> not (`x`=indefinito, `y`=0) e `z` = NaN|NaN|  
|Errore di intervallo di overflow|±HUGE_VAL, ±HUGE_VALF o ±HUGE_VALL|  
|Errore di intervallo di underflow|valore corretto dopo l'arrotondamento.|  
  
 Gli errori vengono segnalati come specificato in [_matherr](../../c-runtime-library/reference/matherr.md).  
  
## <a name="remarks"></a>Note  
 Poiché C++ consente l'overload, è possibile chiamare overload di `fma` che accettano e restituiscono **float** e **long double** tipi. In un programma C, `fma` accetta e restituisce sempre un **double**.  
  
 Questa funzione calcola il valore come per la precisione infinita e quindi arrotonda il risultato finale.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione C|Intestazione C++|  
|--------------|--------------|------------------|  
|`fma`, `fmaf`, `fmal`|\<math.h>|\<cmath>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [remainder, remainderf, remainderl](../../c-runtime-library/reference/remainder-remainderf-remainderl.md)   
 [remquo, remquof, remquol](../../c-runtime-library/reference/remquo-remquof-remquol.md)