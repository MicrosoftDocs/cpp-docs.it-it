---
title: usesgetlasterror | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.usesgetlasterror
dev_langs:
- C++
helpviewer_keywords:
- usesgetlasterror attribute
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 39052024224b1a78a84b2d9503957b8fff09b96f
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208291"
---
# <a name="usesgetlasterror"></a>usesgetlasterror

Indica al chiamante che se si verifica un errore quando si chiama tale funzione, quindi il chiamante può quindi chiamare `GetLastError` per recuperare il codice di errore.

## <a name="syntax"></a>Sintassi

```cpp
[usesgetlasterror]
```

## <a name="remarks"></a>Note

Il **usesgetlasterror** attributi di C++ ha la stessa funzionalità come la [usesgetlasterror](/windows/desktop/Midl/usesgetlasterror) attributo MIDL.

## <a name="example"></a>Esempio

Vedere le [idl_module](../windows/idl-module.md) esempio per un esempio di come usare **usesgetlasterror**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**modulo** attributo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  