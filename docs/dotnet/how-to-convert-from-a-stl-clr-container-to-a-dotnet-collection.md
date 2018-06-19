---
title: 'Procedura: conversione da contenitore STL/CLR a raccolta .NET | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- STL/CLR Containers [STL/CLR]
- STL/CLR, converting to .NET collections
ms.assetid: 70b2dfd9-869c-4e0f-9a29-b1ee0cb0d107
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 7fb4938121d1d2beed3133bee6013e17d37f1402
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33132008"
---
# <a name="how-to-convert-from-a-stlclr-container-to-a-net-collection"></a>Procedura: conversione da contenitore STL/CLR a raccolta di .NET
In questo argomento viene illustrato come convertire i contenitori STL/CLR per le raccolte .NET equivalente. Ad esempio, viene illustrato come convertire un STL/CLR [vettore](../dotnet/vector-stl-clr.md) per .NET <xref:System.Collections.Generic.ICollection%601> e su come convertire un STL/CLR [mappa](../dotnet/map-stl-clr.md) per .NET <xref:System.Collections.Generic.IDictionary%602>, ma la procedura è simile per tutte le raccolte e contenitori.  
  
### <a name="to-create-a-collection-from-a-container"></a>Per creare una raccolta da un contenitore  
  
1.  Utilizzare uno dei metodi seguenti:  
  
    -   Per convertire una parte di un contenitore, chiamare il [make_collection](../dotnet/make-collection-stl-clr.md) funzione e passare l'iteratore begin e l'iteratore di fine del contenitore STL/CLR da copiare nella raccolta .NET. Questa funzione di modello ha un iteratore STL/CLR come argomento di modello. Nel primo esempio viene illustrato questo metodo.  
  
    -   Per convertire un intero contenitore, eseguire il cast del contenitore su un'interfaccia di raccolta .NET appropriata o una raccolta di interfaccia. Nel secondo esempio viene illustrato questo metodo.  
  
## <a name="example"></a>Esempio  
 In questo esempio, si crea un STL/CLR `vector` e aggiungervi 5 elementi. Successivamente verrà creata una raccolta .NET chiamando il `make_collection` (funzione). Infine, viene visualizzato il contenuto della raccolta appena creato.  
  
```  
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
 In questo esempio, si crea un STL/CLR `map` e aggiungervi 5 elementi. Quindi, vengono create .NET <xref:System.Collections.Generic.IDictionary%602> e assegnare il `map` direttamente. Infine, viene visualizzato il contenuto della raccolta appena creato.  
  
```  
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
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)   
 [Procedura: conversione da raccolta .NET a contenitore STL/CLR](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)   
 [range_adapter (STL/CLR)](../dotnet/range-adapter-stl-clr.md)