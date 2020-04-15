---
title: Scelta del formato dei file di input con estensione netmodule
ms.date: 11/04/2016
ms.assetid: 4653d1bd-300f-4083-86f5-d1a06f44e61c
ms.openlocfilehash: b4d4b80e4b9195d184b9d97cea67bbaaa3d7d843
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320566"
---
# <a name="choosing-the-format-of-netmodule-input-files"></a>Scelta del formato dei file di input con estensione netmodule

Un file obj MSIL (compilato con [/clr](clr-common-language-runtime-compilation.md)) può essere utilizzato anche come file con estensione netmodule.  I file obj contengono metadati e simboli nativi.  I file con estensione netmodule contengono solo metadati.

È possibile passare un file obj MSIL a qualsiasi altro compilatore di Visual Studio tramite l'opzione del compilatore /addmodule (ma tenere presente che il file obj diventa parte dell'assembly risultante e deve essere fornito con l'assembly).  Ad esempio, in Visual C è e in Visual Basic l'opzione del compilatore /addmodule.

> [!NOTE]
> Nella maggior parte dei casi, sarà necessario passare al linker il file con estensione obj dalla compilazione che ha creato il modulo .NET.  Il passaggio di un file di modulo MSIL con estensione netmodule o dll al linker può causare l'errore LNK1107.

I file con estensione obj, con i file con estensione h associati, a cui si fa riferimento mediante #include nell'origine, consentono alle applicazioni C++ di utilizzare i tipi nativi nel modulo, mentre in un file con estensione netmodule, solo i tipi gestiti possono essere utilizzati da un'applicazione C++.  Se si tenta di passare un file obj a #using, le informazioni sui tipi nativi non saranno disponibili; #include invece il file h del file obj.

Altri compilatori di Visual Studio possono utilizzare solo tipi gestiti da un modulo.

Utilizzare quanto segue per determinare se è necessario utilizzare un file con estensione netmodule o obj come input del modulo per il linker MSVC:

- Se si compila con un compilatore di Visual Studio diverso da Visual C++, viene generato un file con estensione netmodule che viene utilizzato come input del linker.

- Se si utilizza il compilatore MSVC per produrre moduli e se i moduli verranno utilizzati per compilare un elemento diverso da una libreria, utilizzare i file obj prodotti dal compilatore come input del modulo per il linker; non utilizzare il file .netmodule come input.

- Se i moduli verranno utilizzati per compilare una libreria nativa (non gestita), utilizzare i file obj come input del modulo per il linker e generare un file di libreria lib.

- Se i moduli verranno utilizzati per compilare una libreria gestita e ciascun input di modulo del linker sarà verificabile (ovvero creato con /clr:safe), utilizzare come input di modulo del linker i file con estensione obj e generare un file di libreria con estensione dll (assembly) o netmodule (modulo).

- Se i moduli verranno utilizzati per compilare una libreria gestita e se uno o più moduli di input per il linker verrà prodotto con solo /clr, utilizzare i file obj come input del modulo per il linker e generare una DLL (assembly).  Se si desidera esporre i tipi gestiti dalla libreria e se si desidera che anche le applicazioni C, utilizzino i tipi nativi nella libreria, la libreria sarà costituita dai file obj per i moduli dei componenti delle librerie (è anche necessario spedire i file con estensione h per ogni modulo, in modo che sia possibile farvi riferimento con #include dal codice sorgente).

## <a name="see-also"></a>Vedere anche

[File con estensione netmodule come input del linker](netmodule-files-as-linker-input.md)
