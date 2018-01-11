---
title: 'Procedura: esporre un contenitore STL/CLR da un Assembly | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
helpviewer_keywords:
- STL/CLR Containers [STL/CLR]
- STL/CLR, cross-assembly issues
ms.assetid: 87efb41b-3db3-4498-a2e7-f3ef8a99f04d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 84505edf0877a5ae20d28906dde7f4c709574034
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-expose-an-stlclr-container-from-an-assembly"></a>Procedura: esporre un contenitore STL/CLR da un assembly
Contenitori STL/CLR, ad esempio `list` e `map` vengono implementati come classi di riferimento del modello. Poiché i modelli C++ vengono creata un'istanza in fase di compilazione, due classi di modello che hanno esattamente la stessa firma ma sono in assembly diversi sono in realtà diversi tipi. Ciò significa che possono essere utilizzate le classi modello tra limiti di assembly.  
  
 Per consentire la condivisione tra assembly, i contenitori STL/CLR implementano l'interfaccia generica <xref:System.Collections.Generic.ICollection%601>. Tramite questa interfaccia generica, tutti i linguaggi che supportano i generics, tra cui C++, c# e Visual Basic, possono accedere contenitori STL/CLR.  
  
 In questo argomento viene illustrato come visualizzare gli elementi di diversi contenitori STL/CLR scritti in un assembly C++ denominato `StlClrClassLibrary`. Vengono illustrati due assembly di accedere a `StlClrClassLibrary`. Il primo assembly viene scritto in C++, mentre la seconda in c#.  
  
 Se entrambi gli assembly vengono scritti in C++, è possibile accedere all'interfaccia generica di un contenitore utilizzando il relativo `generic_container` typedef. Ad esempio, se si dispone di un contenitore di tipo `cliext::vector<int>`, quindi è l'interfaccia generica: `cliext::vector<int>::generic_container`. Analogamente, è possibile ottenere un iteratore attraverso l'interfaccia generica con il `generic_iterator` typedef, come in: `cliext::vector<int>::generic_iterator`.  
  
 Poiché questi typedef vengono dichiarati nel file di intestazione C++, non è possibile utilizzarli con assembly scritti in altri linguaggi. Pertanto, per accedere all'interfaccia generica per `cliext::vector<int>` in c# o qualsiasi altro linguaggio .NET, usare `System.Collections.Generic.ICollection<int>`. Per scorrere la raccolta, utilizzare un `foreach` ciclo.  
  
 La tabella seguente elenca ogni contenitore STL/CLR implementa l'interfaccia generica:  
  
|Contenitore STL/CLR|Interfaccia generica|  
|------------------------|-----------------------|  
|deque < T\>|ICollection < T\>|  
|hash_map < K, V >|IDictionary < K, V >|  
|hash_multimap < K, V >|IDictionary < K, V >|  
|hash_multiset < T\>|ICollection < T\>|  
|hash_set < T\>|ICollection < T\>|  
|elenco < T\>|ICollection < T\>|  
|eseguire il mapping di < K, V >|IDictionary < K, V >|  
|multimap < K, V >|IDictionary < K, V >|  
|multiset < T\>|ICollection < T\>|  
|impostare < T\>|ICollection < T\>|  
|Vector < T\>|ICollection < T\>|  
  
> [!NOTE]
>  Poiché il `queue`, `priority_queue`, e `stack` contenitori non supportano gli iteratori, non implementare interfacce generiche e non può essere tra assembly a cui si accede.  
  
## <a name="example-1"></a>Esempio 1  
  
### <a name="description"></a>Descrizione  
 In questo esempio, si dichiara una classe C++ che contiene i dati dei membri privati STL/CLR. È quindi possibile dichiarare i metodi pubblici per concedere l'accesso alle raccolte private della classe. Per farlo in due modi diversi, uno per i client di C++ e uno per gli altri client .NET.  
  
### <a name="code"></a>Codice  
  
<CodeContentPlaceHolder>0</CodeContentPlaceHolder>  
## <a name="example-2"></a>Esempio 2  
  
### <a name="description"></a>Descrizione  
 In questo esempio, si implementano la classe dichiarata nell'esempio 1. I client possono usare questa libreria di classi, è utilizzare lo strumento manifesto **mt.exe** per incorporare il file manifesto nella DLL. Per informazioni dettagliate, vedere i commenti del codice.  
  
 Per ulteriori informazioni sul manifesto dello strumento e assembly side-by-side, vedere [compilazione di applicazioni isolate C/C++ e assembly Side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md).  
  
### <a name="code"></a>Codice  
  
<CodeContentPlaceHolder>1</CodeContentPlaceHolder>  
## <a name="example-3"></a>Esempio 3  
  
### <a name="description"></a>Descrizione  
 In questo esempio, si crea un client di C++ che utilizza la libreria di classi creata in esempi 1 e 2. Questo client utilizza il `generic_container` typedef dei contenitori STL/CLR per scorrere i contenitori e per visualizzarne il contenuto.  
  
### <a name="code"></a>Codice  
  
<CodeContentPlaceHolder>2</CodeContentPlaceHolder>  
### <a name="output"></a>Output  
  
<CodeContentPlaceHolder>3</CodeContentPlaceHolder>  
## <a name="example-4"></a>Esempio 4  
  
### <a name="description"></a>Descrizione  
 In questo esempio, si crea un client c# che utilizza la libreria di classi creata in esempi 1 e 2. Questo client utilizza il <xref:System.Collections.Generic.ICollection%601> metodi dei contenitori STL/CLR per scorrere i contenitori e per visualizzarne il contenuto.  
  
### <a name="code"></a>Codice  
  
```  
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
  
```  
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
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md)