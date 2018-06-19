---
title: Scelta del formato di. netmodule file di Input | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: 4653d1bd-300f-4083-86f5-d1a06f44e61c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 62575d3e816bdc10587e7a4c9cebcea735329ec1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32372721"
---
# <a name="choosing-the-format-of-netmodule-input-files"></a>Scelta del formato dei file di input con estensione netmodule
Un file con estensione obj MSIL (compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md)) può essere utilizzato anche come file con estensione netmodule.  i file obj contengono i metadati e i simboli nativi.  I file con estensione netmodule contengono solo metadati.  
  
 È possibile passare un file con estensione obj MSIL a qualsiasi altro compilatore di Visual Studio tramite l'opzione del compilatore /addmodule, ma tenere presente che il file con estensione obj diventa parte dell'assembly risultante e deve essere distribuito con l'assembly.  Ad esempio, Visual c# e Visual Basic hanno l'opzione del compilatore /addmodule.  
  
> [!NOTE]
>  Nella maggior parte dei casi, sarà necessario passare al linker il file con estensione obj dalla compilazione che ha creato il modulo .NET.  Il passaggio di un file di modulo MSIL con estensione netmodule o dll al linker può causare l'errore LNK1107.  
  
 I file con estensione obj, con i file con estensione h associati, a cui si fa riferimento mediante #include nell'origine, consentono alle applicazioni C++ di utilizzare i tipi nativi nel modulo, mentre in un file con estensione netmodule, solo i tipi gestiti possono essere utilizzati da un'applicazione C++.  Se si tenta di passare un file con estensione obj #using, informazioni sui tipi nativi non sarà disponibile. #includere file h del file con estensione obj.  
  
 Altri compilatori di Visual Studio possono utilizzare solo tipi gestiti da un modulo.  
  
 Utilizzare il seguente per determinare se è necessario utilizzare un file con estensione netmodule oppure obj come modulo di input per il linker di Visual C++:  
  
-   Se si compila con un compilatore di Visual Studio diverso da Visual C++, viene generato un file con estensione netmodule che viene utilizzato come input del linker.  
  
-   Se si utilizza il compilatore Visual C++ per creare moduli che verranno utilizzati per compilare un oggetto diverso da una libreria, utilizzare come input di modulo del linker i file con estensione obj creati dal compilatore; non usare come input il file con estensione netmodule.  
  
-   Se i moduli verranno utilizzati per compilare una libreria nativa (non gestita), utilizzare i file obj come input di modulo per il linker e generare un file di libreria lib.  
  
-   Se i moduli verranno utilizzati per compilare una libreria gestita e ciascun input di modulo del linker sarà verificabile (ovvero creato con /clr:safe), utilizzare come input di modulo del linker i file con estensione obj e generare un file di libreria con estensione dll (assembly) o netmodule (modulo).  
  
-   Se i moduli verranno utilizzati per compilare una libreria gestita e verrà creato uno o più input di moduli per il linker con /clr, utilizzare i file obj come input di modulo per il linker e generare un file DLL (assembly).  Se si desidera esporre tipi gestiti dalla libreria e si desidera anche applicazioni C++ per utilizzare i tipi nativi nella libreria, la libreria sarà costituito da file obj per i moduli del componente librerie (è inoltre necessario spedire i file con estensione h per ogni modulo pertanto è possibile farvi riferimento con #include dal codice sorgente).  
  
## <a name="see-also"></a>Vedere anche  
 [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md)