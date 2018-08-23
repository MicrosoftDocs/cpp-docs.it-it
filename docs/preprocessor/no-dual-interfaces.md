---
title: no_dual_interfaces | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- no_dual_interfaces
dev_langs:
- C++
helpviewer_keywords:
- no_dual_interfaces attribute
ms.assetid: 9acd5d9d-4a49-4cdc-9470-73a2c23cf512
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f1e919e48b79c9fe98a7a33257ebd0f70061d788
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541216"
---
# <a name="nodualinterfaces"></a>no_dual_interfaces
**Sezione specifica C++**  
  
Modifica il modo in cui il compilatore genera funzioni wrapper per i metodi di interfaccia duale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
no_dual_interfaces  
```  
  
## <a name="remarks"></a>Note  
 
In genere, il wrapper chiama il metodo attraverso la tabella di funzioni virtuali dell'interfaccia. Con **no_dual_interfaces**, il wrapper chiama invece `IDispatch::Invoke` per richiamare il metodo.  
  
**Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)