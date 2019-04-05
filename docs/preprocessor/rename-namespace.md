---
title: rename_namespace
ms.date: 10/18/2018
f1_keywords:
- rename_namespace
helpviewer_keywords:
- rename_namespace attribute
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
ms.openlocfilehash: 7b3917a7114ca44d092f10a7831bb35bc64e9387
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59039877"
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

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)