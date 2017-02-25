---
title: "CanUseFileName | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CanUseFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanUseFileName (metodo)"
ms.assetid: 60b669fa-9484-4435-b502-78ec8e960a00
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# CanUseFileName
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Verifica se è presente un file.  Se il file è presente e non ha restrizioni, verrà chiesto di unire il codice da aggiungere al file esistente.  
  
## Sintassi  
  
```  
  
      function CanUseFileName(   
   strFileName,   
   bCheckIfMidlHeader,   
   bCannotExist,   
   bSetMergeFlag    
);  
```  
  
#### Parametri  
 `strFileName`  
 Nome del file da verificare.  
  
 *bCheckIfMidlHeader*  
 Impostato su **true** per verificare se il nome file viene generato in MIDL.  
  
 *bCannotExist*  
 Impostato su **true** per verificare se il nome file esiste già e non può essere sovrascritto.  
  
 *bSetMergeFlag*  
 Impostato su **true** per includere il simbolo MERG\_FILE, che indica che è possibile unire il codice al nome file esistente.  
  
## Valore restituito  
 **true** se `strFileName` è univoco oppure se è possibile aggiungere il codice al file esistente, **false** in caso contrario.  
  
## Note  
 Chiamare questa funzione per verificare la presenza di un nome file.  Se il nome file è presente e non è stato creato in MIDL o non presenta altre restrizioni, verrà chiesto di unire il nuovo codice al file esistente.  
  
 Se il nome file non è presente e non ha restrizioni, verrà creato il file con il nome specificato.  
  
 Se il nome file viene creato in MIDL o presenta altre restrizioni, verrà visualizzato un messaggio di errore.  
  
## Esempio  
  
```  
case "HTML_FILE":  
if (!HTML_FILE.disabled)  
   {  
   if (!window.external.FindSymbol("HTML_FILE_VALID"))  
      {  
      bValid = CanUseFileName(obj.value, false, true);  
      if (!bValid)  
      break;  
      window.external.AddSymbol("HTML_FILE_VALID", true)  
      }  
   }  
   bValid = window.external.ValidateFile(HTML_FILE.value, vsCMValidateFileExtHtml);  
   break;   
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)