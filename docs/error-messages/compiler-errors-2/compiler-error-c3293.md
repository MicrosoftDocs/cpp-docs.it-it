---
title: Errore del compilatore C3293 | Documenti Microsoft
ms.custom: 
ms.date: 07/21/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3293
dev_langs: C++
helpviewer_keywords: C3293
ms.assetid: b772cf98-52e0-4e24-be23-1f5d87d999ac
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ccf6bd08b1ca540fcdf46d18631e0ab11c7fe4f6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3293"></a>Errore del compilatore C3293
'accessor': usare 'default' per accedere alla proprietà predefinita (indexer) per la classe 'type'  
  
 L'accesso a una proprietà indicizzata non è stato eseguito correttamente.  Vedere [procedura: utilizzare le proprietà in C + + CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md) per ulteriori informazioni.  

 **2017 e versioni successiva di Visual Studio**: In Visual Studio 2015 e versioni precedente, in alcuni casi il compilatore misidentified una proprietà predefinita come un indicizzatore predefinito. È stato possibile risolvere il problema usando l'identificatore "default" per accedere alla proprietà. Questa soluzione è diventata problematica dopo che il termine "default" è stato introdotto come parola chiave in C++11. Pertanto, in Visual Studio 2017 sono stati corretti i bug che richiedevano la soluzione e il compilatore genera ora un errore quando si usa "default" per accedere alla proprietà predefinita per una classe.
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3293 in Visual Studio 2015 e versioni precedenti.  
  
```  
// C3293.cpp  
// compile with: /clr /c  
using namespace System;  
ref class IndexerClass {  
public:  
   // default indexer  
   property int default[int] {  
      int get(int index) { return 0; }  
      void set(int index, int value) {}  
   }  
};  
  
int main() {  
   IndexerClass ^ ic = gcnew IndexerClass;  
   ic->Item[0] = 21;   // C3293 in VS2015 OK in VS2017
   ic->default[0] = 21;   // OK in VS2015 and earlier
  
   String ^s = "Hello";  
   wchar_t wc = s->Chars[0];   // C3293 in VS2015 OK in VS2017
   wchar_t wc2 = s->default[0];   // OK in VS2015 and earlier  
   Console::WriteLine(wc2);  
}  
```