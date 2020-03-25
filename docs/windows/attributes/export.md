---
title: Export (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.export
helpviewer_keywords:
- export attribute
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
ms.openlocfilehash: 6264db037069f5fc6b858bdd466ce6c68b814a84
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80167044"
---
# <a name="export"></a>esportare

Determina la posizione di una struttura di dati nel file con estensione IDL.

## <a name="syntax"></a>Sintassi

```cpp
[export]
```

## <a name="remarks"></a>Osservazioni

L'attributo **Export** C++ causa l'inserimento di una struttura di dati nel file con estensione IDL e quindi la disponibilità nella libreria dei tipi in un formato compatibile con binario che lo rende disponibile per l'utilizzo con qualsiasi linguaggio.

Non è possibile applicare l'attributo **Export** a una classe anche se la classe dispone solo di membri pubblici (l'equivalente di uno **struct**).

Se si esporta un' **enumerazione** o uno **struct**senza nome, viene assegnato un nome che inizia con **__unnamed**<em>x</em>, dove *x* è un numero sequenziale.

I typedef validi per l'esportazione sono tipi di base, struct, unioni, enumerazioni o identificatori di tipo.  Per ulteriori informazioni, vedere [typedef](/windows/win32/Midl/typedef) .

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare l'attributo **Export** :

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
|**Si applica a**|**Union**, **typedef**, **enum**, **struct**o **Interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)
