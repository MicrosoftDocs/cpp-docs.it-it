---
title: "Metodo Module::Create | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::Create"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Create (metodo)"
ms.assetid: bfa97fd7-5226-4604-92a5-3b9697053e64
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo Module::Create
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un'istanza di un modulo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW static Module& Create();  
template<  
   typename T  
>  
WRL_NOTHROW static Module& Create(  
   T callback  
);  
template<  
   typename T  
>  
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
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
[Module (classe)](../windows/module-class.md)

 