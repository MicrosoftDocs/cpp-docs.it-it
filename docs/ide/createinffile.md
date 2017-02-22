---
title: "CreateInfFile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CreateInfFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateInfFile (metodo)"
ms.assetid: 941ea2ce-db10-428e-b423-8dc2a7e825cf
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# CreateInfFile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consente di creare il file Template.inf della procedura guidata.  
  
## Sintassi  
  
```  
  
function CreateInfFile( );  
  
```  
  
## Valore restituito  
 Il file modello della procedura guidata.  
  
## Note  
 Chiamare questa funzione per creare il file Templates.inf della procedura guidata da Templatesinf.txt, un file di testo temporaneo precedentemente creato nella directory temporanea, in base alle selezioni dell'utente.  Templates.inf contiene l'elenco dei nomi file creati nella procedura guidata.  Per ulteriori informazioni, vedere [Il file Template](../ide/template-files.md).  
  
 Se la funzione non è in grado di creare il file Templatesinf.txt, verrà generato un errore.  
  
## Esempio  
 Vedere [AddFilesToProject](../ide/addfilestoproject.md).  
  
## Vedere anche  
 [Personalizzazione delle procedure guidate C\+\+ con funzioni comuni JScript](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [Funzioni JScript per procedure guidate C\+\+](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)   
 [AddFilesToProject](../ide/addfilestoproject.md)   
 [SetFilters](../ide/setfilters.md)   
 [AddFilesToProject](../ide/addfilestoproject.md)