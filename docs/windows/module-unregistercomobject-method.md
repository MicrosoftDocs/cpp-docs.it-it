---
title: "Metodo Module::UnregisterCOMObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::UnregisterCOMObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UnregisterCOMObject (metodo)"
ms.assetid: 5d377525-0385-482a-a215-6e8a1f032861
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo Module::UnregisterCOMObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Annulla la registrazione di uno o più oggetti COM, che impedisce la connessione di altre applicazioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
virtual HRESULT UnregisterCOMObject(  
   const wchar_t* serverName,  
   DWORD* cookies,  
   unsigned int count  
```  
  
#### <a name="parameters"></a>Parametri  
 `serverName`  
 (Non utilizzato)  
  
 `cookies`  
 Matrice di puntatori a valori che identificano gli oggetti della classe per annullare la registrazione. La matrice è stata creata con il [RegisterCOMObject](../windows/module-registercomobject-method.md) metodo.  
  
 `count`  
 Il numero di classi per annullare la registrazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione ha esito positivo; in caso contrario, un errore HRESULT che indica il motivo per l'operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Module (classe)](../windows/module-class.md)