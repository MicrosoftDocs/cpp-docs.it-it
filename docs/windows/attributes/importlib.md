---
title: importlib (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
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
ms.openlocfilehash: dd43dd8a0fb4660cbe0c631bcb3477ef3d26f0f6
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791909"
---
# <a name="importlib"></a>importlib

Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.

## <a name="syntax"></a>Sintassi

```cpp
[ importlib("tlb_file") ];
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

Per altre informazioni, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[include](include-cpp.md)<br/>
[includelib](includelib-cpp.md)