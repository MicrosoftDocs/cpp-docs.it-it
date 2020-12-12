---
description: 'Altre informazioni su: Version (C++)'
title: Version (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.version
helpviewer_keywords:
- version attribute
- version information, version attribute
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
ms.openlocfilehash: 5b6d13e59b36fe37d71c9e2cca6fe7d75587f77b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118303"
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

## <a name="remarks"></a>Commenti

L'attributo **Version** C++ ha la stessa funzionalità dell'attributo MIDL della [versione](/windows/win32/Midl/version) e viene passato al file IDL generato.

## <a name="example"></a>Esempio

Vedere l'esempio [associabile](bindable.md) per un uso di esempio della **versione**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|**coclass**|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
