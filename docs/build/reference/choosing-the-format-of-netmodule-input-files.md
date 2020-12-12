---
description: 'Altre informazioni su: scelta del formato dei file di input con estensione netmodule'
title: Scelta del formato dei file di input con estensione netmodule
ms.date: 11/04/2016
ms.assetid: 4653d1bd-300f-4083-86f5-d1a06f44e61c
ms.openlocfilehash: ed7e448879e983ace7d96cdc7585bf0303378114
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179203"
---
# <a name="choosing-the-format-of-netmodule-input-files"></a>Scelta del formato dei file di input con estensione netmodule

Un file MSIL con estensione obj (compilato con [/CLR](clr-common-language-runtime-compilation.md)) può essere utilizzato anche come file con estensione netmodule.  i file con estensione obj contengono metadati e simboli nativi.  I file con estensione netmodule contengono solo metadati.

È possibile passare un file MSIL. obj a qualsiasi altro compilatore di Visual Studio tramite l'opzione del compilatore/addmodule (ma tenere presente che il file con estensione obj diventa parte dell'assembly risultante e deve essere fornito con l'assembly).  Ad esempio, Visual C# e Visual Basic hanno l'opzione del compilatore/addmodule.

> [!NOTE]
> Nella maggior parte dei casi, sarà necessario passare al linker il file con estensione obj dalla compilazione che ha creato il modulo .NET.  Il passaggio di un file di modulo MSIL con estensione netmodule o dll al linker può causare l'errore LNK1107.

I file con estensione obj, con i file con estensione h associati, a cui si fa riferimento mediante #include nell'origine, consentono alle applicazioni C++ di utilizzare i tipi nativi nel modulo, mentre in un file con estensione netmodule, solo i tipi gestiti possono essere utilizzati da un'applicazione C++.  Se si tenta di passare un file con estensione obj a #using, le informazioni sui tipi nativi non saranno disponibili. #include il file. h del file con estensione obj.

Altri compilatori di Visual Studio possono utilizzare solo tipi gestiti da un modulo.

Usare il comando seguente per determinare se è necessario usare un file con estensione netmodule o obj come input del modulo per il linker di MSVC:

- Se si compila con un compilatore di Visual Studio diverso da Visual C++, viene generato un file con estensione netmodule che viene utilizzato come input del linker.

- Se si usa il compilatore MSVC per produrre i moduli e se i moduli verranno usati per creare un elemento diverso da una libreria, usare i file con estensione obj prodotti dal compilatore come input del modulo per il linker; Non usare il file con estensione netmodule come input.

- Se i moduli verranno usati per compilare una libreria nativa (non gestita), usare i file con estensione obj come input del modulo per il linker e generare un file di libreria con estensione LIB.

- Se i moduli verranno utilizzati per compilare una libreria gestita e ciascun input di modulo del linker sarà verificabile (ovvero creato con /clr:safe), utilizzare come input di modulo del linker i file con estensione obj e generare un file di libreria con estensione dll (assembly) o netmodule (modulo).

- Se i moduli verranno usati per compilare una libreria gestita e se uno o più moduli vengono inseriti nel linker solo con/CLR, usare i file con estensione obj come input del modulo per il linker e generare un file con estensione dll (assembly).  Se si desidera esporre i tipi gestiti dalla libreria e si desidera che le applicazioni C++ utilizzino i tipi nativi nella libreria, la libreria sarà costituita dai file obj per i moduli del componente delle librerie (sarà anche necessario spedire i file con estensione h per ogni modulo, in modo che sia possibile farvi riferimento con #include dal codice sorgente).

## <a name="see-also"></a>Vedi anche

[File con estensione netmodule come input del linker](netmodule-files-as-linker-input.md)
