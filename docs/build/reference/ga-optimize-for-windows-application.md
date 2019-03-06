---
title: /GA (Ottimizza per applicazione Windows)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCCLCompilerTool.OptimizeForWindowsApplication
- /ga
helpviewer_keywords:
- /GA compiler option [C++]
- GA compiler option [C++]
- -GA compiler option [C++]
- Optimize for Windows compiler options
ms.assetid: be97323e-15a0-4836-862c-95980b51926a
ms.openlocfilehash: bd6c4a3464762a24c9079bb79318ad3b0f05b74a
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57420713"
---
# <a name="ga-optimize-for-windows-application"></a>/GA (Ottimizza per applicazione Windows)

Genera codice più efficiente per un file .exe per l'accesso alle variabili di archiviazione thread-local (TLS).

## <a name="syntax"></a>Sintassi

```
/GA
```

## <a name="remarks"></a>Note

**/GA** velocizza l'accesso ai dati dichiarato con [declspec](../../cpp/declspec.md) in un programma basato su Windows. Quando questa opzione è impostata, il [tls_index](/windows/desktop/ProcThread/thread-local-storage) macro viene considerato uguale a 0.

Usando **/GA** per una DLL può comportare la generazione di codice errato.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
