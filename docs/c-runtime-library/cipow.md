---
title: _CIpow | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- _CIpow
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
dev_langs:
- C++
helpviewer_keywords:
- CIpow intrinsic
- _CIpow intrinsic
ms.assetid: 477aaf0c-ac58-4252-89dd-9f3e35d47536
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5c3500c0bd17b2638026f45c23b047e2bee411cf
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32386998"
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