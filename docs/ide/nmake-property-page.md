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
ms.openlocfilehash: 18d32dd85c39586576686942968a3f6e1735337d
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57749899"
---
# <a name="nmake-property-page"></a>NMake (pagina delle proprietà)

La pagina delle proprietà **NMake** consente di specificare le impostazioni di compilazione per i progetti NMake.

Per altre informazioni sui progetti NMake, vedere [Creazione di un progetto makefile](../ide/creating-a-makefile-project.md). Per i progetti makefile non Windows, vedere [Proprietà di un progetto makefile (Linux C++)](../linux/prop-pages/makefile-linux.md), [Proprietà dei progetti generali (makefile di Android C++)](/visualstudio/cross-platform/general-makefile-android-prop-page) o [Proprietà di NMake (Android C++)](/visualstudio/cross-platform/nmake-android-prop-page).

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

Per informazioni sull'accesso alla pagina delle proprietà **NMake**, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).

Per informazioni su come accedere a livello di codice ai membri di questo oggetto, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCNMakeTool>.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../ide/property-pages-visual-cpp.md)<br>
[Procedura: Abilitare IntelliSense per progetti makefile](../ide/how-to-enable-intellisense-for-makefile-projects.md)
