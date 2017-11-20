---
title: _WAIT_CHILD, _WAIT_GRANDCHILD | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _WAIT_GRANDCHILD
- WAIT_CHILD
- WAIT_GRANDCHILD
- _WAIT_CHILD
dev_langs: C++
helpviewer_keywords:
- WAIT_CHILD constant
- WAIT_GRANDCHILD constant
- _WAIT_CHILD constant
- _WAIT_GRANDCHILD constant
ms.assetid: 7acd96fa-d118-4339-bb00-e5afaf286945
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1e5e3aa48f0184730a7860ea055d9b233b4ac708
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="waitchild-waitgrandchild"></a>_WAIT_CHILD, _WAIT_GRANDCHILD
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <process.h>  
  
```  
  
## <a name="remarks"></a>Note  
 La funzione `_cwait` può essere utilizzata da qualsiasi processo per attendere qualsiasi altro processo (se l'ID del processo è noto). L'argomento dell'azione può essere uno dei seguenti valori:  
  
|Costante|Significato|  
|--------------|-------------|  
|`_WAIT_CHILD`|Il processo chiamante attende fino a quando il nuovo processo specificato termina.|  
|`_WAIT_GRANDCHILD`|Il processo chiamante attende fino a quando il nuovo processo specificato e tutti gli altri processi creati da tale nuovo processo terminano.|  
  
## <a name="see-also"></a>Vedere anche  
 [_cwait](../c-runtime-library/reference/cwait.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)