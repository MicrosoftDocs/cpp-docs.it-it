---
title: AsyncResultType (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncResultType
helpviewer_keywords:
- AsyncResultType enumeration
ms.assetid: 4195d234-3f3f-4363-9118-6ad2a7551cf2
ms.openlocfilehash: d3f99fa85a777ae8361ed6f7cb82fe97ddd8d667
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62398797"
---
# <a name="asyncresulttype-enumeration"></a>AsyncResultType (enumerazione)

Specifica il tipo di risultato restituito dal `GetResults()` (metodo).

## <a name="syntax"></a>Sintassi

```cpp
enum AsyncResultType;
```

## <a name="members"></a>Membri

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`MultipleResults`|Un set di risultati più, che vengono presentati progressivamente between `Start` lo stato e prima `Close()` viene chiamato.|
|`SingleResult`|Un singolo risultato, viene visualizzato dopo il `Complete` evento si verifica.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)