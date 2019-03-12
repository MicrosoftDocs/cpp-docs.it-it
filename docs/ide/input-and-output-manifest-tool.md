---
title: Proprietà di input e output di Strumento Manifesto (Visual C++)
ms.date: 08/27/2018
f1_keywords:
- VC.Project.VCManifestTool.OutputManifestFile
- VC.Project.VCManifestTool.InputResourceManifests
- VC.Project.VCManifestTool.EmbedManifest
- VC.Project.VCManifestTool.AdditionalManifestFiles
- VC.Project.VCManifestTool.DependencyInformationFile
- VC.Project.VCManifestTool.OutputResourceManifest
- VC.Project.VCManifestTool.GenerateCatalogFiles
ms.assetid: a8bb20f6-7ace-45ca-bab0-b4f4a5caf170
ms.openlocfilehash: 7b9af50e6dca2dafa4dabd356a868405dfacc958
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57741184"
---
# <a name="input-and-output-manifest-tool-configuration-properties-ltprojectnamegt-property-pages-dialog-box"></a>Input e output, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di &lt;nomeprogetto&gt;

Usare questa finestra di dialogo per specificare opzioni di input e output per [Mt.exe](/windows/desktop/SbsCs/mt-exe).

Per accedere a questa pagina delle proprietà, aprire le pagine delle proprietà per il progetto o la finestra delle proprietà. Espandere il nodo **Strumento Manifesto** in **Proprietà di configurazione**, quindi selezionare **Input e output**.

## <a name="uielement-list"></a>Elenco UIElement

**File manifesto aggiuntivi**<br/>
Usa l'opzione **/manifest** per specificare i percorsi completi dei file manifesto aggiuntivi che lo strumento Manifesto elaborerà o unirà. I percorsi completi sono delimitati da un punto e virgola.

**Manifesti risorse di input**<br/>
Usa l'opzione **/inputresource** per specificare il percorso completo di una risorsa di tipo RT_MANIFEST da inserire nello strumento Manifesto. Il percorso può essere seguito dall'ID risorsa specificato. Ad esempio:

`dll_with_manifest.dll;#1`

L'ID risorsa è facoltativo e ha il valore predefinito CREATEPROCESS_MANIFEST_RESOURCE_ID in winuser. h.

**Incorpora manifesto**<br/>
- **Sì** specifica che il file manifesto dell'applicazione verrà incorporato nell'assembly.

- **No** specifica che il file manifesto dell'applicazione verrà creato come file autonomo.

**File manifesto di output**<br/>
Specifica il nome del file manifesto di output. Questa proprietà è facoltativa quando solo un file manifesto viene elaborato dallo strumento Manifesto.

**File di risorse manifesto**<br/>
Specifica i file di risorse di output usati per incorporare il manifesto nell'output del progetto.

**Genera file catalogo**<br/>
Usa l'opzione **/makecdfs** per specificare che lo strumento Manifesto genererà file di definizione catalogo (file con estensione cdf), che vengono utilizzati per creare cataloghi.

**Genera manifesto da ManagedAssembly**<br/>
Genera un manifesto da un assembly gestito. (**-managedassemblyname:**<em>file</em>).

**Non visualizzare elemento di dipendenza**<br/>
Utilizzato con l'opzione **- managedassembly**. Evita la generazione di elementi di dipendenza nel manifesto finale.

**Genera tag di categoria**<br/>
Utilizzato con l'opzione **- managedassembly**. Questo tag determina la generazione di tag di categoria.

**Abilita compatibilità con DPI**<br/>
Specifica se l'applicazione è compatibile con DPI. Per impostazione predefinita, l'impostazione è **Sì** per progetti MFC e **No** in caso contrario, perché solo i progetti MFC hanno la compatibilità DPI incorporata. È possibile forzare l'impostazione su **Sì** se si aggiunge codice per gestire le impostazioni DPI diverse. L'applicazione potrebbe apparire fuzzy o piccola se la si imposta come compatibile con DPI quando in realtà non lo è.

## <a name="see-also"></a>Vedere anche

[ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)<br/>
[Pagine delle proprietà Strumento Manifesto](../ide/manifest-tool-property-pages.md)<br/>
[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)<br/>
