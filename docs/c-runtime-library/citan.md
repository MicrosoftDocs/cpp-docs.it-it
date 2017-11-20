---
title: _CItan | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _CItan
apilocation:
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr80.dll
- msvcrt.dll
- msvcr110.dll
- msvcr90.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords:
- _CItan
- CItan
dev_langs: C++
helpviewer_keywords:
- CItan intrinsic
- _CItan intrinsic
ms.assetid: d1ea3113-50a2-45a6-b6bc-680fcdcc0928
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0b181bbcf37a28b74fefbb5a2bc9a6548dd09d63
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="citan"></a>_CItan
Calcola la tangente il primo valore dello stack.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _CItan();  
```  
  
## <a name="remarks"></a>Note  
 Questa versione della funzione `tan` usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. La funzione accelera l'esecuzione poiché impedisce la generazione di copie e agevola l'allocazione dei registri.  
  
 Il valore risultante viene inserito all'inizio dello stack.  
  
## <a name="requirements"></a>Requisiti  
 **Piattaforma:** x86  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [tan, tanf, tanl, tanh, tanhf, tanhl](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)