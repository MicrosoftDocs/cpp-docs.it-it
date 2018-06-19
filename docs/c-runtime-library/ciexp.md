---
title: _CIexp | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- _CIexp
apilocation:
- msvcr120.dll
- msvcr80.dll
- msvcr110.dll
- msvcr100.dll
- msvcrt.dll
- msvcr110_clr0400.dll
- msvcr90.dll
apitype: DLLExport
f1_keywords:
- CIexp
- _CIexp
dev_langs:
- C++
helpviewer_keywords:
- CIexp intrinsic
- _CIexp intrinsic
ms.assetid: f8a3e3b7-fa57-41a3-9983-6c81914cbb55
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 88f74e34a75698f95906de23d7093f6680a0d127
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32386618"
---
# <a name="ciexp"></a>_CIexp
Calcola l'esponenziale del primo valore dello stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _CIexp();  
```  
  
## <a name="remarks"></a>Note  
 Questa versione della funzione `exp` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta l'allocazione dei registri.  
  
 Il valore risultante viene inserito all'inizio dello stack.  
  
## <a name="requirements"></a>Requisiti  
 **Piattaforma:** x86  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [exp, expf, expl](../c-runtime-library/reference/exp-expf.md)