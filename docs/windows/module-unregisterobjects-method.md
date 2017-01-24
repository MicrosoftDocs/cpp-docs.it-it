---
title: "Metodo Module::UnregisterObjects | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::UnregisterObjects"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UnregisterObjects (metodo)"
ms.assetid: 3d8119a7-991d-45e9-b8c5-ed36c0be0332
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo Module::UnregisterObjects
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Annulla la registrazione di oggetti nel modulo specificato in modo che altre applicazioni non possono connettersi ad essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT UnregisterObjects(  
   ModuleBase* module,  
   const wchar_t* serverName);  
```  
  
#### <a name="parameters"></a>Parametri  
 `module`  
 Puntatore a un modulo.  
  
 `serverName`  
 Nome originale che specifica un sottoinsieme degli oggetti interessati dall'operazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione ha esito positivo; in caso contrario, un errore HRESULT che indica il motivo per questa operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Module (classe)](../windows/module-class.md)