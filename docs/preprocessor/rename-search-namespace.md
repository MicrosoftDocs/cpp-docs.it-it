---
title: rename_search_namespace
ms.date: 10/18/2018
f1_keywords:
- rename_search_namespace
helpviewer_keywords:
- rename_search_namespace attribute
ms.assetid: 47c9d7fd-59dc-4c62-87a1-9011a0040167
ms.openlocfilehash: 1e8d682b3d52c80779d62443074614480ed514ee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50510735"
---
# <a name="renamesearchnamespace"></a>rename_search_namespace

**Sezione specifica C++**

Ha la stessa funzionalità come la [rename_namespace](../preprocessor/rename-namespace.md) dell'attributo, ma viene usato su librerie dei tipi che usano il `#import` direttiva con il [auto_search](../preprocessor/auto-search.md) attributo.

## <a name="syntax"></a>Sintassi

```
rename_search_namespace("NewName")
```

### <a name="parameters"></a>Parametri

*NewName*<br/>
Nuovo nome dello spazio dei nomi.

## <a name="remarks"></a>Note

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)