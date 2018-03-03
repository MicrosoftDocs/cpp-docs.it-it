---
title: Avviso del compilatore C4957 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4957
dev_langs:
- C++
helpviewer_keywords:
- C4957
ms.assetid: a18c52d4-23e2-44f1-b4b5-f7fa5a7f3987
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e66a12210f9ff67cec922b172b3c7370ee49a952
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-c4957"></a>Avviso del compilatore C4957
'cast': cast esplicito da 'cast_from' a 'cast_to' non verificabile  
  
 Un cast genererà un'immagine non verificabile.  
  
 Alcuni cast sono sicuri, ad esempio un `static_cast` che attiva conversioni definite dall'utente e un `const_cast`. Un [safe_cast](../../windows/safe-cast-cpp-component-extensions.md) genera sicuramente codice verificabile.  
  
 Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
 Questo avviso viene generato come errore e può essere disabilitato tramite il pragma [warning](../../preprocessor/warning.md) o l'opzione del compilatore [/wd](../../build/reference/compiler-option-warning-level.md) .  
  
 L'esempio seguente genera l'errore C4957:  
  
```  
// C4957.cpp  
// compile with: /clr:safe  
// #pragma warning( disable : 4957 )  
using namespace System;  
int main() {  
   Object ^ o = "Hello, World!";  
   String ^ s = static_cast<String^>(o);   // C4957  
   String ^ s2 = safe_cast<String^>(o);   // OK  
}  
```