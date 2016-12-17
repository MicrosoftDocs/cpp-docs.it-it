---
title: "/Fm (Specifica file map) | Microsoft Docs"
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
  - "/fm"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Fm (opzione del compilatore) [C++]"
  - "file [C++], creazione della mappa"
  - "Fm (opzione del compilatore) [C++]"
  - "-Fm (opzione del compilatore) [C++]"
  - "file MAP [C++], creazione del linker"
ms.assetid: 8154448a-93a7-4546-8e4c-5c44d0aff45d
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Fm (Specifica file map)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica al linker di produrre un file map contenente un elenco di segmenti nell'ordine in cui sono indicati nel file exe o nella DLL corrispondente.  
  
## Sintassi  
  
```  
/Fmpathname  
```  
  
## Note  
 Per impostazione predefinita, al file map viene assegnato il nome di base del corrispondente file di origine C o C\+\+ con un'estensione map.  
  
 La specifica di **\/Fm** produce lo stesso effetto dell'opzione del linker [\/MAP \(Genera file MAP\)](../../build/reference/map-generate-mapfile.md).  
  
 Se si specifica [\/c \(Compila senza collegamenti\)](../../build/reference/c-compile-without-linking.md) per disattivare il collegamento, **\/Fm** non è attiva.  
  
 I simboli globali presenti in un file map generalmente contengono uno o più caratteri di sottolineatura iniziali in quanto il compilatore ne aggiunge uno ai nomi di variabili.  Molti dei simboli globali che appaiono nel file map vengono utilizzati internamente dal compilatore e dalle librerie standard.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del file di output \(\/F\)](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)