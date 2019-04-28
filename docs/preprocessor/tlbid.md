---
title: tlbid
ms.date: 10/18/2018
f1_keywords:
- tlbid
helpviewer_keywords:
- tlbid attribute
ms.assetid: 54b06785-191b-4e77-a9a5-485f2b4acb09
ms.openlocfilehash: ae79ce9245bb1c0425c3e9b92dd27b52fa443dba
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179607"
---
# <a name="tlbid"></a>tlbid

**Sezione specifica C++**

Consente di caricare librerie diverse dalla libreria dei tipi primaria.

## <a name="syntax"></a>Sintassi

```
tlbid(number)
```

### <a name="parameters"></a>Parametri

*number*<br/>
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