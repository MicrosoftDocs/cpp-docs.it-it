---
title: "/LN (Crea modulo MSIL) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/LN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/LN (opzione del compilatore) [C++]"
  - "-LN (opzione del compilatore) [C++]"
ms.assetid: 4f38f4f4-3176-4caf-8200-5c7585dc1ed3
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /LN (Crea modulo MSIL)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica di non inserire un manifesto dell'assembly nel file di output.  
  
## Sintassi  
  
```  
/LN  
```  
  
## Note  
 Per impostazione predefinita, l'opzione **\/LN** non è attiva e un manifesto assembly viene inserito nel file di output.  
  
 Insieme a **\/LN**, è necessario specificare anche un'opzione [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 Un programma gestito con un manifesto senza metadati di assembly è denominato modulo.  Se si esegue la compilazione con [\/c \(Compila senza collegamenti\)](../../build/reference/c-compile-without-linking.md) e **\/LN**, specificare [\/NOASSEMBLY \(Crea un modulo MSIL\)](../../build/reference/noassembly-create-a-msil-module.md) nella fase di collegamento per creare il file di output.  
  
 È opportuno creare i moduli quando si desidera compilare gli assembly adottando un approccio basato su componenti.  In questo modo, è possibile creare i tipi e compilarli all'interno dei moduli,  quindi generare un assembly da uno o più moduli.  Per ulteriori informazioni sulla creazione di assembly da moduli, vedere [.File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md) o [Al.exe \(Assembly Linker\)](../Topic/Al.exe%20\(Assembly%20Linker\).md).  
  
 L'estensione di file predefinita per un modulo è .netmodule.  
  
 Nelle versioni di [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] precedenti a Visual C\+\+ 2005, un modulo viene creato con l'opzione **\/clr:noAssembly**.  
  
 Il linker di Visual C\+\+ accetta i file .netmodule come input e il file di output generato dal linker sarà un assembly o un .netmodule senza dipendenza di runtime da uno dei .netmodule che sono stati introdotti nel linker.  Per ulteriori informazioni, vedere [.File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
-   Specificare [\/NOASSEMBLY \(Crea un modulo MSIL\)](../../build/reference/noassembly-create-a-msil-module.md) in fase di collegamento per creare il file di output.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Non è possibile modificare questa opzione del compilatore a livello di codice.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)