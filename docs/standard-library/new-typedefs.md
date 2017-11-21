---
title: Typedef &lt;new&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: new/std::new_handler
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
caps.latest.revision: "7"
manager: ghogen
ms.openlocfilehash: e23ea06002dc840997a0e7202f581cd81ef407c5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ltnewgt-typedefs"></a>Typedef &lt;new&gt;
||  
|-|  
|[new_handler](#new_handler)|  
  
##  <a name="new_handler"></a>  new_handler  
 Il tipo punta a una funzione appropriata per l'uso come nuovo gestore.  
  
```
typedef void (*new_handler)();
```  
  
### <a name="remarks"></a>Note  
 Questo tipo di funzione del gestore viene chiamato da **operatornew** o `operator new[]` quando non è in grado di soddisfare una richiesta di memoria aggiuntiva.  
  
### <a name="example"></a>Esempio  
  Vedere [set_new_handler](../standard-library/new-functions.md#set_new_handler) per un esempio d'uso di `new_handler` come valore restituito.  
  
## <a name="see-also"></a>Vedere anche  
 [\<new>](../standard-library/new.md)



