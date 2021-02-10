---
description: 'Altre informazioni su: pagina delle proprietà avanzate'
title: Pagina delle proprietà avanzate (progetto)
ms.date: 02/05/2021
f1_keywords:
- VC.Project.VCConfiguration.VCToolsVersion
- VC.Project.VCConfiguration.LLVMToolsVersion
ms.description: Use the Advanced property page in Visual Studio 2019 to set various properties for C++ projects.
ms.openlocfilehash: 420dd34088f47e8fa7bfe56fd529769b90401355
ms.sourcegitcommit: 77235bff6a7b2621c501938e30d93cb15f5733cb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/09/2021
ms.locfileid: "100006026"
---
# <a name="advanced-property-page"></a>Pagina delle proprietà avanzate

::: moniker range="<=msvc-150"

La pagina delle proprietà avanzate è disponibile in Visual Studio 2019 e versioni successive. Per visualizzare la documentazione relativa a tale versione, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end

::: moniker range="msvc-160"

La pagina delle proprietà avanzate è disponibile in Visual Studio 2019 e versioni successive.

## <a name="advanced-properties"></a>Advanced Properties

- **Estensione file di destinazione**

   Specifica l'estensione di file da utilizzare per l'output di compilazione. Il valore predefinito è *`.exe`* per le applicazioni, *`.lib`* per le librerie statiche e *`.dll`* per le dll.

- **Estensioni da eliminare durante la pulitura**

   L'opzione **Pulisci** (menu **Compila**) elimina i file dalla directory intermedia quando viene compilata la configurazione di un progetto. I file con le estensioni specificate in questa proprietà vengono eliminati quando viene eseguita la **pulizia** o quando si ricompila. Il sistema di compilazione Elimina tutti i file con queste estensioni nella directory intermedia. Elimina anche eventuali output noti della compilazione, indipendentemente dalla posizione. Che include gli output intermedi, ad esempio *`.obj`* i file. È possibile specificare caratteri jolly in questa proprietà.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.

- **File del log di compilazione**

   Consente di specificare un percorso non predefinito per il file di log creato ogni volta che si compila un progetto. Il percorso predefinito viene specificato dalle macro `$(IntDir)$(MSBuildProjectName).log` .

   È possibile usare macro di progetto per modificare il percorso della directory. Vedere [macro comuni per i comandi e le proprietà di compilazione](common-macros-for-build-commands-and-properties.md).

- **Architettura dello strumento di compilazione preferito**

   Specifica se usare gli strumenti di compilazione x86 o x64.

- **USA librerie di debug**

   Specifica se creare una build di debug o di rilascio.

- **Abilita compilazione Unity (JUMBO)**

   Consente un processo di compilazione più veloce che combina molti file di origine C++ in uno o più file prima della compilazione. Questi file combinati sono noti come file *Unity* . Non sono correlate al motore di gioco Unity.

- **Copia il contenuto in OutDir**

   Copiare gli elementi contrassegnati come *contenuti* nel progetto nella directory di output del progetto ( `$(OutDir)` ). Questa impostazione può semplificare la distribuzione. Questa proprietà è disponibile a partire da Visual Studio 2019 versione 16,7.

- **Copia i riferimenti al progetto in OutDir**

   Copiare gli elementi di riferimento del progetto eseguibile (file DLL e EXE) nella directory di output del progetto ( `$(OutDir)` ). Nei progetti C++/CLI ( [`/clr`](clr-common-language-runtime-compilation.md) ) questa proprietà viene ignorata. Al contrario, la proprietà **Copia localmente** in ogni riferimento al progetto controlla se viene copiata nella directory di output. Questa impostazione può semplificare la distribuzione locale. È disponibile a partire da Visual Studio 2019 versione 16,7.

- **Copia i simboli dei riferimenti al progetto in OutDir**

   Copiare i file PDB per gli elementi di riferimento del progetto insieme agli elementi eseguibili di riferimento del progetto nella directory di output del progetto ( `$(OutDir)` ). Questa proprietà è sempre abilitata per i progetti C++/CLI. Questa impostazione può semplificare la distribuzione del debug. È disponibile a partire da Visual Studio 2019 versione 16,7.

- **Copia il runtime C++ in OutDir**

   Copiare le DLL di runtime nella directory di output del progetto ( `$(OutDir)` ). Questa impostazione può semplificare la distribuzione locale. È disponibile a partire da Visual Studio 2019 versione 16,7.

- **Uso di MFC**

   Specifica se il progetto MFC si collega in modo statico o dinamico alla DLL MFC. In progetti non MFC selezionare **Usa librerie standard di Windows** per collegare le librerie Win32 incluse in MFC.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

- **Set di caratteri**

   Definisce se `_UNICODE` `_MBCS` è necessario impostare o. Influisce anche sul punto di ingresso del linker nei casi appropriati.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

- **Ottimizzazione intero programma**

   Specifica l' [`/GL`](gl-whole-program-optimization.md) opzione del compilatore e l' [`/LTCG`](ltcg-link-time-code-generation.md) opzione del linker. Per impostazione predefinita, l'ottimizzazione dell'intero programma è disabilitata per le configurazioni di debug e abilitata per le configurazioni di rilascio.

- **Versione del set di strumenti MSVC**

   Specifica la versione completa del set di strumenti MSVC usato per compilare il progetto. È possibile che siano installate diverse versioni di aggiornamento e anteprima di un set di strumenti. È possibile specificare quello da usare qui.

- **Versione del set di strumenti LLVM**

   Specifica la versione completa del set di strumenti LLVM usato per compilare il progetto. Questa proprietà è disponibile quando si seleziona **LLVM (Clang-cl)** come set di strumenti della piattaforma, a partire da Visual Studio 2019 versione 16,9. Per altre informazioni, vedere [impostare una versione personalizzata del set di strumenti LLVM](..\clang-support-msbuild.md#custom_llvm_toolset).

## <a name="ccli-properties"></a>Proprietà C++/CLI

- **Supporto Common Language Runtime**

   Comporta l' [`/clr`](clr-common-language-runtime-compilation.md) utilizzo dell'opzione del compilatore.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

- **Versione di .NET Framework di destinazione**

   Nei progetti gestiti specifica la versione di .NET framework di destinazione.

- **Abilita compilazione incrementale gestita**

   Per i progetti gestiti, questa opzione Abilita il rilevamento della visibilità esterna quando si generano assembly. Se una modifica apportata a un progetto gestito non è visibile ad altri progetti, i progetti dipendenti non vengono ricompilati. Le compilazioni incrementali gestite possono migliorare notevolmente i tempi di compilazione nelle soluzioni che includono progetti gestiti.

::: moniker-end
