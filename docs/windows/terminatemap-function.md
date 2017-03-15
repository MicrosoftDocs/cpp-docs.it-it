---
title: "Funzione TerminateMap | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::TerminateMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TerminateMap (funzione)"
ms.assetid: 1c314a61-da5d-49bb-ac44-c34ee3c23b66
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Funzione TerminateMap
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline bool TerminateMap(  
   _In_ ModuleBase *module,   
   _In_opt_z_ const wchar_t *serverName,   
    bool forceTerminate) throw()  
```  
  
## <a name="parameters"></a>Parametri  
 `module`  
 Oggetto [modulo](../windows/module-class.md).  
  
 `serverName`  
 Il nome di un sottoinsieme della class factory del modulo specificato dal parametro `module`.  
  
 `forceTerminate`  
 `true` Per terminare la classe factory indipendentemente dal fatto sono attive; `false` non terminare la class factory se qualsiasi factory è attivo.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se sono state terminate tutti class factory; in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 Arresta la class factory del modulo specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)