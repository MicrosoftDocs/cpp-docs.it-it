---
title: no_dual_interfaces | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: no_dual_interfaces
dev_langs: C++
helpviewer_keywords: no_dual_interfaces attribute
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 03118b3f47111364e8d614f101977851891a53ff
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="nodualinterfaces"></a>no_dual_interfaces
**Sezione specifica C++**  
  
 Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
no_dual_interfaces  
```  
  
## <a name="remarks"></a>Note  
 In genere, il wrapper chiama il metodo attraverso la tabella di funzioni virtuali dell'interfaccia. Con `no_dual_interfaces`, il wrapper chiama invece **IDispatch:: Invoke** per richiamare il metodo.  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)