---
title: out (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.out
dev_langs:
- C++
helpviewer_keywords:
- out attribute
ms.assetid: 5051b1bf-4949-4bf1-b82f-35e14f0f244b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1b90222faedf298f75bfea72c661a3f23f26eaed
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394880"
---
# <a name="out-c"></a>out (C++)

Identifica i parametri dei puntatori restituiti dalla routine chiamata alla routine chiamante (dal server al client).

## <a name="syntax"></a>Sintassi

```cpp
[out]
```

## <a name="remarks"></a>Note

Il **out** attributi di C++ ha la stessa funzionalità come la [out](/windows/desktop/Midl/out-idl) attributo MIDL.

## <a name="example"></a>Esempio

Per un'illustrazione dell'uso di [out](../windows/bindable.md) , vedere l'esempio per **bindable**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi di parametro](../windows/parameter-attributes.md)<br/>
[defaultvalue](../windows/defaultvalue.md)<br/>
[ID](../windows/id.md)  