---
title: exclude (#import)
ms.date: 10/18/2018
f1_keywords:
- exclude
helpviewer_keywords:
- exclude attribute
ms.assetid: 0883248a-d4bf-420e-9848-807b28fa976e
ms.openlocfilehash: d6a320089d5954b2cf1d0d96ae1f37656f2ddd58
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62389320"
---
# <a name="exclude-import"></a>escludere (\#importazione)

**Sezione specifica C++**

Esclude gli elementi dai file di intestazione della libreria dei tipi generati.

## <a name="syntax"></a>Sintassi

```
exclude("Name1"[, "Name2",...])
```

### <a name="parameters"></a>Parametri

*Name1*<br/>
Primo elemento da escludere.

*Name2*<br/>
Secondo elemento da escludere (se necessario).

## <a name="remarks"></a>Note

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. Questo attributo può accettare un numero qualsiasi di argomenti, ognuno dei quali è un elemento di primo livello della libreria dei tipi da escludere.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)