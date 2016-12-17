---
title: "Metodo Module::RegisterWinRTObject | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::RegisterWinRTObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RegisterWinRTObject (metodo)"
ms.assetid: a2782c9c-b9c5-4e4b-9c8d-ef513aea20c5
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo Module::RegisterWinRTObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Registra uno o più [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] oggetti in modo da altre applicazioni di connettersi ad essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT RegisterWinRTObject(const wchar_t* serverName,  
   wchar_t** activatableClassIds,  
   WINRT_REGISTRATION_COOKIE* cookie,  
   unsigned int count)  
```  
  
#### <a name="parameters"></a>Parametri  
 `serverName`  
 Un nome che specifica un sottoinsieme degli oggetti interessati dall'operazione.  
  
 `activatableClassIds`  
 Matrice di attivabili CLSID per la registrazione.  
  
 `cookie`  
 Un valore che identifica gli oggetti della classe che sono stati registrati. Questo valore viene utilizzato in un secondo momento per revocare la registrazione.  
  
 `count`  
 Il numero di oggetti da registrare.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, un errore HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per l'operazione non riuscita.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Module (classe)](../windows/module-class.md)