---
title: "Metodo ClassFactory::LockServer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ClassFactory::LockServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LockServer (metodo)"
ms.assetid: 8d859815-956d-4f81-a5af-7cdee7e945de
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo ClassFactory::LockServer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Incrementa o decrementa il numero di base e gli oggetti che vengono rilevate dall'oggetto ClassFactory corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   LockServer  
)(BOOL fLock);  
```  
  
#### <a name="parameters"></a>Parametri  
 `fLock`  
 `true` Per incrementare il numero di oggetti rilevati. `false` Per ridurre il numero di oggetti registrati.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, E_FAIL.  
  
## <a name="remarks"></a>Note  
 ClassFactory tiene traccia degli oggetti in un'istanza sottostante del [modulo](../windows/module-class.md) (classe).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [ClassFactory (classe)](../windows/classfactory-class.md)