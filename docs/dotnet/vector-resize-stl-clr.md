---
title: 'Vector:: resize (STL/CLR) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::vector::resize
dev_langs:
- C++
helpviewer_keywords:
- resize member [STL/CLR]
ms.assetid: a3556fbc-67d9-463a-9ffc-cb43ee15657f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f7327b62906746ef3bb561d88f8c6ddc2134aa65
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33170674"
---
# <a name="vectorresize-stlclr"></a>vector::resize (STL/CLR)
Modifica il numero di elementi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void resize(size_type new_size);  
void resize(size_type new_size, value_type val);  
```  
  
#### <a name="parameters"></a>Parametri  
 NEW_SIZE  
 Nuova dimensione della sequenza controllata.  
  
 Val  
 Valore dell'elemento di spaziatura.  
  
## <a name="remarks"></a>Note  
 Funzioni membro di entrambi affinché [Vector:: Size (STL/CLR)](../dotnet/vector-size-stl-clr.md) `()` ormai restituisce `new_size`. Se la sequenza controllata deve essere allungata, la prima funzione membro accoda elementi con valore `value_type()`, mentre la seconda funzione membro accoda elementi con valore `val`. Per rendere la sequenza controllata più breve, entrambe le funzioni membro cancellare in modo efficace l'ultimo elemento [Vector:: Size (STL/CLR)](../dotnet/vector-size-stl-clr.md) `() -` `new_size` volte. Utilizzato per verificare che la sequenza controllata è di dimensioni `new_size`, trimming o riempimento corrente sequenza controllata.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_vector_resize.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
// construct an empty container and pad with default values   
    cliext::vector<wchar_t> c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
    c1.resize(4);   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", (int)elem);   
    System::Console::WriteLine();   
  
// resize to empty   
    c1.resize(0);   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// resize and pad   
    c1.resize(5, L'x');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 0 0 0 0  
size() = 0  
 x x x x x  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/vector >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [Vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [Vector:: Clear (STL/CLR)](../dotnet/vector-clear-stl-clr.md)   
 [Vector:: Erase (STL/CLR)](../dotnet/vector-erase-stl-clr.md)   
 [vector::insert (STL/CLR)](../dotnet/vector-insert-stl-clr.md)