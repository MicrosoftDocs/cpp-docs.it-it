---
title: end (funzione) | Documenti Microsoft
ms.custom: ''
ms.date: 01/22/2017
ms.technology: cpp-windows
ms.topic: language-reference
f1_keywords:
- collection/Windows::Foundation::Collections::end
dev_langs:
- C++
helpviewer_keywords:
- end Function
ms.assetid: fb837bff-fc76-4bae-9096-facf0e03041c
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 771d7e83024f9c258df1437ff902d638bffc8478
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="end-function"></a>end (funzione)
Restituisce un iteratore che punta oltre la fine di una raccolta a cui si accede dal parametro di interfaccia specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template <typename T>  
    ::Platform::Collections::VectorIterator<T>   
    end(  
        IVector<T>^ v       );  
  
template <typename T>  
    ::Platform::Collections::VectorViewIterator<T>   
    end(  
        IVectorView<T>^ v  
       );  
template <typename T>   
    ::Platform::Collections::InputIterator<T>   
    end(  
        IIterable<T>^ i  
       );  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Parametro del tipo di modello.  
  
 `v`  
 Una raccolta di vettore\<T > o VectorView\<T > gli oggetti che sono accessibili da un IVector\<T >, IVectorView o\<T > interface.  
  
 `i`  
 Raccolta di Windows Runtime arbitrari oggetti che è possibile accedere attraverso un'IIterable\<T > interface.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che punta oltre la fine della raccolta.  
  
### <a name="remarks"></a>Note  
 Le prime due funzioni di modello restituiscono degli iteratori, la terza funzione restituisce un iteratore di input.  
  
 L'oggetto [Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md) restituito da `end` è un iteratore proxy che archivia elementi di tipo `VectorProxy<T>`. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Windows::Foundation::Collections  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)