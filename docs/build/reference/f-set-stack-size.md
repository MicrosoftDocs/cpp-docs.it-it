---
title: "/F (Imposta la dimensione dello stack) | Microsoft Docs"
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
  - "/f"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/F (opzione del compilatore) [C++]"
  - "F (opzione del compilatore) [C++]"
  - "-F (opzione del compilatore) [C++]"
  - "impostazione dimensione dello stack (opzione del compilatore)"
  - "stack, impostazione dimensioni"
ms.assetid: 17320b6f-8305-445b-9ec2-75833f4b29e0
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /F (Imposta la dimensione dello stack)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta la dimensione dello stack del programma in byte.  
  
## Sintassi  
  
```  
/F number  
```  
  
## Argomenti  
 `number`  
 La dimensione dello stack in byte.  
  
## Note  
 Senza l'opzione, la dimensione predefinita è pari a 1 MB.  L'argomento `number` può essere in notazione decimale o in linguaggio C.  L'argomento può avere una dimensione dello stack che va da 1 a quella massima accettata dal linker.  Il linker arrotonda il valore specificato ai 4 byte più vicini.  L'inserimento dello spazio tra **\/F** e `number`è facoltativo.  
  
 Potrebbe essere necessario aumentare la dimensione dello stack se il programma riceve di overflow dello stack.  
  
 Per impostare la dimensione dello stack, è inoltre possibile:  
  
-   Utilizzare l'opzione del linker **\/STACK**.  Per ulteriori informazioni, vedere [\/STACK](../../build/reference/stack.md).  
  
-   Utilizzare EDITBIN sul file exe.  Per ulteriori informazioni, vedere [Riferimenti a EDITBIN](../../build/reference/editbin-reference.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)