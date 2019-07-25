---
title: 'Procedura: Modificare il Framework di destinazione e il set di strumenti della piattaforma'
ms.custom: conceptual
ms.date: 07/24/2019
helpviewer_keywords:
- 'msbuild (c++), howto: modify target framework and platform toolset'
ms.assetid: 031b1d54-e6e1-4da7-9868-3e75a87d9ffe
ms.openlocfilehash: 6af7a4eb47c1d3f8b9c52eec39795c9307ca9d8e
ms.sourcegitcommit: ce3393846c86e7905ff0c86e4cd6610476809585
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/25/2019
ms.locfileid: "68492225"
---
# <a name="how-to-modify-the-target-framework-and-platform-toolset"></a>Procedura: Modificare il Framework di destinazione e il set di strumenti della piattaforma

È possibile modificare un file di C++ progetto di Visual Studio per le diverse versioni C++ del set di strumenti della piattaforma, il Windows SDKC++e il .NET Framework (solo progetti/CLI). Per impostazione predefinita, il sistema del progetto usa la versione .NET Framework e la versione del set di strumenti corrispondenti alla versione di Visual Studio usata per creare il progetto. È possibile modificare tutti questi valori nel file con estensione vcxproj in modo da poter usare la stessa codebase per ogni destinazione di compilazione.

## <a name="platform-toolset"></a>Set di strumenti della piattaforma

Il set di strumenti della piattaforma C++ è costituito dal compilatore (cl. exe) e dal linker (link. exe),C++ insieme alle librerie C/standard. A partire da Visual Studio 2015, la versione principale del set di strumenti è rimasta a 14, il che significa che i progetti compilati con Visual Studio 2019 o Visual Studio 2017 sono compatibili con le versioni precedenti di Visual Studio 2015. La versione secondaria è stata aggiornata di 1 per ogni versione a partire da Visual Studio 2015:

- Visual Studio 2015: V140
- Visual Studio 2017: V141
- Visual Studio 2019: V142

Questi set di strumenti supportano .NET Framework 4,5 e versioni successive.

Visual Studio supporta anche il multitargeting C++ per i progetti. È possibile usare l'IDE di Visual Studio per modificare e compilare i progetti creati con versioni precedenti di Visual Studio, senza aggiornarli per usare una nuova versione del set di strumenti. È necessario che nel computer siano installati i set di strumenti meno recenti. Per ulteriori informazioni, vedere [come utilizzare il multitargeting nativo in Visual Studio](../porting/use-native-multi-targeting.md). In Visual Studio 2015, ad esempio, è possibile *usare .NET Framework 2,0* , ma è necessario usare un set di strumenti precedente che lo supporta.

## <a name="target-framework-ccli-project-only"></a>Framework di destinazioneC++(solo progetto/CLI)

Quando si modifica il framework di destinazione, viene modificato anche il set di strumenti della piattaforma in una versione che supporta tale framework. Per impostare .NET Framework 4.5 come destinazione, ad esempio, è necessario usare un set di strumenti della piattaforma compatibile, ad esempio Visual Studio 2015 (v140), Visual Studio 2013 (v120) o Visual Studio 2012 (v110). È possibile usare il set di strumenti della piattaforma [Windows 7,1 SDK](https://www.microsoft.com/en-us/download/details.aspx?id=8279) per la .NET Framework 2,0, 3,0, 3,5 e 4 e le piattaforme x86/x64.

È possibile estendere ulteriormente la piattaforma di destinazione creando un set di strumenti della piattaforma personalizzato. Per altre informazioni, vedere il post sul [multitargeting nativo C++](https://blogs.msdn.microsoft.com/vcblog/2009/12/08/c-native-multi-targeting/) nel blog di Visual C++.

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

### <a name="to-change-the-platform-toolset"></a>Per modificare il set di strumenti della piattaforma

1. In **Esplora soluzioni**di Visual Studio aprire il menu di scelta rapida per il progetto (non per la soluzione), quindi scegliere **Proprietà** per aprire la finestra di dialogo **Pagine delle proprietà** del progetto.

1. Nella finestra di dialogo **Pagine delle proprietà** aprire l'elenco a discesa **Configurazione** , quindi selezionare **Tutte le configurazioni**.

1. Nel riquadro sinistro della finestra di dialogo espandere **Proprietà di configurazione** , quindi selezionare **Generale**.

1. Nel riquadro destro selezionare **Set strumenti della piattaforma** , quindi selezionare il set di strumenti desiderato dall'elenco a discesa. Ad esempio, se è stato installato il set di strumenti di Visual Studio 2010, selezionare **Visual studio 2010 (V100)** per usarlo per il progetto.

1. Fare clic sul pulsante **OK** .

## <a name="see-also"></a>Vedere anche

[MSBuild dalla riga di comando - C++](msbuild-visual-cpp.md)
