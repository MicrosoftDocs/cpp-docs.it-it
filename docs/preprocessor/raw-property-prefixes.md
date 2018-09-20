---
title: raw_property_prefixes | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- raw_property_prefixes
dev_langs:
- C++
helpviewer_keywords:
- raw_property_prefixes attribute
ms.assetid: 03a0f48c-c460-4175-a762-9f7f8d84b12f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ae69e26077692188b8e013e949592df26d7701a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46420400"
---
# <a name="rawpropertyprefixes"></a>raw_property_prefixes
**Sezione specifica C++**  
  
Specifica i prefissi alternativi per tre metodi della proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")  
```  
  
### <a name="parameters"></a>Parametri  
*GetPrefix*  
Prefisso da utilizzare per il `propget` metodi.  
  
*PutPrefix*  
Prefisso da utilizzare per il `propput` metodi.  
  
*PutRefPrefix*  
Prefisso da utilizzare per il `propputref` metodi.  
  
## <a name="remarks"></a>Note  
 
Per impostazione predefinita, a basso livello `propget`, `propput`, e `propputref` i metodi vengono esposti dalle funzioni membro denominate con il prefisso **get _**, **Put _**, e **PutRef_** rispettivamente. I prefissi sono compatibili con i nomi utilizzati nei file di intestazione generati da MIDL.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)