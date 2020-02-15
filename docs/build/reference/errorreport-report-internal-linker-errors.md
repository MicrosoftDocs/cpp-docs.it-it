---
title: /ERRORREPORT (Segnala gli errori interni del linker)
description: Guida di riferimento per le opzioni della riga di comando di Microsoft NMAKE.
ms.date: 02/09/2020
f1_keywords:
- /ERRORREPORT
- VC.Project.VCLinkerTool.ErrorReporting
helpviewer_keywords:
- /ERRORREPORT linker option
- ERRORREPORT linker option
- -ERRORREPORT linker option
ms.assetid: f5fab595-a2f1-4eb0-ab5c-1c0fbd3d8c28
ms.openlocfilehash: 5e919d4f7eb59524b9145c8e3e59613e60aef1d2
ms.sourcegitcommit: 8414cd91297dea88c480e208c7b5301db9972f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2020
ms.locfileid: "77257689"
---
# <a name="errorreport-report-internal-linker-errors"></a>/ERRORREPORT (Segnala gli errori interni del linker)

L'opzione **/errorreport** è deprecata. A partire da Windows Vista, la segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) .

## <a name="syntax"></a>Sintassi

> **/Errorreport:** \[ **none** \| **prompt** \| **coda** \| **Send** ]

## <a name="remarks"></a>Osservazioni

Gli argomenti **/errorreport** vengono sottoposti a override dalle impostazioni del servizio Segnalazione errori Windows. Il linker invia automaticamente i report degli errori interni a Microsoft, se la creazione di report è abilitata da Segnalazione errori Windows. Non viene inviato alcun report se disabilitato da Segnalazione errori Windows.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Aprire la pagina delle proprietà proprietà di **configurazione** > **linker** > **Avanzate** .

1. Modificare la proprietà **segnalazione errori** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ErrorReporting%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento al linker MSVC](linking.md)\
[Opzioni del linker MSVC](linker-options.md)
