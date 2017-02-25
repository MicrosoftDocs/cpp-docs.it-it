---
title: "Metodo Module::RegisterCOMObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::RegisterCOMObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RegisterCOMObject (metodo)"
ms.assetid: 59f223dc-03c6-429d-95da-b74b3f73b702
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo Module::RegisterCOMObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Registra uno o più oggetti COM in modo da altre applicazioni di connettersi ad essi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW virtual HRESULT RegisterCOMObject(  
   const wchar_t* serverName,  
   IID* clsids,  
   IClassFactory** factories,  
   DWORD* cookies,  
   unsigned int count);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `serverName`  
 Nome completo di un server.  
  
 `clsids`  
 Matrice di CLSID per la registrazione.  
  
 `factories`  
 Matrice di interfacce IUnknown degli oggetti classe la cui disponibilità deve essere pubblicato.  
  
 `cookies`  
 Al termine dell'operazione, una matrice di puntatori a valori che identificano la classe di oggetti che sono stati registrati. Questi valori vengono utilizzati in un secondo momento revocare la registrazione.  
  
 `count`  
 Il numero di CLSID per la registrazione.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se successfu; in caso contrario, un HRESULT, ad esempio CO_E_OBJISREG che indica il motivo per l'operazione non riuscita.  
  
## <a name="remarks"></a>Note  
 Gli oggetti COM vengono registrati con l'enumeratore CLSCTX_LOCAL_SERVER dell'enumerazione CLSCTX.  
  
 Viene specificato il tipo di connessione per gli oggetti registrati da una combinazione di corrente `comflag` parametro di modello e l'enumeratore REGCLS_SUSPENDED dell'enumerazione REGCLS.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Module (classe)](../windows/module-class.md)