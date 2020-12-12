---
description: Altre informazioni su:/MIDL (specifica opzioni della riga di comando MIDL)
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
ms.openlocfilehash: 7c3a095e687ebe58db25cc8313569df3ee3a5886
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190640"
---
# <a name="midl-specify-midl-command-line-options"></a>/MIDL (Specifica opzioni della riga di comando MIDL)

Specifica un file di risposta per le opzioni della riga di comando MIDL

## <a name="syntax"></a>Sintassi

> **/MIDL: \@** <em>file</em>

## <a name="arguments"></a>Argomenti

*file*<br/>
Nome del file che contiene le [Opzioni della riga di comando MIDL](/windows/win32/Midl/general-midl-command-line-syntax).

## <a name="remarks"></a>Commenti

Tutte le opzioni per la conversione di un file IDL in un file TLB devono essere specificate nel *file*; Impossibile specificare le opzioni della riga di comando MIDL nella riga di comando del linker. Se/MIDL non è specificato, il compilatore MIDL verrà richiamato solo con il nome del file IDL e senza altre opzioni.

Il file deve contenere un'opzione della riga di comando MIDL per riga.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle  >  proprietà **IDL Embedded** del linker proprietà di configurazione.

1. Modificare la proprietà dei **comandi MIDL** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MidlCommandFile%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[/IDLOUT (assegnare un nome ai file di output MIDL)](idlout-name-midl-output-files.md)<br/>
[/IGNOREIDL (non elabora gli attributi in MIDL)](ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/TLBOUT (nome. File TLB)](tlbout-name-dot-tlb-file.md)<br/>
[Compilazione di un programma con attributi](../../windows/attributes/cpp-attributes-com-net.md)
