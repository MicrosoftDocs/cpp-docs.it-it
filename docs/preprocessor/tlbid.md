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
ms.openlocfilehash: f5bd922089bcf189c403a97679a593a985603a12
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46446257"
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
 
[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)