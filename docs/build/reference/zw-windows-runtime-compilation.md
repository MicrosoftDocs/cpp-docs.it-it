---
title: "/ZW (Compilazione di Windows Runtime) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.CompileAsWinRT"
  - "/zw"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ZW"
  - "/ZW (opzione del compilatore)"
  - "Windows Runtime (opzione del compilatore)"
  - "-ZW"
  - "-ZW (opzione del compilatore)"
ms.assetid: 0fe362b0-9526-498b-96e0-00d7a965a248
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# /ZW (Compilazione di Windows Runtime)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Compila il codice sorgente per il supporto di [!INCLUDE[cppwrt](../../build/reference/includes/cppwrt_md.md)] \([!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)]\) per la creazione di app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  
  
 Quando si usa **\/ZW** per la compilazione, specificare sempre **\/EHsc**.  
  
## Sintassi  
  
```cpp  
/ZW /EHsc /ZW:nostdlib /EHsc  
```  
  
## Argomenti  
 nostdlib  
 Indica che Platform.winmd, Windows.Foundation.winmd e altri file di metadati di Windows \(.winmd\) predefiniti non sono automaticamente inclusi nella compilazione.  È invece necessario usare l'opzione del compilatore [\/FU \(Specifica file \#using da usare\)](../../build/reference/fu-name-forced-hash-using-file.md) per specificare in modo esplicito i file di metadati di Windows.  
  
## Note  
 Quando si specifica l'opzione **\/ZW**, il compilatore supporta le funzionalità seguenti:  
  
-   I file di metadati, gli spazi dei nomi, i tipi di dati e le funzioni necessari che l'app deve eseguire in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
-   Conteggio dei riferimenti automatico di oggetti [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)] ed eliminazione automatica di un oggetto quando il numero di riferimenti passa a zero.  
  
 Dato che il linker incrementale non supporta i metadati di Windows inclusi nei file con estensione obj tramite l'opzione **\/ZW**, l'opzione [\/Gm \(Attiva ricompilazione minima\)](../../build/reference/gm-enable-minimal-rebuild.md) non è compatibile con **\/ZW**.  
  
 Per altre informazioni, vedere [Riferimenti al linguaggio Visual C\+\+](../Topic/Visual%20C++%20Language%20Reference%20\(C++-CX\).md).  
  
## Requisiti  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)