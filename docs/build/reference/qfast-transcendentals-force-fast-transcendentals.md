---
description: Altre informazioni su:/Qfast_transcendentals (forza i trascendenti veloci)
title: /Qfast_transcendentals (forzare funzioni trascendenti veloci)
ms.date: 11/04/2016
f1_keywords:
- /Qfast_transcendentals
helpviewer_keywords:
- /Qfast_transcendentals
- Force Fast Transcendentals
ms.assetid: 4de24bd1-38e6-49d4-9a05-04c9937d24ac
ms.openlocfilehash: 7701925aa7df33107b0829ade1c0c711eda14c08
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225661"
---
# <a name="qfast_transcendentals-force-fast-transcendentals"></a>/Qfast_transcendentals (forzare funzioni trascendenti veloci)

Genera il codice inline per le funzioni trascendentali.

## <a name="syntax"></a>Sintassi

```
/Qfast_transcendentals
```

## <a name="remarks"></a>Osservazioni

Questa opzione del compilatore impone la conversione delle funzioni trascendenti in codice inline per migliorare la velocità di esecuzione. Questa opzione ha effetto solo se abbinata a **/FP: except** o **/FP: precise**. La generazione di codice inline per le funzioni trascendenti è già il comportamento predefinito in **/FP: Fast**.

Questa opzione non è compatibile con **/FP: Strict**. Per ulteriori informazioni sulle opzioni del compilatore a virgola mobile, vedere [/FP (specificare il comportamento di Floating-Point)](fp-specify-floating-point-behavior.md) .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni/q (operazioni di basso livello)](q-options-low-level-operations.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
