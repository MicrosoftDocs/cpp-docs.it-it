---
title: rename_namespace | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: rename_namespace
dev_langs: C++
helpviewer_keywords: rename_namespace attribute
ms.assetid: 45006d2b-36cd-4bec-98b9-3b8ec45299e3
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 856762f9582f4a91275c29d49c5065e8436cc719
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="renamenamespace"></a>rename_namespace
**Sezione specifica C++**  
  
 Rinomina lo spazio dei nomi i cui è presente il contenuto della libreria dei tipi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
rename_namespace("NewName")  
```  
  
#### <a name="parameters"></a>Parametri  
 `NewName`  
 Nuovo nome dello spazio dei nomi.  
  
## <a name="remarks"></a>Note  
 È necessario un solo argomento, *NewName*, che specifica il nuovo nome per lo spazio dei nomi.  
  
 Per rimuovere lo spazio dei nomi, utilizzare il [no_namespace](../preprocessor/no-namespace.md) invece dell'attributo.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)