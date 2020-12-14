---
description: 'Altre informazioni su: Begin Function'
title: begin (funzione)
ms.date: 01/22/2017
f1_keywords:
- collection/Windows::Foundation::Collections::begin
helpviewer_keywords:
- begin Function
ms.assetid: 5a44fb33-e247-49fd-b7a1-4a5b42e9e1e4
ms.openlocfilehash: ae59a4b4344da520d86c216f4c9979953e16753c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302764"
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
Raccolta di oggetti vector \<T> o VectorView a \<T> cui si accede tramite un' \<T> interfaccia IVector o IVectorView \<T> .

*i*<br/>
Raccolta di oggetti Windows Runtime arbitrari a cui è possibile accedere da un' \<T> interfaccia all'IIterable.

### <a name="return-value"></a>Valore restituito

Iteratore che punta all'inizio della raccolta.

### <a name="remarks"></a>Commenti

Le prime due funzioni di modello restituiscono degli iteratori, la terza funzione restituisce un iteratore di input.

L'oggetto oggetto VectorIterator restituito da Begin è un iteratore proxy che archivia elementi di tipo VectorProxy \<T> . L'oggetto proxy, tuttavia, non è quasi mai visibile al codice utente. Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Windows::Foundation::Collections

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Windows:: Foundation:: Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)
