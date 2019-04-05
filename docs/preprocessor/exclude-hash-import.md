---
title: exclude (#import)
ms.date: 10/18/2018
f1_keywords:
- exclude
helpviewer_keywords:
- exclude attribute
ms.assetid: 0883248a-d4bf-420e-9848-807b28fa976e
ms.openlocfilehash: d6a320089d5954b2cf1d0d96ae1f37656f2ddd58
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59032388"
---
# <a name="exclude-import"></a>escludere (\#importazione)

**Sezione specifica C++**

Esclude gli elementi dai file di intestazione della libreria dei tipi generati.

## <a name="syntax"></a>Sintassi

```
exclude("Name1"[, "Name2",...])
```

### <a name="parameters"></a>Parametri

*Nome1*<br/>
Primo elemento da escludere.

*Nome2*<br/>
Secondo elemento da escludere (se necessario).

## <a name="remarks"></a>Note

Le librerie dei tipi possono includere definizioni di elementi definiti nelle intestazioni di sistema o in altre librerie dei tipi. Questo attributo può accettare un numero qualsiasi di argomenti, ognuno dei quali è un elemento di primo livello della libreria dei tipi da escludere.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)