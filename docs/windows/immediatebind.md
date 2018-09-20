---
title: immediatebind | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.immediatebind
dev_langs:
- C++
helpviewer_keywords:
- immediatebind attribute
ms.assetid: 186d40e6-9166-4d0c-9853-4e7e4d25226f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dc4c42132b2b964d0606fc3287e9d9fd98d64370
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46400738"
---
# <a name="immediatebind"></a>immediatebind

Indica che il database verrà immediatamente notificato tutte le modifiche apportate a una proprietà di un oggetto con associazione a dati.

## <a name="syntax"></a>Sintassi

```cpp
[immediatebind]
```

## <a name="remarks"></a>Note

Il **immediatebind** attributi di C++ ha la stessa funzionalità come la [immediatebind](/windows/desktop/Midl/immediatebind) attributo MIDL.

## <a name="example"></a>Esempio

Visualizzare [associabile](../windows/bindable.md) per un esempio di come usare **immediatebind**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi di metodo](../windows/method-attributes.md)<br/>
[defaultbind](../windows/defaultbind.md)<br/>
[displaybind](../windows/displaybind.md)<br/>
[requestedit](../windows/requestedit.md)  