---
title: "GetCodeForDllCanUnloadNow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCodeForDllCanUnloadNow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForDllCanUnloadNow (metodo)"
ms.assetid: 24ee3ef7-45be-4778-99e8-6df493f0782b
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# GetCodeForDllCanUnloadNow
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il codice appropriato per lo scaricamento della DLL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      function GetCodeForDllCanUnloadNow(   
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
 Stringa contenente il codice per lo scaricamento della DLL.  
  
## <a name="remarks"></a>Note  
 Chiamare questa funzione membro per recuperare il codice appropriato per lo scaricamento della DLL. Chiamare questa funzione crea un'unica stringa concatenando gli elementi della matrice specificato.  
  
 Nella tabella seguente viene illustrato il codice per lo scaricamento della DLL.  
  
|Numero di riga|Codice|  
|-----------------|----------|  
|0|AFX_MANAGE_STATE(AfxGetStaticModuleState());|  
|1|Se (_AtlModule.GetLockCount() > 0)|  
|2|\treturn S_FALSE.|  
|3|Return S_OK;|  
  
 Per ogni riga restituita, `GetCodeForDllCanUnloadNow` aggiunge una tabulazione iniziale (`\t`) e una coppia di caratteri finali "CR-LF" (ritorno a capo - avanzamento riga) (`\r\n`).  
  
## <a name="example"></a>Esempio  
  
```  
// Get the lines numbered 1 and 2 above  
GetCodeForDllCanUnloadNow(1, 2)  
  
// returns the following string  
// "\tif (_AtlModule.GetLockCount() > 0)\r\n\t\treturn S_FALSE;\r\n"  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Personalizzazione delle procedure guidate C++ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C++](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [GetCodeForDllGetClassObject](../ide/getcodefordllgetclassobject.md)   
 [GetCodeForExitInstance](../ide/getcodeforexitinstance.md)