---
title: range_adapter (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- cliext::range_adapter
dev_langs:
- C++
helpviewer_keywords:
- range_adapter class [STL/CLR]
ms.assetid: 3fbe2a65-1216-46a0-a182-422816b80cfb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 1a5b8a02856d7739867e3cf9f76f866a1e84efca
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="rangeadapter-stlclr"></a>range_adapter (STL/CLR)
Classe modello che esegue il wrapping di una coppia di iteratori che consentono di implementare più interfacce di libreria di classi Base (BCL). Utilizzare il range_adapter per modificare un intervallo STL/CLR come se fosse un insieme di BCL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Iter>  
    ref class range_adapter  
        :   public  
        System::Collections::IEnumerable,  
        System::Collections::ICollection,  
        System::Collections::Generic::IEnumerable<Value>,  
        System::Collections::Generic::ICollection<Value>  
    { ..... };  
```  
  
#### <a name="parameters"></a>Parametri  
 iter  
 Il tipo associato gli iteratori sottoposta a wrapping.  
  
## <a name="members"></a>Membri  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[range_adapter::range_adapter (STL/CLR)](../dotnet/range-adapter-range-adapter-stl-clr.md)|Costruisce un oggetto adattatore.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[range_adapter::operator= (STL/CLR)](../dotnet/range-adapter-operator-assign-stl-clr.md)|Sostituisce la coppia iteratore archiviato.|  
  
## <a name="interfaces"></a>Interfacce  
  
|Interfaccia|Descrizione|  
|---------------|-----------------|  
|<xref:System.Collections.IEnumerable>|Scorre gli elementi nella raccolta.|  
|<xref:System.Collections.ICollection>|Gestisce un gruppo di elementi.|  
|<xref:System.Collections.Generic.IEnumerable%601>|Elementi tipizzati nella raccolta vengono scorsi...|  
|<xref:System.Collections.Generic.ICollection%601>|Gestisce un gruppo di elementi tipizzati.|  
  
## <a name="remarks"></a>Note  
 Il range_adapter archivia una coppia di iteratori, che a sua volta delimitare una sequenza di elementi. L'oggetto implementa quattro interfacce di libreria di classi base che consentono di scorrere gli elementi, in ordine. Utilizzare questa classe di modello per modificare gli intervalli STL/CLR come contenitori BCL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/adapter >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [collection_adapter (STL/CLR)](../dotnet/collection-adapter-stl-clr.md)   
 [make_collection (STL/CLR)](../dotnet/make-collection-stl-clr.md)