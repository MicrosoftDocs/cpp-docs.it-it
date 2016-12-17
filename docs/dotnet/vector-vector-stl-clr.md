---
title: "vector::vector (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector::vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vector (membro) [STL/CLR]"
ms.assetid: a0b5e807-1ef2-422b-b772-1f96cd62fb51
caps.latest.revision: 17
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# vector::vector (STL/CLR)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Costruisce un oggetto contenitore.  
  
## Sintassi  
  
```  
vector();  
vector(vector<Value>% right);  
vector(vector<Value>^ right);  
explicit vector(size_type count);  
vector(size_type count, value_type val);  
template<typename InIt>  
    vector(InIt first, InIt last);  
vector(System::Collections::Generic::IEnumerable<Value>^ right);  
```  
  
#### Parametri  
 Conteggio  
 Numero di elementi da inserire.  
  
 innanzitutto  
 Avvio dell'intervallo da inserire.  
  
 last  
 Fine di intervalli da inserire.  
  
 right  
 Oggetto o intervallo da inserire.  
  
 val  
 Valore dell'elemento da inserire.  
  
## Note  
 Il costruttore:  
  
 `vector();`  
  
 inizializza la sequenza selezionata senza alcun elemento.  Utilizzarla per specificare una sequenza iniziale controllata vuota.  
  
 Il costruttore:  
  
 `vector(vector<Value>% right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``.`[vector::begin](../dotnet/vector-begin-stl-clr.md)`(),` `right``.`[vector::end](../dotnet/vector-end-stl-clr.md)`())`.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza controllata dall'oggetto `right`vettoriale.  
  
 Il costruttore:  
  
 `vector(vector<Value>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza `[``right``->`[vector::begin](../dotnet/vector-begin-stl-clr.md)`(),` `right``->`[vector::end](../dotnet/vector-end-stl-clr.md)`())`.  Utilizzarla per specificare una sequenza selezionata iniziale mediante la copia della sequenza selezionata dall'oggetto di vettore che l'handle venga `right`.  
  
 Il costruttore:  
  
 `explicit vector(size_type count);`  
  
 inizializza la sequenza selezionata con gli elementi di `count` ognuna con valore `value_type()`.  Viene utilizzato per riempire il contenitore di elementi tutto con il valore predefinito.  
  
 Il costruttore:  
  
 `vector(size_type count, value_type val);`  
  
 inizializza la sequenza selezionata con gli elementi di `count` ognuna con valore `val`.  Utilizzarla per riempire il contenitore di elementi tutto con lo stesso valore.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `vector(InIt first, InIt last);`  
  
 inizializza la sequenza selezionata con la sequenza `[``first``,` `last``)`.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza.  
  
 Il costruttore:  
  
 `vector(System::Collections::Generic::IEnumerable<Value>^ right);`  
  
 inizializza la sequenza selezionata con la sequenza definita dall'enumeratore `right`.  Utilizzarla per rendere sequenza selezionata una copia di un'altra sequenza descritta da un enumeratore.  
  
## Esempio  
  
```  
// cliext_vector_construct.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
// construct an empty container   
    cliext::vector<wchar_t> c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct with a repetition of default values   
    cliext::vector<wchar_t> c2(3);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", (int)elem);   
    System::Console::WriteLine();   
  
// construct with a repetition of values   
    cliext::vector<wchar_t> c3(6, L'x');   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    cliext::vector<wchar_t>::iterator it = c3.end();   
    cliext::vector<wchar_t> c4(c3.begin(), --it);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    cliext::vector<wchar_t> c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    cliext::vector<wchar_t> c7(c3);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    cliext::vector<wchar_t> c8(%c3);   
    for each (wchar_t elem in c8)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
  **size\(\) \= 0**  
 **0 0 0**  
 **x x x x x x**  
 **x x x x x**  
 **x x x x x x**  
 **x x x x x x**  
 **x x x x x x**   
## Requisiti  
 **Intestazione:**\<cliext\/vector\>  
  
 **Spazio dei nomi:** cliext  
  
## Vedere anche  
 [vettore](../dotnet/vector-stl-clr.md)   
 [vector::assign](../dotnet/vector-assign-stl-clr.md)   
 [vector::generic\_container](../dotnet/vector-generic-container-stl-clr.md)   
 [vector::operator\=](../dotnet/vector-operator-assign-stl-clr.md)