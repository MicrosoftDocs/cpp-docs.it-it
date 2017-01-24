---
title: "/link (passaggio delle opzioni al linker) | Microsoft Docs"
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
  - "/link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/link (opzione del compilatore) [C++]"
  - "compilatore cl.exe [C++], passaggio di opzioni al linker"
  - "link (opzione del compilatore) [C++]"
  - "-link (opzione del compilatore) [C++]"
  - "linker [C++], passaggio di opzioni"
  - "Passa le opzioni al linker"
ms.assetid: 16902a94-c094-4328-841f-3ac94ca04848
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /link (passaggio delle opzioni al linker)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Passa una o più opzioni del linker al linker.  
  
## Sintassi  
  
```  
/link linkeroptions  
```  
  
## Argomenti  
 `linkeroptions`  
 L'opzione del linker o le opzioni da passare al linker.  
  
## Note  
 L'opzione **\/link** e le relative opzioni del linker devono essere specificate dopo ogni nome file e opzione C.  È necessario uno spazio tra **\/link** e `linkeroptions`.  Per ulteriori informazioni, vedere [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà di un linker.  
  
4.  Modificare una o più proprietà.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Non è possibile modificare questa opzione del compilatore a livello di codice.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)