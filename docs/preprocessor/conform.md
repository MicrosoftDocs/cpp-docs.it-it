---
title: conform | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- conform_CPP
- vc-pragma.conform
dev_langs:
- C++
helpviewer_keywords:
- conform pragma
- forScope conform pragma
- pragmas, conform
ms.assetid: 71b3e174-c53c-4bfc-adf3-af39b1554191
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b145225cfed3131b406d15827b589aed718d16bb
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="conform"></a>conform
**Sezione specifica C++**  
  
 Specifica il comportamento in fase di esecuzione del [/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) l'opzione del compilatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma conform(name [, show ] [, on | off ] [ [, push | pop ] [, identifier ] ] )  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 Specifica il nome dell'opzione del compilatore da modificare. Valido solo *nome* è `forScope`.  
  
 **Mostra** (facoltativo)  
 Determina l'impostazione corrente di *nome* (true o false) da visualizzare mediante un messaggio di avviso durante la compilazione. Ad esempio `#pragma conform(forScope, show)`.  
  
 **attivato, disattivato**(facoltativo)  
 Impostazione *nome* a **su** consente il [/Zc: forScope](../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) l'opzione del compilatore. Il valore predefinito è **off**.  
  
 **push** (facoltativo)  
 Inserisce il valore corrente di *nome* nello stack interno del compilatore. Se si specifica *identificatore*, è possibile specificare il **su** o **off** valore per *nome* per essere inserito nello stack. Ad esempio `#pragma conform(forScope, push, myname, on)`.  
  
 **POP** (facoltativo)  
 Imposta il valore di *nome* al valore nella parte superiore dello stack interno del compilatore e quindi estrae lo stack. Se viene specificato l'identificatore con **pop**, verrà visualizzato lo stack finché non viene individuato il record con *identificatore*, che verrà inoltre estratto; il valore corrente per *nome* in il record successivo nello stack diventa il nuovo valore per *nome*. Se si specifica pop con un *identificatore* che non è presente in un record nello stack, il **pop** viene ignorato.  
  
 *Identificatore*(facoltativo)  
 È possibile includere in un **push** o **pop** comando. Se *identificatore* viene utilizzato un **su** o **off** identificatore può anche essere utilizzato.  
  
## <a name="example"></a>Esempio  
  
```  
// pragma_directive_conform.cpp  
// compile with: /W1  
// C4811 expected  
#pragma conform(forScope, show)  
#pragma conform(forScope, push, x, on)  
#pragma conform(forScope, push, x1, off)  
#pragma conform(forScope, push, x2, off)  
#pragma conform(forScope, push, x3, off)  
#pragma conform(forScope, show)  
#pragma conform(forScope, pop, x1)  
#pragma conform(forScope, show)  
  
int main() {}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)