---
title: "Metodo Module::RegisterObjects | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::RegisterObjects"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RegisterObjects (metodo)"
ms.assetid: db4077b7-068d-4534-aaa5-41b5444ccb49
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Metodo Module::RegisterObjects
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Registra COM o [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] gli oggetti in modo da altre applicazioni di connettersi ad essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT RegisterObjects(  
   ModuleBase* module,   
   const wchar_t* serverName);  
```  
  
#### <a name="parameters"></a>Parametri  
 `module`  
 Matrice di COM o [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] oggetti.  
  
 `serverName`  
 Nome del server in cui gli oggetti creati.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, un HRESULT che indica il motivo per l'operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
## <a name="see-also"></a>Vedere anche
[Module (classe)](../windows/module-class.md)