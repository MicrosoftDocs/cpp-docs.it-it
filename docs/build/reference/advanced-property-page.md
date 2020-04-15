---
title: Pagina delle proprietà Avanzate (progetto)Advanced Property Page (Project)
ms.date: 07/19/2019
f1_keywords:
- VC.Project.VCConfiguration.VCToolsVersion
ms.description: Use the Advanced property page in Visual Studio 2019 to set various properties for C++ projects.
ms.openlocfilehash: 8ce62b768f5cda30501e791bcd040a40b18bfb23
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328418"
---
# <a name="advanced-property-page"></a>Pagina delle proprietà Avanzate

La pagina delle proprietà Avanzate è disponibile in Visual Studio 2019 e versioni successive.

::: moniker range="vs-2019"

## <a name="advanced-properties"></a>Advanced Properties

- **Estensione file di destinazione**

   Specifica l'estensione di file da utilizzare per l'output di compilazione. Il valore predefinito è **.exe** per le applicazioni, **.lib** per le librerie statiche e **DLL** per le DLL.

- **Estensioni da eliminare durante la pulitura**

   L'opzione **Pulisci** (menu **Compila**) elimina i file dalla directory intermedia quando viene compilata la configurazione di un progetto. I file con le estensioni specificate con questa proprietà verranno eliminati quando si sceglie **Pulisci** o si esegue una ricompilazione. Oltre ai file di queste estensioni presenti nella directory intermedia, il sistema di compilazione eliminerà anche tutto l'output noto della compilazione indipendentemente da dove si trova (inclusi gli output intermedi come i file con estensione obj). È possibile specificare caratteri jolly.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCConfiguration.DeleteExtensionsOnClean%2A>.

- **File del log di compilazione**

   Permette di specificare un percorso non predefinito per il file di log creato ogni volta che si compila un progetto. Il percorso predefinito è specificato dalla macro $(IntDir)$(MSBuildProjectName).log.

   È possibile usare macro di progetto per modificare il percorso della directory. Vedere Macro comuni per comandi e proprietà di [compilazione](common-macros-for-build-commands-and-properties.md).

- **Architettura dello strumento di compilazione preferitoPreferred Build Tool Architecture**

   Specifica se utilizzare gli strumenti di compilazione x86 o x64.

- **Utilizzo delle librerie di debug**

   Specifica se creare una compilazione DEBUG o RELEASE.

- **Abilitare la build di Unità (JUMBO)Enable Unity (JUMBO) build**

   Consente di eseguire un processo di compilazione in cui molti file di origine di C, vengono combinati in uno o più file di "unità" prima della compilazione per migliorare le prestazioni di compilazione. Non correlato al motore di gioco Unity.

- **Uso di MFC**

   Specifica se il progetto sarà collegato staticamente o dinamicamente alla DLL MFC. Per i progetti non MFC, è possibile selezionare **Usa librerie standard di Windows** per consentire il collegamento a diverse librerie Win32 incluse quando si usa MFC.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.useOfMfc%2A>.

- **Set di caratteri**

   Definisce se deve essere impostato _UNICODE o _MBCS. Influisce anche sul punto di ingresso del linker nei casi appropriati.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.CharacterSet%2A>.

- **Con ottimizzazione intero programma**

   Specifica l'opzione del compilatore [/GL](gl-whole-program-optimization.md) e l'opzione del linker [/LTCG](ltcg-link-time-code-generation.md). Per impostazione predefinita, questa opzione è disabilitata per le configurazioni di debug ed è abilitata per le configurazioni di versione finale.

- **Versione del set di strumenti MSVC**

   Specifica la versione completa del set di strumenti MSVC che verrà utilizzato per compilare il progetto. Se sono installate varie versioni di aggiornamento e anteprima di un set di strumenti, è possibile specificare quale utilizzare qui.

## <a name="ccli-properties"></a>Proprietà di C/CLI

- **Supporto Common Language Runtime**

   Determina l'uso dell'opzione del compilatore [/clr](clr-common-language-runtime-compilation.md).

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProject.VCProjectConfigurationProperties.ManagedExtensions%2A>.

- **Versione di .NET Framework di destinazione**

   Nei progetti gestiti specifica la versione di .NET framework di destinazione.

- **Abilita compilazione incrementale gestita**

   Per i progetti gestiti, consente il rilevamento della visibilità esterna quando si generano assembly. Se una modifica a un progetto gestito non è visibile in altri progetti, i progetti dipendenti non saranno ricompilati. È così possibile migliorare considerevolmente i tempi di compilazione di soluzioni che includono progetti gestiti.

::: moniker-end
