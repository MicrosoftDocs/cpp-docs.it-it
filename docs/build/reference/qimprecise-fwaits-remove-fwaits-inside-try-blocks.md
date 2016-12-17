---
title: "/Qimprecise_fwaits (rimuovere comandi fwait all&#39;interno dei blocchi try) | Microsoft Docs"
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
  - "/Qimprecise_fwaits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Qimprecise_fwaits (opzione del compilatore) [C++]"
  - "-Qimprecise_fwaits (opzione del compilatore) [C++]"
ms.assetid: b1501f21-7e08-4fea-95e8-176ec03a635b
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Qimprecise_fwaits (rimuovere comandi fwait all&#39;interno dei blocchi try)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rimuove i comandi `fwait` all'interno dei blocchi `try` quando si utilizza l'opzione del compilatore [\/fp:except](../../build/reference/fp-specify-floating-point-behavior.md).  
  
## Sintassi  
  
```  
/Qimprecise_fwaits  
```  
  
## Note  
 Questa opzione ha effetto solo se viene specificato anche **\/fp:except**.  Se si specifica l'opzione **\/fp:except**, il compilatore inserirà un comando `fwait` per ogni riga di codice di un blocco `try`.  Il compilatore può così identificare la riga di codice specifica che produce un'eccezione.  L'opzione **\/Qimprecise\_fwaits** rimuove le istruzioni `fwait` interne, lasciando solo i comandi wait per il blocco `try`.  In questo modo vengono migliorate le prestazioni, sebbene il compilatore sia in grado di indicare solo il blocco `try` che genera un'eccezione e non la riga.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/Q \(Operazioni di basso livello\)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)