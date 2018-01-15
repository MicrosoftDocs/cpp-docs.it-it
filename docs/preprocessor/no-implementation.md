---
title: no_implementation | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: no_implementation
dev_langs: C++
helpviewer_keywords: no_implementation attribute
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: aa0a8337de519b2b0d43e8d5035e3845e1aefbe4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="noimplementation"></a>no_implementation
**Sezione specifica C++**  
  
 Elimina la generazione dell'intestazione con estensione tli, contenente implementazioni delle funzioni membro wrapper.  
  
## <a name="syntax"></a>Sintassi  
  
```  
no_implementation  
```  
  
## <a name="remarks"></a>Note  
 Se viene specificato questo attributo, l'intestazione con estensione tlh, con le dichiarazioni per esporre gli elementi libreria-tipo, verrà generata senza un'istruzione `#include` per includere il file di intestazione con estensione tli.  
  
 Questo attributo viene utilizzato in combinazione con [implementation_only](../preprocessor/implementation-only.md).  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)