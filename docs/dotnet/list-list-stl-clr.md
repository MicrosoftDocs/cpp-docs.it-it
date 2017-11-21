---
title: 'List:: List (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::list::list
dev_langs: C++
helpviewer_keywords: list member [STL/CLR]
ms.assetid: 51b58f63-c65a-4d54-b746-0c10635b123b
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f5ed413ec892ebdf89fc903ac9a9f06e4f2d917a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="listlist-stlclr"></a>list::list (STL/CLR)
Costruisce un oggetto contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
list();  
list(list<Value>% right);  
list(list<Value>^ right);  
explicit list(size_type count);  
list(size_type count, value_type val);  
template<typename InIt>  
    list(InIt first, InIt last);  
list(System::Collections::Generic::IEnumerable<Value>^ right);  
```  
  
#### <a name="parameters"></a>Parametri  
 `count`  
 Numero di elementi da inserire.  
  
 `first`  
 Inizio dell'intervallo da inserire.  
  
 `last`  
 Fine dell'intervallo da inserire.  
  
 `right`  
 Oggetto o un intervallo da inserire.  
  
 `val`  
 Valore dell'elemento da inserire.  
  
## <a name="remarks"></a>Note  
  
 Il costruttore:  
  
 `list();`  
  
 Inizializza la sequenza controllata senza elementi. È utilizzata per specificare una sequenza controllata iniziale vuota.  
  
 Il costruttore:  
  
 `list(list<Value>% right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right.begin()`, `right.end()`). Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto elenco `right`.  
  
 Il costruttore:  
  
 `list(list<Value>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right->begin()`, `right->end()`). Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto elenco con handle `right`.  
  
 Il costruttore:  
  
 `explicit list(size_type count);`  
  
 Inizializza la sequenza controllata con `count` elementi con valore `value_type()`. Utilizzarla per riempire il contenitore con elementi tutti con il valore predefinito.  
  
 Il costruttore:  
  
 `list(size_type count, value_type val);`  
  
 Inizializza la sequenza controllata con `count` elementi con valore `val`. Utilizzarla per riempire il contenitore con elementi tutti con lo stesso valore.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `list(InIt first, InIt last);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`). Utilizzarla per creare una copia di un'altra sequenza di sequenza controllata.  
  
 Il costruttore:  
  
 `list(System::Collections::Generic::IEnumerable<Value>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta dall'enumeratore.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cliext_list_construct.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
// construct an empty container   
    cliext::list<wchar_t> c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct with a repetition of default values   
    cliext::list<wchar_t> c2(3);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", (int)elem);   
    System::Console::WriteLine();   
  
// construct with a repetition of values   
    cliext::list<wchar_t> c3(6, L'x');   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    cliext::list<wchar_t>::iterator it = c3.end();   
    cliext::list<wchar_t> c4(c3.begin(), --it);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    cliext::list<wchar_t> c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    cliext::list<wchar_t> c7(c3);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    cliext::list<wchar_t> c8(%c3);   
    for each (wchar_t elem in c8)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 0 0 0  
 x x x x x x  
 x x x x x  
 x x x x x x  
 x x x x x x  
 x x x x x x  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/list >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [elenco (STL/CLR)](../dotnet/list-stl-clr.md)   
 [List:: Assign (STL/CLR)](../dotnet/list-assign-stl-clr.md)   
 [List::generic_container (STL/CLR)](../dotnet/list-generic-container-stl-clr.md)   
 [list::operator= (STL/CLR)](../dotnet/list-operator-assign-stl-clr.md)