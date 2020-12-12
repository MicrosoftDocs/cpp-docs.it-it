---
description: Ulteriori informazioni su:. File lib come input del linker
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
ms.openlocfilehash: f4a3b6c6487947772fb72135fb26f67857f0937e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201261"
---
# <a name="lib-files-as-linker-input"></a>File lib come input del linker

Il collegamento accetta le librerie standard COFF e le librerie di importazione COFF, entrambe in genere con estensione LIB. Le librerie standard contengono oggetti e vengono creati dallo strumento LIB. Le librerie di importazione contengono informazioni sulle esportazioni in altri programmi e vengono create da LINK quando compila un programma che contiene esportazioni o dallo strumento LIB. Per informazioni sull'utilizzo di LIB per creare librerie standard o di importazione, vedere Guida di [riferimento a lib](lib-reference.md). Per informazioni dettagliate sull'uso del collegamento per creare una libreria di importazione, vedere l'opzione [/dll](dll-build-a-dll.md) .

Una libreria viene specificata per il collegamento come argomento del nome file o come libreria predefinita. Il collegamento risolve i riferimenti esterni eseguendo la ricerca prima nelle librerie specificate nella riga di comando, quindi nelle librerie predefinite specificate con l'opzione [/DEFAULTLIB](defaultlib-specify-default-library.md) e nelle librerie predefinite denominate nei file con estensione obj. Se viene specificato un percorso con il nome della libreria, il collegamento Cerca la libreria in tale directory. Se non viene specificato alcun percorso, il collegamento cerca innanzitutto nella directory da cui viene eseguito il collegamento, quindi in tutte le directory specificate nella variabile di ambiente LIB.

## <a name="to-add-lib-files-as-linker-input-in-the-development-environment"></a>Per aggiungere i file lib come input del linker nell'ambiente di sviluppo

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Scegliere la pagina delle proprietà **input** nella cartella **linker** .

1. Modificare la proprietà **dipendenze aggiuntive** per aggiungere i file. lib.

## <a name="to-programmatically-add-lib-files-as-linker-input"></a>Per aggiungere a livello di codice i file lib come input del linker

- Vedere [AdditionalDependencies](/dotnet/api/microsoft.visualstudio.vcprojectengine.vclinkertool.additionaldependencies).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come compilare e utilizzare un file con estensione LIB. Per prima cosa, compilare un file con estensione LIB:

```cpp
// lib_link_input_1.cpp
// compile by using: cl /LD lib_link_input_1.cpp
__declspec(dllexport) int Test() {
   return 213;
}
```

Compilare quindi questo esempio usando il file con estensione LIB appena creato:

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

## <a name="see-also"></a>Vedi anche

[File di input collegamento](link-input-files.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
