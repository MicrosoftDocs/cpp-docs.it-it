---
title: "/bigobj (Aumenta il numero di sezioni nel file obj) | Microsoft Docs"
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
  - "/bigobj"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/bigobj (opzione del compilatore) [C++]"
  - "bigobj (opzione del compilatore) [C++]"
  - "-bigobj (opzione del compilatore) [C++]"
ms.assetid: ba94d602-4015-4a8d-86ec-49241ab74c12
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /bigobj (Aumenta il numero di sezioni nel file obj)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**\/bigobj** aumenta il numero di sezioni che può contenere un file oggetto.  
  
## Sintassi  
  
```  
/bigobj  
```  
  
## Note  
 Per impostazione predefinita, un file oggetto può includere fino a 65.536 \(2^16\) sezioni indirizzabili.  Questa situazione si verifica indipendentemente dalla piattaforma di destinazione specificata.  L'opzione **\/bigobj** aumenta tale capacità fino a 4.294.967.296 \(2^32\).  
  
 La maggior parte dei moduli non genera mai un file obj che contiene più di 65.536 sezioni.  Tuttavia, il codice generato dal computer o il codice che presenta un uso intensivo di librerie di modelli può richiedere file obj che possano contenere un numero maggiore di sezioni.  **\/bigobj** è abilitato per impostazione predefinita nei progetti WindowsStore perché il codice generato XAML include un gran numero di intestazioni.  Se si disabilita questa opzione in un progetto di applicazione WindowStore è probabile incontrare l'errore C1128 del compilatore.  
  
 I linker forniti con le versioni precedenti a Visual C\+\+ 2005 non possono leggere file con estensione obj generati con l'opzione **\/bigobj**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)