---
title: Errore del compilatore C3369 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3369
dev_langs:
- C++
helpviewer_keywords:
- C3369
ms.assetid: c6ceb9cb-3df9-4334-9a5c-d16db351d476
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a15a8e52b7bf311f20883c6ebc5635e86c6a7ffd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33248714"
---
# <a name="compiler-error-c3369"></a>Errore del compilatore C3369
'module name': idl_module già definito  
  
 L'oggetto [idl_module](../../windows/idl-module.md) in cui è stata definita la DLL può essere usato una sola volta in un programma.  
  
 L'esempio seguente genera l'errore C3369:  
  
```  
// C3369.cpp  
// compile with: /c  
[idl_module(name="name1", dllname="x.dll")]; // C3369  
[idl_module(name="name1", dllname="x.dll")];  
```