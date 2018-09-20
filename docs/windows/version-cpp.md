---
title: versione (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.version
dev_langs:
- C++
helpviewer_keywords:
- version attribute
- version information, version attribute
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 60a5ad42f83d9e9528fd5bdc4c8d3e62254a3677
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438736"
---
# <a name="version-c"></a>version (C++)

Identifica una particolare versione tra più versioni di una classe.

## <a name="syntax"></a>Sintassi

```cpp
[ version(
   "version"
) ]
```

### <a name="parameters"></a>Parametri

*version*<br/>
Il numero di versione il `coclass`. Se non specificato, 1.0 verrà inserita nel file IDL.

## <a name="remarks"></a>Note

Il **versione** attributi di C++ ha la stessa funzionalità come la [versione](/windows/desktop/Midl/version) attributo MIDL e viene passato al file con estensione IDL generato.

## <a name="example"></a>Esempio

Vedere le [associabile](../windows/bindable.md) per un esempio dell'uso di esempio **versione**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**coclass**|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](../windows/compiler-attributes.md)<br/>
[Attributi di classe](../windows/class-attributes.md)  