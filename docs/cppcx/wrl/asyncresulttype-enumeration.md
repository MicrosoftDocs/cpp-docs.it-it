---
description: 'Altre informazioni su: Enumerazione AsyncResultType'
title: AsyncResultType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncResultType
helpviewer_keywords:
- AsyncResultType enumeration
ms.assetid: 4195d234-3f3f-4363-9118-6ad2a7551cf2
ms.openlocfilehash: 431c0cabf98b3636bbae02b2f05a14d11d122740
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175820"
---
# <a name="asyncresulttype-enumeration"></a>AsyncResultType (enumerazione)

Specifica il tipo di risultato restituito dal `GetResults()` metodo.

## <a name="syntax"></a>Sintassi

```cpp
enum AsyncResultType;
```

## <a name="members"></a>Members

### <a name="values"></a>Valori

|Nome|Description|
|----------|-----------------|
|`MultipleResults`|Un set di più risultati, che vengono presentati progressivamente tra `Start` lo stato e prima della `Close()` chiamata a.|
|`SingleResult`|Un singolo risultato, che viene presentato dopo che `Complete` si è verificato l'evento.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
