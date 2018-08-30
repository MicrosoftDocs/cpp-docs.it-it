---
title: Errore del compilatore C2778 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2778
dev_langs:
- C++
helpviewer_keywords:
- C2778
ms.assetid: b24cb732-2914-42cc-8928-e2d87b393428
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d68180e2fc0c7c33e742f0ffdb3776baa50976f6
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43209713"
---
# <a name="compiler-error-c2778"></a>Errore del compilatore C2778
GUID in formato errato in __declspec(uuid())  
  
 Un GUID corretto viene fornito per il [uuid](../../cpp/uuid-cpp.md) attributi estesa.  
  
 Il GUID deve essere una stringa di numeri esadecimali con il formato seguente:  
  
```  
// C2778a.cpp  
// compile with: /c  
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {};  
struct __declspec(uuid("{00000000-0000-0000-0000-000000000000}")) B{};  
```  
  
 Il `uuid` attributi estesa accetta stringhe riconosciute dal [CLSIDFromString](/windows/desktop/api/combaseapi/nf-combaseapi-clsidfromstring), con o senza delimitatori parentesi graffa.  
  
 L'esempio seguente genera l'errore C2778:  
  
```  
// C2778b.cpp  
struct __declspec(uuid(" 00000000-0000-0000-0000-000000000000 ")) C { };   // C2778  
struct __declspec(uuid("00000000000000000000000000000000")) D { };   // C2778  
```