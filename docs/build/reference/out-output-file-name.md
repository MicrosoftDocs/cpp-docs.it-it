---
title: "/OUT (nome file di output) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.OutputFile"
  - "/out"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/OUT (opzione del linker di C++)"
  - "linker [C++], file di output"
  - "OUT (opzione del linker)"
  - "-OUT (opzione del linker)"
  - "file di output, name (opzione del linker)"
ms.assetid: 976210a4-e51f-4cfb-af5e-c16344455834
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /OUT (nome file di output)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/OUT:filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Nome specificato dall'utente per il file di output.  Sostituisce il nome predefinito.  
  
## Note  
 L'opzione \/OUT esegue l'override del nome e del percorso predefiniti del programma creato dal linker.  
  
 Per impostazione predefinita il nome file corrisponde al nome di base del primo file obj specificato cui viene aggiunta l'estensione appropriata \(exe o dll\).  
  
 Questa opzione rappresenta il nome di base predefinito per un file MAP o una libreria di importazione.  Per informazioni dettagliate, vedere [Genera file MAP](../../build/reference/map-generate-mapfile.md) \(\/MAP\) e [\/IMPLIB](../../build/reference/implib-name-import-library.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **File di output**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)