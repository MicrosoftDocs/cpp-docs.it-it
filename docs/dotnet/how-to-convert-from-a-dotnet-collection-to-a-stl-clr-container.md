---
title: "Procedura: conversione da raccolta .NET a contenitore STL/CLR | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori STL/CLR [STL/CLR]"
  - "STL/CLR, conversione da raccolte di .NET"
ms.assetid: bb927c48-78e8-4150-bd0b-787c651f4a87
caps.latest.revision: 9
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: conversione da raccolta .NET a contenitore STL/CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come convertire le raccolte.NET nei contenitori dell'equivalente STL\/CLR.  Come esempio indicati come convertire un <xref:System.Collections.Generic.List%601>.NET in STL\/CLR [vettore](../dotnet/vector-stl-clr.md) e come convertire un <xref:System.Collections.Generic.Dictionary%602>.NET in STL\/CLR [mappa](../dotnet/map-stl-clr.md), ma la procedura è simile per tutte le raccolte e contenitori.  
  
### Per creare un contenitore da una raccolta  
  
1.  Per convertire l'intera raccolta, creare un contenitore di STL\/CLR e passare la raccolta al costruttore.  
  
     Il primo esempio viene illustrata questa procedura.  
  
 \-oppure\-  
  
1.  Creare un contenitore generico di STL\/CLR creando un oggetto di [collection\_adapter](../dotnet/collection-adapter-stl-clr.md).  Questa classe modello accetta un'interfaccia di raccolte di .NET come argomento.  Per verificare le interfacce sono supportate, vedere [collection\_adapter](../dotnet/collection-adapter-stl-clr.md).  
  
2.  Copiare il contenuto della raccolta .NET al contenitore.  Questa operazione può essere eseguita utilizzando uno STL\/CLR [algoritmo](../dotnet/algorithm-stl-clr.md), oppure mediante scorrere la raccolta di .NET e inserire la copia di ogni elemento nella casella STL\/CLR.  
  
     Nel secondo esempio viene illustrata questa procedura.  
  
## Esempio  
 In questo esempio, viene creata <xref:System.Collections.Generic.List%601> generico e viene aggiunto a 5 elementi.  Successivamente, viene creata `vector` utilizzando il costruttore che accetta <xref:System.Collections.Generic.IEnumerable%601> come argomento.  
  
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
  
  **Il contenuto del cliext::vector è:**  
**2**  
**3**  
**5**  
**7**  
**11**   
## Esempio  
 In questo esempio, viene creata <xref:System.Collections.Generic.Dictionary%602> generico e viene aggiunto a 5 elementi.  Successivamente, viene creata `collection_adapter` per eseguire il wrapping <xref:System.Collections.Generic.Dictionary%602> come contenitore semplice di STL\/CLR.  Infine, viene creata `map` e copiamo il contenuto di <xref:System.Collections.Generic.Dictionary%602> a `map` scorrendo `collection_adapter`.  Durante questo processo, viene creata una nuova coppia utilizzando la funzione di `make_pair` e inserire la nuova coppia direttamente in `map`.  
  
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
  
  **Il contenuto del cliext::map è:**  
**Key: 0.00 Value: 0**  
**Key: 13.00 Value: 13**  
**Key: 22.00 Value: 22**  
**Key: 42.00 Value: 42**  
**Key: 74.00 Value: 74**   
## Vedere anche  
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)   
 [adapter](../dotnet/adapter-stl-clr.md)   
 [Procedura: conversione da contenitore STL\/CLR a raccolta .NET](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)