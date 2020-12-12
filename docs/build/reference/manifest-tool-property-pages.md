---
description: 'Altre informazioni su: pagine delle proprietà dello strumento Manifesto'
title: Pagine delle proprietà dello strumento Manifesto
ms.date: 07/24/2019
ms.topic: article
f1_keywords:
- VC.Project.VCManifestTool.SuppressStartupBanner
- VC.Project.VCManifestTool.VerboseOutput
- VC.Project.VCManifestTool.AssemblyIdentity
- VC.Project.VCManifestTool.AdditionalManifestFiles
- VC.Project.VCManifestTool.InputResourceManifests
- VC.Project.VCManifestTool.EmbedManifest
- VC.Project.VCManifestTool.OutputManifestFile
- VC.Project.VCManifestTool.ResourceOutputFileName
- VC.Project.VCManifestTool.GenerateCatalogFiles
- VC.Project.VCManifestTool.ManifestFromManagedAssembly
- VC.Project.VCManifestTool.SuppressDependencyElement
- VC.Project.VCManifestTool.GenerateCategoryTags
- VC.Project.VCManifestTool.EnableDPIAwareness
- VC.Project.VCManifestTool.TypeLibraryFile
- VC.Project.VCManifestTool.RegistrarScriptFile
- VC.Project.VCManifestTool.ComponentFileName
- VC.Project.VCManifestTool.ReplacementsFile
- VC.Project.VCManifestTool.UpdateFileHashes
- VC.Project.VCManifestTool.UpdateFileHashesSearchPath
- vc.project.AdditionalOptionsPage
ms.assetid: f33499c4-7733-42d9-80e3-8a5018786965
ms.openlocfilehash: 6840c2296eacb31914cdde51d745f6f996928e90
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199194"
---
# <a name="manifest-tool-property-pages"></a>Pagine delle proprietà dello strumento Manifesto

Utilizzare queste pagine per specificare le opzioni generali per [Mt.exe](/windows/win32/sbscs/mt-exe). Queste pagine si trovano in proprietà **progetto**  >  **proprietà di**  >  **configurazione**  >  **strumento Manifesto**.

## <a name="general-property-page"></a>Pagina delle proprietà generale

### <a name="suppress-startup-banner"></a>Non visualizzare messaggio di avvio

   **Sì (/nologo)** specifica che le informazioni standard sul copyright Microsoft non verranno visualizzate quando sarà avviato lo strumento Manifesto. Usare questa opzione per non visualizzare l'output indesiderato nei file di log, quando si esegue mt.exe come parte di un processo di compilazione o da un ambiente di compilazione.

### <a name="verbose-output"></a>Output dettagliato

   **Sì (/verbose)** specifica che le informazioni di compilazione aggiuntive verranno visualizzate durante la generazione del manifesto.

### <a name="assembly-identity"></a>Identità assembly

Usa l'opzione/Identity per specificare una stringa di identità che comprende gli attributi per l' [ \<assemblyIdentity> elemento](/visualstudio/deployment/assemblyidentity-element-clickonce-application). Una stringa di identità inizia con il valore per l' `name` attributo ed è seguita da coppie di valori di *attributo*  =   . Gli attributi in una stringa di identità sono delimitati dalla virgola.

Di seguito è riportato un esempio di stringa di identità: `Microsoft.Windows.Common-Controls, processorArchitecture=x86, version=6.0.0.0, type=win32, publicKeyToken=6595b64144ccf1df`

## <a name="input-and-output-property-page"></a>Pagina delle proprietà input e output

### <a name="additional-manifest-files"></a>File manifesto aggiuntivi

Usa l'opzione **/manifest** per specificare i percorsi completi dei file manifesto aggiuntivi che lo strumento Manifesto elaborerà o unirà. I percorsi completi sono delimitati da un punto e virgola. (-manifest [manifest1] [manifest2]...)

### <a name="input-resource-manifests"></a>Manifesti risorse di input

