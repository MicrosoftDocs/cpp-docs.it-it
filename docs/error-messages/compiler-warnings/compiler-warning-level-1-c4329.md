---
title: Compilatore avviso (livello 1) C4329 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4329
dev_langs:
- C++
helpviewer_keywords:
- C4329
ms.assetid: 4316f51a-2c56-4b3f-831e-65d24b83b65c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f7eca757f361acaa0aeaf90332d33400f5a0ba6d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4329"></a>Avviso del compilatore (livello 1) C4329
è stato ignorato nell'enumerazione __declspec(Align())  
  
 Utilizzare il [allineare](../../cpp/align-cpp.md) parola chiave di [declspec](../../cpp/declspec.md) modificatore non consentito in un `enum`. L'esempio seguente genera l'errore C4329:  
  
```  
// C4329.cpp  
// compile with: /W1 /LD  
enum __declspec(align(256)) TestEnum {   // C4329  
   TESTVAL1,  
   TESTVAL2,  
   TESTVAL3  
};  
__declspec(align(256)) enum TestEnum1;  
```