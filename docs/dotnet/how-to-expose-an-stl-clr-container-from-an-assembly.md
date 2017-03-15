---
title: "Procedura: esporre un contenitore STL/CLR da un assembly | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "STL/CLR, problemi di cross-assembly"
ms.assetid: 87efb41b-3db3-4498-a2e7-f3ef8a99f04d
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Procedura: esporre un contenitore STL/CLR da un assembly
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I contenitori di STL\/CLR come `list` e `map` vengono implementati come classi di riferimento del modello.  Poiché i modelli C\+\+ viene creata in fase di compilazione, due classi modello che hanno esattamente la stessa firma ma sono in assembly diversi sono effettivamente tipi diversi.  Ciò significa che le classi modello non possono essere utilizzate nei limiti dell'assembly.  
  
 Per consentire la condivisione di rapporti fra assembly, utilizzare i contenitori di STL\/CLR l'interfaccia generica <xref:System.Collections.Generic.ICollection%601>.  Tramite questa interfaccia generica, tutti i linguaggi che supportano i generics, inclusi C\+\+, c\# e Visual Basic, possono accedere ai contenitori di STL\/CLR.  
  
 In questo argomento viene illustrato come visualizzare gli elementi di vari contenitori di STL\/CLR scritto in c\+\+ `StlClrClassLibrary`denominato assembly.  Verranno mostrati due assembly per accedere a `StlClrClassLibrary`.  Il primo assembly viene scritto in C\+\+ e nel secondo in c\#.  
  
 Se gli assembly vengono scritti in C\+\+, è possibile accedere all'interfaccia generica di un contenitore utilizzando il typedef di `generic_container`.  Ad esempio, di un contenitore di tipo `cliext::vector<int>`, la relativa interfaccia generica è: `cliext::vector<int>::generic_container`.  Analogamente, è possibile ottenere un iteratore sull'interfaccia generica utilizzando typedef di `generic_iterator`, come indicato di seguito: `cliext::vector<int>::generic_iterator`.  
  
 Poiché i typedef vengono dichiarati in file di intestazione C\+\+, gli assembly scritti in altri linguaggi non possono essere utilizzate.  Di conseguenza, accedere all'interfaccia generica per `cliext::vector<int>` in c\# o qualsiasi altro linguaggio.NET, utilizzare `System.Collections.Generic.ICollection<int>`.  Per scorrere la raccolta, utilizzare un ciclo di `foreach`.  
  
 Nella seguente tabella sono elencate l'interfaccia generica che ciascun contenitore di STL\/CLR implementa:  
  
|Contenitore di STL\/CLR|L'interfaccia generica|  
|-----------------------------|----------------------------|  
|dequeT\<\>|ICollectionT\<\>|  
|hash\_mapK\<, V\>|IDictionaryK\<, V\>|  
|hash\_multimapK\<, V\>|IDictionaryK\<, V\>|  
|hash\_multisetT\<\>|ICollectionT\<\>|  
|hash\_setT\<\>|ICollectionT\<\>|  
|listT\<\>|ICollectionT\<\>|  
|mapK\<, V\>|IDictionaryK\<, V\>|  
|multimapK\<, V\>|IDictionaryK\<, V\>|  
|multisetT\<\>|ICollectionT\<\>|  
|pavè\<\>|ICollectionT\<\>|  
|vectorT\<\>|ICollectionT\<\>|  
  
> [!NOTE]
>  Poiché `queue`, `priority_queue` e i contenitori di `stack` non supportano gli iteratori, non implementano le interfacce generiche e non possono essere tra assembly accesso.  
  
## Esempio 1  
  
### Descrizione  
 In questo esempio, dichiariamo la classe c\+\+ che contiene i dati dei membri privati di STL\/CLR.  Quindi dichiariamo metodi pubblici per concedere l'accesso alle raccolte di classe private.  La fine viene in due modi diversi, uno per i client C\+\+ e uno per altri client.NET.  
  
### Codice  
  
<CodeContentPlaceHolder>0</CodeContentPlaceHolder>  
## Esempio 2  
  
### Descrizione  
 In questo esempio, implementiamo la classe dichiarata nell'Esempio 1.  In modo che i client di utilizzare questa libreria di classi, è possibile utilizzare lo strumento manifesto **mt.exe** per importare il file manifesto nella DLL.  Per informazioni dettagliate, vedere i commenti del codice.  
  
 Per ulteriori informazioni sullo strumento manifesto e gli assembly side\-by\-side, vedere [Compilazione di applicazioni isolate C\/C\+\+ e di assembly side\-by\-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md).  
  
### Codice  
  
<CodeContentPlaceHolder>1</CodeContentPlaceHolder>  
## Esempio 3  
  
### Descrizione  
 In questo esempio, viene creato il client c\+\+ che utilizza la libreria di classi creata nell'Esempio 1 e a 2.  Questo client utilizza i typedef di `generic_container` di contenitori di STL\/CLR per scorrere i contenitori e visualizzare i relativi contenuti.  
  
### Codice  
  
<CodeContentPlaceHolder>2</CodeContentPlaceHolder>  
### Output  
  
<CodeContentPlaceHolder>3</CodeContentPlaceHolder>  
## Esempio 4  
  
### Descrizione  
 In questo esempio, viene creato un client c\# che utilizza la libreria di classi creata nell'Esempio 1 e a 2.  Questo client utilizza i metodi di <xref:System.Collections.Generic.ICollection%601> di contenitori di STL\/CLR per scorrere i contenitori e visualizzare i relativi contenuti.  
  
### Codice  
  
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
  
### Output  
  
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
  
## Vedere anche  
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)