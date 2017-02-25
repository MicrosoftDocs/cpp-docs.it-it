---
title: "/Fe (Specifica file EXE) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/fe"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Fe (opzione del compilatore) [C++]"
  - "file eseguibili, ridenominazione"
  - "Fe (opzione del compilatore) [C++]"
  - "-Fe (opzione del compilatore) [C++]"
  - "rinomina file (opzione del compilatore) [C++]"
ms.assetid: 49f594fd-5e94-45fe-a1bf-7c9f2abb6437
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /Fe (Specifica file EXE)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica un nome e una directory per la DLL o per il file exe creato dal compilatore.  
  
## Sintassi  
  
```  
/Fepathname  
```  
  
## Note  
 Senza questa opzione, il compilatore assegna al file un nome predefinito utilizzando il nome di base del primo file oggetto o di origine specificato nella riga di comando e l'estensione exe o dll.  
  
 Se si specifica [\/c \(Compila senza collegamenti\)](../../build/reference/c-compile-without-linking.md) per eseguire la compilazione senza collegamento, **\/Fe** non avrà alcun effetto.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **File di output**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.  
  
## Esempio  
 La riga di comando che segue compila e collega tutti i file di origine C nella directory corrente.  Il file eseguibile ottenuto è denominato PROCESS.exe e viene creato nella directory C:\\BIN.  
  
```  
CL /FeC:\BIN\PROCESS *.C  
```  
  
## Esempio  
 La riga di comando che segue crea un file eseguibile in `C:\BIN` con lo stesso nome di base del primo file oggetto o di origine:  
  
```  
CL /FeC:\BIN\ *.C  
```  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)