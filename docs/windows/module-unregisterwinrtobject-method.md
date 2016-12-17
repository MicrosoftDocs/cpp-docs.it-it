---
title: "Metodo Module::UnregisterWinRTObject | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::UnregisterWinRTObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UnregisterWinRTObject (metodo)"
ms.assetid: 32334aa7-2293-40d2-9a89-4b02e2e31f3c
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo Module::UnregisterWinRTObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Annulla la registrazione di uno o più [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] oggetti in modo che altre applicazioni non possono connettersi ad essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
virtual HRESULT UnregisterWinRTObject(  
   unsigned int,  
   _Inout_ WINRT_REGISTRATION_COOKIE* cookie  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `cookie`  
 Un puntatore a un valore che identifica l'oggetto di classe il cui registrazione viene revocato.  
  
## <a name="return-value"></a>Valore restituito  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Module (classe)](../windows/module-class.md)