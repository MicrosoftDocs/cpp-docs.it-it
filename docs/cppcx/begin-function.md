---
title: Funzione Begin | Microsoft Docs
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ad73daba0bce57a19c512a53747cf8ac804e929d
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44101755"
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

*T*<br/>
Parametro del tipo di modello.

*v*<br/>
Una raccolta di vettore\<T > o VectorView\<T > gli oggetti a cui accedono un IVector\<T > o IVectorView\<T > interface.

*i*<br/>
Una raccolta di oggetti Windows Runtime arbitrari a cui accede un IIterable\<T > interface.

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio della raccolta.

### <a name="remarks"></a>Note

Le prime due funzioni di modello restituiscono degli iteratori, la terza funzione restituisce un iteratore di input.

L'oggetto VectorIterator oggetto restituito da begin è un iteratore proxy che archivia elementi di tipo VectorProxy\<T >. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Windows::Foundation::Collections

## <a name="see-also"></a>Vedere anche

[Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)