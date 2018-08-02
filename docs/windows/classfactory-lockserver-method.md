---
title: 'Metodo ClassFactory:: Lockserver | Microsoft Docs'
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
ms.openlocfilehash: 654ef60c924a14e861971c651899c8baea0300ef
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462706"
---
# <a name="classfactorylockserver-method"></a>Metodo ClassFactory::LockServer
Incrementa o decrementa il numero di base di oggetti che vengono rilevati tramite il **ClassFactory** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   LockServer  
)(BOOL fLock);  
```  
  
#### <a name="parameters"></a>Parametri  
 *branco*  
 **true** per incrementare il numero di oggetti registrati. **false** per ridurre il numero di oggetti registrati.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, E_FAIL.  
  
## <a name="remarks"></a>Note  
 ClassFactory tiene traccia degli oggetti in un'istanza sottostante del [modulo](../windows/module-class.md) classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ClassFactory](../windows/classfactory-class.md)