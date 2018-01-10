---
title: 'Vector:: Vector (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::vector::vector
dev_langs: C++
helpviewer_keywords: vector member [STL/CLR]
ms.assetid: a0b5e807-1ef2-422b-b772-1f96cd62fb51
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a321e18c9fc921e1d88961b4f282c29917fa7962
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="vectorvector-stlclr"></a>vector::vector (STL/CLR)
Costruisce un oggetto contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 count  
 Numero di elementi da inserire.  
  
 primo  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 right  
 Oggetto o un intervallo da inserire.  
  
 Val  
 Valore dell'elemento da inserire.  
  
## <a name="remarks"></a>Note  
 Il costruttore:  
  
 `vector();`  
  
 Inizializza la sequenza controllata senza elementi. È utilizzata per specificare una sequenza controllata iniziale vuota.  
  
 Il costruttore:  
  
 `vector(vector<Value>% right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right.begin()`, `right.end()`). Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto vector `right`.  
  
 Il costruttore:  
  
 `vector(vector<Value>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right->begin()`, `right->end()`). Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto vector con handle `right`.  
  
 Il costruttore:  
  
 `explicit vector(size_type count);`  
  
 Inizializza la sequenza controllata con `count` elementi con valore `value_type()`. Utilizzarla per riempire il contenitore con elementi tutti con il valore predefinito.  
  
 Il costruttore:  
  
 `vector(size_type count, value_type val);`  
  
 Inizializza la sequenza controllata con `count` elementi con valore `val`. Utilizzarla per riempire il contenitore con elementi tutti con lo stesso valore.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `vector(InIt first, InIt last);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`). Utilizzarla per creare una copia di un'altra sequenza di sequenza controllata.  
  
 Il costruttore:  
  
 `vector(System::Collections::Generic::IEnumerable<Value>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta dall'enumeratore.  
  
## <a name="example"></a>Esempio  
  
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
 **Intestazione:** \<cliext/vettore >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [Vector:: Assign (STL/CLR)](../dotnet/vector-assign-stl-clr.md)   
 [Vector::generic_container (STL/CLR)](../dotnet/vector-generic-container-stl-clr.md)   
 [vector::operator= (STL/CLR)](../dotnet/vector-operator-assign-stl-clr.md)