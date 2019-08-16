---
title: /NXCOMPAT (compatibile con Protezione esecuzione programmi)
ms.date: 12/29/2017
f1_keywords:
- /NXCOMPAT
helpviewer_keywords:
- /NXCOMPAT linker option
- -NXCOMPAT linker option
- NXCOMPAT linker option
ms.openlocfilehash: 7c788f5ec499f0edf0c44f1ff269af9767af6c08
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492669"
---
# <a name="nxcompat-compatible-with-data-execution-prevention"></a>/NXCOMPAT (compatibile con Protezione esecuzione programmi)

Indica che un eseguibile è compatibile con la funzionalità Protezione esecuzione programmi di Windows.

## <a name="syntax"></a>Sintassi

> **/NXCOMPAT**[ **:NO**]

## <a name="remarks"></a>Note

Per impostazione predefinita, **/NXCOMPAT** è on.

**/NXCOMPAT: No** può essere usato per specificare in modo esplicito un eseguibile come incompatibile con la prevenzione dell'esecuzione dei dati.

Per ulteriori informazioni sulla prevenzione dell'esecuzione dei dati, vedere i seguenti articoli:

- [Descrizione dettagliata della funzionalità di prevenzione esecuzione programmi (DEP)](https://support.microsoft.com/help/875352/a-detailed-description-of-the-data-execution-prevention-dep-feature-in)

- [Prevenzione dell'esecuzione dei dati](/windows/win32/Memory/data-execution-prevention)

- [Protezione esecuzione programmi (Windows Embedded)](/previous-versions/windows/embedded/ms913190\(v=winembedded.5\))

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Scegliere la pagina delle proprietà della**riga di comando** del**linker** >  **Proprietà** > di configurazione.

1. Immettere l'opzione nella casella **Opzioni aggiuntive** . Scegliere **OK** o **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
