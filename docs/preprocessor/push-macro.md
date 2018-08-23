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
ms.openlocfilehash: 70b472ba11445cdc5aa2a192d02d82c51d724b8c
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42540794"
---
# <a name="pushmacro"></a>push_macro
Salva il valore dei *macro_name* macro nella parte superiore dello stack per questa macro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma push_macro("  
macro_name  
")  
```  
  
## <a name="remarks"></a>Note  
 
È possibile recuperare il valore per *macro_name* con `pop_macro`.  
  
Visualizzare [pop_macro](../preprocessor/pop-macro.md) per un esempio.  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)