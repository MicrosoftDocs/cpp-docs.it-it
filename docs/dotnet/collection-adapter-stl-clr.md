---
title: collection_adapter (STL/CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- cliext::collection_adapter
dev_langs:
- C++
helpviewer_keywords:
- collection_adapter class [STL/CLR]
ms.assetid: 31964058-1f50-48bf-82c2-b0b3cc8a7887
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 4a1a03dd6ecc52cd3921428e681fe5affa11d275
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="collectionadapter-stlclr"></a>collection_adapter (STL/CLR)
Esegue il wrapping di una raccolta di .NET per l'utilizzo come un contenitore STL/CLR. Oggetto `collection_adapter` è una classe modello che descrive un oggetto contenitore STL/CLR semplice. Esegue il wrapping di un'interfaccia della libreria di classi Base (BCL) e restituisce una coppia iteratore che consente di modificare la sequenza controllata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename Coll>  
    ref class collection_adapter;  
  
template<>  
    ref class collection_adapter<  
        System::Collections::ICollection>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IEnumerable>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IList>;  
template<>  
    ref class collection_adapter<  
        System::Collections::IDictionary>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::ICollection<Value>>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IEnumerable<Value>>;  
template<typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IList<Value>>;  
template<typename Key,  
    typename Value>  
    ref class collection_adapter<  
        System::Collections::Generic::IDictionary<Key, Value>>;  
```  
  
#### <a name="parameters"></a>Parametri  
 Comprimi  
 Il tipo della raccolta sottoposta a wrapping.  
  
## <a name="specializations"></a>Specializzazioni  
  
|Specializzazione|Descrizione|  
|--------------------|-----------------|  
|IEnumerable|Sequenze tramite gli elementi.|  
|ICollection|Gestisce un gruppo di elementi.|  
|IList|Gestisce un gruppo ordinato di elementi.|  
|IDictionary|Mantenere un set di {chiave, valore} coppie.|  
|IEnumerable\<valore >|Sequenze tramite elementi tipizzati.|  
|ICollection\<valore >|Gestisce un gruppo di elementi tipizzati.|  
|IList\<valore >|Gestisce un gruppo ordinato di elementi tipizzati.|  
|IDictionary\<valore >|Gestisce un set di tipizzato {chiave, valore} coppie.|  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[collection_adapter::difference_type (STL/CLR)](../dotnet/collection-adapter-difference-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[collection_adapter::iterator (STL/CLR)](../dotnet/collection-adapter-iterator-stl-clr.md)|Tipo di un iteratore per la sequenza controllata.|  
|[collection_adapter::key_type (STL/CLR)](../dotnet/collection-adapter-key-type-stl-clr.md)|Il tipo di una chiave del dizionario.|  
|[collection_adapter::mapped_type (STL/CLR)](../dotnet/collection-adapter-mapped-type-stl-clr.md)|Il tipo di un valore di dizionario.|  
|[collection_adapter::reference (STL/CLR)](../dotnet/collection-adapter-reference-stl-clr.md)|Tipo di un riferimento a un elemento.|  
|[collection_adapter::size_type (STL/CLR)](../dotnet/collection-adapter-size-type-stl-clr.md)|Tipo di una distanza Signed tra due elementi.|  
|[collection_adapter::value_type (STL/CLR)](../dotnet/collection-adapter-value-type-stl-clr.md)|Tipo di un elemento.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[collection_adapter::base (STL/CLR)](../dotnet/collection-adapter-base-stl-clr.md)|Definisce l'interfaccia BCL sottoposta a wrapping.|  
|[collection_adapter::begin (STL/CLR)](../dotnet/collection-adapter-begin-stl-clr.md)|Indica l'inizio della sequenza controllata.|  
|[collection_adapter::collection_adapter (STL/CLR)](../dotnet/collection-adapter-collection-adapter-stl-clr.md)|Costruisce un oggetto adattatore.|  
|[collection_adapter::end (STL/CLR)](../dotnet/collection-adapter-end-stl-clr.md)|Designa la fine della sequenza controllata.|  
|[collection_adapter::size (STL/CLR)](../dotnet/collection-adapter-size-stl-clr.md)|Conta il numero di elementi.|  
|[collection_adapter::swap (STL/CLR)](../dotnet/collection-adapter-swap-stl-clr.md)|Scambia il contenuto di due contenitori.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[collection_adapter::operator= (STL/CLR)](../dotnet/collection-adapter-operator-assign-stl-clr.md)|Sostituisce l'handle memorizzato BCL.|  
  
## <a name="remarks"></a>Note  
 Utilizzare questa classe di modello per modificare un contenitore BCL come un contenitore STL/CLR. Il `collection_adapter` archivia un handle a un'interfaccia BCL, che a sua volta controlla una sequenza di elementi. Oggetto `collection_adapter` oggetto `X` restituisce una coppia di iteratori input `X.begin()` e `X.end()` che si utilizza per visitare gli elementi, in ordine. Alcune delle specializzazioni consentono inoltre di scrivere `X.size()` per determinare la lunghezza della sequenza controllata.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/adapter >  
  
 **Namespace:** cliext  
  
## <a name="see-also"></a>Vedere anche  
 [range_adapter (STL/CLR)](../dotnet/range-adapter-stl-clr.md)   
 [make_collection (STL/CLR)](../dotnet/make-collection-stl-clr.md)