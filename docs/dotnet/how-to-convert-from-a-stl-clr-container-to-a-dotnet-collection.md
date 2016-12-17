---
title: "Procedura: conversione da contenitore STL/CLR a raccolta .NET | Microsoft Docs"
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
  - "STL/CLR, conversione in raccolte di .NET"
ms.assetid: 70b2dfd9-869c-4e0f-9a29-b1ee0cb0d107
caps.latest.revision: 8
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: conversione da contenitore STL/CLR a raccolta .NET
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato come convertire i contenitori di STL\/CLR nelle raccolte equivalente .NET.  Ad esempio, indicati come convertire uno STL\/CLR [vettore](../dotnet/vector-stl-clr.md) in .NET <xref:System.Collections.Generic.ICollection%601> e come convertire uno STL\/CLR [mappa](../dotnet/map-stl-clr.md) in .NET <xref:System.Collections.Generic.IDictionary%602>, ma la procedura è simile per tutte le raccolte e contenitori.  
  
### Per creare una raccolta da un contenitore  
  
1.  Utilizzare uno dei metodi seguenti:  
  
    -   Per convertire parte di un contenitore, chiamare la funzione di [make\_collection](../dotnet/make-collection-stl-clr.md) e passare l'iteratore di inizio e di fine iteratore del contenitore di STL\/CLR da copiare nella raccolta.NET.  Questa funzione modello accetta un iteratore di STL\/CLR come argomento di modello.  Il primo esempio seguente viene illustrato questo metodo.  
  
    -   Per convertire un intero contenitore, eseguire il cast del contenitore a una raccolta appropriata dell'interfaccia di raccolta o di un'interfaccia.NET.  Il secondo esempio seguente viene illustrato questo metodo.  
  
## Esempio  
 In questo esempio, viene creato uno STL\/CLR `vector` e viene aggiunto a 5 elementi.  Successivamente, viene creata una raccolta di .NET chiamando la funzione di `make_collection`.  Infine, viene visualizzato il contenuto della raccolta appena creato.  
  
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
  
  **Il contenuto di System::Collections::Generic::ICollection è:**  
**3**  
**5**  
**7**   
## Esempio  
 In questo esempio, viene creato uno STL\/CLR `map` e viene aggiunto a 5 elementi.  Quindi, viene creato un <xref:System.Collections.Generic.IDictionary%602>.NET e assegniamo `map` direttamente.  Infine, viene visualizzato il contenuto della raccolta appena creato.  
  
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
  
  **Il contenuto di IDictionary è:**  
**Key: 0.00 Value: 0**  
**Key: 13.00 Value: 13**  
**Key: 22.00 Value: 22**  
**Key: 42.00 Value: 42**  
**Key: 74.00 Value: 74**   
## Vedere anche  
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)   
 [Procedura: conversione da raccolta .NET a contenitore STL\/CLR](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)   
 [range\_adapter](../dotnet/range-adapter-stl-clr.md)