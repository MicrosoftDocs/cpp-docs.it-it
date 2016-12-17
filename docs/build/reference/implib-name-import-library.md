---
title: "/IMPLIB (Assegna un nome alla libreria di importazione) | Microsoft Docs"
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
  - "/implib"
  - "VC.Project.VCLinkerTool.ImportLIbrary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/IMPLIB (opzione del linker)"
  - "IMPLIB (opzione del linker)"
  - "-IMPLIB (opzione del linker)"
  - "librerie di importazione, override del nome predefinito"
ms.assetid: fe8f71ab-7055-41b5-8ef8-2b97cfa4a432
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /IMPLIB (Assegna un nome alla libreria di importazione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/IMPLIB:filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Nome specificato dall'utente per la libreria di importazione.  Sostituisce il nome predefinito.  
  
## Note  
 L'opzione \/IMPLIB consente di eseguire l'override del nome predefinito per la libreria di importazione creata in LINK durante la compilazione di un programma contenente esportazioni.  Il nome predefinito è composto dal nome di base del file di output principale e dall'estensione LIB.  Un programma contiene esportazioni se è specificato uno dei seguenti elementi:  
  
-   La parola chiave [\_\_declspec\(dllexport\)](../../cpp/dllexport-dllimport.md) nel codice sorgente  
  
-   L'istruzione [EXPORTS](../../build/reference/exports.md) in un file def  
  
-   Una specifica [\/EXPORT](../../build/reference/export-exports-a-function.md) in un comando LINK  
  
 In LINK l'opzione \/IMPLIB viene ignorata quando non viene creata alcuna libreria di importazione.  Se non viene specificata alcuna esportazione, non verrà creata alcuna libreria di importazione.  Se nella compilazione viene utilizzato un file di esportazione, verrà presupposto che esista già una libreria di importazione e non ne verrà creata un'altra.  Per informazioni sulle librerie di importazione e sui file di esportazione, vedere [Riferimenti a LIB](../../build/reference/lib-reference.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Libreria di importazione**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ImportLibrary%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)