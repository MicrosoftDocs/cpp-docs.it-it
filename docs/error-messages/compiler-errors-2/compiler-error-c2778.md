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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2ce6c780db1442ec254e9b7b9875c9050ef39ef8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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