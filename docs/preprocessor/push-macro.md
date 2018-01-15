---
title: push_macro | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc-pragma.push_macro
- push_macro_CPP
dev_langs: C++
helpviewer_keywords:
- pragmas, push_macro
- push_macro pragma
ms.assetid: ac89efc9-afd1-4dfe-bfd1-497229b3e81d
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: be82b047c5ef9e43ef2b49ded35735c6ed936fe4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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