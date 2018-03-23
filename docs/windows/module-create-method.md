---
title: 'Metodo Module:: Create | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::Create
dev_langs:
- C++
helpviewer_keywords:
- Create method
ms.assetid: bfa97fd7-5226-4604-92a5-3b9697053e64
caps.latest.revision: ''
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e566b34140c0b82072c8469cd8d965f807e244ec
ms.sourcegitcommit: 1d11412c8f5e6ddf4edded89e0ef5097cc89f812
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2018
---
# <a name="modulecreate-method"></a>Metodo Module::Create
Crea un'istanza di un modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW static Module& Create();  
template<typename T>  
WRL_NOTHROW static Module& Create(  
   T callback  
);  
template<typename T>  
WRL_NOTHROW static Module& Create(  
   _In_ T* object,  
   _In_ void (T::* method)()  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo di modulo.  
  
 `callback`  
 Chiamato quando viene rilasciato l'ultimo oggetto istanza del modulo.  
  
 `object`  
 Il `object` e `method` i parametri vengono utilizzati in combinazione. Punta all'ultimo oggetto istanza quando viene rilasciato l'ultimo oggetto istanza del modulo.  
  
 `method`  
 Il `object` e `method` i parametri vengono utilizzati in combinazione. Punta al metodo dell'ultimo oggetto istanza quando viene rilasciato l'ultimo oggetto istanza del modulo.  
  
## <a name="return-value"></a>Valore restituito  
 Riferimento al modulo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
[Classe Module](../windows/module-class.md)

 