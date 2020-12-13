---
description: 'Altre informazioni su: procedura: esporre un contenitore STL/CLR da un assembly'
title: 'Procedura: esporre un contenitore STL/CLR da un assembly'
ms.date: 11/04/2016
helpviewer_keywords:
- STL/CLR Containers [STL/CLR]
- STL/CLR, cross-assembly issues
ms.assetid: 87efb41b-3db3-4498-a2e7-f3ef8a99f04d
ms.openlocfilehash: a4ed92af956def030c80f8f303f0a7501c4944c6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134979"
---
# <a name="how-to-expose-an-stlclr-container-from-an-assembly"></a>Procedura: esporre un contenitore STL/CLR da un assembly

I contenitori STL/CLR come `list` e `map` vengono implementati come classi di riferimento del modello. Poiché i modelli C++ vengono creati in fase di compilazione, due classi modello con la stessa firma ma che si trovano in assembly diversi sono in realtà tipi diversi. Ciò significa che le classi modello non possono essere utilizzate tra i limiti dell'assembly.

Per consentire la condivisione tra assembly, i contenitori STL/CLR implementano l'interfaccia generica <xref:System.Collections.Generic.ICollection%601> . Utilizzando questa interfaccia generica, tutti i linguaggi che supportano i generics, inclusi C++, C# e Visual Basic, possono accedere ai contenitori STL/CLR.

In questo argomento viene illustrato come visualizzare gli elementi di diversi contenitori STL/CLR scritti in un assembly C++ denominato `StlClrClassLibrary` . Vengono mostrati due assembly a cui accedere `StlClrClassLibrary` . Il primo assembly è scritto in C++ e il secondo in C#.

Se entrambi gli assembly sono scritti in C++, è possibile accedere all'interfaccia generica di un contenitore usando il relativo `generic_container` typedef. Se, ad esempio, si dispone di un contenitore di tipo `cliext::vector<int>` , l'interfaccia generica è: `cliext::vector<int>::generic_container` . Analogamente, è possibile ottenere un iteratore sull'interfaccia generica usando il `generic_iterator` typedef, come in: `cliext::vector<int>::generic_iterator` .

Poiché questi typedef sono dichiarati in file di intestazione C++, gli assembly scritti in altri linguaggi non possono usarli. Pertanto, per accedere all'interfaccia generica per `cliext::vector<int>` in C# o qualsiasi altro linguaggio .NET, usare `System.Collections.Generic.ICollection<int>` . Per eseguire l'iterazione di questa raccolta, utilizzare un `foreach` ciclo.

La tabella seguente elenca l'interfaccia generica implementata da ogni contenitore STL/CLR:

|Contenitore STL/CLR|Interfaccia generica|
|------------------------|-----------------------|
|`deque<T>`|`ICollection<T>`|
|`hash_map<K, V>`|`IDictionary<K, V>`|
|`hash_multimap<K, V>`|`IDictionary<K, V>`|
|`hash_multiset<T>`|`ICollection<T>`|
|`hash_set<T>`|`ICollection<T>`|
|`list<T>`|`ICollection<T>`|
|`map<K, V>`|`IDictionary<K, V>`|
|`multimap<K, V>`|`IDictionary<K, V>`|
|`multiset<T>`|`ICollection<T>`|
|`set<T>`|`ICollection<T>`|
|`vector<T>`|`ICollection<T>`|

> [!NOTE]
> Poiché i `queue` `priority_queue` contenitori, e non supportano gli `stack` iteratori, non implementano interfacce generiche e non è possibile accedervi tra assembly.

## <a name="example-1"></a>Esempio 1

### <a name="description"></a>Description

In questo esempio viene dichiarata una classe C++ che contiene dati del membro STL/CLR privati. Si dichiarano quindi metodi pubblici per concedere l'accesso alle raccolte private della classe. Questa operazione viene eseguita in due modi diversi, uno per i client C++ e uno per altri client .NET.

### <a name="code"></a>Codice

