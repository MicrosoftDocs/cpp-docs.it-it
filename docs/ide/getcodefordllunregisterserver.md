---
title: "GetCodeForDllUnregisterServer | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCodeForDllUnregisterServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForDllUnregisterServer (metodo)"
ms.assetid: 6b152943-8c30-49f4-a55c-d0cba8d27a17
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetCodeForDllUnregisterServer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il codice appropriato per l'annullamento della registrazione di un server.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      function GetCodeForDllUnregisterServer(   
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
 Stringa contenente il codice per l'annullamento della registrazione di server.  
  
## <a name="remarks"></a>Note  
 Chiamare questa funzione membro per recuperare il codice appropriato per l'annullamento della registrazione di server:  
  
|Numero di riga|Codice|  
|-----------------|----------|  
|0|AFX_MANAGE_STATE(AfxGetStaticModuleState());|  
|1|_AtlModule.UpdateRegistryAppId(false);|  
|2|HRESULT HRESULT = _AtlModule.UnregisterServer(TRUE);|  
|3|Se (HRESULT! = S_OK)|  
|4|HRESULT \treturn;|  
|5|if (!. COleObjectFactory::UpdateRegistryAll(FALSE))|  
|6|ResultFromScode(SELFREG_E_CLASS) \treturn;|  
|7|Return S_OK;|  
  
 Per ogni riga restituita, `GetCodeForDllUnregisterServer` aggiunge una tabulazione iniziale (`\t`) e una coppia di caratteri finali "CR-LF" (ritorno a capo - avanzamento riga) (`\r\n`).  
  
## <a name="example"></a>Esempio  
  
```  
// Get the lines numbered 2 and 3 above  
GetCodeForDllUnregisterServer(2, 3)  
  
// returns the following string  
// "\tHRESULT hRes = _AtlModule.UnregisterServer(TRUE);\r\n\tif (hRes != S_OK)\r\n"  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Personalizzazione delle procedure guidate C++ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C++](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetCodeForDllRegisterServer](../ide/getcodefordllregisterserver.md)