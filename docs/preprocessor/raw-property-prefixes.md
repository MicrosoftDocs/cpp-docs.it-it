---
title: raw_property_prefixes
ms.date: 10/18/2018
f1_keywords:
- raw_property_prefixes
helpviewer_keywords:
- raw_property_prefixes attribute
ms.assetid: 03a0f48c-c460-4175-a762-9f7f8d84b12f
ms.openlocfilehash: 1e44b5265e486f0e5b5896bed41b62ebbdaa4fd3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50647136"
---
# <a name="rawpropertyprefixes"></a>raw_property_prefixes

**Sezione specifica C++**

Specifica i prefissi alternativi per tre metodi della proprietà.

## <a name="syntax"></a>Sintassi

```
raw_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")
```

### <a name="parameters"></a>Parametri

*GetPrefix*<br/>
Prefisso da utilizzare per il `propget` metodi.

*PutPrefix*<br/>
Prefisso da utilizzare per il `propput` metodi.

*PutRefPrefix*<br/>
Prefisso da utilizzare per il `propputref` metodi.

## <a name="remarks"></a>Note

Per impostazione predefinita, a basso livello `propget`, `propput`, e `propputref` i metodi vengono esposti dalle funzioni membro denominate con il prefisso **get _**, **Put _**, e **PutRef_** rispettivamente. I prefissi sono compatibili con i nomi utilizzati nei file di intestazione generati da MIDL.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)