```cpp
// StlClrClassLibrary.h
#pragma once

#include <cliext/deque>
#include <cliext/list>
#include <cliext/map>
#include <cliext/set>
#include <cliext/stack>
#include <cliext/vector>

using namespace System;
using namespace System::Collections::Generic;
using namespace cliext;

namespace StlClrClassLibrary {

    public ref class StlClrClass
    {
    public:
        StlClrClass();

        // These methods can be called by a C++ class
        // in another assembly to get access to the
        // private STL/CLR types defined below.
        deque<wchar_t>::generic_container ^GetDequeCpp();
        list<float>::generic_container ^GetListCpp();
        map<int, String ^>::generic_container ^GetMapCpp();
        set<double>::generic_container ^GetSetCpp();
        vector<int>::generic_container ^GetVectorCpp();

        // These methods can be called by a non-C++ class
        // in another assembly to get access to the
        // private STL/CLR types defined below.
        ICollection<wchar_t> ^GetDequeCs();
        ICollection<float> ^GetListCs();
        IDictionary<int, String ^> ^GetMapCs();
        ICollection<double> ^GetSetCs();
        ICollection<int> ^GetVectorCs();

    private:
        deque<wchar_t> ^aDeque;
        list<float> ^aList;
        map<int, String ^> ^aMap;
        set<double> ^aSet;
        vector<int> ^aVector;
    };
}
```

## <a name="example-2"></a>Esempio 2

### <a name="description"></a>Description

In questo esempio viene implementata la classe dichiarata nell'esempio 1. Per consentire ai client di utilizzare questa libreria di classi, viene utilizzato lo strumento manifesto **mt.exe** per incorporare il file manifesto nella dll. Per informazioni dettagliate, vedere i commenti del codice.

Per ulteriori informazioni sullo strumento Manifesto e sugli assembly affiancati, vedere [compilazione di applicazioni isolate C/C++ e assembly affiancati](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md).

### <a name="code"></a>Codice

```cpp
// StlClrClassLibrary.cpp
// compile with: /clr /LD /link /manifest
// post-build command: (attrib -r StlClrClassLibrary.dll & mt /manifest StlClrClassLibrary.dll.manifest /outputresource:StlClrClassLibrary.dll;#2 & attrib +r StlClrClassLibrary.dll)

#include "StlClrClassLibrary.h"

namespace StlClrClassLibrary
{
    StlClrClass::StlClrClass()
    {
        aDeque = gcnew deque<wchar_t>();
        aDeque->push_back(L'a');
        aDeque->push_back(L'b');

        aList = gcnew list<float>();
        aList->push_back(3.14159f);
        aList->push_back(2.71828f);

        aMap = gcnew map<int, String ^>();
        aMap[0] = "Hello";
        aMap[1] = "World";

        aSet = gcnew set<double>();
        aSet->insert(3.14159);
        aSet->insert(2.71828);

        aVector = gcnew vector<int>();
        aVector->push_back(10);
        aVector->push_back(20);
    }

    deque<wchar_t>::generic_container ^StlClrClass::GetDequeCpp()
    {
        return aDeque;
    }

    list<float>::generic_container ^StlClrClass::GetListCpp()
    {
        return aList;
    }

    map<int, String ^>::generic_container ^StlClrClass::GetMapCpp()
    {
        return aMap;
    }

    set<double>::generic_container ^StlClrClass::GetSetCpp()
    {
        return aSet;
    }

    vector<int>::generic_container ^StlClrClass::GetVectorCpp()
    {
        return aVector;
    }

    ICollection<wchar_t> ^StlClrClass::GetDequeCs()
    {
        return aDeque;
    }

    ICollection<float> ^StlClrClass::GetListCs()
    {
        return aList;
    }

    IDictionary<int, String ^> ^StlClrClass::GetMapCs()
    {
        return aMap;
    }

    ICollection<double> ^StlClrClass::GetSetCs()
    {
        return aSet;
    }

    ICollection<int> ^StlClrClass::GetVectorCs()
    {
        return aVector;
    }
}
```

## <a name="example-3"></a>Esempio 3

### <a name="description"></a>Description

In questo esempio viene creato un client C++ che usa la libreria di classi creata negli esempi 1 e 2. Questo client usa i `generic_container` typedef dei contenitori STL/CLR per scorrere i contenitori e visualizzarne il contenuto.

### <a name="code"></a>Codice

