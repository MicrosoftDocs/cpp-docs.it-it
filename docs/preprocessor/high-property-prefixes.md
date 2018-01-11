---
title: high_property_prefixes | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: high_property_prefixes
dev_langs: C++
helpviewer_keywords: high_property_prefixes attribute
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ed37cdc51c5e08899786ce82a9c3e5e3224f9f9e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="highpropertyprefixes"></a>high_property_prefixes
**Sezione specifica C++**  
  
 Specifica i prefissi alternativi per tre metodi della proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
high_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")  
```  
  
#### <a name="parameters"></a>Parametri  
 `GetPrefix`  
 Prefisso da utilizzare per il **propget** metodi.  
  
 `PutPrefix`  
 Prefisso da utilizzare per il **propput** metodi.  
  
 `PutRefPrefix`  
 Prefisso da utilizzare per il **propputref** metodi.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, gestione degli errori di alto livello **propget**, **propput**, e **propputref** metodi vengono esposti dalle funzioni membro denominate con i prefissi **ottenere** , `Put`, e **PutRef**, rispettivamente.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)