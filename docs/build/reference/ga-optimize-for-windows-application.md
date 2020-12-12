---
description: Altre informazioni su:/GA (Ottimizza per applicazione Windows)
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
ms.openlocfilehash: f9d65dce26e80b585abc4d67e2eef55f10cb365b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191979"
---
# <a name="ga-optimize-for-windows-application"></a>/GA (Ottimizza per applicazione Windows)

Genera codice più efficiente per un file exe per l'accesso alle variabili di archiviazione locale di thread (TLS).

## <a name="syntax"></a>Sintassi

```
/GA
```

## <a name="remarks"></a>Osservazioni

**/GA** consente di velocizzare l'accesso ai dati dichiarati con [__declspec (thread)](../../cpp/declspec.md) in un programma basato su Windows. Quando questa opzione è impostata, si presuppone che la macro [__tls_index](/windows/win32/ProcThread/thread-local-storage) sia 0.

L'uso di **/GA** per una dll può comportare la generazione di codice non valido.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
