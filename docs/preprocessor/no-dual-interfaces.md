---
title: no_dual_interfaces | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- no_dual_interfaces
dev_langs:
- C++
helpviewer_keywords:
- no_dual_interfaces attribute
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ba20fcba43cc23dfce447d7e91955a43c28a6a31
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)