---
title: no_namespace | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- no_namespace
dev_langs:
- C++
helpviewer_keywords:
- no_namespace attribute
ms.assetid: 5d81b741-a558-451b-b493-1f3b18967337
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e84cfad5a11c0d691c56e6e7ddcca17ea87e3f02
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50082920"
---
# <a name="nonamespace"></a>no_namespace
**Sezione specifica C++**

Specifica che il nome dello spazio dei nomi non viene generato dal compilatore.

## <a name="syntax"></a>Sintassi

```
no_namespace
```

## <a name="remarks"></a>Note

Il contenuto della libreria di tipi nel file di intestazione `#import` è in genere definito in uno spazio dei nomi. Il nome dello spazio dei nomi è specificato nel `library` istruzione del file IDL originale. Se il **no_namespace** attributo è specificato, quindi questo spazio dei nomi non viene generato dal compilatore.

Se si desidera utilizzare un nome di spazio dei nomi diverso, quindi usare il [rename_namespace](../preprocessor/rename-namespace.md) invece dell'attributo.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)