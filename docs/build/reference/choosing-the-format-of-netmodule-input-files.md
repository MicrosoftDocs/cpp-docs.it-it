---
title: Scelta del formato dei file di input con estensione netmodule
ms.date: 11/04/2016
ms.assetid: 4653d1bd-300f-4083-86f5-d1a06f44e61c
ms.openlocfilehash: 92f7aafa102a8591192f4394aee62afe86bb3549
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50444317"
---
# <a name="choosing-the-format-of-netmodule-input-files"></a>Scelta del formato dei file di input con estensione netmodule

Un file di codice MSIL con estensione obj (compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md)) può essere utilizzato anche come file con estensione netmodule.  file con estensione obj contengono i metadati e i simboli nativi.  I file con estensione netmodule contengono solo metadati.

È possibile passare un file di codice MSIL con estensione obj per qualsiasi altro compilatore di Visual Studio tramite l'opzione del compilatore /addmodule (ma tenere presente che il file con estensione obj diventa parte dell'assembly risultante e deve essere spedito all'assembly).  Ad esempio, Visual c# e Visual Basic hanno l'opzione del compilatore /addmodule.

> [!NOTE]
>  Nella maggior parte dei casi, sarà necessario passare al linker il file con estensione obj dalla compilazione che ha creato il modulo .NET.  Il passaggio di un file di modulo MSIL con estensione netmodule o dll al linker può causare l'errore LNK1107.

I file con estensione obj, con i file con estensione h associati, a cui si fa riferimento mediante #include nell'origine, consentono alle applicazioni C++ di utilizzare i tipi nativi nel modulo, mentre in un file con estensione netmodule, solo i tipi gestiti possono essere utilizzati da un'applicazione C++.  Se si prova a passare un file con estensione obj per #using, le informazioni sui tipi nativi non saranno disponibili. #includere file con estensione h del file con estensione obj.

Altri compilatori di Visual Studio possono usare solo tipi gestiti da un modulo.

Utilizzare il seguente per determinare se è necessario utilizzare un file con estensione netmodule oppure obj come modulo di input per il linker di Visual C++:

- Se si compila con un compilatore di Visual Studio diverso da Visual C++, viene generato un file con estensione netmodule che viene utilizzato come input del linker.

- Se si utilizza il compilatore Visual C++ per creare moduli che verranno utilizzati per compilare un oggetto diverso da una libreria, utilizzare come input di modulo del linker i file con estensione obj creati dal compilatore; non usare come input il file con estensione netmodule.

- Se i moduli verranno utilizzati per compilare una libreria nativa (non gestito), usare i file obj come input del modulo al linker e generare un file di libreria con estensione LIB.

- Se i moduli verranno utilizzati per compilare una libreria gestita e ciascun input di modulo del linker sarà verificabile (ovvero creato con /clr:safe), utilizzare come input di modulo del linker i file con estensione obj e generare un file di libreria con estensione dll (assembly) o netmodule (modulo).

- Se i moduli verranno utilizzati per compilare una libreria gestita e, se uno o più input di moduli al linker verrà prodotto con /clr, utilizzare i file con estensione obj come input del modulo al linker e generare un file DLL (assembly).  Se si desidera esporre tipi gestiti dalla libreria e se si desidera anche le applicazioni C++ per utilizzare i tipi nativi nella libreria, la libreria sarà costituito da file con estensione obj per i moduli di componente librerie (è anche possibile inviare i file con estensione h per ogni modulo in modo che sia possibile farvi con #include dal codice sorgente).

## <a name="see-also"></a>Vedere anche

[File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)