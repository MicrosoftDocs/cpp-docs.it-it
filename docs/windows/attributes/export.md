---
title: Export (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.export
helpviewer_keywords:
- export attribute
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
ms.openlocfilehash: 5ffa4283b8a2b265809d06b72be96e217cf8bf9f
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59023607"
---
# <a name="export"></a>esportazione

Fa sì che una struttura di dati da inserire nel file IDL.

## <a name="syntax"></a>Sintassi

```cpp
[export]
```

## <a name="remarks"></a>Note

Il **esportare** C++ attributo causa una struttura di dati da inserire nel file IDL e sia quindi disponibile nella libreria dei tipi in un formato compatibile con file binario che lo rende disponibile per l'utilizzo con qualsiasi linguaggio.

Non è possibile applicare il **esportare** anche se la classe contiene solo membri pubblici dell'attributo a una classe (l'equivalente di un **struct**).

Se si esporta un oggetto senza nome **enum** oppure **struct**, viene assegnato un nome che inizia con **unnamed**<em>x</em>, dove *x* è un numero sequenza.

Il typedef valido per l'esportazione sono tipi di base, le strutture, unioni, enumerazioni, o gli identificatori dei tipi.  Visualizzare [typedef](/windows/desktop/Midl/typedef) per altre informazioni.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare il **esportare** attributo:

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
|**Si applica a**|**Union**, **typedef**, **enum**, **struct**, o **interfaccia**|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)