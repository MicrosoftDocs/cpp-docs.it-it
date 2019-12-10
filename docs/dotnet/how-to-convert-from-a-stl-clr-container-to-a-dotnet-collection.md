---
title: 'Procedura: conversione da contenitore STL/CLR a raccolta di .NET'
ms.date: 11/04/2016
helpviewer_keywords:
- STL/CLR Containers [STL/CLR]
- STL/CLR, converting to .NET collections
ms.assetid: 70b2dfd9-869c-4e0f-9a29-b1ee0cb0d107
ms.openlocfilehash: f7539b10ca6c503aede61d19de3d14fb9dcee8be
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988521"
---
# <a name="how-to-convert-from-a-stlclr-container-to-a-net-collection"></a>Procedura: conversione da contenitore STL/CLR a raccolta di .NET

In questo argomento viene illustrato come convertire i contenitori STL/CLR nelle raccolte .NET equivalenti. Come esempio, viene illustrato come convertire un [vettore](../dotnet/vector-stl-clr.md) STL/CLR in un <xref:System.Collections.Generic.ICollection%601> .NET e come convertire un [mapping](../dotnet/map-stl-clr.md) STL/CLR in una <xref:System.Collections.Generic.IDictionary%602>.NET, ma la procedura è simile per tutte le raccolte e i contenitori.

### <a name="to-create-a-collection-from-a-container"></a>Per creare una raccolta da un contenitore

1. Utilizzare uno dei metodi seguenti:

   - Per convertire parte di un contenitore, chiamare la funzione [make_collection](../dotnet/make-collection-stl-clr.md) e passare l'iteratore Begin e l'iteratore finale del contenitore STL/CLR da copiare nella raccolta .NET. Questa funzione di modello accetta un iteratore STL/CLR come argomento di modello. Nel primo esempio viene illustrato questo metodo.

   - Per convertire un intero contenitore, eseguire il cast del contenitore in una raccolta di interfacce o interfaccia di raccolta .NET appropriata. Nel secondo esempio viene illustrato questo metodo.

## <a name="example"></a>Esempio

In questo esempio viene creato un `vector` STL/CLR e vengono aggiunti 5 elementi. Viene quindi creata una raccolta .NET chiamando la funzione `make_collection`. Infine, viene visualizzato il contenuto della raccolta appena creata.

```cpp
// cliext_convert_vector_to_icollection.cpp
// compile with: /clr

#include <cliext/adapter>
#include <cliext/vector>

using namespace cliext;
using namespace System;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    cliext::vector<int> primeNumbersCont;
    primeNumbersCont.push_back(2);
    primeNumbersCont.push_back(3);
    primeNumbersCont.push_back(5);
    primeNumbersCont.push_back(7);
    primeNumbersCont.push_back(11);

    System::Collections::Generic::ICollection<int> ^iColl =
        make_collection<cliext::vector<int>::iterator>(
            primeNumbersCont.begin() + 1,
            primeNumbersCont.end() - 1);

    Console::WriteLine("The contents of the System::Collections::Generic::ICollection are:");
    for each (int i in iColl)
    {
        Console::WriteLine(i);
    }
}
```

```Output
The contents of the System::Collections::Generic::ICollection are:
3
5
7
```

## <a name="example"></a>Esempio

In questo esempio viene creato un `map` STL/CLR e vengono aggiunti 5 elementi. Viene quindi creata una <xref:System.Collections.Generic.IDictionary%602> .NET e viene assegnata direttamente la `map`. Infine, viene visualizzato il contenuto della raccolta appena creata.

```cpp
// cliext_convert_map_to_idictionary.cpp
// compile with: /clr

#include <cliext/adapter>
#include <cliext/map>

using namespace cliext;
using namespace System;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    cliext::map<float, int> ^aMap = gcnew cliext::map<float, int>;
    aMap->insert(cliext::make_pair<float, int>(42.0, 42));
    aMap->insert(cliext::make_pair<float, int>(13.0, 13));
    aMap->insert(cliext::make_pair<float, int>(74.0, 74));
    aMap->insert(cliext::make_pair<float, int>(22.0, 22));
    aMap->insert(cliext::make_pair<float, int>(0.0, 0));

    System::Collections::Generic::IDictionary<float, int> ^iDict = aMap;

    Console::WriteLine("The contents of the IDictionary are:");
    for each (KeyValuePair<float, int> ^kvp in iDict)
    {
        Console::WriteLine("Key: {0:F} Value: {1}", kvp->Key, kvp->Value);
    }
}
```

```Output
The contents of the IDictionary are:
Key: 0.00 Value: 0
Key: 13.00 Value: 13
Key: 22.00 Value: 22
Key: 42.00 Value: 42
Key: 74.00 Value: 74
```

## <a name="see-also"></a>Vedere anche

[Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)<br/>
[Procedura: Convertire da una raccolta .NET a un contenitore STL/CLR](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)<br/>
[range_adapter (STL/CLR)](../dotnet/range-adapter-stl-clr.md)
