---
title: _CIlog10 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- _CIlog10
apilocation:
- msvcr100.dll
- msvcr120.dll
- msvcr80.dll
- msvcr90.dll
- msvcr110_clr0400.dll
- msvcrt.dll
- msvcr110.dll
apitype: DLLExport
f1_keywords:
- CIlog10
- _CIlog10
dev_langs:
- C++
helpviewer_keywords:
- _CIlog10 intrinsic
- CIlog10 intrinsic
ms.assetid: 05d7fcaa-3cff-4cc5-8d44-015e7cacba24
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 615a8818c6204298d06054ef77a1b95ab603b548
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32386391"
---
# <a name="cilog10"></a>_CIlog10
Esegue un'operazione `log10` sul primo valore dello stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _CIlog10();  
```  
  
## <a name="remarks"></a>Note  
 Questa versione della funzione `log10` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. La funzione accelera l'esecuzione poiché impedisce la generazione di copie e agevola l'allocazione dei registri.  
  
 Il valore risultante viene inserito all'inizio dello stack.  
  
## <a name="requirements"></a>Requisiti  
 **Piattaforma:** x86  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)  (Riferimento alfabetico alle funzioni)  
 [log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)