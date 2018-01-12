---
title: collection_adapter::collection_adapter (STL/CLR) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- cliext::collection_adapter
- cliext::collection_adapter::collection_adapter
dev_langs: C++
helpviewer_keywords: collection_adapter member [STL/CLR]
ms.assetid: 7e2bb75b-d735-4135-9523-719683e06fe9
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 190379cbfeea0f1bbf747d537f9501f076f6bb0e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="collectionadaptercollectionadapter-stlclr"></a>collection_adapter::collection_adapter (STL/CLR)
Costruisce un oggetto adattatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
collection_adapter();  
collection_adapter(collection_adapter<Coll>% right);  
collection_adapter(collection_adapter<Coll>^ right);  
collection_adapter(Coll^ collection);  
```  
  
#### <a name="parameters"></a>Parametri  
 raccolta  
 Handle di libreria di classi base per eseguire il wrapping.  
  
 right  
 Oggetto da copiare.  
  
## <a name="remarks"></a>Note  
 Il costruttore:  
  
 `collection_adapter();`  
  
 Inizializza l'handle memorizzato con `nullptr`.  
  
 Il costruttore:  
  
 `collection_adapter(collection_adapter<Coll>% right);`  
  
 Inizializza l'handle memorizzato con `right.` [collection_adapter::base (STL/CLR)](../dotnet/collection-adapter-base-stl-clr.md)`()`.  
  
 Il costruttore:  
  
 `collection_adapter(collection_adapter<Coll>^ right);`  
  
 Inizializza l'handle memorizzato con `right->` [collection_adapter::base (STL/CLR)](../dotnet/collection-adapter-base-stl-clr.md)`()`.  
  
 Il costruttore:  
  
 `collection_adapter(Coll^ collection);`  
  
 Inizializza l'handle memorizzato con con `collection`.  
  
## <a name="example"></a>Esempio  
  
```  
// cliext_collection_adapter_construct.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d6x(6, L'x');   
  
// construct an empty container   
    Mycoll c1;   
    System::Console::WriteLine("base() null = {0}", c1.base() == nullptr);   
  
// construct with a handle   
    Mycoll c2(%d6x);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mycoll c3(c2);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    Mycoll c4(%c3);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
```Output  
base() null = True  
 x x x x x x  
 x x x x x x  
 x x x x x x  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/adapter >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md)   
 [collection_adapter::operator= (STL/CLR)](../dotnet/collection-adapter-operator-assign-stl-clr.md)