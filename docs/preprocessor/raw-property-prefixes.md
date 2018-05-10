---
title: raw_property_prefixes | Documenti Microsoft
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
ms.openlocfilehash: c1f548c9513a086dd4741a9c61c51acebebb25db
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="rawpropertyprefixes"></a>raw_property_prefixes
**Sezione specifica C++**  
  
 Specifica i prefissi alternativi per tre metodi della proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
raw_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")  
```  
  
#### <a name="parameters"></a>Parametri  
 `GetPrefix`  
 Prefisso da utilizzare per il **propget** metodi.  
  
 `PutPrefix`  
 Prefisso da utilizzare per il **propput** metodi.  
  
 `PutRefPrefix`  
 Prefisso da utilizzare per il **propputref** metodi.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, basso livello **propget**, **propput**, e **propputref** metodi vengono esposti dalle funzioni membro denominate con il prefisso **get _**, **Put _**, e **PutRef _** rispettivamente. I prefissi sono compatibili con i nomi utilizzati nei file di intestazione generati da MIDL.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)