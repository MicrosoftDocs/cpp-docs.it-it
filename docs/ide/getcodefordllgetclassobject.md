---
title: "GetCodeForDllGetClassObject | Microsoft Docs"
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
  - "GetCodeForDllGetClassObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForDllGetClassObject (metodo)"
ms.assetid: 67b61b3b-9784-494f-ba01-17bffa9941ff
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetCodeForDllGetClassObject
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera il codice per l'oggetto di classe DLL.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      function GetCodeForDllGetClassObject(   
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
 Stringa contenente il codice per ottenere l'oggetto di classe.  
  
## <a name="remarks"></a>Note  
 Chiamare questa funzione membro per recuperare il codice per l'oggetto della classe. Chiamare questa funzione crea un'unica stringa concatenando gli elementi della matrice specificato.  
  
 Nella tabella seguente viene illustrato il codice per ottenere il codice per l'oggetto della classe:  
  
|Numero di riga|Codice|  
|-----------------|----------|  
|0|AFX_MANAGE_STATE(AfxGetStaticModuleState());|  
|1|Se (S_OK = = _AtlModule.GetClassObject (rclsid, riid, ppv))|  
|2|\treturn S_OK;|  
|3|restituire AfxDllGetClassObject (rclsid, riid, ppv);|  
  
 Per ogni riga restituita, `GetCodeForDllGetClassObject` aggiunge una tabulazione iniziale (`\t`) e una coppia di caratteri finali "CR-LF" (ritorno a capo - avanzamento riga) (`\r\n`).  
  
## <a name="example"></a>Esempio  
  
```  
// Get the lines numbered 1 and 2 above  
GetCodeForDllGetClassObject(1, 2)  
  
// returns the following string  
// "\tif (S_OK == _AtlModule.GetClassObject(rclsid, riid, ppv))\r\n\t\treturn S_OK;\r\n"  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Personalizzazione delle procedure guidate C++ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C++](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)