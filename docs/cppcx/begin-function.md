---
title: Begin (funzione) | Documenti Microsoft
ms.custom: ''
ms.date: 01/22/2017
ms.technology: cpp-windows
ms.topic: language-reference
f1_keywords:
- collection/Windows::Foundation::Collections::begin
dev_langs:
- C++
helpviewer_keywords:
- begin Function
ms.assetid: 5a44fb33-e247-49fd-b7a1-4a5b42e9e1e4
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7c1a8c09e43613014b43ef4e3c075a54cdd90e08
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="begin-function"></a>begin (funzione)
Restituisce un iteratore che punta all'inizio di una raccolta a cui si accede dal parametro di interfaccia specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template <typename T>   
    ::Platform::Collections::VectorIterator<T>   
    begin(  
          IVector<T>^ v         );  
  
template <typename T>   
    ::Platform::Collections::VectorViewIterator<T>   
    begin(  
          IVectorView<T>^ v  
         );   
  
template <typename T>   
    ::Platform::Collections::InputIterator<T>   
    begin(  
          IIterable<T>^ i         );  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Parametro del tipo di modello.  
  
 `v`  
 Una raccolta di vettore\<T > o VectorView\<T > gli oggetti che sono accessibili da un IVector\<T > o IVectorView\<T > interface.  
  
 `i`  
 Una raccolta di oggetti arbitrari di Windows Runtime che è possibile accedere attraverso un'IIterable\<T > interface.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che punta all'inizio della raccolta.  
  
### <a name="remarks"></a>Note  
 Le prime due funzioni di modello restituiscono degli iteratori, la terza funzione restituisce un iteratore di input.  
  
 L'oggetto VectorIterator restituito da begin è un iteratore proxy che archivia elementi di tipo VectorProxy\<T >. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Windows::Foundation::Collections  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)