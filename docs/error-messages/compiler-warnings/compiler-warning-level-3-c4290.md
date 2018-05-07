---
title: Compilatore avviso (livello 3) C4290 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4290
dev_langs:
- C++
helpviewer_keywords:
- C4290
ms.assetid: d1c6d85b-28e0-4a1f-9d48-23593337a6fb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f03d35e1a3756979d8936647255e2b65afef56d9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-3-c4290"></a>Avviso del compilatore (livello 3) C4290
Specifica di eccezione C++ ignorata eccetto to indicare una funzione non è __declspec(nothrow)  
  
 Una funzione è dichiarata mediante la specifica di eccezione, che accetta Visual C++, ma non implementa. Il codice con eccezioni specifiche che vengono ignorate durante la compilazione potrebbero essere necessario ricompilare e collegati per essere riutilizzato nelle future versioni che supportano le specifiche di eccezione.  
  
 Per ulteriori informazioni, vedere [specifiche di eccezioni (generazione)](../../cpp/exception-specifications-throw-cpp.md) .  
  
 È possibile evitare questo avviso utilizzando il [avviso](../../preprocessor/warning.md) pragma:  
  
```  
#pragma warning( disable : 4290 )  
```  
  
 Esempio di codice seguente genera l'errore C4290:  
  
```  
// C4290.cpp  
// compile with: /EHs /W3 /c  
void f1(void) throw(int) {}   // C4290  
  
// OK  
void f2(void) throw() {}  
void f3(void) throw(...) {}  
```