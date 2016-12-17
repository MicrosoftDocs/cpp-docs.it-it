---
title: "CreateSafeName | Microsoft Docs"
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
  - "CreateSafeName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateSafeName (metodo)"
ms.assetid: 3a0dd4af-776d-4c25-aff9-4c539f173cb8
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CreateSafeName
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Genera un nome descrittivo C\+\+.  
  
## Sintassi  
  
```  
  
      function CreateSafeName(   
   strName    
);  
```  
  
#### Parametri  
 `strName`  
 Nome precedente.  
  
## Valore restituito  
 Il nuovo nome di tipo safe.  
  
## Note  
 Chiamare questa funzione per creare un nome descrittivo C\+\+ da un nome contenente caratteri non utilizzabili in C\+\+.  I nomi C\+\+ accettabili contengono lettere maiuscole o minuscole, cifre o un carattere di sottolineatura \("\_"\).  
  
 La funzione verifica il nome precedente carattere per carattere, ignorando gli eventuali caratteri non utilizzabili.  Se il nome precedente non contiene caratteri descrittivi, la funzione restituirà il nuovo nome come "My".  Se il nuovo nome descrittivo inizia con una cifra, la funzione vi anteporrà "My".  
  
## Esempio  
  
```  
// Get the project name  
var strProjectName = wizard.FindSymbol("PROJECT_NAME");  
  
// Set the project name to the safe project name.   
var strSafeProjectName = CreateSafeName(strProjectName);  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)