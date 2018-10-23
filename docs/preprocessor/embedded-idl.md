---
title: embedded_idl | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- embedded_idl
dev_langs:
- C++
helpviewer_keywords:
- embedded_idl attribute
ms.assetid: f1c1c2e8-3872-4172-8795-8d1288a20452
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d7337595111b01ceeec53cc97f11ec2f35a081c5
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49808342"
---
# <a name="embeddedidl"></a>embedded_idl

**Sezione specifica C++**

Specifica che la libreria dei tipi è scritta nel file con estensione tlh con il codice generato dall'attributo mantenuto.

## <a name="syntax"></a>Sintassi

```
embedded_idl[("param")]
```

### <a name="parameters"></a>Parametri

*param*<br/>
Può essere uno dei due valori:

- **emitidl**: informazioni sui tipi importate dalla libreria dei tipi saranno presenti nel file IDL generato per il progetto con attributi.  Questa è l'impostazione predefinita e avrà effetto se non si specifica un parametro su `embedded_idl`.

- **no_emitidl**: informazioni sui tipi importate dalla libreria dei tipi non saranno presenti nel file IDL generato per il progetto con attributo.

## <a name="example"></a>Esempio

```cpp
// import_embedded_idl.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib2")];
#import "\school\bin\importlib.tlb" embedded_idl("no_emitidl")
```

## <a name="remarks"></a>Note

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)