---
title: "/J (Il tipo char predefinito &#232; unsigned) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.DefaultCharIsUnsigned"
  - "VC.Project.VCCLWCECompilerTool.DefaultCharIsUnsigned"
  - "/j"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/J (opzione del compilatore) [C++]"
  - "char (tipo di dati)"
  - "tipo char predefinito unsigned"
  - "impostazioni predefinite, char (tipo)"
  - "J (opzione del compilatore) [C++]"
  - "-J (opzione del compilatore) [C++]"
ms.assetid: 50973667-6638-491e-9c41-bff73acae19f
caps.latest.revision: 19
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /J (Il tipo char predefinito &#232; unsigned)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica il tipo `char` predefinito da `signed char` a `unsigned char` e il tipo `char` ha estensione zero quando viene ampliato a un tipo `int`.  
  
## Sintassi  
  
```  
/J  
```  
  
## Note  
 Se un valore `char` viene dichiarato esplicitamente, come `signed`, l'opzione **\/J** non ha effetto e il valore assume la forma con segno quando viene esteso a un tipo `int`.  
  
 L'opzione **\/J** definisce `_CHAR_UNSIGNED`, che viene utilizzato con `#ifndef` nel file LIMITS.h per definire l'intervallo del tipo `char` predefinito.  
  
 ANSI C e C\+\+ non richiedono un'implementazione specifica del tipo `char`.  Quest'opzione risulta utile quando si utilizzano dati carattere che alla fine verranno tradotti in una lingua diversa dall'inglese.  
  
> [!NOTE]
>  Se si utilizza questa opzione del compilatore con ATL\/MFC, un errore può essere generato.  Benché sia possibile disabilitare questo errore definendo `_ATL_ALLOW_CHAR_UNSIGNED`, questa soluzione alternativa non è supportata e potrebbe non funzionare.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Pagine delle proprietà** del progetto, nel riquadro **Proprietà di configurazione** a sinistra, espandere **C\/C\+\+** e quindi selezionare **Riga di comando**.  
  
3.  Specificare l'opzione del compilatore **\/J** nel riquadro **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.DefaultCharIsUnsigned%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md)