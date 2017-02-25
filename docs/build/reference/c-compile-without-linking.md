---
title: "/c (Compila senza collegamenti) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/c"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/c (opzione del compilatore) [C++]"
  - "c (opzione del compilatore) [C++]"
  - "-c (opzione del compilatore) [C++]"
  - "compilatore cl.exe, compilazione senza collegamento"
  - "disattivazione di collegamenti"
ms.assetid: 8017fc3d-e5dd-4668-a1f7-3120daa95d20
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# /c (Compila senza collegamenti)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impedisce la chiamata automatica a LINK.  
  
## Sintassi  
  
```  
/c  
```  
  
## Note  
 La compilazione con **\/c** crea solo file obj.  È necessario chiamare esplicitamente LINK con i file e le opzioni appropriate per eseguire la fase di collegamento della compilazione.  
  
 Qualsiasi progetto interno creato nell'ambiente di sviluppo utilizza l'opzione **\/c** per impostazione predefinita.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
-   Questa opzione non è disponibile all'interno dell'ambiente di sviluppo.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Per impostare l'opzione del compilatore a livello di codice, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.CompileOnly%2A>.  
  
## Esempio  
 La riga di comando riportata di seguito crea i file oggetto FIRST.obj e SECOND.obj.  THIRD.obj viene ignorato.  
  
```  
CL /c FIRST.C SECOND.C THIRD.OBJ  
```  
  
 Per creare un file eseguibile, è necessario richiamare LINK:  
  
```  
LINK firsti.obj second.obj third.obj /OUT:filename.exe  
```  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)