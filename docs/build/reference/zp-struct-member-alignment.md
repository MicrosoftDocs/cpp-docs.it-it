---
title: "/Zp (Allineamento membri struct) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/zp"
  - "VC.Project.VCCLCompilerTool.StructMemberAlignment"
  - "VC.Project.VCCLWCECompilerTool.StructMemberAlignment"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zp (opzione del compilatore) [C++]"
  - "Allineamento membri struct (opzione del compilatore)"
  - "Zp (opzione del compilatore)"
  - "-Zp (opzione del compilatore) [C++]"
ms.assetid: 5242f656-ed9b-48a3-bc73-cfcf3ed2520f
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /Zp (Allineamento membri struct)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Controlla la modalità di compressione dei membri di una struttura all'interno della memoria e specifica la stessa compressione per tutte le strutture presenti in un modulo.  
  
## Sintassi  
  
```  
/Zp[1|2|4|8|16]  
```  
  
## Note  
 Quando si specifica questa opzione, tutti i membri di struttura successivi al primo vengono archiviati sulla dimensione più piccola del tipo di membro, quale essa sia, oppure nei limiti `n`\-byte, dove `n` è 1, 2, 4, 8 o 16.  
  
 Nella tabella riportata di seguito viene fornita una descrizione dei valori disponibili.  
  
 1  
 Comprime le strutture nei limiti di 1 byte.  Uguale a **\/Zp**.  
  
 2  
 Comprime le strutture nei limiti di 2 byte.  
  
 4  
 Comprime le strutture nei limiti di 4 byte.  
  
 8  
 Comprime le strutture nei limiti di 8 byte \(impostazione predefinita\).  
  
 16  
 Comprime le strutture nei limiti di 16 byte.  
  
 Questa opzione non deve essere utilizzata se non in presenza di requisiti di allineamento specifici.  
  
 Per controllare la compressione della struttura, è inoltre possibile utilizzare [pack](../../preprocessor/pack.md).  Per ulteriori informazioni sull'allineamento, vedere:  
  
-   [align](../../cpp/align-cpp.md)  
  
-   [Operatore \_\_alignof](../../cpp/alignof-operator.md)  
  
-   [\_\_unaligned](../../cpp/unaligned.md)  
  
-   [Esempi di allineamento di strutture](../../build/examples-of-structure-alignment.md) \(specifico per piattaforme x64\)  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Generazione codice**.  
  
4.  Modificare la proprietà **Allineamento membri struttura**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StructMemberAlignment%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)