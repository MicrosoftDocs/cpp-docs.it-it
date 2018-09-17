---
title: -Zl (omette il nome della libreria predefinita) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /zi
- VC.Project.VCCLCompilerTool.OmitDefaultLibName
dev_langs:
- C++
helpviewer_keywords:
- -Zl compiler option [C++]
- ZI compiler option
- Omit Default Library Name compiler option
- /Zl compiler option [C++]
- default libraries, omitting names
ms.assetid: b27d39d0-44d6-498c-84ae-27c1326fee59
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3f09abebb8fc142bbe2390f61d790a5885c9aebe
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707317"
---
# <a name="zl-omit-default-library-name"></a>/Zl (Omette il nome della libreria predefinita)

Omette il nome della libreria runtime C predefinita dal file con estensione obj. Per impostazione predefinita, il compilatore inserisce il nome della libreria nel file OBJ per indirizzare il linker alla libreria corretta.

## <a name="syntax"></a>Sintassi

```
/Zl
```

## <a name="remarks"></a>Note

Per altre informazioni sulla libreria predefinita, vedere [utilizzo della libreria Run-Time](../../build/reference/md-mt-ld-use-run-time-library.md).

È possibile usare **/Zl** per compilare i file con estensione obj si intende inserire in una libreria. Anche se omettendo il nome della libreria Salva solo una piccola quantità di spazio per un singolo file obj, lo spazio totale salvato è significativo in una libreria che contiene molti moduli di oggetto.

Questa opzione è un'opzione avanzata. Impostando questa opzione consente di rimuovere determinato supporto delle librerie di Runtime C che potrebbe essere richieste dall'applicazione, causando errori in fase di collegamento, se l'applicazione dipende da questo supporto. Se si usa questa opzione è necessario specificare i componenti necessari in un altro modo.

Uso [/NODEFAULTLIB (Ignora librerie)](../../build/reference/nodefaultlib-ignore-libraries.md). per indicare al linker di ignorare i riferimenti alla libreria in tutti i file con estensione obj.

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

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Scegliere il **avanzate** pagina delle proprietà.

1. Modificare il **Ometti nomi librerie predefinite** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OmitDefaultLibName%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)