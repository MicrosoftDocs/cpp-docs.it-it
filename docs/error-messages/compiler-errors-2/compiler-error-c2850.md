---
title: Errore del compilatore C2850 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2850
dev_langs:
- C++
helpviewer_keywords:
- C2850
ms.assetid: f3efe86c-4168-4e76-a133-3f8314c69f51
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8e53f54aee2acdd163de0195c7475049fe2d6346
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33243970"
---
# <a name="compiler-error-c2850"></a>Errore del compilatore C2850
'construct': consentita solo in ambito file, potrebbe non essere in un costrutto annidato  
  
 Costrutti, ad esempio alcuni pragma, possono apparire solo in ambito globale.  
  
 L'esempio seguente genera l'errore C2850:  
  
```  
// C2850.cpp  
// compile with: /c /Yc  
// try the following line instead  
// #pragma hdrstop  
namespace X {  
   #pragma hdrstop   // C2850  
};  
```