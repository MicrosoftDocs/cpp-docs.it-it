---
title: _CIpow | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _CIpow
apilocation:
- msvcr100.dll
- msvcr110.dll
- msvcr120.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr90.dll
apitype: DLLExport
f1_keywords:
- CIpow
- _CIpow
dev_langs: C++
helpviewer_keywords:
- CIpow intrinsic
- _CIpow intrinsic
ms.assetid: 477aaf0c-ac58-4252-89dd-9f3e35d47536
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0bed34f3107f598d2070b39ac011f786b498c519
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cipow"></a>_CIpow
Calcola *x* elevato alla potenza *y* in base ai primi valori dello stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _CIpow();  
```  
  
## <a name="remarks"></a>Note  
 Questa versione della funzione `pow` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta l'allocazione dei registri.  
  
 Il valore risultante viene inserito all'inizio dello stack.  
  
## <a name="requirements"></a>Requisiti  
 **Piattaforma:** x86  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [pow, powf, powl](../c-runtime-library/reference/pow-powf-powl.md)