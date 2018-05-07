---
title: Compilatore avviso (livello 1) C4215 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4215
dev_langs:
- C++
helpviewer_keywords:
- C4215
ms.assetid: f2aab64d-1bab-4f75-95ee-89e1263047b1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8d5e07b9382c24f82f3e7d84fe82aee9dd91ca19
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4215"></a>Avviso del compilatore (livello 1) C4215
utilizzata estensione non standard: long float  
  
 Nelle estensioni di Microsoft (/Ze) predefinito **long float** come **double**. La compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) non. Utilizzare **doppie** per mantenere la compatibilità.  
  
 L'esempio seguente genera l'errore C4215:  
  
```  
// C4215.cpp  
// compile with: /W1 /LD  
long float a;   // C4215  
  
// use the line below to resolve the warning  
// double a;  
```