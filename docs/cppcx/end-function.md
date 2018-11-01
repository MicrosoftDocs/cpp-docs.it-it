---
title: end (funzione)
ms.date: 01/22/2017
f1_keywords:
- collection/Windows::Foundation::Collections::end
helpviewer_keywords:
- end Function
ms.assetid: fb837bff-fc76-4bae-9096-facf0e03041c
ms.openlocfilehash: 83e575ae29ca083642e1cf6296d6ffc8a989c316
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50445992"
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
Una raccolta di vettore\<T > o VectorView\<T > gli oggetti a cui accedono un IVector\<T >, o IVectorView\<T > interface.

*i*<br/>
Raccolta di Runtime di Windows arbitrari oggetti che sono accessibili da un IIterable\<T > interface.

### <a name="return-value"></a>Valore restituito

Iteratore che punta oltre la fine della raccolta.

### <a name="remarks"></a>Note

Le prime due funzioni di modello restituiscono degli iteratori, la terza funzione restituisce un iteratore di input.

L'oggetto [Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md) restituito da `end` è un iteratore proxy che archivia elementi di tipo `VectorProxy<T>`. L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Windows::Foundation::Collections

## <a name="see-also"></a>Vedere anche

[Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)