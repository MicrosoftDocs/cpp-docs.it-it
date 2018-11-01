---
title: tlbid
ms.date: 10/18/2018
f1_keywords:
- tlbid
helpviewer_keywords:
- tlbid attribute
ms.assetid: 54b06785-191b-4e77-a9a5-485f2b4acb09
ms.openlocfilehash: 31b71f7c195a7e2ee649b40197551e4ff5efda2c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50584512"
---
# <a name="tlbid"></a>tlbid

**Sezione specifica C++**

Consente di caricare librerie diverse dalla libreria dei tipi primaria.

## <a name="syntax"></a>Sintassi

```
tlbid(number)
```

### <a name="parameters"></a>Parametri

*Numero*<br/>
Numero della libreria di tipi in `filename`.

## <a name="remarks"></a>Note

Se più librerie dei tipi sono integrate in una singola DLL, è possibile caricare librerie diverse dalla libreria dei tipi primaria utilizzando **tlbid**.

Ad esempio:

```cpp
#import <MyResource.dll> tlbid(2)
```

equivale a:

```cpp
LoadTypeLib("MyResource.dll\\2");
```

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)