Usa l'opzione **/inputresource** per specificare il percorso completo di una risorsa di tipo RT_MANIFEST da inserire nello strumento Manifesto. Il percorso può essere seguito dall'ID risorsa specificato. Ad esempio:

`dll_with_manifest.dll;#1`

### <a name="embed-manifest"></a>Incorpora manifesto

- **Sì** specifica che il file manifesto dell'applicazione verrà incorporato nell'assembly.

- **No** specifica che il file manifesto dell'applicazione verrà creato come file autonomo.

### <a name="output-manifest-file"></a>File manifesto di output

Specifica il nome del file manifesto di output. Questa proprietà è facoltativa quando solo un file manifesto viene elaborato dallo strumento Manifesto. (-out: [file]; # [ID risorsa])

### <a name="manifest-resource-file"></a>File di risorse manifesto

Specifica il file di risorse di output usato per incorporare il manifesto nell'output del progetto.

### <a name="generate-catalog-files"></a>Genera file catalogo

Usa l'opzione **/makecdfs** per specificare che lo strumento Manifesto genererà file di definizione catalogo (file con estensione cdf), che vengono utilizzati per creare cataloghi. /makecdfs

### <a name="generate-manifest-from-managedassembly"></a>Genera manifesto da ManagedAssembly

Genera un manifesto da un assembly gestito. (-managedassemblyname: \[ file])

### <a name="suppress-dependency-element"></a>Non visualizzare elemento di dipendenza

Utilizzato con-managedassembly. evita la generazione di elementi di dipendenza nel manifesto finale. (-nodependency)

### <a name="generate-category-tags"></a>Genera tag di categoria

Utilizzato con-managedassembly. -Category causa la generazione dei tag category. (categoria)

### <a name="dpi-awareness"></a>Riconoscimento DPI

Specifica se l'applicazione è compatibile con DPI. Per impostazione predefinita, l'impostazione è **Sì** per progetti MFC e **No** in caso contrario, perché solo i progetti MFC hanno la compatibilità DPI incorporata. È possibile forzare l'impostazione su **Sì** se si aggiunge codice per gestire le impostazioni DPI diverse. L'applicazione potrebbe apparire fuzzy o piccola se la si imposta come compatibile con DPI quando in realtà non lo è.

**Choices**

- **Nessuno**
- **Compatibilità DPI elevata**
- **Per monitor con compatibilità DPI elevata**

## <a name="isolated-com-property-page"></a>Pagina delle proprietà COM isolata

Per ulteriori informazioni sui componenti COM isolati, vedere [applicazioni isolate](/windows/win32/SbsCs/isolated-applications) e [procedura: compilare applicazioni isolate per l'utilizzo di componenti com](../how-to-build-isolated-applications-to-consume-com-components.md).

### <a name="type-library-file"></a>File libreria dei tipi

Specifica la libreria dei tipi da utilizzare per il supporto del manifesto COM regfree. (-tlb: [file])

### <a name="registrar-script-file"></a>File di script registrazione

Specifica il file di script del registrar da usare per il supporto del manifesto COM regfree. (-RGS: [file])

### <a name="component-file-name"></a>Nome file componente

Specifica il nome file del componente compilato dal file con estensione TLB o RGS specificato. (-dll: [file])

### <a name="replacements-file"></a>File sostitutivo

Specifica il file che contiene i valori per le stringhe sostituibili nel file RGS. (sostituzioni: [file])

## <a name="advanced-property-page"></a>Pagina delle proprietà avanzate

### <a name="update-file-hashes"></a>Aggiorna hash dei file

Calcola l'hash dei file specificati negli elementi del file e aggiorna l'attributo hash con questo valore. (hashupdate: [percorso])

### <a name="update-file-hashes-search-path"></a>Percorso di ricerca aggiornamento hash dei file

Specifica il percorso di ricerca da usare quando si aggiornano gli hash dei file.

### <a name="additional-options"></a>Opzioni aggiuntive

Opzioni aggiuntive

## <a name="see-also"></a>Vedi anche

[Riferimento alla pagina delle proprietà del progetto C++](property-pages-visual-cpp.md)
