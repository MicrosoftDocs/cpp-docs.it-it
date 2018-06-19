---
title: collection_adapter::base (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::collection_adapter::base
dev_langs:
- C++
helpviewer_keywords:
- base member [STL/CLR]
ms.assetid: 44928046-3fda-4974-817f-bc61a6f11b9f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: fe35a9f5eb0a005d2734ff0ab83eeaf75634e62f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33104035"
---
# <a name="collectionadapterbase-stlclr"></a>collection_adapter::base (STL/CLR)
Definisce l'interfaccia BCL sottoposta a wrapping.  
  
## <a name="syntax"></a>Sintassi  
  
```  
Coll^ base();  
```  
  
## <a name="remarks"></a>Note  
 La funzione membro restituisce l'handle di interfaccia BCL stored.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_collection_adapter_base.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d6x(6, L'x');   
    Mycoll c1(%d6x);   
  
// display initial contents " x x x x x x"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("base() same = {0}", c1.base() == %c1);   
    return (0);   
    }  
  
```  
  
```Output  
 x x x x x x  
base() same = True  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/adapter >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md)