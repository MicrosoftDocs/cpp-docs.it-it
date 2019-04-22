---
title: no_dual_interfaces
ms.date: 11/04/2016
f1_keywords:
- no_dual_interfaces
helpviewer_keywords:
- no_dual_interfaces attribute
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
ms.openlocfilehash: ae75bc2e974f374768f1a9e5a0e1ced61e9904b0
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59023802"
---
# <a name="nodualinterfaces"></a>no_dual_interfaces
**Sezione specifica C++**

Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.

## <a name="syntax"></a>Sintassi

```
no_dual_interfaces
```

## <a name="remarks"></a>Note

In genere, il wrapper chiama il metodo attraverso la tabella di funzioni virtuali dell'interfaccia. Con **no_dual_interfaces**, il wrapper chiama invece `IDispatch::Invoke` per richiamare il metodo.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)