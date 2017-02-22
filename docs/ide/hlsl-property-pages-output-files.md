---
title: "Pagine delle propriet&#224; HLSL: file di output | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.FXCompilerTool.AssemblerOutput"
  - "VC.Project.FXCompilerTool.ObjectFileOutput"
  - "VC.Project.FXCompilerTool.HeaderFileOutput"
  - "VC.Project.FXCompilerTool.VariableName"
  - "VC.Project.FXCompilerTool.AssemblerOutputFile"
dev_langs: 
  - "C++"
ms.assetid: c5ba1e72-30de-43eb-a15a-5b0ae58e55c2
caps.latest.revision: 5
author: "BrianPeek"
ms.author: "brpeek"
manager: "ghogen"
caps.handback.revision: 5
---
# Pagine delle propriet&#224; HLSL: file di output
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per configurare le seguenti proprietà del compilatore di HLSL \(fxc.exe\), utilizzare la proprietà **FILE DI OUTPUT**.  Per informazioni su come accedere alla pagina delle proprietà **FILE DI OUTPUT** nella cartella di HLSL, vedere [Procedura: specificare le proprietà dei progetti tramite Pagine delle proprietà](../misc/how-to-specify-project-properties-with-property-pages.md).  
  
## Elenco UIElement  
 **Nome variabile intestazione**  
 Specifica il nome di una matrice da codice oggetto utilizzato codificato di HLSL.  La matrice è contenuta in un file di intestazione restituito dal compilatore di HLSL.  Il nome del file di intestazione specificato dalla proprietà **Nome file intestazione**.  
  
 Questa proprietà corrisponde all'argomento della riga di comando di **\/Vn\[name\]**.  
  
 **Nome file intestazione**  
 Specifica il nome del file di intestazione restituito dal compilatore di HLSL.  L'intestazione contiene il codice oggetto di HLSL che viene codificato in una matrice.  Il nome della matrice è specificato dalla proprietà **Nome variabile intestazione**.  
  
 Questa proprietà corrisponde all'argomento della riga di comando di **\/Fh\[name\]**.  
  
 **Nome file dell'oggetto**  
 Specifica il nome del file oggetto restituito dal compilatore di HLSL.  Per impostazione predefinita, il valore viene **$\(OutDir\)%\(Filename\).cso**.  
  
 Questa proprietà corrisponde all'argomento della riga di comando di **\/Fo\[name\]**.  
  
 **L'output dell'assembly**  
 **Elenco unico assembly \(\/Fc\)** per restituire solo le istruzioni in linguaggio assembly.  **Codice assembly e esadecimali \(\/Fx\)** per restituire sia istruzioni in linguaggio assembly che il op\- codice corrispondente esadecimale.  Per impostazione predefinita, tale elenco viene restituito.  
  
 **File di output dell'assembly**  
 Specifica il nome del tipo file di assembly restituito dal compilatore di HLSL.  
  
 Questa proprietà corrisponde ad argomenti della riga di comando di **\/Fx \[name\]** e di **\/Fc\[name\]**.  
  
## Vedere anche  
 [Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)   
 [Pagine delle proprietà HLSL: Generale](../ide/hlsl-property-pages-general.md)   
 [Pagine delle proprietà HLSL: Avanzate](../ide/hlsl-property-pages-advanced.md)