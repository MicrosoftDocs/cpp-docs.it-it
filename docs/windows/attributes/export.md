---
title: Export (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.export
helpviewer_keywords:
- export attribute
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
ms.openlocfilehash: ae7c426466bfaf4a325ba1cafe30c8ca74f8ef95
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228076"
---
# <a name="export"></a>esportare

Determina la posizione di una struttura di dati nel file con estensione IDL.

## <a name="syntax"></a>Sintassi

```cpp
[export]
```

## <a name="remarks"></a>Osservazioni

L' **`[export]`** attributo C++ comporta l'inserimento di una struttura di dati nel file con estensione IDL e quindi la disponibilità nella libreria dei tipi in un formato compatibile con binario che lo rende disponibile per l'utilizzo con qualsiasi linguaggio.

Non è possibile applicare l' **`[export]`** attributo a una classe anche se la classe dispone solo di membri pubblici (l'equivalente di un **`struct`** ).

Se si esporta un oggetto senza nome **`enum`** o **`struct`** , viene assegnato un nome che inizia con **__unnamed**<em>x</em>, dove *x* è un numero sequenziale.

I typedef validi per l'esportazione sono tipi di base, struct, unioni, enumerazioni o identificatori di tipo.  [`typedef`](/windows/win32/Midl/typedef)Per ulteriori informazioni, vedere.

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare l' **`[export]`** attributo:

```cpp
// cpp_attr_ref_export.cpp
// compile with: /LD
[module(name="MyLibrary")];

[export]
struct MyStruct {
   int i;
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`union`**, **`typedef`** , **`enum`** , **`struct`** o**`interface`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)
