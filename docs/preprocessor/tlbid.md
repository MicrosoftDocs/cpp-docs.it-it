---
title: tlbid | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- tlbid
dev_langs:
- C++
helpviewer_keywords:
- tlbid attribute
ms.assetid: 54b06785-191b-4e77-a9a5-485f2b4acb09
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1ec0150e63209728cf2f02c854fe03702b8a45b4
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541583"
---
# <a name="tlbid"></a>tlbid
**Sezione specifica C++**  
  
Consente di caricare librerie diverse dalla libreria dei tipi primaria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
tlbid(number)  
```  
  
### <a name="parameters"></a>Parametri  
*Numero*  
Numero della libreria di tipi in `filename`.  
  
## <a name="remarks"></a>Note  
 
Se più librerie dei tipi sono integrate in una singola DLL, è possibile caricare librerie diverse dalla libreria dei tipi primaria utilizzando **tlbid**.  
  
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