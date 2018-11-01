---
title: no_registry
ms.date: 10/18/2018
f1_keywords:
- no_registry
helpviewer_keywords:
- no_registry attribute
ms.assetid: d30de4e2-551c-428c-98fd-951330d578d3
ms.openlocfilehash: bd101f5ca1776518ff4c5092da99134110bbb0b0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50503025"
---
# <a name="noregistry"></a>no_registry

**no_registry** indica al compilatore di non cercare nel registro librerie dei tipi importate con `#import`.

## <a name="syntax"></a>Sintassi

```
#import filename no_registry
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Una libreria dei tipi.

## <a name="remarks"></a>Note

Se una libreria dei tipi di cui viene fatto riferimento non viene trovata nella directory di inclusione, la compilazione avrà esito negativo anche se la libreria dei tipi nel Registro di sistema.  **no_registry** propaga alle altre librerie dei tipi implicitamente importate con `auto_search`.

Il compilatore non cercherà mai nel Registro di sistema librerie dei tipi specificate dal nome file e passate direttamente a `#import`.

Quando `auto_search` viene specificato, aggiuntiva `#import`verranno generati con la **no_registry** impostazione iniziale `#import` (se iniziale `#import` direttiva è stata **no_registry** , un' `auto_search`-generato `#import` anche **no_registry**.)

**no_registry** è utile se si desidera importare tra le librerie dei tipi riferimento senza il rischio che il compilatore trovi una versione precedente del file del Registro di sistema. **no_registry** è utile anche se la libreria dei tipi non è registrata.

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)