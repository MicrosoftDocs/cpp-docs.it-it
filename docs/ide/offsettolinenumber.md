---
title: "OffsetToLineNumber | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OffsetToLineNumber"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OffsetToLineNumber (funzione)"
ms.assetid: ac7e3c22-6b3b-432c-85cc-b50bbef9ce8c
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# OffsetToLineNumber
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiamata in [InsertIntoFunction](../ide/insertintofunction.md) per convertire un indice presente in un codice funzione in un numero di riga.  
  
## Sintassi  
  
```  
  
      function OffsetToLineNumber(   
   strString,   
   nPos    
);  
```  
  
#### Parametri  
 `strString`  
 Stringa contenente il codice funzione.  Il codice funzione è una stringa a più righe in cui le righe sono delimitate da coppie di caratteri cr\-lf.  
  
 `nPos`  
 Posizione all'interno della stringa.  
  
## Valore restituito  
 La riga all'interno della funzione del codice in cui si trova `nPos`.  Come prima riga della funzione viene considerata la riga 1 \(non 0\).  
  
## Note  
 Trova il numero di riga relativo a una determinata posizione in un codice funzione.  
  
 La funzione viene chiamata in `InsertIntoFunction` per convertire in un numero di riga l'indice che si trova in `nPos` all'interno di un codice funzione.  
  
## Esempio  
  
```  
strString = "function DelFile(fso,  
 strWizTempFile)\r\n{\r\n\ttry\r\n\t{\r\nif   
(fso.FileExists(strWizTempFile))\r\nreturn true;\r\n";  
  
nLine =  OffsetToLineNumber(strString, 60);  
  
// The return value for the above is 5, because character 60 in the string   
// occurs in the 5th line within the string.  
```  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [LineBeginsWith](../ide/linebeginswith.md)