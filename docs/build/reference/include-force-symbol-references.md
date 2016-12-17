---
title: "/INCLUDE (Forza riferimenti al simbolo) | Microsoft Docs"
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
  - "/include"
  - "VC.Project.VCLinkerTool.ForceSymbolReferences"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/INCLUDE (opzione del linker)"
  - "imposizione del linker di riferimenti al simbolo (opzione)"
  - "INCLUDE (opzione del linker)"
  - "-INCLUDE (opzione del linker)"
  - "imposizione del linker di riferimenti al simbolo"
  - "simboli, aggiunta alla tabella di simboli"
ms.assetid: 4a039677-360a-480f-bd0b-448e239b449c
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /INCLUDE (Forza riferimenti al simbolo)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/INCLUDE:symbol  
```  
  
## Note  
 dove:  
  
 `symbol`  
 Simbolo da aggiungere alla tabella dei simboli.  
  
## Note  
 L'opzione \/INCLUDE indica al linker di aggiungere un simbolo specificato alla tabella dei simboli.  
  
 Per specificare più simboli, digitare una virgola \(,\), un punto e virgola \(;\) o uno spazio tra i nomi dei simboli.  Alla riga di comando specificare un'opzione \/INCLUDE:`symbol` per ciascun simbolo.  
  
 L'oggetto `symbol` viene risolto aggiungendo al programma l'oggetto contenente la definizione di simbolo.  Questa funzionalità risulta utile per includere un oggetto della libreria che non verrebbe in caso contrario collegato al programma.  
  
 La specifica di un simbolo con questa opzione determina l'override della rimozione del simbolo da parte di [\/OPT:REF](../../build/reference/opt-optimizations.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Input**.  
  
4.  Modificare la proprietà **Imponi riferimenti al simbolo**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ForceSymbolReferences%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)