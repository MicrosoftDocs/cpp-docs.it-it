---
description: 'Altre informazioni su: errore del compilatore C3293'
title: Errore del compilatore C3293
ms.date: 07/21/2017
f1_keywords:
- C3293
helpviewer_keywords:
- C3293
ms.assetid: b772cf98-52e0-4e24-be23-1f5d87d999ac
ms.openlocfilehash: 5ba4256997eed12d3a380d5f3a4d1876da75fb8c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97144638"
---
# <a name="compiler-error-c3293"></a>Errore del compilatore C3293

'accessor': usare 'default' per accedere alla proprietà predefinita (indexer) per la classe 'type'

L'accesso a una proprietà indicizzata non è stato eseguito correttamente.  Per altre informazioni [, vedere Procedura: usare le proprietà in C++/CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md) .

**Visual studio 2017 e versioni successive**: in visual studio 2015 e versioni precedenti, il compilatore in alcuni casi ha identificato erroneamente una proprietà predefinita come indicizzatore predefinito. È stato possibile risolvere il problema usando l'identificatore "default" per accedere alla proprietà. Questa soluzione è diventata problematica dopo che il termine "default" è stato introdotto come parola chiave in C++11. Pertanto, in Visual Studio 2017 sono stati corretti i bug che richiedevano la soluzione e il compilatore genera ora un errore quando si usa "default" per accedere alla proprietà predefinita per una classe.

## <a name="example"></a>Esempio

L'esempio seguente genera C3293 in Visual Studio 2015 e versioni precedenti.

```cpp
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
