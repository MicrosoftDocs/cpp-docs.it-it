---
title: Scorrere la raccolta di librerie Standard C++ tramite for each | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- DTL collections, iterating over
ms.assetid: 9358ca29-b982-4a19-bbfd-bef50fe66c9a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 92934e3f00bb34e6adfe101b0fea7abbe03600c2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46383196"
---
# <a name="iterating-over-c-standard-library-collection-by-using-for-each"></a>Scorrere la raccolta di librerie Standard C++ tramite for each

Il `for each` parola chiave può essere utilizzato per scorrere una raccolta della libreria Standard C++.

## <a name="all-platforms"></a>Tutte le piattaforme

Una raccolta della libreria Standard C++ è nota anche come un *contenitore*. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

## <a name="examples"></a>Esempi

Il codice seguente viene illustrato come utilizzare `for each` per eseguire l'iterazione su una [ \<mappa >](../standard-library/map.md).

```cpp
// for_each_stl.cpp
// compile with: /EHsc
#include <map>
#include <iostream>
#include <string>
using namespace std;

int main() {
   int retval  = 0;
   map<string, int> months;

   months["january"] = 31;
   months["february"] = 28;
   months["march"] = 31;
   months["april"] = 30;
   months["may"] = 31;
   months["june"] = 30;
   months["july"] = 31;
   months["august"] = 31;
   months["september"] = 30;
   months["october"] = 31;
   months["november"] = 30;
   months["december"] = 31;

   map<string, int> months_30;

   for each( pair<string, int> c in months )
      if ( c.second == 30 )
         months_30[c.first] = c.second;

   for each( pair<string, int> c in months_30 )
      retval++;

   cout << "Months with 30 days = " << retval << endl;
}
```

### <a name="output"></a>Output

```Output
Months with 30 days = 4
```

## <a name="example"></a>Esempio

L'esempio di codice seguente usa un riferimento const (`const&`) per una variabile di iterazione con i contenitori della libreria Standard C++. È possibile usare un riferimento (`&`) come una variabile di iterazione in qualsiasi raccolta di un tipo che può essere dichiarato come un *T*`&`.

```cpp
// for_each_stl_2.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>
using namespace std;

int main() {
   int retval = 0;

   vector<int> col(3);
   col[0] = 10;
   col[1] = 20;
   col[2] = 30;

   for each( const int& c in col )
      retval += c;

   cout << "retval: " << retval << endl;
}
```

### <a name="output"></a>Output

```Output
retval: 60
```

## <a name="windows-runtime"></a>Windows Runtime

Non esistono note specifiche della piattaforma su questa funzionalità.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/ZW**

## <a name="common-language-runtime"></a>Common Language Runtime

Non esistono note specifiche della piattaforma su questa funzionalità.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: **/clr**

## <a name="see-also"></a>Vedere anche

[for each, in](../dotnet/for-each-in.md)<br/>
[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)