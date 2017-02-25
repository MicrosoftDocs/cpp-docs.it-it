---
title: "GetCodeForExitInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCodeForExitInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForExitInstance (metodo)"
ms.assetid: 41fe3d79-a1f4-4bb5-b3f5-7859e255b4e7
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# GetCodeForExitInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il [ExitInstance](../Topic/CWinApp::ExitInstance.md) codice per terminare la procedura guidata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      function GetCodeForExitInstance(   
   nLineStart,   
   nLineEnd    
)   
```  
  
#### <a name="parameters"></a>Parametri  
 `nLineStart`  
 Il numero di riga in base zero dell'inizio della funzione.  
  
 `nLineEnd`  
 Il numero di riga in base zero per la fine della funzione.  
  
## <a name="return-value"></a>Valore restituito  
 Stringa contenente il codice per chiudere l'istanza della procedura guidata.  
  
## <a name="remarks"></a>Note  
 Chiamare questa funzione membro per recuperare il codice appropriato per terminare un'istanza della procedura guidata:  
  
|Numero di riga|Codice ExitInstance|  
|-----------------|-----------------------|  
|0|_AtlModule.RevokeClassObjects();|  
|1|restituire CWinApp::ExitInstance();|  
  
 Per ogni riga restituita, `GetCodeForExitInstance` aggiunge una tabulazione iniziale (`\t`) e una coppia di caratteri finali "CR-LF" (ritorno a capo - avanzamento riga) (`\r\n`).  
  
## <a name="example"></a>Esempio  
  
```  
if (!oExitInstance)  
   {  
      oExitInstance = oCWinApp.AddFunction("ExitInstance",   
      vsCMFunctionFunction, "BOOL", vsCMAddPositionEnd, vsCMAccessPublic,   
      strProjectCPP);  
      oExitInstance.BodyText = GetCodeForExitInstance(0, 1);  
   }  
// returns the following string  
// "\t_AtlModule.RevokeClassObjects();\r\n  
// \treturn CWinApp::ExitInstance();\r\n"  
else  
   {  
   oExitInstance.StartPointOf(vsCMPartBody,   
   vsCMWhereDefinition).CreateEditPoint().Insert(GetCodeForExitInstance(0,   
   0));  
// returns the following string  
// "\t_AtlModule.RevokeClassObjects();\r\n  
      oCM.Synchronize();  
   }  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Personalizzazione delle procedure guidate C++ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C++](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetCodeForDllCanUnloadNow](../ide/getcodefordllcanunloadnow.md)   
 [GetCodeForInitInstance](../ide/getcodeforinitinstance.md)