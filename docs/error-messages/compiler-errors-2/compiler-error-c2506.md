---
title: Errore del compilatore C2506 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2506
dev_langs:
- C++
helpviewer_keywords:
- C2506
ms.assetid: cfed21cd-2404-46f2-985e-d0c2c3820830
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9d084e04e90c7fce9756e72a8b19d566ee829287
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2506"></a>Errore del compilatore C2506
'member': '__declspec(modifier)' non è possibile applicare a questo simbolo  
  
 È possibile dichiarare per processo o per dominio di applicazione per i membri statici di una classe gestita.  
  
 Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) .  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2506.  
  
```  
// C2506.cpp  
// compile with: /clr /c  
ref struct R {  
   __declspec(process) static int n;   // C2506  
   int o;   // OK  
};  
```