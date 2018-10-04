---
title: usesgetlasterror (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
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
ms.openlocfilehash: 501f6b1801ace9f6002cca5d3559dfcb01e994f5
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791308"
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

Vedere le [idl_module](idl-module.md) esempio per un esempio di come usare **usesgetlasterror**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**modulo** attributo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)  