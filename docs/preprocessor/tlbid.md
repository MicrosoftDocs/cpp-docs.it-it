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
ms.openlocfilehash: 9d651546733f42b1a714ac7a39992fa2d392c8fa
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33839868"
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