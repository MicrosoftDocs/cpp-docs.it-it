---
title: hash_set::load_factor (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::hash_set::load_factor
dev_langs:
- C++
helpviewer_keywords:
- load_factor member [STL/CLR]
ms.assetid: 84fbcdd8-0457-4a20-9f54-0a7c9612f4dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 192222e5ab8e6251683bae4f88346c05aa636b1c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33126720"
---
# <a name="hashsetloadfactor-stlclr"></a>hash_set::load_factor (STL/CLR)
Conta il numero medio di elementi per bucket.  
  
## <a name="syntax"></a>Sintassi  
  
```  
float load_factor();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce `(float)` [hash_set:: Size (STL/CLR)](../dotnet/hash-set-size-stl-clr.md) `() /` [hash_set::bucket_count (STL/CLR)](../dotnet/hash-set-bucket-count-stl-clr.md)`()`. Utilizzarla per determinare la dimensione del bucket medio.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_hash_set_load_factor.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
    Myhash_set c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect current parameters   
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());   
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());   
    System::Console::WriteLine("max_load_factor() = {0}",   
        c1.max_load_factor());   
    System::Console::WriteLine();   
  
// change max_load_factor and redisplay   
    c1.max_load_factor(0.25f);   
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());   
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());   
    System::Console::WriteLine("max_load_factor() = {0}",   
        c1.max_load_factor());   
    System::Console::WriteLine();   
  
// rehash and redisplay   
    c1.rehash(100);   
    System::Console::WriteLine("bucket_count() = {0}", c1.bucket_count());   
    System::Console::WriteLine("load_factor() = {0}", c1.load_factor());   
    System::Console::WriteLine("max_load_factor() = {0}",   
        c1.max_load_factor());   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
bucket_count() = 16  
load_factor() = 0.1875  
max_load_factor() = 4  
  
bucket_count() = 16  
load_factor() = 0.1875  
max_load_factor() = 0.25  
  
bucket_count() = 128  
load_factor() = 0.0234375  
max_load_factor() = 0.25  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/hash_set >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set::bucket_count (STL/CLR)](../dotnet/hash-set-bucket-count-stl-clr.md)   
 [hash_set::max_load_factor (STL/CLR)](../dotnet/hash-set-max-load-factor-stl-clr.md)