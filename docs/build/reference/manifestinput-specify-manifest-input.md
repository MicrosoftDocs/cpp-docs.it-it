---
title: "/MANIFESTDEPENDENCY (specifica l&#39;input del manifesto) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /MANIFESTDEPENDENCY (specifica l&#39;input del manifesto)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica un file di input manifesto da includere nel manifesto incorporato nell'immagine.  
  
## Sintassi  
  
```c#  
/MANIFESTINPUT:filename  
```  
  
#### Parametri  
 `filename`  
 Il file manifesto da includere nel manifesto incorporato.  
  
## Note  
 L'opzione **\/MANIFESTINPUT** specifica il percorso di un file di input da utilizzare per creare il manifesto incorporato in un'immagine eseguibile.  Se si dispone di più file di input manifesto, utilizzare l'opzione più volte, una per ogni file di input.  I file di input di manifesto vengono uniti per creare il manifesto incorporato.  Questa opzione richiede l'opzione **\/MANIFEST:EMBED**.  
  
 Questa opzione non può essere impostata direttamente in [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)].  In alternativa, utilizzare la proprietà **File manifesto aggiuntivi** del progetto per specificare i file manifesto aggiuntivi da includere.  Per ulteriori informazioni, vedere [Input e output, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di \<nomeprogetto\>](../../ide/input-and-output-manifest-tool.md).  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)