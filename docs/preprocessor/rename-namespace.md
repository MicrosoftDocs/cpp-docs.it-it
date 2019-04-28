---
title: rename_namespace
ms.date: 10/18/2018
f1_keywords:
- rename_namespace
helpviewer_keywords:
- rename_namespace attribute
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
ms.openlocfilehash: 7b3917a7114ca44d092f10a7831bb35bc64e9387
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179763"
---
# <a name="renamenamespace"></a>rename_namespace

**Sezione specifica C++**

Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.

## <a name="syntax"></a>Sintassi

```
rename_namespace("NewName")
```

### <a name="parameters"></a>Parametri

*NewName*<br/>
Nuovo nome dello spazio dei nomi.

## <a name="remarks"></a>Note

È necessario un solo argomento, *NewName*, che consente di specificare il nuovo nome per lo spazio dei nomi.

Per rimuovere lo spazio dei nomi, usare il [no_namespace](../preprocessor/no-namespace.md) invece dell'attributo.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)