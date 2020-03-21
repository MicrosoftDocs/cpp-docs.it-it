---
title: /errorReport (Segnala gli errori interni del compilatore)
description: Informazioni di riferimento per l'opzioneC++ della riga di comando/errorreport Microsoft C/Compiler.
ms.date: 02/09/2020
f1_keywords:
- VC.Project.VCCLCompilerTool.ErrorReporting
helpviewer_keywords:
- /errorReport compiler option [C++]
- -errorReport compiler option [C++]
ms.assetid: 819828f8-b0a5-412c-9c57-bf822f17e667
ms.openlocfilehash: 9efe96ed2611795e1fef408ad07b49d65261c3b1
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80075090"
---
# <a name="errorreport-report-internal-compiler-errors"></a>/errorReport (Segnala gli errori interni del compilatore)

> [!NOTE]
> L'opzione **/errorreport** è deprecata. A partire da Windows Vista, la segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) .

## <a name="syntax"></a>Sintassi

> **/errorreport:** \[**none** \| **prompt** \| **coda** \| **Send** ]

## <a name="remarks"></a>Osservazioni

Un errore interno del compilatore (ICE) si verifica quando il compilatore non è in grado di elaborare un file di codice sorgente. Quando si verifica un ghiaccio, il compilatore non genera un file di output o qualsiasi utile diagnostica che può essere usato per correggere il codice.

Gli argomenti **/errorreport** vengono sottoposti a override dalle impostazioni del servizio Segnalazione errori Windows. Il compilatore Invia automaticamente i report degli errori interni a Microsoft, se la creazione di report è abilitata da Segnalazione errori Windows. Non viene inviato alcun report se disabilitato da Segnalazione errori Windows.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire le proprietà di **configurazione** > pagina delle proprietà **Avanzate** di **C/C++**  > .

1. Modificare la proprietà **segnalazione errori** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ErrorReporting%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
