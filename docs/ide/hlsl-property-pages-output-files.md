---
title: 'Pagine delle proprietà HLSL: File di Output. | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.FXCompilerTool.AssemblerOutput
- VC.Project.FXCompilerTool.ObjectFileOutput
- VC.Project.FXCompilerTool.HeaderFileOutput
- VC.Project.FXCompilerTool.VariableName
- VC.Project.FXCompilerTool.AssemblerOutputFile
dev_langs:
- C++
ms.assetid: c5ba1e72-30de-43eb-a15a-5b0ae58e55c2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4fd1dc3ba92201567f24aa84ff8dddcd96798b38
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="hlsl-property-pages-output-files"></a>Pagine delle proprietà HLSL: file di output
Per configurare le proprietà seguenti del compilatore HLSL (fxc.exe), utilizzare il relativo **i file di Output** proprietà. Per informazioni sulle modalità di accesso di **i file di Output** pagina delle proprietà nella cartella HLSL, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Nome della variabile intestazione**  
 Specifica il nome di una matrice che viene usata per codificato HLSL oggetto codice. La matrice è contenuta in un file di intestazione che viene generato dal compilatore HLSL. Il nome del file di intestazione è specificata dal **nome File di intestazione** proprietà.  
  
 Questa proprietà corrisponde al **/Vn [name]** argomento della riga di comando.  
  
 **Nome File di intestazione**  
 Specifica il nome del file di intestazione che viene generato dal compilatore HLSL. L'intestazione contiene codice HLSL oggetto a cui viene codificato in una matrice. Il nome della matrice viene specificato per il **intestazione nome della variabile** proprietà.  
  
 Questa proprietà corrisponde al **/Fh [name]** argomento della riga di comando.  
  
 **Nome del File oggetto**  
 Specifica il nome del file oggetto che viene generato dal compilatore HLSL. Per impostazione predefinita, il valore è **.cso % (Filename) $(OutDir)**.  
  
 Questa proprietà corrisponde al **/Fo [name]** argomento della riga di comando.  
  
 **Output assembler**  
 **Elenco solo assembly (/ Fc)** per restituire solo le istruzioni in linguaggio assembly. **Codice ed esadecimale assembly (/ Fx)** all'output contemporaneamente istruzioni in linguaggio assembly e il codice op corrispondente in formato esadecimale. Per impostazione predefinita, nessun elenco è l'output.  
  
 **File di Output assembler**  
 Specifica il nome del file di listato dell'assembly che viene generato dal compilatore HLSL.  
  
 Questa proprietà corrisponde al **/Fc [nome]** e **/Fx [nome]** gli argomenti della riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)   
 [Pagine delle proprietà HLSL: generale](../ide/hlsl-property-pages-general.md)   
 [Pagine delle proprietà HLSL: Avanzate](../ide/hlsl-property-pages-advanced.md)