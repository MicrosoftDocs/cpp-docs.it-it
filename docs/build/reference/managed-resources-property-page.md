---
title: pagina delle proprietà Risorse gestite
ms.date: 08/28/2019
f1_keywords:
- VC.Project.VCManagedResourceCompilerTool.ResourceFileName
- VC.Project.VCManagedResourceCompilerTool.OutputFileName
- VC.Project.VCManagedResourceCompilerTool.DefaultLocalizedResources
helpviewer_keywords:
- Managed Resources property page
ms.assetid: 80b80384-ee55-494d-9f0e-907bb98cfc19
ms.openlocfilehash: 14802996e63392bfb5fcc22096ef5f3d9db197c2
ms.sourcegitcommit: e10a5feea193c249ddc5a6faba48e7c6d8784e73
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/30/2019
ms.locfileid: "70177520"
---
# <a name="managed-resources-property-page"></a>pagina delle proprietà Risorse gestite

Nella pagina **delle proprietà risorse gestite** sono esposte le seguenti proprietà per il compilatore di risorse gestite [Resgen. exe](/dotnet/framework/tools/resgen-exe-resource-file-generator) quando si utilizzano risorse .NET nei C++programmi/CLI:

- **Nome logico risorsa**

   Specifica il *nome logico* del file con estensione resources intermedio generato. Il nome logico è il nome usato per caricare la risorsa. Se non viene specificato un nome logico, il nome file di risorse (con estensione resx) viene usato come nome logico.

- **Nome file di output**

   Specifica il nome del file di output finale cui contribuisce il file di risorse (con estensione resx).

- **Risorse localizzate predefinite**

   Specifica se il file con estensione resx specificato contribuisce alle risorse predefinite o a una DLL satellite.

Per informazioni su come accedere alla pagina **delle proprietà risorse gestite** , vedere [impostare C++ le proprietà del compilatore e della compilazione in Visual Studio](../working-with-project-properties.md).

## <a name="see-also"></a>Vedere anche

[Using RC (The RC Command Line)](/windows/win32/menurc/using-rc-the-rc-command-line-) (Uso di RC - Riga di comando RC)<br>
[C++riferimento alla pagina delle proprietà del progetto](property-pages-visual-cpp.md)<br>
[/ASSEMBLYRESOURCE (incorpora una risorsa gestita)](assemblyresource-embed-a-managed-resource.md)
