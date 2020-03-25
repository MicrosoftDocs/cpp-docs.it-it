---
title: Version (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.version
helpviewer_keywords:
- version attribute
- version information, version attribute
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
ms.openlocfilehash: e5fcf80ef753a869b8798d6ab9c8e9f8ecff16fd
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165990"
---
# <a name="version-c"></a>version (C++)

Identifica una particolare versione tra più versioni di una classe.

## <a name="syntax"></a>Sintassi

```cpp
[ version("version") ]
```

### <a name="parameters"></a>Parametri

*version*<br/>
Numero di versione dell'oggetto `coclass`. Se non è specificato, 1,0 verrà inserito nel file con estensione IDL.

## <a name="remarks"></a>Osservazioni

L'attributo **Version** C++ ha la stessa funzionalità dell'attributo MIDL della [versione](/windows/win32/Midl/version) e viene passato al file IDL generato.

## <a name="example"></a>Esempio

Vedere l'esempio [associabile](bindable.md) per un uso di esempio della **versione**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**coclass**|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
