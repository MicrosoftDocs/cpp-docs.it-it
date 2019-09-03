---
title: attributo di importazione TLBID
ms.date: 08/29/2019
f1_keywords:
- tlbid
helpviewer_keywords:
- tlbid attribute
ms.assetid: 54b06785-191b-4e77-a9a5-485f2b4acb09
ms.openlocfilehash: 364fb224b0f2769cb0933e71d18ff70768189328
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216530"
---
# <a name="tlbid-import-attribute"></a>attributo di importazione TLBID

**C++Specifico**

Consente di caricare librerie diverse dalla libreria dei tipi primaria.

## <a name="syntax"></a>Sintassi

> **#import** *Type-Library-DLL* **TLBID (** *numero* **)**

### <a name="parameters"></a>Parametri

*numero*\
Il numero della libreria dei tipi in *Type-Library-DLL*.

## <a name="remarks"></a>Note

Se più librerie dei tipi sono compilate in una singola DLL, è possibile caricare librerie diverse dalla libreria dei tipi primaria usando **TLBID**.

Ad esempio:

```cpp
#import <MyResource.dll> tlbid(2)
```

equivale a:

```cpp
LoadTypeLib("MyResource.dll\\2");
```

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
