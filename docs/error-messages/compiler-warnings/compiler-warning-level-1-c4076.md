---
title: Compilatore avviso (livello 1) C4076 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4076
dev_langs:
- C++
helpviewer_keywords:
- C4076
ms.assetid: 04581066-313a-4a11-bb60-721e6d038d75
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 928b0a78c09773e334c1a291877b74304dab66ec
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43198478"
---
# <a name="compiler-warning-level-1-c4076"></a>Avviso del compilatore (livello 1) C4076

> «*modificatore di tipo*': non può essere utilizzato con il tipo '*nomeTipo*»

## <a name="remarks"></a>Note

Un modificatore di tipo, se si tratta **firmato** oppure **unsigned**, non può essere usato con un tipo non integer. *modificatore di tipo* viene ignorato.
  
## <a name="example"></a>Esempio  

L'esempio seguente genera l'errore C4076; Per risolvere il problema, rimuovere il **unsigned** modificatore di tipo:

```cpp
// C4076.cpp  
// compile with: /W1 /LD  
unsigned double x;   // C4076  
```