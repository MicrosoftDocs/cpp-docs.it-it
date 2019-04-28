---
title: 'Pagine delle proprietà HLSL: File di output'
ms.date: 11/04/2016
f1_keywords:
- VC.Project.FXCompilerTool.AssemblerOutput
- VC.Project.FXCompilerTool.ObjectFileOutput
- VC.Project.FXCompilerTool.HeaderFileOutput
- VC.Project.FXCompilerTool.VariableName
- VC.Project.FXCompilerTool.AssemblerOutputFile
ms.assetid: c5ba1e72-30de-43eb-a15a-5b0ae58e55c2
ms.openlocfilehash: 6ee8042fccf2e0b635535a77d9c9a6bc68bd9999
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62291548"
---
# <a name="hlsl-property-pages-output-files"></a>Pagine delle proprietà HLSL: File di output

Per configurare le proprietà seguenti del compilatore HLSL (fxc.exe), usare la relativa pagina delle proprietà **File di output**. Per informazioni su come accedere al **i file di Output** pagina delle proprietà nella cartella HLSL, vedere [delle proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

## <a name="uielement-list"></a>Elenco UIElement

- **Nome variabile intestazione**

   Specifica il nome di una matrice usata per il codice oggetto HLSL codificato. La matrice è contenuta in un file di intestazione generato dal compilatore HLSL. Il nome del file di intestazione è specificato dalla proprietà **Nome file intestazione**.

Questa proprietà corrisponde all'argomento della riga di comando **/Vn[name]**.

- **Nome file intestazione**

   Specifica il nome del file di intestazione generato dal compilatore HLSL. L'intestazione contiene il codice oggetto HLSL codificato in una matrice. Il nome della matrice è specificato dalla proprietà **Nome variabile intestazione**.

Questa proprietà corrisponde all'argomento della riga di comando **/Fh[name]**.

- **Nome file oggetto**

   Specifica il nome del file oggetto generato dal compilatore HLSL. Per impostazione predefinita, il valore è **$(OutDir)%(Filename).cso**.

Questa proprietà corrisponde all'argomento della riga di comando **/Fo[name]**.

- **Output assembler**

   **Elenco solo assembly (/Fc)** per restituire solo istruzioni in linguaggio assembly. **Codice ed esadecimale assembly (/ Fx)** per restituire sia istruzioni in linguaggio assembly sia il codice operativo corrispondente in formato esadecimale. Per impostazione predefinita, non vengono generati elenchi.

- **File di output assembler**

   Specifica il nome del file di listato dell'assembly generato dal compilatore HLSL.

   Questa proprietà corrisponde agli argomenti della riga di comando **/Fc[name]** e **/Fx [name]**.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà HLSL](hlsl-property-pages.md)<br>
[Pagine delle proprietà HLSL: Generale](hlsl-property-pages-general.md)<br>
[Pagine delle proprietà HLSL: Avanzate](hlsl-property-pages-advanced.md)
