---
title: Errore del compilatore C3813 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3813
dev_langs: C++
helpviewer_keywords: C3813
ms.assetid: ffdbc489-71bf-4cd6-988c-f824c9ab3ceb
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7462e4ab8975c089561356ba555b0a4a544880af
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3813"></a>Errore del compilatore C3813
una dichiarazione di proprietà può apparire solo all'interno della definizione di un tipo gestito o WinRT  
  
Oggetto [proprietà](../../dotnet/how-to-use-properties-in-cpp-cli.md) possono essere dichiarati solo all'interno di un tipo gestito o Windows Runtime tipo. I tipi nativi non supportano la parola chiave `property`.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C3813 e mostra come risolverlo:  
  
```cpp  
// C3813.cpp  
// compile by using: cl /c /clr C3813.cpp  
class A  
{  
   property int Int; // C3813  
};  
  
ref class B  
{  
   property int Int; // OK - declared within managed type  
};  
```