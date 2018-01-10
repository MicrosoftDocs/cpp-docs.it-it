---
title: _fpclass, _fpclassf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _fpclass
- _fpclassf
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
- fpclass
- _fpclass
- _fpclassf
- math/_fpclass
- float/_fpclass
- math/_fpclassf
dev_langs: C++
helpviewer_keywords:
- fpclass function
- floating-point numbers, IEEE representation
- _fpclass function
- _fpclassf function
ms.assetid: 2774872d-3543-446f-bc72-db85f8b95a6b
caps.latest.revision: "13"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 92501f119d0f0222de0ffeca0611e5fd6c96b697
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fpclass-fpclassf"></a>_fpclass, _fpclassf
Restituisce un valore che indica la classificazione a virgola mobile dell'argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _fpclass(   
   double x   
);  
  
int _fpclassf(   
   float x   
); /* x64 only */  
```  
  
#### <a name="parameters"></a>Parametri  
 `x`  
 Valore a virgola mobile da verificare.  
  
## <a name="return-value"></a>Valore restituito  
 Le funzioni `_fpclass` e `_fpclassf` restituiscono un valore intero che indica la classificazione a virgola mobile dell'argomento `x`. La classificazione può avere uno dei valori seguenti, definiti in \<float.h>.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`_FPCLASS_SNAN`|Segnalazione NaN|  
|`_FPCLASS_QNAN`|NaN non interattivo|  
|`_FPCLASS_NINF`|Valore di infinito negativo (-INF)|  
|`_FPCLASS_NN`|Valore diverso da zero normalizzato negativo|  
|`_FPCLASS_ND`|Denormalizzato negativo|  
|`_FPCLASS_NZ`|Zero negativo (- 0)|  
|`_FPCLASS_PZ`|0 positivo (+0)|  
|`_FPCLASS_PD`|Denormalizzato positivo|  
|`_FPCLASS_PN`|Diverso da zero normalizzato positivo|  
|`_FPCLASS_PINF`|Infinito positivo (+INF)|  
  
## <a name="remarks"></a>Note  
 Le funzioni `_fpclass` e `_fpclassf` sono specifiche di Microsoft. Sono simili a [fpclassify](../../c-runtime-library/reference/fpclassify.md), ma restituiscono informazioni più dettagliate sull'argomento. La funzione `_fpclassf` è disponibile solo per la compilazione per la piattaforma x64.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione|Intestazione obbligatoria|  
|--------------|---------------------|  
|`_fpclass`|\<float.h>|  
  
 Per altre informazioni sulla compatibilità e la conformità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [isnan, _isnan, _isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)   
 [fpclassify](../../c-runtime-library/reference/fpclassify.md)