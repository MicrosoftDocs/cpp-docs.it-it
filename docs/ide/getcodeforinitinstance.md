---
title: "GetCodeForInitInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCodeForInitInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForInitInstance (metodo)"
ms.assetid: cfa4cb9f-d1cc-4be6-8db9-c253655b57e4
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# GetCodeForInitInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di recuperare il codice specificato per [InitInstance](../Topic/CWinApp::InitInstance.md).  
  
## Sintassi  
  
```  
  
      function GetCodeForInitInstance(   
   nLineStart,   
   nLineEnd    
);  
```  
  
#### Parametri  
 `nLineStart`  
 Numero di riga con inizio zero per l'inizio della funzione.  
  
 `nLineEnd`  
 Numero di riga con inizio zero per la fine della funzione.  
  
## Valore restituito  
 Una stringa contenente il codice per l'inizializzazione dell'istanza della procedura guidata.  
  
## Note  
 Chiamare questa funzione membro per recuperare il codice appropriato per l'inizializzazione dell'istanza della procedura guidata.  Di seguito sono riportati i numeri di riga:  
  
|Numero di riga|Codice InitInstance|  
|--------------------|-------------------------|  
|0|`CWinApp::InitInstance();`|  
|1|`return TRUE;`|  
|2|`AfxOleInit();`|  
|3|`// Parse command line for standard shell commands, DDE, file open`|  
|4|`CCommandLineInfo cmdInfo;`|  
|5|`ParseCommandLine(cmdInfo);`|  
|6|`// App was launched with /Embedding or /Automation switch.`|  
|7|`// Run app as automation server.`|  
|8|`if (cmdInfo.m_bRunEmbedded &#124;&#124; cmdInfo.m_bRunAutomated)`|  
|9|`{`|  
|10|`\t// Register class factories via CoRegisterClassObject().`|  
|11|`\tif (FAILED(_AtlModule.RegisterClassObjects(CLSCTX_LOCAL_SERVER, REGCLS_MULTIPLEUSE)))`|  
|12|`\t\treturn FALSE;`|  
|13|`\t// Don't show the main window`|  
|14|`\treturn TRUE;`|  
|15|`}`|  
|16|`// App was launched with /Unregserver or /Unregister switch.`|  
|17|`if (cmdInfo.m_nShellCommand == CCommandLineInfo::AppUnregister)`|  
|18|`{`|  
|19|`\t_AtlModule.UpdateRegistryAppId(FALSE);`|  
|20|`\t_AtlModule.UnregisterServer(TRUE);`|  
|21|`\treturn FALSE;`|  
|22|`}`|  
|23|`// App was launched with /Register or /Regserver switch.`|  
|24|`if (cmdInfo.m_nShellCommand == CCommandLineInfo::AppRegister)`|  
|25|`{`|  
|26|`\t_AtlModule.UpdateRegistryAppId(TRUE);`|  
|27|`\t_AtlModule.RegisterServer(TRUE);`|  
|28|`\treturn FALSE;`|  
|29|`}`|  
  
 Per ogni riga restituita `GetCodeForInitInstance` aggiunge una tabulazione iniziale \(`\t`\) e una coppia di caratteri finali "CR\-LF", ovvero ritorno a capo \- avanzamento riga \(`\r\n`\).  
  
## Esempio  
  
```  
// Get the lines numbered 0 through 2 above  
GetCodeForInitInstance(0, 2)  
  
// returns the following string  
// "\tCWinApp::InitInstance();\r\n\treturn TRUE;\r\n\tAfxOleInit();\r\n"  
  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetCodeForExitInstance](../ide/getcodeforexitinstance.md)