---
title: /Zl (Omette il nome della libreria predefinita)
ms.date: 11/04/2016
f1_keywords:
- /zi
- VC.Project.VCCLCompilerTool.OmitDefaultLibName
helpviewer_keywords:
- -Zl compiler option [C++]
- ZI compiler option
- Omit Default Library Name compiler option
- /Zl compiler option [C++]
- default libraries, omitting names
ms.assetid: b27d39d0-44d6-498c-84ae-27c1326fee59
ms.openlocfilehash: 1bcb90dbf071253dc0561845e3bd713dc42d5aef
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988560"
---
# <a name="zl-omit-default-library-name"></a>/Zl (Omette il nome della libreria predefinita)

Omette il nome della libreria di runtime C predefinita dal file obj. Per impostazione predefinita, il compilatore inserisce il nome della libreria nel file OBJ per indirizzare il linker alla libreria corretta.

## <a name="syntax"></a>Sintassi

```
/Zl
```

## <a name="remarks"></a>Note

Per ulteriori informazioni sulla libreria predefinita, vedere [utilizzare la libreria di runtime](md-mt-ld-use-run-time-library.md).

È possibile usare **/ZL** per compilare i file con estensione obj che si prevede di inserire in una libreria. Anche se omettere il nome della libreria Salva solo una piccola quantità di spazio per un singolo file obj, lo spazio totale salvato è significativo in una raccolta che contiene molti moduli oggetto.

Questa opzione è avanzata. L'impostazione di questa opzione consente di rimuovere il supporto di alcune librerie di runtime C che potrebbero essere richieste dall'applicazione, causando errori in fase di collegamento se l'applicazione dipende da questo supporto. Se si utilizza questa opzione, è necessario fornire i componenti necessari in altro modo.

Usare [/NODEFAULTLIB (Ignora librerie)](nodefaultlib-ignore-libraries.md). per indicare al linker di ignorare i riferimenti alla libreria in tutti i file con estensione obj.

Per altre informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).

Quando si esegue la compilazione con **/ZL**, viene definito `_VC_NODEFAULTLIB`.  Ad esempio:

```cpp
// vc_nodefaultlib.cpp
// compile with: /Zl
void Test() {
   #ifdef _VC_NODEFAULTLIB
      int i;
   #endif

   int i;   // C2086
}
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Avanzate** .

1. Modificare la proprietà **omette nomi libreria predefiniti** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitDefaultLibName%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
