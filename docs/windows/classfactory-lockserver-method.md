---
title: 'Metodo ClassFactory:: Lockserver | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::ClassFactory::LockServer
dev_langs: C++
helpviewer_keywords: LockServer method
ms.assetid: 8d859815-956d-4f81-a5af-7cdee7e945de
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 477df9807c3eda089289930cafbe6dce1c0f6da6
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
 `true`Per incrementare il numero di oggetti rilevati. `false`Per ridurre il numero di oggetti registrati.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, E_FAIL.  
  
## <a name="remarks"></a>Note  
 ClassFactory tiene traccia degli oggetti in un'istanza di sottostante il [modulo](../windows/module-class.md) classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ClassFactory](../windows/classfactory-class.md)