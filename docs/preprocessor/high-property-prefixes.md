---
title: high_property_prefixes
ms.date: 10/18/2018
f1_keywords:
- high_property_prefixes
helpviewer_keywords:
- high_property_prefixes attribute
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
ms.openlocfilehash: 3f8975ec9737e02bb1216166cc6c241549e95a07
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59029369"
---
# <a name="highpropertyprefixes"></a>high_property_prefixes

**Sezione specifica C++**

Specifica i prefissi alternativi per tre metodi della proprietà.

## <a name="syntax"></a>Sintassi

```
high_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")
```

### <a name="parameters"></a>Parametri

*GetPrefix*<br/>
Prefisso da utilizzare per il `propget` metodi.

*PutPrefix*<br/>
Prefisso da utilizzare per il `propput` metodi.

*PutRefPrefix*<br/>
Prefisso da utilizzare per il `propputref` metodi.

## <a name="remarks"></a>Note

Per impostazione predefinita, gestione degli errori di alto livello `propget`, `propput`, e `propputref` metodi vengono esposti dalle funzioni membro denominate con i prefissi `Get`, `Put`, e `PutRef`, rispettivamente.

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[Direttiva #import](../preprocessor/hash-import-directive-cpp.md)