---
title: Typedef &lt;new&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- new/std::new_handler
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
caps.latest.revision: 7
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: e23ea06002dc840997a0e7202f581cd81ef407c5
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

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




