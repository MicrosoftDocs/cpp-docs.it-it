---
title: 'Vector:: Assign (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::vector::assign
dev_langs:
- C++
helpviewer_keywords:
- assign member [STL/CLR]
ms.assetid: 945e2048-6c61-4701-b13c-8241cbee3fa1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a16e9262ad69f6f4fe2e11030b5880485139823a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33170414"
---
# <a name="vectorassign-stlclr"></a>vector::assign (STL/CLR)
Sostituisce tutti gli elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void assign(size_type count, value_type val);  
template<typename InIt>  
    void assign(InIt first, InIt last);  
void assign(System::Collections::Generic::IEnumerable<Value>^ right);  
```  
  
#### <a name="parameters"></a>Parametri  
 count  
 Numero di elementi da inserire.  
  
 primo  
 Inizio dell'intervallo da inserire.  
  
 last  
 Fine dell'intervallo da inserire.  
  
 right  
 Enumerazione da inserire.  
  
 Val  
 Valore dell'elemento da inserire.  
  
## <a name="remarks"></a>Note  
 La prima funzione membro sostituisce la sequenza controllata con una ripetizione di `count` degli elementi di valore `val`. Utilizzarla per riempire il contenitore con elementi tutti con lo stesso valore.  
  
 Se `InIt` è di tipo integer, la seconda funzione membro si comporta come `assign((size_type)first, (value_type)last)`. In caso contrario, sostituisce la sequenza controllata con la sequenza [`first`, `last`). È usata per garantire il controllato sequenza una copia di un'altra sequenza.  
  
 La terza funzione membro sostituisce la sequenza controllata con la sequenza designata dall'enumeratore `right`. Utilizzarla per creare la sequenza controllata una copia di una sequenza descritta dall'enumeratore.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_vector_assign.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// assign a repetition of values   
    cliext::vector<wchar_t> c2;   
    c2.assign(6, L'x');   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign an iterator range   
    c2.assign(c1.begin(), c1.end() - 1);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign an enumeration   
    c2.assign(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
x x x x x x  
a b  
a b c  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/vector >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [vector::operator= (STL/CLR)](../dotnet/vector-operator-assign-stl-clr.md)