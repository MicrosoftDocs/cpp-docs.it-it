---
title: back_inserter (funzione) | Documenti Microsoft
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
f1_keywords:
- collection/Windows::Foundation::Collections::back_inserter
dev_langs:
- C++
helpviewer_keywords:
- back_inserter Function
ms.assetid: 91476338-5548-44b7-bc7e-2150f4fbe31a
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 532b831dfd09a3a1a00637feafabcfd037b05156
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="backinserter-function"></a>back_inserter (funzione)
Restituisce un iteratore che viene utilizzato per inserire elementi alla fine della raccolta specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template <typename T>
Platform::BackInsertIterator<T>   
    back_inserter(IVector<T>^ v);  
  
template<typename T>  
Platform::BackInsertIterator<T>   
   back_inserter(IObservableVector<T>^ v);  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Parametro del tipo di modello.  
  
 `v`  
 Puntatore a un'interfaccia che fornisce l'accesso alla raccolta sottostante.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore.  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Windows::Foundation::Collections  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)