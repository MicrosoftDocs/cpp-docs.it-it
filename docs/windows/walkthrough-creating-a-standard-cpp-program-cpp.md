---
title: 'Procedura dettagliata: Creazione di un programma Standard di C++ (C++) | Documenti Microsoft'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vcfirstapp
- vccreatefirst
dev_langs:
- C++
helpviewer_keywords:
- command-line applications [C++], standard
- standard applications [C++]
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ac1fac3c7f96c9f8d718efa54810f4155b1ddac5
ms.sourcegitcommit: c0ffdff538eb961f786809eb547b35846190ee48
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/05/2018
ms.locfileid: "34800086"
---
# <a name="walkthrough-creating-a-standard-c-program-c"></a>Procedura dettagliata: Creazione di un programma Standard di C++ (C++)
È possibile utilizzare Visual C++ nell'ambiente di sviluppo integrato (IDE) di Visual Studio per creare programmi C++ Standard. Seguendo i passaggi descritti in questa procedura dettagliata, è possibile creare un progetto, aggiungere un nuovo file al progetto, modificare il file per aggiungere il codice C++ e quindi compilare ed eseguire il programma usando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 È possibile digitare il proprio programma C++ o usare uno dei programmi di esempio. Il programma di esempio in questa procedura dettagliata è un'applicazione console. Questa applicazione usa il `set` contenitore nella libreria Standard C++.  
  
 Visual C++ è conforme allo Standard C++ 2003, con le seguenti eccezioni principali: ricerca del nome in due fasi, specifiche di eccezioni ed esportazione. Inoltre, Visual C++ supporta diverse funzionalità C + + 0x, ad esempio, le espressioni lambda, auto, static_assert, riferimenti rvalue e modelli extern.  
  
> [!NOTE]
>  Se la conformità allo standard è necessario, utilizzare il **/Za** disabilitare le estensioni Microsoft allo standard dell'opzione del compilatore. Per ulteriori informazioni, vedere [/Za, /Ze (Disabilita estensioni di linguaggio)](../build/reference/za-ze-disable-language-extensions.md).  
  
## <a name="prerequisites"></a>Prerequisiti  
 Per completare questa procedura dettagliata è necessario comprendere le nozioni di base del linguaggio C++.  
  
### <a name="to-create-a-project-and-add-a-source-file"></a>Per creare un progetto e aggiungere un file di origine  
  
1.  Creare un progetto scegliendo **New** sul **File** menu e quindi fare clic su **progetto**.  
  
2.  Nel **Visual C++** riquadro tipi di progetto, fare clic su **Desktop di Windows**, quindi fare clic su **applicazione Console di Windows**.  
  
3.  Digitare un nome per il progetto.  
  
     Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del progetto, ma è possibile digitare un nome diverso. È anche possibile digitare un percorso diverso per il progetto.  
  
     Fare clic su **OK** per creare il progetto.  
  
4.  Se **Esplora** non è visualizzato, scegliere il **visualizzazione** menu, fare clic su **Esplora**.  
  
5.  Aggiungere un nuovo file di origine per il progetto, come indicato di seguito.  
  
    1.  In **Esplora**, fare doppio clic su di **i file di origine** cartella, scegliere **Aggiungi**e quindi fare clic su **nuovo elemento**.  
  
    2.  Nel **codice** nodo, fare clic su **File C++ (. cpp)**, digitare un nome per il file e quindi fare clic su **Aggiungi**.  
  
     Il file con estensione cpp visualizzato nella cartella file di origine in **Esplora**, e il file viene aperto nell'editor di Visual Studio.  
  
6.  Nel file nell'editor, un programma C++ valido che utilizza la libreria Standard C++, digitare o copiare uno dei programmi di esempio e incollarlo nel file.  
  
7.  Salvare il file.  
  
8. Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Il **Output** finestra vengono visualizzate informazioni sullo stato di avanzamento compilazione, ad esempio, il percorso del log di compilazione e un messaggio che indica lo stato della compilazione.  
  
9. Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.  
  
     Se si utilizza il programma di esempio, una finestra di comando viene visualizzata e se sono presenti determinati Integer nel set.  
  
## <a name="next-steps"></a>Passaggi successivi  
 **Precedente:** [Console applicazioni in Visual C++](../windows/console-applications-in-visual-cpp.md). **Passaggio successivo:**[procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
