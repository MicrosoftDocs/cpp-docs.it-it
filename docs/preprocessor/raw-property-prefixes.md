---
title: raw_property_prefixes
ms.date: 10/18/2018
f1_keywords:
- raw_property_prefixes
helpviewer_keywords:
- raw_property_prefixes attribute
ms.assetid: 03a0f48c-c460-4175-a762-9f7f8d84b12f
ms.openlocfilehash: 23250b524fdaa2181c8e28229ccec680ffdae715
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59033255"
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

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)