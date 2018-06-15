---
title: 'Pagine delle proprietà HLSL: File di output | Microsoft Docs'
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
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33339196"
---
# <a name="hlsl-property-pages-output-files"></a>Pagine delle proprietà HLSL: file di output
Per configurare le proprietà seguenti del compilatore HLSL (fxc.exe), usare la relativa pagina delle proprietà **File di output**. Per informazioni sull'accesso alla pagina delle proprietà **File di output** nella cartella HLSL, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Nome variabile intestazione**  
 Specifica il nome di una matrice usata per il codice oggetto HLSL codificato. La matrice è contenuta in un file di intestazione generato dal compilatore HLSL. Il nome del file di intestazione è specificato dalla proprietà **Nome file intestazione**.  
  
 Questa proprietà corrisponde all'argomento della riga di comando **/Vn[name]**.  
  
 **Nome file intestazione**  
 Specifica il nome del file di intestazione generato dal compilatore HLSL. L'intestazione contiene il codice oggetto HLSL codificato in una matrice. Il nome della matrice è specificato dalla proprietà **Nome variabile intestazione**.  
  
 Questa proprietà corrisponde all'argomento della riga di comando **/Fh[name]**.  
  
 **Nome file oggetto**  
 Specifica il nome del file oggetto generato dal compilatore HLSL. Per impostazione predefinita, il valore è **$(OutDir)%(Filename).cso**.  
  
 Questa proprietà corrisponde all'argomento della riga di comando **/Fo[name]**.  
  
 **Output assembler**  
 **Elenco solo assembly (/Fc)** per restituire solo istruzioni in linguaggio assembly. **Codice ed esadecimale assembly (/ Fx)** per restituire sia istruzioni in linguaggio assembly sia il codice operativo corrispondente in formato esadecimale. Per impostazione predefinita, non vengono generati elenchi.  
  
 **File di output assembler**  
 Specifica il nome del file di listato dell'assembly generato dal compilatore HLSL.  
  
 Questa proprietà corrisponde agli argomenti della riga di comando **/Fc[name]** e **/Fx [name]**.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)   
 [Pagine delle proprietà HLSL: Generale](../ide/hlsl-property-pages-general.md)   
 [Pagine delle proprietà HLSL: Avanzate](../ide/hlsl-property-pages-advanced.md)