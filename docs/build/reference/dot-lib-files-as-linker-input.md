---
title: File lib come input del linker
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.AdditionalDependencies
helpviewer_keywords:
- OMF libraries
- linking [C++], OMF libraries
- import libraries, linker files
- libraries [C++], .lib files as linker input
- COFF files, import libraries
- default libraries [C++], linker output
- default libraries [C++]
- defaults [C++], libraries
- .lib files
ms.assetid: dc5d2b1c-2487-41fa-aa71-ad1e0647958b
ms.openlocfilehash: f3b2ae0d82e682cc89243b7b527ee6e0b51d4c3d
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57426771"
---
# <a name="lib-files-as-linker-input"></a>File lib come input del linker

COLLEGAMENTO accetta librerie standard COFF e COFF importare le librerie, che hanno in genere l'estensione. lib. Librerie standard di contengano oggetti e vengono create dallo strumento di LIB. Le librerie di importazione contengono informazioni sull'esportazione in altri programmi e vengono create tramite collegamento quando compila un programma che contiene esportazioni o dallo strumento di LIB. Per informazioni sull'uso di LIB creare standard o librerie di importazione, vedere [riferimenti a LIB](../../build/reference/lib-reference.md). Per informazioni dettagliate sull'uso di collegamento per creare una libreria di importazione, vedere la [/DLL](../../build/reference/dll-build-a-dll.md) opzione.

Una raccolta viene specificata al collegamento come argomento un nome file o una raccolta predefinita. COLLEGAMENTO risolve i riferimenti esterni cercando prima nelle librerie specificate nella riga di comando, quindi nelle librerie predefinite specificate con il [/DEFAULTLIB](../../build/reference/defaultlib-specify-default-library.md) opzione e quindi in librerie predefinite specificate nei file con estensione obj. Se viene specificato un percorso con il nome della libreria, collegamento Cerca la libreria in tale directory. Se viene specificato alcun percorso, il collegamento Cerca primo nella directory in esecuzione da collegamento e quindi in qualsiasi directory specificate nella variabile di ambiente LIB.

## <a name="to-add-lib-files-as-linker-input-in-the-development-environment"></a>Per aggiungere i file con estensione LIB come input del linker nell'ambiente di sviluppo

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Scegliere il **Input** pagina delle proprietà di **Linker** cartella.

1. Modificare il **dipendenze aggiuntive** proprietà per aggiungere i file con estensione LIB.

## <a name="to-programmatically-add-lib-files-as-linker-input"></a>A livello di codice aggiungere il file con estensione LIB come input del linker

- Visualizzare [AdditionalDependencies](/dotnet/api/microsoft.visualstudio.vcprojectengine.vclinkertool.additionaldependencies).

## <a name="example"></a>Esempio

L'esempio seguente viene illustrato come creare e usare un file con estensione LIB. Innanzitutto, compilare un file con estensione LIB:

```cpp
// lib_link_input_1.cpp
// compile by using: cl /LD lib_link_input_1.cpp
__declspec(dllexport) int Test() {
   return 213;
}
```

E quindi, compilare questo esempio utilizzando il file con estensione LIB che appena creato:

```cpp
// lib_link_input_2.cpp
// compile by using: cl /EHsc lib_link_input_1.lib lib_link_input_2.cpp
__declspec(dllimport) int Test();
#include <iostream>
int main() {
   std::cout << Test() << std::endl;
}
```

```Output
213
```

## <a name="see-also"></a>Vedere anche

[File di input LINK](../../build/reference/link-input-files.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
