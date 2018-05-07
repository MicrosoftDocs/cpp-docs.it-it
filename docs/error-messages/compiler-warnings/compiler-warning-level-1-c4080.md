---
title: Compilatore avviso (livello 1) C4080 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4080
dev_langs:
- C++
helpviewer_keywords:
- C4080
ms.assetid: 964fb3f4-b9fd-450b-aa23-35cece126172
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ae964b4ae4b67cbcbd85dac56eddac0c03370f6d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4080"></a>Avviso del compilatore (livello 1) C4080
previsto identificatore per il nome del segmento. Trovato 'simbolo'  
  
 Il nome del segmento in [#pragma alloc_text](../../preprocessor/alloc-text.md) deve essere una stringa o un identificatore. Il compilatore ignora la direttiva pragma se non viene trovato un identificatore valido.  
  
 L'esempio seguente genera l'errore C4080:  
  
```  
// C4080.cpp  
// compile with: /W1  
extern "C" void func(void);  
  
#pragma alloc_text()   // C4080  
  
// try this line to resolve the warning  
// #pragma alloc_text("mysection", func)  
  
int main() {  
}  
  
void func(void) {  
}  
```