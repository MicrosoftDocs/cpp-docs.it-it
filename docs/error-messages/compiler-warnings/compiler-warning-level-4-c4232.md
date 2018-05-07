---
title: Compilatore avviso (livello 4) C4232 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4232
dev_langs:
- C++
helpviewer_keywords:
- C4232
ms.assetid: f92028a5-4ddd-43c1-97f5-4f724e5e14af
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 093f9eeeb27b402b58f3d53ae34952c34dca3779
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4232"></a>Avviso del compilatore (livello 4) C4232
utilizzata estensione non standard: 'identifier': l'indirizzo di dllimport 'dllimport' non è statico, identità non garantita  
  
 Nelle estensioni Microsoft (/Ze), è possibile assegnare un valore non statico come indirizzo di una funzione dichiarata con la **dllimport** modificatore. In compatibilità ANSI ([/Za](../../build/reference/za-ze-disable-language-extensions.md)), viene generato un errore.  
  
 L'esempio seguente genera l'errore C4232:  
  
```  
// C4232.c  
// compile with: /W4 /Ze /c  
int __declspec(dllimport) f();  
int (*pfunc)() = &f;   // C4232  
```