---
title: no_registry
ms.date: 10/18/2018
f1_keywords:
- no_registry
helpviewer_keywords:
- no_registry attribute
ms.assetid: d30de4e2-551c-428c-98fd-951330d578d3
ms.openlocfilehash: 2a0fd9a761f765aa9562ab18c095f683b80c7987
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59023425"
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

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)