---
description: 'Ulteriori informazioni su: pagina delle proprietà risorse gestite'
title: pagina delle proprietà Risorse gestite
ms.date: 08/28/2019
f1_keywords:
- VC.Project.VCManagedResourceCompilerTool.ResourceFileName
- VC.Project.VCManagedResourceCompilerTool.OutputFileName
- VC.Project.VCManagedResourceCompilerTool.DefaultLocalizedResources
helpviewer_keywords:
- Managed Resources property page
ms.assetid: 80b80384-ee55-494d-9f0e-907bb98cfc19
ms.openlocfilehash: 42816e2b4625bc5ab4620f4caafb627f55bd9cd5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190718"
---
# <a name="managed-resources-property-page"></a>pagina delle proprietà Risorse gestite

Nella pagina **delle proprietà risorse gestite** sono esposte le seguenti proprietà per il compilatore di risorse gestite [resgen.exe](/dotnet/framework/tools/resgen-exe-resource-file-generator) quando si utilizzano risorse .NET nei programmi C++/CLI:

- **Nome logico risorsa**

   Specifica il *nome logico* del file con estensione resources intermedio generato. Il nome logico è il nome usato per caricare la risorsa. Se non viene specificato un nome logico, il nome file di risorse (con estensione resx) viene usato come nome logico.

- **Nome file di output**

   Specifica il nome del file di output finale cui contribuisce il file di risorse (con estensione resx).

- **Risorse localizzate predefinite**

   Specifica se il file con estensione resx specificato contribuisce alle risorse predefinite o a una DLL satellite.

Per informazioni su come accedere alla pagina **delle proprietà risorse gestite** , vedere [impostare le proprietà di compilazione e compilatore C++ in Visual Studio](../working-with-project-properties.md).

## <a name="see-also"></a>Vedi anche

[Using RC (The RC Command Line)](/windows/win32/menurc/using-rc-the-rc-command-line-) (Uso di RC - Riga di comando RC)<br>
[Riferimento alla pagina delle proprietà del progetto C++](property-pages-visual-cpp.md)<br>
[/ASSEMBLYRESOURCE (incorpora una risorsa gestita)](assemblyresource-embed-a-managed-resource.md)
