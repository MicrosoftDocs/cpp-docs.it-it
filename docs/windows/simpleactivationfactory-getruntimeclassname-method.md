---
title: "Metodo SimpleActivationFactory::GetRuntimeClassName | Microsoft Docs"
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
  - "module/Microsoft::WRL::SimpleActivationFactory::GetRuntimeClassName"
dev_langs: 
  - "C++"
ms.assetid: 3aa07487-9a42-46f8-8893-37ba6315e50b
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo SimpleActivationFactory::GetRuntimeClassName
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il nome di classe runtime di un'istanza della classe specificata dal parametro di modello di classe `Base`.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetRuntimeClassName  
)(_Out_ HSTRING* runtimeName);  
```  
  
#### Parametri  
 `runtimeName`  
 Quando l'operazione viene completata, il nome di classe di runtime.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Note  
 Se \_\_WRL\_STRICT è definito, un errore di asserzione viene generato se la classe specificata dal parametro di template di classe `Base` non è derivato da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il valore di enumerazione WinRtClassicComMix o WinRt [RuntimeClassType](../windows/runtimeclasstype-enumeration.md).  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)