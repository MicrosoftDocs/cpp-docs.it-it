---
title: tlbid | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- tlbid
dev_langs:
- C++
helpviewer_keywords:
- tlbid attribute
ms.assetid: 54b06785-191b-4e77-a9a5-485f2b4acb09
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 52cb9237537e151e699974fe91c5a7a99725513f
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="tlbid"></a>tlbid
**Sezione specifica C++**  
  
 Consente di caricare librerie diverse dalla libreria dei tipi primaria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
tlbid(number)  
```  
  
#### <a name="parameters"></a>Parametri  
 `number`  
 Numero della libreria di tipi in `filename`.  
  
## <a name="remarks"></a>Note  
 Se più librerie di tipi vengono compilate in un singola DLL, è possibile caricare librerie diverse dalla libreria di tipi primaria utilizzando `tlbid`.  
  
 Ad esempio:  
  
```  
#import <MyResource.dll> tlbid(2)  
```  
  
 equivale a:  
  
```  
LoadTypeLib("MyResource.dll\\2");  
```  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [attributi #import](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)