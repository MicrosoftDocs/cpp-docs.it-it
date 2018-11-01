---
title: /PGD (Specifica il database per le ottimizzazioni PGO)
ms.date: 03/14/2018
f1_keywords:
- VC.Project.VCLinkerTool.ProfileGuidedDatabase
helpviewer_keywords:
- -PGD linker option
- /PGD linker option
ms.assetid: 9f312498-493b-461f-886f-92652257e443
ms.openlocfilehash: 68d112c0a40289ba62e3fe5c37ae23f8f55f9209
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50601292"
---
# <a name="pgd-specify-database-for-profile-guided-optimizations"></a>/PGD (Specifica il database per le ottimizzazioni PGO)

**L'opzione /PGD è deprecata.** A partire da Visual Studio 2015, preferisce le [/GENPROFILE o /fastgenprofile.](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) invece delle opzioni del linker. Questa opzione viene utilizzata per specificare il nome del file con estensione pgd utilizzato dal processo di ottimizzazione PGO.

## <a name="syntax"></a>Sintassi

> **/ PGD:**_nomefile_

## <a name="argument"></a>Argomento

*filename*<br/>
Specifica il nome del file pgd che viene usato per contenere informazioni sul programma in esecuzione.

## <a name="remarks"></a>Note

Quando si usa deprecate [/LTCG: PGINSTRUMENT](../../build/reference/ltcg-link-time-code-generation.md) opzione, utilizzare **/PGD** per specificare un nome non predefinito o un percorso per il file pgd. Se non si specifica **/PGD**, il nome base file pgd corrisponde al nome file di output (.exe o DLL) base e viene creato nella stessa directory da cui è stato richiamato il collegamento.

Quando si usa deprecate **/LTCG: PGOPTIMIZE** opzione, utilizzare il **/PGD** opzione per specificare il nome del file. pgd da usare per creare l'immagine ottimizzata. Il *filename* l'argomento deve corrispondere al *filename* specificati a **/LTCG: PGINSTRUMENT**.

Per altre informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **ottimizzazione** pagina delle proprietà.

1. Modificare il **Database PGO** proprietà. Scegli **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProfileGuidedDatabase%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
