---
title: /MIDL (Specifica opzioni della riga di comando MIDL)
ms.date: 09/05/2018
f1_keywords:
- /midl
- VC.Project.VCLinkerTool.MidlCommandFile
helpviewer_keywords:
- -MIDL linker option
- MIDL
- /MIDL linker option
- MIDL linker option
- MIDL, command line options
ms.assetid: 22dc259e-b34c-4ed3-a380-4beb734482c1
ms.openlocfilehash: ca172428943d2446490eeb10741966f5e8c9ea85
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492714"
---
# <a name="midl-specify-midl-command-line-options"></a>/MIDL (Specifica opzioni della riga di comando MIDL)

Specifica un file di risposta per le opzioni della riga di comando MIDL

## <a name="syntax"></a>Sintassi

> **/MIDL:\@** <em>file</em>

## <a name="arguments"></a>Argomenti

*file*<br/>
Nome del file che contiene le [Opzioni della riga di comando MIDL](/windows/win32/Midl/general-midl-command-line-syntax).

## <a name="remarks"></a>Note

Tutte le opzioni per la conversione di un file IDL in un file TLB devono essere specificate nel *file*; Impossibile specificare le opzioni della riga di comando MIDL nella riga di comando del linker. Se/MIDL non è specificato, il compilatore MIDL verrà richiamato solo con il nome del file IDL e senza altre opzioni.

Il file deve contenere un'opzione della riga di comando MIDL per riga.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la > pagina delle proprietà**IDL Embedded** del**linker** > proprietà di configurazione.

1. Modificare la proprietà dei **comandi MIDL** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MidlCommandFile%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[/IDLOUT (assegna un nome ai file di output MIDL)](idlout-name-midl-output-files.md)<br/>
[/IGNOREIDL (non elabora gli attributi in MIDL)](ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/TLBOUT (denomina un file TLB)](tlbout-name-dot-tlb-file.md)<br/>
[Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)