```cpp
// CppConsoleApp.cpp
// compile with: /clr /FUStlClrClassLibrary.dll

#include <cliext/deque>
#include <cliext/list>
#include <cliext/map>
#include <cliext/set>
#include <cliext/vector>

using namespace System;
using namespace StlClrClassLibrary;
using namespace cliext;

int main(array<System::String ^> ^args)
{
    StlClrClass theClass;

    Console::WriteLine("cliext::deque contents:");
    deque<wchar_t>::generic_container ^aDeque = theClass.GetDequeCpp();
    for each (wchar_t wc in aDeque)
    {
        Console::WriteLine(wc);
    }
    Console::WriteLine();

    Console::WriteLine("cliext::list contents:");
    list<float>::generic_container ^aList = theClass.GetListCpp();
    for each (float f in aList)
    {
        Console::WriteLine(f);
    }
    Console::WriteLine();

    Console::WriteLine("cliext::map contents:");
    map<int, String ^>::generic_container ^aMap = theClass.GetMapCpp();
    for each (map<int, String ^>::value_type rp in aMap)
    {
        Console::WriteLine("{0} {1}", rp->first, rp->second);
    }
    Console::WriteLine();

    Console::WriteLine("cliext::set contents:");
    set<double>::generic_container ^aSet = theClass.GetSetCpp();
    for each (double d in aSet)
    {
        Console::WriteLine(d);
    }
    Console::WriteLine();

    Console::WriteLine("cliext::vector contents:");
    vector<int>::generic_container ^aVector = theClass.GetVectorCpp();
    for each (int i in aVector)
    {
        Console::WriteLine(i);
    }
    Console::WriteLine();

    return 0;
}
```

### <a name="output"></a>Output

```Output
cliext::deque contents:
a
b

cliext::list contents:
3.14159
2.71828

cliext::map contents:
0 Hello
1 World

cliext::set contents:
2.71828
3.14159

cliext::vector contents:
10
20
```

## <a name="example-4"></a>Esempio 4

### <a name="description"></a>Description

In questo esempio viene creato un client C# che usa la libreria di classi creata negli esempi 1 e 2. Questo client usa i <xref:System.Collections.Generic.ICollection%601> metodi dei contenitori STL/CLR per scorrere i contenitori e visualizzarne il contenuto.

### <a name="code"></a>Codice

```csharp
// CsConsoleApp.cs
// compile with: /r:Microsoft.VisualC.STLCLR.dll /r:StlClrClassLibrary.dll /r:System.dll

using System;
using System.Collections.Generic;
using StlClrClassLibrary;
using cliext;

namespace CsConsoleApp
{
    class Program
    {
        static int Main(string[] args)
        {
            StlClrClass theClass = new StlClrClass();

            Console.WriteLine("cliext::deque contents:");
            ICollection<char> iCollChar = theClass.GetDequeCs();
            foreach (char c in iCollChar)
            {
                Console.WriteLine(c);
            }
            Console.WriteLine();

            Console.WriteLine("cliext::list contents:");
            ICollection<float> iCollFloat = theClass.GetListCs();
            foreach (float f in iCollFloat)
            {
                Console.WriteLine(f);
            }
            Console.WriteLine();

            Console.WriteLine("cliext::map contents:");
            IDictionary<int, string> iDict = theClass.GetMapCs();
            foreach (KeyValuePair<int, string> kvp in iDict)
            {
                Console.WriteLine("{0} {1}", kvp.Key, kvp.Value);
            }
            Console.WriteLine();

            Console.WriteLine("cliext::set contents:");
            ICollection<double> iCollDouble = theClass.GetSetCs();
            foreach (double d in iCollDouble)
            {
                Console.WriteLine(d);
            }
            Console.WriteLine();

            Console.WriteLine("cliext::vector contents:");
            ICollection<int> iCollInt = theClass.GetVectorCs();
            foreach (int i in iCollInt)
            {
                Console.WriteLine(i);
            }
            Console.WriteLine();

            return 0;
        }
    }
}
```

### <a name="output"></a>Output

```Output
cliext::deque contents:
a
b

cliext::list contents:
3.14159
2.71828

cliext::map contents:
0 Hello
1 World

cliext::set contents:
2.71828
3.14159

cliext::vector contents:
10
20
```

## <a name="see-also"></a>Vedi anche

[Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)
