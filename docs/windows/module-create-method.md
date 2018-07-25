---
title: 'Metodo Module:: Create | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::Create
dev_langs:
- C++
helpviewer_keywords:
- Create method
ms.assetid: bfa97fd7-5226-4604-92a5-3b9697053e64
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 99ede64c239909956f1f767db34a2a6a14c02314
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874889"
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

 