---
title: TLBID | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: tlbid
dev_langs: C++
helpviewer_keywords: tlbid attribute
ms.assetid: 54b06785-191b-4e77-a9a5-485f2b4acb09
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 812b105fc02782b611b3f55061e448062dcd07c7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 [#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)