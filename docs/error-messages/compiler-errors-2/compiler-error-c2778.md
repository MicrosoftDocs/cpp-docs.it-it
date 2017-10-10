---
title: Errore del compilatore C2778 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2778
dev_langs:
- C++
helpviewer_keywords:
- C2778
ms.assetid: b24cb732-2914-42cc-8928-e2d87b393428
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: d3801f7ddef23f90a76007a09fdc7a2d552b7fdb
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2778"></a>Errore del compilatore C2778
GUID di formato non corretto in __declspec(uuid())  
  
 Viene fornito un GUID non corretto per il [uuid](../../cpp/uuid-cpp.md) degli attributi estesa.  
  
 Il GUID deve essere una stringa di numeri esadecimali con il formato seguente:  
  
```  
// C2778a.cpp  
// compile with: /c  
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {};  
struct __declspec(uuid("{00000000-0000-0000-0000-000000000000}")) B{};  
```  
  
 Il `uuid` attributo esteso accetta le stringhe riconosciute da [CLSIDFromString](http://msdn.microsoft.com/library/windows/desktop/ms680589), con o senza delimitatori di parentesi graffe.  
  
 L'esempio seguente genera l'errore C2778:  
  
```  
// C2778b.cpp  
struct __declspec(uuid(" 00000000-0000-0000-0000-000000000000 ")) C { };   // C2778  
struct __declspec(uuid("00000000000000000000000000000000")) D { };   // C2778  
```
