---
title: "Pagine delle proprietà HLSL: File di Output. | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.FXCompilerTool.AssemblerOutput
- VC.Project.FXCompilerTool.ObjectFileOutput
- VC.Project.FXCompilerTool.HeaderFileOutput
- VC.Project.FXCompilerTool.VariableName
- VC.Project.FXCompilerTool.AssemblerOutputFile
dev_langs: C++
ms.assetid: c5ba1e72-30de-43eb-a15a-5b0ae58e55c2
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 04f6ad8889c9a713b3b64284b329c21d5a2cd49e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="hlsl-property-pages-output-files"></a>Pagine delle proprietà HLSL: file di output
Per configurare le proprietà seguenti del compilatore HLSL (fxc.exe), utilizzare il relativo **i file di Output** proprietà. Per informazioni sulle modalità di accesso di **i file di Output** pagina delle proprietà nella cartella HLSL, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Nome della variabile dell'intestazione**  
 Specifica il nome di una matrice che viene usata per codificato HLSL oggetto codice. La matrice è contenuta in un file di intestazione che viene generato dal compilatore HLSL. Il nome del file di intestazione è specificata dal **nome File di intestazione** proprietà.  
  
 Questa proprietà corrisponde al **/Vn [name]** argomento della riga di comando.  
  
 **Nome File di intestazione**  
 Specifica il nome del file di intestazione che viene generato dal compilatore HLSL. L'intestazione contiene codice HLSL oggetto a cui viene codificato in una matrice. Il nome della matrice viene specificato per il **intestazione nome della variabile** proprietà.  
  
 Questa proprietà corrisponde al **/Fh [name]** argomento della riga di comando.  
  
 **Nome del File oggetto**  
 Specifica il nome del file oggetto che viene generato dal compilatore HLSL. Per impostazione predefinita, il valore è **.cso % (Filename) $(OutDir)**.  
  
 Questa proprietà corrisponde al **/Fo [name]** argomento della riga di comando.  
  
 **Output assembler**  
 **Elenco solo assembly (/ Fc)** per restituire solo le istruzioni in linguaggio assembly. **Codice ed esadecimale assembly (/ Fx)** per l'output di istruzioni in linguaggio assembly sia il codice operativo corrispondente in formato esadecimale. Per impostazione predefinita, nessun elenco è l'output.  
  
 **File di Output assembler**  
 Specifica il nome del file di listato dell'assembly che viene generato dal compilatore HLSL.  
  
 Questa proprietà corrisponde al **/Fc [nome]** e **/Fx [nome]** gli argomenti della riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)   
 [Pagine delle proprietà HLSL: generale](../ide/hlsl-property-pages-general.md)   
 [Pagine delle proprietà HLSL: Avanzate](../ide/hlsl-property-pages-advanced.md)