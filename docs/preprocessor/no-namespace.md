---
title: no_namespace
ms.date: 11/04/2016
f1_keywords:
- no_namespace
helpviewer_keywords:
- no_namespace attribute
ms.assetid: 5d81b741-a558-451b-b493-1f3b18967337
ms.openlocfilehash: f6bd60de02bf0166d5cf0b0cd1bc1de56ceda5bf
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62326560"
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