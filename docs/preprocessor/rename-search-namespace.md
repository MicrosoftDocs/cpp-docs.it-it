---
title: rename_search_namespace
ms.date: 10/18/2018
f1_keywords:
- rename_search_namespace
helpviewer_keywords:
- rename_search_namespace attribute
ms.assetid: 47c9d7fd-59dc-4c62-87a1-9011a0040167
ms.openlocfilehash: ca5d24ca9cc12e9defaa395cf150bc3c04ee4439
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59022853"
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