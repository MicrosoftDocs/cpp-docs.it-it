---
title: Errore del compilatore C2461 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2461
dev_langs: C++
helpviewer_keywords: C2461
ms.assetid: e64ba651-f441-4fdb-b5cb-4209bbbe4db4
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0e5e1593e37bd3a02897d023e308593e23d3d73b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2461"></a>Errore del compilatore C2461
  
> '*classe*': la sintassi del costruttore priva di parametri formali  
  
 Il costruttore per la classe non specifica alcun parametro formale. La dichiarazione di un costruttore deve specificare un elenco di parametri formali. L'elenco può essere vuoto.  
  
Per risolvere questo problema, aggiungere una coppia di parentesi dopo la dichiarazione di *classe*:: **classe*.  
  
## <a name="example"></a>Esempio  
  
L'esempio seguente viene illustrato come correggere C2461:  
  
```cpp  
// C2461.cpp  
// compile with: /c  
class C {  
   C::C;     // C2461  
   C::C();   // OK  
};  
```