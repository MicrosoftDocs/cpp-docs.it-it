---
title: "Procedura: modificare il framework di destinazione e il set di strumenti della piattaforma | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
f1_keywords: 
  - "msbuild.cpp.howto.modifytargetframeworkandplatformtoolset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "msbuild (c++), procedura: modificare il framework di destinazione e il set di strumenti della piattaforma"
ms.assetid: 031b1d54-e6e1-4da7-9868-3e75a87d9ffe
caps.latest.revision: 32
caps.handback.revision: 32
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura: modificare il framework di destinazione e il set di strumenti della piattaforma
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile modificare le impostazioni del progetto [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] a seconda delle diverse versioni di .NET Framework e per usare diversi set di strumenti della piattaforma. Per impostazione predefinita, il sistema del progetto usa la versione .NET Framework e la versione del set di strumenti corrispondenti alla versione di Visual Studio usata per creare il progetto. È possibile modificare il set di strumenti della piattaforma di destinazione modificando le proprietà del progetto. È possibile modificare il framework di destinazione modificando il file del progetto \(vcxproj\). Non è necessario mantenere una codebase separata per ogni destinazione di compilazione.  
  
> [!IMPORTANT]
>  Alcune edizioni potrebbero non supportare i framework di destinazione o i set di strumenti della piattaforma modificati. Per informazioni sulla compatibilità, vedere [Portabilità, migrazione e aggiornamento dei progetti di Visual Studio](../Topic/Porting,%20Migrating,%20and%20Upgrading%20Visual%20Studio%20Projects.md).  
  
 Quando si modifica il framework di destinazione, viene modificato anche il set di strumenti della piattaforma in una versione che supporta tale framework. Per impostare .NET Framework 4.5 come destinazione, ad esempio, è necessario usare un set di strumenti della piattaforma compatibile, ad esempio Visual Studio 2015 \(v140\), Visual Studio 2013 \(v120\) o Visual Studio 2012 \(v110\). È possibile usare il set di strumenti della piattaforma **Windows7.1SDK** per .NET Framework 2.0, 3.0, 3.5 e 4 e le piattaforme x86, Itanium e x64.  
  
> [!NOTE]
>  Per modificare il set di strumenti della piattaforma di destinazione, è necessario assicurarsi che sia installata la versione associata di Visual Studio o Windows Platform SDK. Ad esempio, per fare riferimento alla piattaforma Itanium con il set di strumenti della piattaforma **Windows7.1SDK**, è necessario che siano installati [Microsoft Windows SDK per Windows 7 e .NET Framework 4 SP1](http://www.microsoft.com/download/details.aspx?id=8279). È tuttavia possibile usare un'altra versione compatibile di Visual Studio per lo sviluppo, purché si faccia riferimento alla versione di .NET Framework e al set di strumenti della piattaforma corretti.  
  
 È possibile estendere ulteriormente la piattaforma di destinazione creando un set di strumenti della piattaforma personalizzato. Per altre informazioni, vedere il post sul [multitargeting nativo C\+\+](http://go.microsoft.com/fwlink/?LinkId=196619) nel blog di Visual C\+\+.  
  
### Per modificare il framework di destinazione  
  
1.  In Visual Studio selezionare il progetto in **Esplora soluzioni**. Sulla barra dei menu aprire il menu **Progetto** e scegliere **Scarica progetto**. In questo modo viene annullato il caricamento del file di progetto \(vcxproj\) per il progetto.  
  
    > [!NOTE]
    >  Un progetto C\+\+ non può essere caricato mentre il file di progetto viene modificato in Visual Studio. È tuttavia possibile usare un altro editor, come il Blocco note, per modificare il file di progetto mentre il progetto viene caricato in Visual Studio. In Visual Studio verrà rilevato che il file di progetto è stato modificato e verrà chiesto di caricarlo di nuovo.  
  
2.  Nella barra dei menu selezionare **File**, **Apri**, **File**. Nella finestra di dialogo **Apri file** passare alla cartella del progetto, quindi aprire il file di progetto \(con estensione vcxproj\).  
  
3.  Nel file di progetto individuare la voce relativa alla versione del framework di destinazione. Se il progetto è basato sull'uso di .NET Framework 4.5, ad esempio, cercare `<TargetFrameworkVersion>v4.5</TargetFrameworkVersion>` nell'elemento `<PropertyGroup Label="Globals">` dell'elemento `<Project>`. Se l'elemento `<TargetFrameworkVersion>` non è presente, il progetto non usa .NET Framework e non è necessario apportare alcuna modifica.  
  
4.  Modificare il valore in base alla versione desiderata di .NET Framework, ad esempio 3.5 o 4.6.  
  
5.  Salvare le modifiche e chiudere l'editor.  
  
6.  In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto, quindi scegliere **Ricarica progetto**.  
  
7.  Per verificare la modifica, in **Esplora soluzioni** fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il progetto \(non per la soluzione\), quindi scegliere **Proprietà** per aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Nel riquadro sinistro della finestra di dialogo espandere **Proprietà di configurazione**, quindi selezionare **Generale**. Verificare che in **Versione di .NET Framework di destinazione** sia visualizzata la nuova versione di .NET Framework.  
  
### Per modificare il set di strumenti del progetto  
  
1.  In **Esplora soluzioni** di Visual Studio aprire il menu di scelta rapida per il progetto \(non per la soluzione\), quindi scegliere **Proprietà** per aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  
  
2.  Nella finestra di dialogo **Pagine delle proprietà** aprire l'elenco a discesa **Configurazione**, quindi selezionare **Tutte le configurazioni**.  
  
3.  Nel riquadro sinistro della finestra di dialogo espandere **Proprietà di configurazione**, quindi selezionare **Generale**.  
  
4.  Nel riquadro destro selezionare **Set strumenti della piattaforma**, quindi selezionare il set di strumenti desiderato dall'elenco a discesa. Ad esempio, se è stato installato il set di strumenti [!INCLUDE[vs_dev10_long](../build/includes/vs_dev10_long_md.md)], selezionare **Visual Studio 2010 \(v100\)** da usare per il progetto.  
  
5.  Fare clic sul pulsante **OK**.  
  
## Vedere anche  
 [MSBuild \(Visual C\+\+\)](../build/msbuild-visual-cpp.md)