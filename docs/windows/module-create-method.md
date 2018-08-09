---
title: 'Metodo Module:: Create | Microsoft Docs'
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
ms.openlocfilehash: 1b3f865addd83bec64250807285947ea1c92e59f
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40016613"
---
# <a name="modulecreate-method"></a>Metodo Module::Create
Crea un'istanza di un modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
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
  
### <a name="parameters"></a>Parametri  
 *T*  
 Tipo di modulo.  
  
 *callback*  
 Chiamato quando viene rilasciato l'ultimo oggetto istanza del modulo.  
  
 *object*  
 Il *oggetti* e *metodo* i parametri vengono utilizzati in combinazione. Punta all'ultimo oggetto dell'istanza quando viene rilasciato l'ultimo oggetto istanza del modulo.  
  
 *(Metodo)*  
 Il *oggetti* e *metodo* i parametri vengono utilizzati in combinazione. Punta al metodo dell'oggetto dell'ultima istanza quando viene rilasciato l'ultimo oggetto istanza del modulo.  
  
## <a name="return-value"></a>Valore restituito  
 Riferimento al modulo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
[Classe Module](../windows/module-class.md)