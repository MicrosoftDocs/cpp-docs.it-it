---
title: versione (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.version
helpviewer_keywords:
- version attribute
- version information, version attribute
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
ms.openlocfilehash: fe1df9e12b9adbf9ce55978fd3479f7e740ddc96
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407159"
---
# <a name="version-c"></a>version (C++)

Identifica una particolare versione tra più versioni di una classe.

## <a name="syntax"></a>Sintassi

```cpp
[ version("version") ]
```

### <a name="parameters"></a>Parametri

*version*<br/>
Il numero di versione il `coclass`. Se non specificato, 1.0 verrà inserita nel file IDL.

## <a name="remarks"></a>Note

Il **versione** attributi di C++ ha la stessa funzionalità come la [versione](/windows/desktop/Midl/version) attributo MIDL e viene passato al file con estensione IDL generato.

## <a name="example"></a>Esempio

Vedere le [associabile](bindable.md) per un esempio dell'uso di esempio **versione**.

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