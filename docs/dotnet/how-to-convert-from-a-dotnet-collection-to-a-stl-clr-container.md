---
title: 'Procedura: conversione da raccolta .NET a contenitore STL/CLR | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- STL/CLR, converting from .NET collections
- STL/CLR Containers [STL/CLR]
ms.assetid: bb927c48-78e8-4150-bd0b-787c651f4a87
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 8b6469c035a1f0daca5c789525778aab1119c9f6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33132801"
---
# <a name="how-to-convert-from-a-net-collection-to-a-stlclr-container"></a>Procedura: conversione da raccolta .NET a contenitore STL/CLR
In questo argomento viene illustrato come convertire le raccolte di .NET per i relativi contenitori STL/CLR equivalente. Ad esempio viene illustrato come convertire un .NET <xref:System.Collections.Generic.List%601> a un STL/CLR [vettore](../dotnet/vector-stl-clr.md) e su come convertire un .NET <xref:System.Collections.Generic.Dictionary%602> a un STL/CLR [mappa](../dotnet/map-stl-clr.md), ma la procedura è simile per tutte le raccolte e i contenitori .  
  
### <a name="to-create-a-container-from-a-collection"></a>Per creare un contenitore da una raccolta  
  
1.  Per convertire un'intera raccolta, creare un contenitore STL/CLR e passare insieme al costruttore.  
  
     Nel primo esempio viene illustrata questa procedura.  
  
 OPPURE  
  
1.  Creare un contenitore STL/CLR generico creando un [collection_adapter](../dotnet/collection-adapter-stl-clr.md) oggetto. Questa classe modello accetta un'interfaccia di raccolta .NET come argomento. Per verificare quali interfacce sono supportate, vedere [collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md).  
  
2.  Copiare il contenuto della raccolta .NET al contenitore. Questa operazione può essere eseguita tramite un STL/CLR [algoritmo](../dotnet/algorithm-stl-clr.md), o per scorrere la raccolta di .NET e l'inserimento di una copia di ogni elemento nel contenitore STL/CLR.  
  
     Nel secondo esempio viene illustrata questa procedura.  
  
## <a name="example"></a>Esempio  
 In questo esempio, si crea un oggetto generico <xref:System.Collections.Generic.List%601> e aggiungervi 5 elementi. Successivamente, verrà creata una `vector` utilizzando il costruttore che accetta un <xref:System.Collections.Generic.IEnumerable%601> come argomento.  
  
```  
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
  
## <a name="example"></a>Esempio  
 In questo esempio, si crea un oggetto generico <xref:System.Collections.Generic.Dictionary%602> e aggiungervi 5 elementi. Successivamente, verrà creata una `collection_adapter` per eseguire il wrapping di <xref:System.Collections.Generic.Dictionary%602> come un semplice contenitore STL/CLR. Infine, verrà creato un `map` e copiare il contenuto del <xref:System.Collections.Generic.Dictionary%602> per il `map` scorrendo la `collection_adapter`. Durante questo processo, è creare una nuova coppia utilizzando il `make_pair` funzione e inserire la nuova coppia direttamente nel `map`.  
  
```  
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
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)   
 [scheda (STL/CLR)](../dotnet/adapter-stl-clr.md)   
 [Procedura: Convertire da contenitore STL/CLR a raccolta di .NET](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)