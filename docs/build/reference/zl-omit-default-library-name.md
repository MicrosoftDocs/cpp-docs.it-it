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
ms.openlocfilehash: cb8083d874abe17add1d27096ebce143d03a04cf
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57809587"
---
# <a name="zl-omit-default-library-name"></a>/Zl (Omette il nome della libreria predefinita)

Omette il nome della libreria runtime C predefinita dal file con estensione obj. Per impostazione predefinita, il compilatore inserisce il nome della libreria nel file OBJ per indirizzare il linker alla libreria corretta.

## <a name="syntax"></a>Sintassi

```
/Zl
```

## <a name="remarks"></a>Note

Per altre informazioni sulla libreria predefinita, vedere [utilizzo della libreria Run-Time](md-mt-ld-use-run-time-library.md).

È possibile usare **/Zl** per compilare i file con estensione obj si intende inserire in una libreria. Anche se omettendo il nome della libreria Salva solo una piccola quantità di spazio per un singolo file obj, lo spazio totale salvato è significativo in una libreria che contiene molti moduli di oggetto.

Questa opzione è un'opzione avanzata. Impostando questa opzione consente di rimuovere determinato supporto delle librerie di Runtime C che potrebbe essere richieste dall'applicazione, causando errori in fase di collegamento, se l'applicazione dipende da questo supporto. Se si usa questa opzione è necessario specificare i componenti necessari in un altro modo.

Uso [/NODEFAULTLIB (Ignora librerie)](nodefaultlib-ignore-libraries.md). per indicare al linker di ignorare i riferimenti alla libreria in tutti i file con estensione obj.

Per altre informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).

Durante la compilazione con **/Zl**, `_VC_NODEFAULTLIB` è definito.  Ad esempio:

```
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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **Ometti nomi librerie predefinite** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitDefaultLibName%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
