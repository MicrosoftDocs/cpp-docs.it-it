---
title: Errore del compilatore C3453 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3453
dev_langs:
- C++
helpviewer_keywords:
- C3453
ms.assetid: dbefdbcf-f697-4239-b7a5-1d99b85e9e7f
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a9dfd380a55d9233d0b421372e65fc3331c49cc9
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3453"></a>Errore del compilatore C3453
'attribute': attributo non applicato per mancata corrispondenza del qualificatore 'assembly'  
  
 Gli attributi a livello di assembly o di modulo possono essere specificati solo come istruzioni autonome.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3453.  
  
```  
// C3453.cpp  
// compile with: /clr /c  
[assembly:System::CLSCompliant(true)]   // C3453  
// try the following line instead  
// [assembly:System::CLSCompliant(true)];  
ref class X {};  
```
