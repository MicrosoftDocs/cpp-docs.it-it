---
description: 'Altre informazioni su: End Function'
title: end (funzione)
ms.date: 01/22/2017
f1_keywords:
- collection/Windows::Foundation::Collections::end
helpviewer_keywords:
- end Function
ms.assetid: fb837bff-fc76-4bae-9096-facf0e03041c
ms.openlocfilehash: e29595e7eb403af85abdbfa18782adf1c33c308e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341971"
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

*T*<br/>
Parametro del tipo di modello.

*v*<br/>
Raccolta di oggetti vector \<T> o VectorView a \<T> cui è possibile accedere da un' \<T> interfaccia IVector o IVectorView \<T> .

*i*<br/>
Raccolta di arbitrari Windows Runtime oggetti a cui è possibile accedere da un' \<T> interfaccia all'IIterable.

### <a name="return-value"></a>Valore restituito

Iteratore che punta oltre la fine della raccolta.

### <a name="remarks"></a>Commenti

Le prime due funzioni di modello restituiscono degli iteratori, la terza funzione restituisce un iteratore di input.

L'oggetto [Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md) restituito da `end` è un iteratore proxy che archivia elementi di tipo `VectorProxy<T>`. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Windows::Foundation::Collections

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Windows:: Foundation:: Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)
