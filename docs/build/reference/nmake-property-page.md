---
title: Pagina delle proprietà NMake (Windows C++) | Microsoft Docs
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCNMakeTool.ReBuildCommandLine
- VC.Project.VCNMakeTool.CleanCommandLine
- VC.Project.VCNMakeTool.Output
- VC.Project.VCNMakeTool.BuildCommandLine
helpviewer_keywords:
- NMake property page
ms.assetid: bd20cb52-9f1d-4240-b4fc-4f43205ac94b
ms.openlocfilehash: c0dbe537635fe6698f814f3d8456f0caa9c8c796
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826769"
---
# <a name="nmake-property-page"></a>NMake (pagina delle proprietà)

La pagina delle proprietà **NMake** consente di specificare le impostazioni di compilazione per i progetti NMake. (NMAKE è l'implementazione Microsoft del [rendere](https://wikipedia.org/wiki/Make_(software)).)

Per altre informazioni sui progetti NMake, vedere [Creazione di un progetto makefile](creating-a-makefile-project.md). Per i progetti MakeFile di non - Windows, vedere [proprietà del progetto MakeFile (Linux C++)](../../linux/prop-pages/makefile-linux.md), [proprietà dei progetti generali (Makefile di Android C++)](/visualstudio/cross-platform/general-makefile-android-prop-page) o [proprietà di NMake (Android C++)](/visualstudio/cross-platform/nmake-android-prop-page).

La pagina delle proprietà **NMake** include le proprietà seguenti.

## <a name="uielement-list"></a>Elenco UIElement

- **Riga di comando per Compila**

   Specifica il comando da eseguire quando è selezionata l'opzione **Compila** nel menu **Compila**.

- **Riga di comando per Ricompila tutto**

   Specifica il comando da eseguire quando è selezionata l'opzione **Ricompila tutto** nel menu **Compila**.

- **Riga di comando per Pulisci**

   Specifica il comando da eseguire quando è selezionata l'opzione **Pulisci** nel menu **Compila**.

- **Output**

   Specifica il nome del file che conterrà l'output della riga di comando. Per impostazione predefinita, il nome di questo file è basato sul nome del progetto.

- **Definizioni del preprocessore**

   Specifica tutte le definizioni del preprocessore usate dai file di origine. Il valore predefinito è determinato dalla piattaforma corrente e dalla configurazione.

- **Percorso di ricerca di inclusione**

   Specifica le directory in cui il compilatore ricerca i file di inclusione.

- **Inclusioni forzate**

   Specifica i file che il preprocessore elabora automaticamente anche se non sono inclusi nei file di progetto.

- **Percorso di ricerca assembly**

   Specifica le directory in cui .NET Framework esegue la ricerca quando tenta di risolvere gli assembly .NET.

- **Assembly a uso forzato**

   Specifica gli assembly .NET Framework elabora automaticamente.

- **Opzioni aggiuntive**

   Specifica le opzioni aggiuntive del compilatore per IntelliSense da usare quando si analizzano file C++.

Per informazioni su come accedere al **NMake** pagina delle proprietà, vedere [delle proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

Per informazioni su come accedere a livello di codice ai membri di questo oggetto, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCNMakeTool>.

## <a name="see-also"></a>Vedere anche

[Riferimento alla pagina di proprietà progetto C++](property-pages-visual-cpp.md)<br>
