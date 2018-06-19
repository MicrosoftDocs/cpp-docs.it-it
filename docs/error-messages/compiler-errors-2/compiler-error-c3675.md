---
title: Errore del compilatore C3675 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3675
dev_langs:
- C++
helpviewer_keywords:
- C3675
ms.assetid: 87461613-6633-430b-b95d-c7cb1bb63776
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b4aaa53ae1d92364fad143f127ee3e7b504acdd
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33273644"
---
# <a name="compiler-error-c3675"></a>Errore del compilatore C3675
'function': è riservato perché 'property' è definito  
  
 Quando si dichiara una proprietà semplice, il compilatore genera get e set di metodi di accesso e quelle nomi sono presenti nell'ambito del programma.  I nomi generati dal compilatore sono formati anteponendo get _ and set _ al nome della proprietà.  Pertanto, è possibile dichiarare le funzioni con lo stesso nome come le funzioni di accesso generate dal compilatore.  
  
 Per altre informazioni, vedere [property](../../windows/property-cpp-component-extensions.md) .  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3675.  
  
```  
// C3675.cpp  
// compile with: /clr /c  
ref struct C {  
public:  
   property int Size;  
   int get_Size() { return 0; }   // C3675  
};  
```