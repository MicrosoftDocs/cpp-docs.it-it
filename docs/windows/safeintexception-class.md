---
title: Classe SafeIntException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- SafeIntException Class
dev_langs:
- C++
helpviewer_keywords:
- SafeIntException class
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 961fc2f2050336469f5944f603c0db3c6291a176
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33895775"
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