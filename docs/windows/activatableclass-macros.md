---
title: "Macro ActivatableClass | Microsoft Docs"
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
  - "ActivatableClass"
  - "ActivatableClassWithFactory"
  - "ActivatableClassWithFactoryEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActivatableClassWithFactory"
  - "ActivatableClass"
  - "ActivatableClassWithFactoryEx"
ms.assetid: 9bd64709-ec2c-4678-8c96-ea5982622bdd
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Macro ActivatableClass
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Popola una cache interna che contiene una factory che può creare un'istanza della classe specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
ActivatableClass(  
   className  
);  
  
ActivatableClassWithFactory(  
   className,   
   factory  
);  
  
ActivatableClassWithFactoryEx(  
   className,   
   factory,   
   serverName  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `className`  
 Nome della classe da creare.  
  
 `factory`  
 Factory che consente di creare un'istanza della classe specificata.  
  
 `serverName`  
 Un nome che specifica un subset di factory del modulo.  
  
## <a name="remarks"></a>Note  
 Non utilizzare queste macro con COM classico a meno che non si utilizza il `#undef` direttiva per garantire che il **__WRL_WINRT_STRICT\_\_** definizione macro viene rimosso.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Module (classe)](../windows/module-class.md)