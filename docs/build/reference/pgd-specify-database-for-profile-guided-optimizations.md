---
description: Altre informazioni su:/PGD (specifica il database per le ottimizzazioni Profile-Guided)
title: /PGD (Specifica il database per le ottimizzazioni PGO)
ms.date: 03/14/2018
f1_keywords:
- VC.Project.VCLinkerTool.ProfileGuidedDatabase
helpviewer_keywords:
- -PGD linker option
- /PGD linker option
ms.assetid: 9f312498-493b-461f-886f-92652257e443
ms.openlocfilehash: 7030ddaef33c6ee794c470df2c42c72d78555369
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225986"
---
# <a name="pgd-specify-database-for-profile-guided-optimizations"></a>/PGD (Specifica il database per le ottimizzazioni PGO)

**L'opzione/PGD è deprecata.** A partire da Visual Studio 2015, preferisce invece le opzioni del linker [/GENPROFILE o/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) . Questa opzione consente di specificare il nome del file con estensione PGD utilizzato dal processo di ottimizzazione PGO.

## <a name="syntax"></a>Sintassi

> **/PGD:**_nomefile_

## <a name="argument"></a>Argomento

*filename*<br/>
Specifica il nome del file. PGD usato per conservare le informazioni sul programma in esecuzione.

## <a name="remarks"></a>Commenti

Quando si utilizza l'opzione deprecated [/LTCG: PGINSTRUMENT](ltcg-link-time-code-generation.md) , utilizzare **/PGD** per specificare un nome o un percorso non predefinito per il file. pgd. Se non si specifica **/PGD**, il nome di base del file. PGD corrisponde al nome di base del file di output (con estensione exe o dll) e viene creato nella stessa directory da cui è stato richiamato il collegamento.

Quando si usa l'opzione deprecated **/LTCG: PGOPTIMIZE** , usare l'opzione **/PGD** per specificare il nome del file con estensione PGD da usare per creare l'immagine ottimizzata. L'argomento *filename* deve corrispondere al *nome file* specificato per **/LTCG: PGINSTRUMENT**.

Per altre informazioni, vedere [Ottimizzazioni PGO](../profile-guided-optimizations.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà di ottimizzazione del **linker** delle proprietà di configurazione  >   .

1. Modificare la proprietà del **Database PGO** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProfileGuidedDatabase%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
