---
title: 'Metodo ClassFactory:: Lockserver | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ClassFactory::LockServer
dev_langs:
- C++
helpviewer_keywords:
- LockServer method
ms.assetid: 8d859815-956d-4f81-a5af-7cdee7e945de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9e09a795688c7e2b31771126f9e4036ddfbd8e4f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33860320"
---
# <a name="classfactorylockserver-method"></a>Metodo ClassFactory::LockServer
Incrementa o decrementa il numero di base di oggetti che vengono rilevate dall'oggetto ClassFactory corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   LockServer  
)(BOOL fLock);  
```  
  
#### <a name="parameters"></a>Parametri  
 `fLock`  
 `true` Per incrementare il numero di oggetti rilevati. `false` Per ridurre il numero di oggetti registrati.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, E_FAIL.  
  
## <a name="remarks"></a>Note  
 ClassFactory tiene traccia degli oggetti in un'istanza di sottostante il [modulo](../windows/module-class.md) classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ClassFactory](../windows/classfactory-class.md)