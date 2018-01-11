---
title: make_collection (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: cliext::make_collection
dev_langs: C++
helpviewer_keywords: make_collection function [STL/CLR]
ms.assetid: c25fb0cb-ebd8-4198-a565-bad28d32ee19
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 718483b6d95e1eb1eb67f66d2b9c18a8e17cae20
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="makecollection-stlclr"></a>make_collection (STL/CLR)
Rendere un `range_adapter` da una coppia di iteratori.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Iter>  
    range_adapter<Iter> make_collection(Iter first, Iter last);  
```  
  
#### <a name="parameters"></a>Parametri  
 `Iter`  
 Tipo degli iteratori di sottoposta a wrapping.  
  
 `first`  
 Primo iteratore per eseguire il wrapping.  
  
 `last`  
 Secondo iteratore per eseguire il wrapping.  
  
## <a name="remarks"></a>Note  
 La funzione modello restituisce `gcnew range_adapter<Iter>(first, last)`. Utilizzato per costruire un `range_adapter<Iter>` oggetto da una coppia di iteratori.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// cliext_make_collection.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::deque<wchar_t> Mycont;   
typedef cliext::range_adapter<Mycont::iterator> Myrange;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in d1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Collections::ICollection^ p1 =   
        cliext::make_collection(d1.begin(), d1.end());   
    System::Console::WriteLine("Count = {0}", p1->Count);   
    System::Console::WriteLine("IsSynchronized = {0}",   
        p1->IsSynchronized);   
    System::Console::WriteLine("SyncRoot not nullptr = {0}",   
        p1->SyncRoot != nullptr);   
  
// copy the sequence   
    cli::array<System::Object^>^ a1 = gcnew cli::array<System::Object^>(5);   
  
    a1[0] = L'|';   
    p1->CopyTo(a1, 1);   
    a1[4] = L'|';   
    for each (wchar_t elem in a1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
Count = 3  
IsSynchronized = False  
SyncRoot not nullptr = True  
 | a b c |  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/adapter >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [range_adapter (STL/CLR)](../dotnet/range-adapter-stl-clr.md)