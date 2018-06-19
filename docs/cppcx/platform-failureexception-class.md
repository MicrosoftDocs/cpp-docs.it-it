---
title: 'Classe platform:: FailureException | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::FailureException::FailureException
- VCCORLIB/Platform::FailureException
dev_langs:
- C++
helpviewer_keywords:
- Platform::FailureException
ms.assetid: 1729cd07-bfc2-448e-9db5-185d5cbf5b81
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1094810663ce0a0abf8234af386d7a8427472ced
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33088141"
---
# <a name="platformfailureexception-class"></a>Classe Platform::FailureException
Generata quando l'operazione non viene completata correttamente. È l'equivalente di HRESULT E_FAIL.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public ref class FailureException : COMException,    IException,    IPrintable,    IEquatable  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md) .  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Platform::COMException](../cppcx/platform-comexception-class.md)