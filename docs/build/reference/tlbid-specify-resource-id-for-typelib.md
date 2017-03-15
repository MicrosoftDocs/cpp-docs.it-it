---
title: "/TLBID (Specifica l&#39;ID di risorsa per una libreria dei tipi) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/tlbid"
  - "VC.Project.VCLinkerTool.TypeLibraryResourceID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".tlb (file), specifica dell'ID risorsa"
  - "/TLBID (opzione del linker)"
  - "tlb (file), specifica dell'ID risorsa"
  - "TLBID (opzione del linker)"
  - "-TLBID (opzione del linker)"
  - "librerie dei tipi, specifica dell'ID risorsa"
ms.assetid: 434b28a2-4656-4d52-ac82-8b18bf486fb2
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /TLBID (Specifica l&#39;ID di risorsa per una libreria dei tipi)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/TLBID:id  
```  
  
## Note  
 dove:  
  
 `id`  
 Valore specificato dall'utente per una libreria dei tipi creata nel linker.  Esegue l'override dell'ID di risorsa predefinito pari a 1.  
  
## Note  
 Durante la compilazione di un programma in cui vengono utilizzati attributi, nel linker viene creata una libreria dei tipi,  alla quale viene automaticamente assegnato un ID di risorsa pari a 1.  
  
 Se tale ID entra in conflitto con una delle risorse esistenti, sarà possibile specificare un altro ID con \/TLBID.  L'intervallo di valori che è possibile passare a `id` è compreso tra 1 e 65535.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **IDL incorporato**.  
  
4.  Modificare la proprietà **ID di risorsa della libreria di tipi**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryResourceID%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)