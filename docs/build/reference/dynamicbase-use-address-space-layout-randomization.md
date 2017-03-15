---
title: "/DYNAMICBASE (utilizzo della funzionalit&#224; ASLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.RandomizedBaseAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Opzione del linker /DYNAMICBASE"
  - "Opzione del linker DYNAMICBASE"
  - "Opzione del linker -DYNAMICBASE"
ms.assetid: 6c0ced8e-fe9c-4b63-b956-eb8a55fbceb2
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /DYNAMICBASE (utilizzo della funzionalit&#224; ASLR)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica se generare un'immagine eseguibile da poter riassegnare in modo casuale in fase di caricamento utilizzando la funzionalità ASLR \(Address Space Layout Randomization\) di [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)].  
  
## Sintassi  
  
```  
/DYNAMICBASE[:NO]  
```  
  
## Note  
 Per impostazione predefinita, l'opzione \/DYNAMICBASE è attivata.  
  
 Questa opzione modifica l'intestazione di un file eseguibile per indicare se l'applicazione deve essere riassegnata in modo casuale in fase di caricamento.  
  
 La funzionalità ASLR \(Address Space Layout Randomization\) è supportata in [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)].  
  
### Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per ulteriori informazioni, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
5.  Modificare la proprietà **Indirizzo di base casuale**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RandomizedBaseAddress%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)