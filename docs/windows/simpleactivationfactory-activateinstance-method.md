---
title: "Metodo SimpleActivationFactory::ActivateInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::SimpleActivationFactory::ActivateInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActivateInstance (metodo)"
ms.assetid: 4f836e51-5a6c-4bad-b871-9f25199298b4
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo SimpleActivationFactory::ActivateInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Crea un'istanza dell'interfaccia specificata.  
  
## Sintassi  
  
```  
STDMETHOD(  
   ActivateInstance  
)(_Deref_out_ IInspectable **ppvObject);  
```  
  
#### Parametri  
 `ppvObject`  
 Quando questa operazione viene completata, punta ad un'istanza dell'oggetto specificato dal parametro `Base`.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Se \_\_WRL\_STRICT è definito, un errore di asserzione viene generato se la classe base specificata dal parametro di template di classe non è derivata da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il valore di enumerazione ClassicCom o WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)