---
title: high_property_prefixes | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- high_property_prefixes
dev_langs:
- C++
helpviewer_keywords:
- high_property_prefixes attribute
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2ce21958dbb928a29debe21fb7cfaed4b9036141
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541784"
---
# <a name="highpropertyprefixes"></a>high_property_prefixes
**Sezione specifica C++**  
  
Specifica i prefissi alternativi per tre metodi della proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
high_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")  
```  
  
### <a name="parameters"></a>Parametri  
*GetPrefix*  
Prefisso da utilizzare per il `propget` metodi.  
  
*PutPrefix*  
Prefisso da utilizzare per il `propput` metodi.  
  
*PutRefPrefix*  
Prefisso da utilizzare per il `propputref` metodi.  
  
## <a name="remarks"></a>Note  
 
Per impostazione predefinita, gestione degli errori di alto livello `propget`, `propput`, e `propputref` metodi vengono esposti dalle funzioni membro denominate con i prefissi `Get`, `Put`, e `PutRef`, rispettivamente.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)