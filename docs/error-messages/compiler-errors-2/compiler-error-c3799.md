---
title: Errore del compilatore C3799 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3799
dev_langs: C++
helpviewer_keywords: C3799
ms.assetid: 336a2811-9370-4e6e-b03b-325bda470805
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c1cc0e61b2d9c64190f808ccfa4bfda2bca434e2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3799"></a>Errore del compilatore C3799
proprietà indicizzata non può avere un elenco di parametri vuoto  
  
Una proprietà indicizzata è stata dichiarata in modo non corretto. Per ulteriori informazioni, vedere [procedura: utilizzare le proprietà in C + + CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C3799 e Mostra come risolverlo.  
  
```cpp  
// C3799.cpp  
// compile with: /clr /c  
ref struct C {  
   property int default[] {   // C3799  
   // try the following line instead  
   // property int default[int] {  
      int get(int index) { return 0; }  
      void set(int index, int value) {}  
   }  
};  
```