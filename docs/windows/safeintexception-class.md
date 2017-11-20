---
title: Classe SafeIntException | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: SafeIntException Class
dev_langs: C++
helpviewer_keywords: SafeIntException class
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
caps.latest.revision: "8"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: 22f6bb428d601be960162ba0a9390d1ba784cdcd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="safeintexception-class"></a>Classe SafeIntException
Il `SafeInt` utilizzato dalla classe `SafeIntException` per identificare il motivo per cui non è possibile completare un'operazione matematica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class SafeIntException;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
 [SafeIntException::SafeIntException](../windows/safeintexception-safeintexception.md)  
 Crea un oggetto `SafeIntException`.  
  
## <a name="remarks"></a>Note  
 Il [classe SafeInt](../windows/safeint-class.md) è l'unica classe che utilizza il `SafeIntException` classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [Classe SafeIntException](../windows/safeintexception-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** SafeInt. h  
  
 **Namespace:** msl::utilities  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria SafeInt](../windows/safeint-library.md)   
 [Classe SafeInt](../windows/safeint-class.md)