---
title: inline_recursion | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- inline_recursion_CPP
- vc-pragma.inline_recursion
dev_langs:
- C++
helpviewer_keywords:
- pragmas, inline_recursion
- inline_recursion pragma
ms.assetid: cfef5791-63b7-45ac-9574-623747b9b9c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f81347c8286dfa1f0651af43bd3134565a22aade
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33849496"
---
# <a name="inlinerecursion"></a>inline_recursion
Controlla l'espansione inline delle chiamate di funzione dirette o ricorsive reciproche.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma inline_recursion( [{on | off}] )  
```  
  
## <a name="remarks"></a>Note  
 Utilizzare questo pragma per controllare le funzioni contrassegnato come [inline](../cpp/inline-functions-cpp.md) e [inline](../cpp/inline-functions-cpp.md) o funzioni che il compilatore espande automaticamente con l'opzione /Ob2. Utilizzo di questo pragma richiede un [/Ob](../build/reference/ob-inline-function-expansion.md) impostazione dell'opzione del compilatore di 1 o 2. Lo stato predefinito per `inline_recursion` è disattivata. Questo pragma viene applicato alla prima chiamata di funzione dopo che il pragma viene rilevato e non influisce sulla definizione della funzione.  
  
 Il pragma `inline_recursion` controlla la modalità di espansione delle funzioni ricorsive. Se `inline_recursion` è disattivato e se una funzione inline chiama se stessa (direttamente o indirettamente), la funzione viene espansa solo una volta. Se `inline_recursion` è attivo, la funzione viene espansa più volte finché raggiunge il valore impostato con il [inline_depth](../preprocessor/inline-depth.md) pragma, il valore predefinito per le funzioni ricorsive definito dal `inline_depth` pragma, o una limite di capacità .  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [inline_depth](../preprocessor/inline-depth.md)   
 [/Ob (espansione funzioni inline)](../build/reference/ob-inline-function-expansion.md)