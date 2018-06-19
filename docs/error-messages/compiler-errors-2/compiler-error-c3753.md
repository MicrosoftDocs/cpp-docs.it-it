---
title: Errore del compilatore C3753 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3753
dev_langs:
- C++
helpviewer_keywords:
- C3753
ms.assetid: a5b99e28-796c-4107-a673-97c2ae3bb2b9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b0d9cb2db2729e5ccb1787e2505fdf0aed1f7a12
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33271960"
---
# <a name="compiler-error-c3753"></a>Errore del compilatore C3753
proprietà generica non è consentita.  
  
 Elenchi di parametri generici possono apparire solo su funzioni, struct o classi gestite.  
  
 Per ulteriori informazioni, vedere [Generics](../../windows/generics-cpp-component-extensions.md) e [proprietà](../../windows/property-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3753.  
  
```  
// C3753.cpp  
// compile with: /clr /c  
ref struct A {  
   generic <typename T>  
   property int i;   // C3753 error  
};  
```