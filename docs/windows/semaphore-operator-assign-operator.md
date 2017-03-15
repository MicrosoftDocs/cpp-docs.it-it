---
title: "Operatore Semaphore::operator= | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Semaphore::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= (operatore)"
ms.assetid: ea19839f-91f0-4b00-a35b-5728fcba4981
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore Semaphore::operator=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sposta l'handle specificato da un oggetto semaforo all'oggetto semaforo corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
Semaphore& operator=(  
   _Inout_ Semaphore&& h  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `h`  
 Riferimento rvalue a un oggetto semaforo.  
  
## <a name="return-value"></a>Valore restituito  
 Un riferimento all'oggetto semaforo corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Semaphore (classe)](../windows/semaphore-class.md)