---
title: Proprietà COM isolato dello strumento Manifesto (Visual C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCManifestTool.RegistrarScriptFile
- VC.Project.VCManifestTool.ComponentFileName
- VC.Project.VCManifestTool.TypeLibraryFile
- VC.Project.VCManifestTool.ReplacementsFile
dev_langs:
- C++
ms.assetid: 457582b8-cfde-49c0-92e3-3a6b9e8c08eb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cdb472ce082809a48dd3e42afd4481149eff3a28
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407557"
---
# <a name="isolated-com-manifest-tool-configuration-properties-ltprojectnamegt-property-pages-dialog-box"></a>COM isolato, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di &lt;nomeprogetto&gt;

Usare questa finestra di dialogo per specificare opzioni **COM isolato** per [Mt.exe](https://msdn.microsoft.com/library/aa375649).

Per accedere a questa pagina delle proprietà, aprire le pagine delle proprietà per il progetto o la finestra delle proprietà. Espandere il nodo **Strumento Manifesto** in **Proprietà comuni**, quindi selezionare **COM isolato**.

## <a name="task-list"></a>Elenco attività

- [Procedura: Compilare applicazioni isolate per l'utilizzo di componenti COM](../build/how-to-build-isolated-applications-to-consume-com-components.md)

## <a name="uielement-list"></a>Elenco UIElement

- **File libreria dei tipi**

   Usa l'opzione /tlb per specificare il nome del file della libreria dei tipi (file con estensione tlb) che lo strumento Manifesto usa per generare il file manifesto.

- **File di script registrazione**

   Usa l'opzione /rgs per specificare il nome del file di script registrazione (con estensione rgs) che lo strumento Manifesto usa per generare il file manifesto.

- **Nome file componente**

   Usa l'opzione /dll per specificare il nome della risorsa generata dallo strumento Manifesto. È necessario immettere un valore per questa proprietà quando sono specificati valori per **File libreria dei tipi** o per **File di script registrazione**.

- **File sostitutivo**

   Usa l'opzione /replacements per specificare il percorso completo del file che contiene i valori delle stringhe sostituibili nel file con estensione rgs.

## <a name="see-also"></a>Vedere anche

[Applicazioni isolate](/windows/desktop/SbsCs/isolated-applications)<br>
[ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)<br>
[Pagine delle proprietà Strumento Manifesto](../ide/manifest-tool-property-pages.md)<br>
[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)