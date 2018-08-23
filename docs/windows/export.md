---
title: Esporta | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.export
dev_langs:
- C++
helpviewer_keywords:
- export attribute
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e696b3c141a83882af67e72039c164a0f917d446
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611200"
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

Il typedef valido per l'esportazione sono tipi di base, le strutture, unioni, enumerazioni, o gli identificatori dei tipi.  Visualizzare [typedef](http://msdn.microsoft.com/library/windows/desktop/aa367287) per altre informazioni.

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
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](../windows/compiler-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  