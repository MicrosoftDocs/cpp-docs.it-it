---
title: "/NXCOMPAT (compatibile con Protezione esecuzione programmi) | Microsoft Docs"
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
  - "/NXCOMPAT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/NXCOMPAT (opzione del linker)"
  - "NXCOMPAT (opzione del linker)"
  - "-NXCOMPAT (opzione del linker)"
ms.assetid: 5858e7ff-24d3-4ac3-9046-af2c9e220d9b
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /NXCOMPAT (compatibile con Protezione esecuzione programmi)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Viene indicato che è stato eseguito il test di un eseguibile per verificarne la compatibilità con la funzionalità Protezione esecuzione programmi di Windows.  
  
## Sintassi  
  
```  
/NXCOMPAT[:NO]  
```  
  
## Note  
 L'opzione **\/NXCOMPAT** è attiva per impostazione predefinita.  
  
 **\/NXCOMPAT:NO** può essere utilizzato per specificare in modo esplicito che un eseguibile non è compatibile con la modalità Protezione esecuzione programmi.  
  
 Per ulteriori informazioni su Protezione esecuzione programmi, vedere i seguenti articoli:  
  
-   [Una descrizione dettagliata della funzionalità Protezione esecuzione programmi \(DEP\)](http://go.microsoft.com/fwlink/?LinkID=157771) sul sito Web della Guida e del supporto tecnico Microsoft  
  
-   [Protezione esecuzione programmi](http://go.microsoft.com/fwlink/?LinkID=157770) sul sito Web MSDN  
  
-   [Protezione esecuzione programmi \(Windows Embedded\)](http://go.microsoft.com/fwlink/?LinkID=157768) sul sito Web MSDN  
  
### Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)