---
title: /NXCOMPAT (compatibile con Protezione esecuzione programmi)
description: Descrive l'opzione del linker Microsoft C/C++ (MSVC)/NXCOMPAT, che contrassegna un eseguibile come compatibile con protezione esecuzione programmi (DEP).
ms.date: 12/17/2019
f1_keywords:
- /NXCOMPAT
helpviewer_keywords:
- /NXCOMPAT linker option
- -NXCOMPAT linker option
- NXCOMPAT linker option
ms.openlocfilehash: f3a0906a49e3524fff3e1ef1643d1eceee28f169
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75298987"
---
# <a name="nxcompat-compatible-with-data-execution-prevention"></a>/NXCOMPAT (compatibile con Protezione esecuzione programmi)

Indica che un eseguibile è compatibile con la funzionalità Protezione esecuzione programmi di Windows.

## <a name="syntax"></a>Sintassi

> **/NXCOMPAT**[ **:NO**]

## <a name="remarks"></a>Note

Per impostazione predefinita, **/NXCOMPAT** è on.

**/NXCOMPAT: No** può essere usato per specificare in modo esplicito un eseguibile come incompatibile con la prevenzione dell'esecuzione dei dati.

Per ulteriori informazioni sulla prevenzione dell'esecuzione dei dati, vedere i seguenti articoli:

- [Prevenzione dell'esecuzione dei dati](/windows/win32/Memory/data-execution-prevention)

- [Protezione esecuzione programmi (Windows Embedded)](/previous-versions/windows/embedded/ms913190\(v=winembedded.5\))

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Scegliere **proprietà di configurazione** > **linker** > pagina delle proprietà **riga di comando** .

1. Immettere l'opzione nella casella **Opzioni aggiuntive** . Scegliere **OK** o **applica** per applicare la modifica.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento al linker MSVC](linking.md)\
[Opzioni del linker MSVC](linker-options.md)
