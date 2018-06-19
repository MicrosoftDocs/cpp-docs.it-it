---
title: Errore del compilatore C2238 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2238
dev_langs:
- C++
helpviewer_keywords:
- C2238
ms.assetid: 3d53060c-d6b7-4603-b9cf-d7c65eb64cd2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e8fd26a27d79860166b5a4268c330a0338a05a17
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33167203"
---
# <a name="compiler-error-c2238"></a>Errore del compilatore C2238
token imprevisti prima di 'token'  
  
 È stato trovato un token non corretto.  
  
 L'esempio seguente genera l'errore C2238:  
  
```  
// C2238.cpp  
// compile with: /c  
class v {  
virtual: int vvv;   // C2238  
};  
```