---
title: importlib | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.importlib
dev_langs:
- C++
helpviewer_keywords:
- importlib attribute
ms.assetid: f129e459-b8d3-4aca-a0bc-ee53e18b62ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3df5a1893567b54337a5c3807fcace6a02154670
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416006"
---
# <a name="importlib"></a>importlib

Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.

## <a name="syntax"></a>Sintassi

```cpp
[ importlib(
   "tlb_file"
) ];
```

### <a name="parameters"></a>Parametri

*tlb_file*<br/>
Nome di un file tlb, racchiuso tra virgolette, che si desidera importare nella libreria dei tipi del progetto corrente.

## <a name="remarks"></a>Note

Il **importlib** C++ attributo provoca un `importlib` informativa per essere inserito nel blocco di libreria del file con estensione IDL generato. Il **importlib** attributo ha la stessa funzionalità come la [importlib](/windows/desktop/Midl/importlib) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato un esempio d'uso **importlib**:

```cpp
// cpp_attr_ref_importlib.cpp
// compile with: /LD
[module(name="MyLib")];
[importlib("importlib.tlb")];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](../windows/compiler-attributes.md)<br/>
[Attributi autonomi](../windows/stand-alone-attributes.md)<br/>
[import](../windows/import.md)<br/>
[importidl](../windows/importidl.md)<br/>
[include](../windows/include-cpp.md)<br/>
[includelib](../windows/includelib-cpp.md)