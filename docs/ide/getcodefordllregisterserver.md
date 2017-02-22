---
title: "GetCodeForDllRegisterServer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCodeForDllRegisterServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForDllRegisterServer (metodo)"
ms.assetid: 2fe733ad-3f1e-4020-9ce3-68956da7d41d
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# GetCodeForDllRegisterServer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il codice appropriato per la registrazione di un server.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      function GetCodeForDllRegisterServer(   
   nLineStart,   
   nLineEnd    
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `nLineStart`  
 Il numero di riga in base zero dell'inizio della funzione.  
  
 `nLineEnd`  
 Il numero di riga in base zero per la fine della funzione.  
  
## <a name="return-value"></a>Valore restituito  
 Stringa contenente il codice per la registrazione del server  
  
## <a name="remarks"></a>Note  
 Chiamare questa funzione membro per recuperare il codice appropriato per la registrazione di un server:  
  
|Numero di riga|Codice|  
|-----------------|----------|  
|0|AFX_MANAGE_STATE(AfxGetStaticModuleState());|  
|1|_AtlModule.UpdateRegistryAppId(true);|  
|2|HRESULT HRESULT = _AtlModule.RegisterServer(TRUE);|  
|3|Se (HRESULT! = S_OK)|  
|4|HRESULT \treturn;|  
|5|if (!. COleObjectFactory::UpdateRegistryAll(TRUE))|  
|6|ResultFromScode(SELFREG_E_CLASS) \treturn;|  
|7|Return S_OK;|  
  
 Per ogni riga restituita, `GetCodeForDllRegisterServer` aggiunge una tabulazione iniziale (`\t`) e una coppia di caratteri finali "CR-LF" (ritorno a capo - avanzamento riga) (`\r\n`).  
  
## <a name="example"></a>Esempio  
  
```  
// Get the lines numbered 2 and 3 above  
GetCodeForDllRegisterServer(2, 3)  
  
// returns the following string  
// "\tHRESULT hRes = _AtlModule.RegisterServer(TRUE);\r\n\tif (hRes != S_OK)\r\n"  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Personalizzazione delle procedure guidate C++ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C++](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetCodeForDllUnregisterServer](../ide/getcodefordllunregisterserver.md)