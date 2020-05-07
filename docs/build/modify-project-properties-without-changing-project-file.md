---
title: 'Procedura: modificare le proprietà e le destinazioni del progetto C++ senza modificare il file di progetto'
ms.date: 11/28/2018
helpviewer_keywords:
- project properties [C++], modifying outside project file
ms.openlocfilehash: 72107b572e35f222c0b03959e0edd2d23bd0130a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328467"
---
# <a name="how-to-modify-c-project-properties-and-targets-without-changing-the-project-file"></a>Procedura: modificare le proprietà e le destinazioni del progetto C++ senza modificare il file di progetto

È possibile ignorare le proprietà e le destinazioni del progetto al prompt dei comandi di MSBuild senza modificare il file di progetto. Ciò è utile quando si intende applicare alcune proprietà in modo temporaneo o occasionalmente. Si presuppone una conoscenza di MSBuild. Per altre informazioni, vedere [MSBuild](https://docs.microsoft.com/visualstudio/msbuild/msbuild).

> [!IMPORTANT]
> È possibile usare l'Editor XML in Visual Studio o qualsiasi editor di testo per creare il file con estensione props o targets. Non usare **Gestione proprietà** in questo scenario perché aggiunge le proprietà del file di progetto.

*Per ignorare le proprietà del progetto:*

1. Creare un file con estensione props che specifica le proprietà da ignorare.

1. Al prompt dei comandi: impostare ForceImportBeforeCppTargets="C:\sources\my_props.props"

*Per ignorare le destinazioni del progetto:*

1. Creare un file con estensione targets con la relativa implementazione o una particolare destinazione

2. Al prompt dei comandi: impostare ForceImportAfterCppTargets ="C:\sources\my_target.targets"

È anche possibile impostare entrambe le opzioni nella riga di comando di msbuild con l'opzione /p::

```cmd
> msbuild myproject.sln /p:ForceImportBeforeCppTargets="C:\sources\my_props.props"
> msbuild myproject.sln /p:ForceImportAfterCppTargets="C:\sources\my_target.targets"
```

Ignorare le proprietà e le destinazioni in questo modo equivale ad aggiungere le importazioni seguenti a tutti i file con estensione vcxproj nella soluzione:

```cmd
<Import Project=="C:\sources\my_props.props" />
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
<Import Project==" C:\sources\my_target.targets"" />
```
