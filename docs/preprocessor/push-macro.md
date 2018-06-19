---
title: push_macro | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.push_macro
- push_macro_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, push_macro
- push_macro pragma
ms.assetid: ac89efc9-afd1-4dfe-bfd1-497229b3e81d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 81e41ef7bf7b93e4b2a533dddcb82fee904cb428
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33912992"
---
# <a name="pushmacro"></a>push_macro
Salva il valore di *macro_name* (macro) all'inizio dello stack per questa macro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma push_macro("  
macro_name  
")  
  
```  
  
## <a name="remarks"></a>Note  
 È possibile recuperare il valore per *macro_name* con **pop_macro**.  
  
 Vedere [pop_macro](../preprocessor/pop-macro.md) per un esempio.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)