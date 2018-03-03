---
title: 'deque:: deque (STL/CLR) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::deque::deque
dev_langs:
- C++
helpviewer_keywords:
- deque member [STL/CLR]
ms.assetid: e5bc9511-619e-469c-b50a-e06858e7fce7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b077e4c92d9307b8ff99126c824d0a902ce1ff83
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dequedeque-stlclr"></a>deque::deque (STL/CLR)
Costruisce un oggetto contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
deque();  
deque(deque<Value>% right);  
deque(deque<Value>^ right);  
explicit deque(size_type count);  
deque(size_type count, value_type val);  
template<typename InIt>  
    deque(InIt first, InIt last);  
deque(System::Collections::Generic::IEnumerable<Value>^ right);  
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
  
 `deque();`  
  
 Inizializza la sequenza controllata senza elementi. È utilizzata per specificare una sequenza controllata iniziale vuota.  
  
 Il costruttore:  
  
 `deque(deque<Value>% right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right.begin()`, `right.end()`). Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto deque `right`. Per ulteriori informazioni sugli iteratori, vedere [deque:: Begin (STL/CLR)](../dotnet/deque-begin-stl-clr.md) e [deque:: end (STL/CLR)](../dotnet/deque-end-stl-clr.md).  
  
 Il costruttore:  
  
 `deque(deque<Value>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza [`right->begin()`, `right->end()`). Utilizzarlo per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto deque con handle `right`.  
  
 Il costruttore:  
  
 `explicit deque(size_type count);`  
  
 Inizializza la sequenza controllata con `count` elementi con valore `value_type()`. Utilizzarla per riempire il contenitore con elementi tutti con il valore predefinito.  
  
 Il costruttore:  
  
 `deque(size_type count, value_type val);`  
  
 Inizializza la sequenza controllata con `count` elementi con valore `val`. Utilizzarla per riempire il contenitore con elementi tutti con lo stesso valore.  
  
 Il costruttore:  
  
 `template<typename InIt>`  
  
 `deque(InIt first, InIt last);`  
  
 Inizializza la sequenza controllata con la sequenza [`first`, `last`). Utilizzarla per creare una copia di un'altra sequenza di sequenza controllata.  
  
 Il costruttore:  
  
 `deque(System::Collections::Generic::IEnumerable<Value>^ right);`  
  
 Inizializza la sequenza controllata con la sequenza designata dall'enumeratore `right`. Utilizzarla per creare la sequenza controllata una copia di un'altra sequenza descritta dall'enumeratore.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cliext_deque_construct.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
// construct an empty container   
    cliext::deque<wchar_t> c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct with a repetition of default values   
    cliext::deque<wchar_t> c2(3);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", (int)elem);   
    System::Console::WriteLine();   
  
// construct with a repetition of values   
    cliext::deque<wchar_t> c3(6, L'x');   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    cliext::deque<wchar_t>::iterator it = c3.end();   
    cliext::deque<wchar_t> c4(c3.begin(), --it);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    cliext::deque<wchar_t> c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    cliext::deque<wchar_t> c7(c3);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    cliext::deque<wchar_t> c8(%c3);   
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
 **Intestazione:** \<cliext/deque >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque:: Assign (STL/CLR)](../dotnet/deque-assign-stl-clr.md)   
 [deque::generic_container (STL/CLR)](../dotnet/deque-generic-container-stl-clr.md)   
 [operator= (deque) (STL/CLR)](../dotnet/operator-assign-deque-stl-clr.md)