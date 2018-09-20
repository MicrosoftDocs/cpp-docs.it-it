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
ms.openlocfilehash: 6f188cd833551542e636e764e76784635ae2ccf2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46422766"
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
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)