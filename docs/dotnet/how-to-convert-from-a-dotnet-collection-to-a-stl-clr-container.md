---
description: 'Altre informazioni su: procedura: eseguire la conversione da una raccolta .NET a un contenitore STL/CLR'
title: 'Procedura: conversione da raccolta .NET a contenitore STL/CLR'
ms.date: 11/04/2016
helpviewer_keywords:
- STL/CLR, converting from .NET collections
- STL/CLR Containers [STL/CLR]
ms.assetid: bb927c48-78e8-4150-bd0b-787c651f4a87
ms.openlocfilehash: ba3e4ce6b9d7bd1c5da373c6eb545eb8167942b6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97268392"
---
# <a name="how-to-convert-from-a-net-collection-to-a-stlclr-container"></a>Procedura: conversione da raccolta .NET a contenitore STL/CLR

In questo argomento viene illustrato come convertire le raccolte .NET nei contenitori STL/CLR equivalenti. Come esempio viene illustrato come convertire un oggetto .NET <xref:System.Collections.Generic.List%601> in un [vettore](../dotnet/vector-stl-clr.md) STL/CLR e come convertire .NET <xref:System.Collections.Generic.Dictionary%602> in una [mappa](../dotnet/map-stl-clr.md)STL/CLR, ma la procedura è simile per tutte le raccolte e i contenitori.

### <a name="to-create-a-container-from-a-collection"></a>Per creare un contenitore da una raccolta

1. Per convertire un'intera raccolta, creare un contenitore STL/CLR e passare la raccolta al costruttore.

   Nel primo esempio viene illustrata questa procedura.

-OPPURE-

1. Creare un contenitore STL/CLR generico creando un oggetto [collection_adapter](./adapter-stl-clr.md#collection_adapter) . Questa classe modello accetta un'interfaccia di raccolta .NET come argomento. Per verificare quali interfacce sono supportate, vedere [collection_adapter (STL/CLR)](./adapter-stl-clr.md#collection_adapter).

1. Copiare il contenuto della raccolta .NET nel contenitore. Questa operazione può essere eseguita usando un [algoritmo](../dotnet/algorithm-stl-clr.md)STL/CLR oppure eseguendo l'iterazione sulla raccolta .NET e inserendo una copia di ogni elemento nel contenitore STL/CLR.

   Nel secondo esempio viene illustrata questa procedura.

## <a name="examples"></a>Esempio

In questo esempio viene creato un oggetto generico a cui vengono <xref:System.Collections.Generic.List%601> aggiunti 5 elementi. Si crea quindi un oggetto `vector` usando il costruttore che accetta <xref:System.Collections.Generic.IEnumerable%601> come argomento.

```cpp
// cliext_convert_list_to_vector.cpp
// compile with: /clr

#include <cliext/adapter>
#include <cliext/algorithm>
#include <cliext/vector>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    List<int> ^primeNumbersColl = gcnew List<int>();
    primeNumbersColl->Add(2);
    primeNumbersColl->Add(3);
    primeNumbersColl->Add(5);
    primeNumbersColl->Add(7);
    primeNumbersColl->Add(11);

    cliext::vector<int> ^primeNumbersCont =
        gcnew cliext::vector<int>(primeNumbersColl);

    Console::WriteLine("The contents of the cliext::vector are:");
    cliext::vector<int>::const_iterator it;
    for (it = primeNumbersCont->begin(); it != primeNumbersCont->end(); it++)
    {
        Console::WriteLine(*it);
    }
}
```

```Output
The contents of the cliext::vector are:
2
3
5
7
11
```

In questo esempio viene creato un oggetto generico a cui vengono <xref:System.Collections.Generic.Dictionary%602> aggiunti 5 elementi. Viene quindi creato un oggetto `collection_adapter` per eseguire il wrapping di <xref:System.Collections.Generic.Dictionary%602> come semplice contenitore STL/CLR. Infine, viene creato un oggetto `map` e viene copiato il contenuto di nell' <xref:System.Collections.Generic.Dictionary%602> oggetto `map` eseguendo l'iterazione su `collection_adapter` . Durante questo processo, viene creata una nuova coppia usando la `make_pair` funzione e viene inserita la nuova coppia direttamente in `map` .

```cpp
// cliext_convert_dictionary_to_map.cpp
// compile with: /clr

#include <cliext/adapter>
#include <cliext/algorithm>
#include <cliext/map>

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    System::Collections::Generic::Dictionary<float, int> ^dict =
        gcnew System::Collections::Generic::Dictionary<float, int>();
    dict->Add(42.0, 42);
    dict->Add(13.0, 13);
    dict->Add(74.0, 74);
    dict->Add(22.0, 22);
    dict->Add(0.0, 0);

    cliext::collection_adapter<System::Collections::Generic::IDictionary<float, int>> dictAdapter(dict);
    cliext::map<float, int> aMap;
    for each (KeyValuePair<float, int> ^kvp in dictAdapter)
    {
        cliext::pair<float, int> aPair = cliext::make_pair(kvp->Key, kvp->Value);
        aMap.insert(aPair);
    }

    Console::WriteLine("The contents of the cliext::map are:");
    cliext::map<float, int>::const_iterator it;
    for (it = aMap.begin(); it != aMap.end(); it++)
    {
        Console::WriteLine("Key: {0:F} Value: {1}", it->first, it->second);
    }
}
```

```Output
The contents of the cliext::map are:
Key: 0.00 Value: 0
Key: 13.00 Value: 13
Key: 22.00 Value: 22
Key: 42.00 Value: 42
Key: 74.00 Value: 74
```

## <a name="see-also"></a>Vedi anche

[Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)<br/>
[adapter (STL/CLR)](../dotnet/adapter-stl-clr.md)<br/>
[Procedura: eseguire la conversione da un contenitore STL/CLR a una raccolta .NET](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)
