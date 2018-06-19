---
title: Compilatore avviso (livello 4) C4634 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4634
dev_langs:
- C++
helpviewer_keywords:
- C4634
ms.assetid: 3e3496ce-2ac7-43d0-a48a-f514c950e81d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7b19a4d0cbbb7b2b8fce0035698add596a445d3c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33299770"
---
# <a name="compiler-warning-level-4-c4634"></a>Avviso del compilatore (livello 4) C4634
commento al documento XML: impossibile applicare: motivo  
  
 Non è possibile applicare i tag della documentazione XML a tutti i costrutti C++.  Ad esempio, non è possibile aggiungere un commento relativo alla documentazione a uno spazio dei nomi o a un modello.  
  
 Per altre informazioni, vedere [XML Documentation](../../ide/xml-documentation-visual-cpp.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4634.  
  
```  
// C4634.cpp  
// compile with: /W4 /doc /c  
/// This is a namespace.   // C4634  
namespace hello {  
   class MyClass  {};  
};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4634.  
  
```  
// C4634_b.cpp  
// compile with: /W4 /doc /c  
/// This is a template.   // C4634  
template <class T>  
class MyClass  {};  
```