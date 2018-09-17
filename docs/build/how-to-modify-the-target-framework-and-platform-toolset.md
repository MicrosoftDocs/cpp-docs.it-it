---
title: 'Procedura: modificare il Framework di destinazione e il set di strumenti della piattaforma | Microsoft Docs'
ms.custom: conceptual
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- msbuild.cpp.howto.modifytargetframeworkandplatformtoolset
dev_langs:
- C++
helpviewer_keywords:
- 'msbuild (c++), howto: modify target framework and platform toolset'
ms.assetid: 031b1d54-e6e1-4da7-9868-3e75a87d9ffe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 60fa9bd3d6db9d90e5d7f3bc94e7686e5cf9481e
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45708448"
---
# <a name="how-to-modify-the-target-framework-and-platform-toolset"></a>Procedura: modificare il framework di destinazione e il set di strumenti della piattaforma

È possibile modificare le impostazioni di progetto Visual C++ per versioni diverse di .NET Framework di destinazione e usare i set di strumenti di piattaforma diversi. Per impostazione predefinita, il sistema del progetto usa la versione .NET Framework e la versione del set di strumenti corrispondenti alla versione di Visual Studio usata per creare il progetto. È possibile modificare il set di strumenti della piattaforma di destinazione modificando le proprietà del progetto. È possibile modificare il framework di destinazione modificando il file del progetto (vcxproj). Non è necessario mantenere una codebase separata per ogni destinazione di compilazione.

> [!IMPORTANT]
>  Alcune edizioni potrebbero non supportare i framework di destinazione o i set di strumenti della piattaforma modificati. Per informazioni sulla compatibilità, vedere [conversione, migrazione e aggiornare i progetti di Visual Studio](/visualstudio/porting/port-migrate-and-upgrade-visual-studio-projects).

Quando si modifica il framework di destinazione, viene modificato anche il set di strumenti della piattaforma in una versione che supporta tale framework. Per impostare .NET Framework 4.5 come destinazione, ad esempio, è necessario usare un set di strumenti della piattaforma compatibile, ad esempio Visual Studio 2015 (v140), Visual Studio 2013 (v120) o Visual Studio 2012 (v110). È possibile usare il set di strumenti della piattaforma **Windows7.1SDK** per .NET Framework 2.0, 3.0, 3.5 e 4 e le piattaforme x86, Itanium e x64.

> [!NOTE]
>  Per modificare il set di strumenti della piattaforma di destinazione, è necessario assicurarsi che sia installata la versione associata di Visual Studio o Windows Platform SDK. Ad esempio, per fare riferimento alla piattaforma Itanium con il set di strumenti della piattaforma **Windows7.1SDK** , è necessario che siano installati [Microsoft Windows SDK per Windows 7 e .NET Framework 4 SP1](http://www.microsoft.com/download/details.aspx?id=8279) . È tuttavia possibile usare un'altra versione compatibile di Visual Studio per lo sviluppo, purché si faccia riferimento alla versione di .NET Framework e al set di strumenti della piattaforma corretti.

È possibile estendere ulteriormente la piattaforma di destinazione creando un set di strumenti della piattaforma personalizzato. Per altre informazioni, vedere [C++ multitargeting nativo](https://blogs.msdn.microsoft.com/vcblog/2009/12/08/c-native-multi-targeting/) sul blog di Visual C++.

### <a name="to-change-the-target-framework"></a>Per modificare il framework di destinazione

1. In Visual Studio selezionare il progetto in **Esplora soluzioni**. Sulla barra dei menu aprire il menu **Progetto** e scegliere **Scarica progetto**. In questo modo viene annullato il caricamento del file di progetto (vcxproj) per il progetto.

    > [!NOTE]
    >  Un progetto C++ non può essere caricato mentre il file di progetto viene modificato in Visual Studio. È tuttavia possibile usare un altro editor, come il Blocco note, per modificare il file di progetto mentre il progetto viene caricato in Visual Studio. In Visual Studio verrà rilevato che il file di progetto è stato modificato e verrà chiesto di caricarlo di nuovo.

1. Nella barra dei menu selezionare **File**, **Apri**, **File**. Nella finestra di dialogo **Apri file** passare alla cartella del progetto, quindi aprire il file di progetto (con estensione vcxproj).

1. Nel file di progetto individuare la voce relativa alla versione del framework di destinazione. Se il progetto è basato sull'uso di .NET Framework 4.5, ad esempio, cercare `<TargetFrameworkVersion>v4.5</TargetFrameworkVersion>` nell'elemento `<PropertyGroup Label="Globals">` dell'elemento `<Project>` . Se l'elemento `<TargetFrameworkVersion>` non è presente, il progetto non usa .NET Framework e non è necessario apportare alcuna modifica.

1. Modificare il valore in base alla versione desiderata di .NET Framework, ad esempio 3.5 o 4.6.

1. Salvare le modifiche e chiudere l'editor.

1. In **Esplora soluzioni**aprire il menu di scelta rapida per il progetto, quindi scegliere **Ricarica progetto**.

1. Per verificare la modifica, in **Esplora soluzioni**fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il progetto (non per la soluzione), quindi scegliere **Proprietà** per aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Nel riquadro sinistro della finestra di dialogo espandere **Proprietà di configurazione** , quindi selezionare **Generale**. Verificare che in **Versione di .NET Framework di destinazione** sia visualizzata la nuova versione di .NET Framework.

### <a name="to-change-the-project-toolset"></a>Per modificare il set di strumenti del progetto

1. In **Esplora soluzioni**di Visual Studio aprire il menu di scelta rapida per il progetto (non per la soluzione), quindi scegliere **Proprietà** per aprire la finestra di dialogo **Pagine delle proprietà** del progetto.

1. Nella finestra di dialogo **Pagine delle proprietà** aprire l'elenco a discesa **Configurazione** , quindi selezionare **Tutte le configurazioni**.

1. Nel riquadro sinistro della finestra di dialogo espandere **Proprietà di configurazione** , quindi selezionare **Generale**.

1. Nel riquadro destro selezionare **Set strumenti della piattaforma** , quindi selezionare il set di strumenti desiderato dall'elenco a discesa. Ad esempio, se è stato installato il set di strumenti di Visual Studio 2010, selezionare **Visual Studio 2010 (v100)** usarlo per il progetto.

1. Fare clic sul pulsante **OK** .

## <a name="see-also"></a>Vedere anche

[MSBuild (Visual C++)](../build/msbuild-visual-cpp.md)