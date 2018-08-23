---
title: rename_search_namespace | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- rename_search_namespace
dev_langs:
- C++
helpviewer_keywords:
- rename_search_namespace attribute
ms.assetid: 47c9d7fd-59dc-4c62-87a1-9011a0040167
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 20072a5196ce476cf178f7c6e1071bd495202062
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42544439"
---
# <a name="renamesearchnamespace"></a>rename_search_namespace
**Sezione specifica C++**  
  
Ha la stessa funzionalità come la [rename_namespace](../preprocessor/rename-namespace.md) dell'attributo, ma viene usato su librerie dei tipi che usano il `#import` direttiva con il [auto_search](../preprocessor/auto-search.md) attributo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
rename_search_namespace("NewName")  
```  
  
### <a name="parameters"></a>Parametri  
*NewName*  
Nuovo nome dello spazio dei nomi.  
  
## <a name="remarks"></a>Note  
 
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)