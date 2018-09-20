---
title: -MIDL (Specifica opzioni della riga di comando MIDL) | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /midl
- VC.Project.VCLinkerTool.MidlCommandFile
dev_langs:
- C++
helpviewer_keywords:
- -MIDL linker option
- MIDL
- /MIDL linker option
- MIDL linker option
- MIDL, command line options
ms.assetid: 22dc259e-b34c-4ed3-a380-4beb734482c1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9d9ecfada513e16ce10bab37bb38b6ce6d67f907
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46397624"
---
# <a name="midl-specify-midl-command-line-options"></a>/MIDL (Specifica opzioni della riga di comando MIDL)

Specifica un file di risposta per le opzioni della riga di comando MIDL

## <a name="syntax"></a>Sintassi

> **/MIDL:\@**<em>file</em>

## <a name="arguments"></a>Argomenti

*file*<br/>
Il nome del file che contiene [opzioni della riga di comando MIDL](/windows/desktop/Midl/general-midl-command-line-syntax).

## <a name="remarks"></a>Note

Devono essere specificate tutte le opzioni per la conversione di un file IDL in un file TLB *file*; Opzioni della riga di comando di MIDL non è possibile specificare nella riga di comando del linker. Se /MIDL non viene specificato, il compilatore MIDL verrà richiamato con solo il nome del file IDL e senza altre opzioni.

Il file deve contenere un'opzione della riga di comando MIDL per riga.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

2. Selezionare il **le proprietà di configurazione** > **Linker** > **IDL incorporato** pagina delle proprietà.

3. Modificare il **comandi MIDL** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MidlCommandFile%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[/IDLOUT (assegna un nome ai file di output MIDL)](../../build/reference/idlout-name-midl-output-files.md)<br/>
[/IGNOREIDL (non elabora gli attributi in MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/TLBOUT (denomina un file TLB)](../../build/reference/tlbout-name-dot-tlb-file.md)<br/>
[Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)