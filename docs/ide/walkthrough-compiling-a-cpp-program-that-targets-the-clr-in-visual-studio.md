---
title: Compilazione di un programma C++ destinato a CLR | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- command-line applications [C++], managed code
- compiling programs [C++]
- Visual C++, managed code
- managed code [C++]
ms.assetid: 339f89df-a5d2-4040-831a-ddbe25b5dce4
caps.latest.revision: "40"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 152d26874af277d742b106db29a4d9dd9c254c9e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="walkthrough-compiling-a-c-program-that-targets-the-clr-in-visual-studio"></a>Procedura dettagliata: compilazione di un programma C++ destinato a CLR in Visual Studio
È possibile creare programmi Visual C++ che utilizzano classi .NET e compilarle con l'ambiente di sviluppo di Visual Studio.  
  
 Per questa procedura è possibile digitare il proprio programma Visual C++ o usare uno dei programmi di esempio. Il programma di esempio utilizzati in questa procedura crea un file di testo denominato textfile. txt e lo salva nella directory del progetto.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Questi argomenti si supponga di aver compreso le nozioni di base del linguaggio C++.  
  
### <a name="to-create-a-new-project-in-visual-studio-and-add-a-new-source-file"></a>Per creare un nuovo progetto in Visual Studio e aggiungere un nuovo file di origine  
  
1.  Creare un nuovo progetto. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  I tipi di progetto Visual C++, fare clic su **CLR**, quindi fare clic su **progetto CLR vuoto**.  
  
3.  Digitare un nome di progetto.  
  
     Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del nuovo progetto, ma è possibile immettere un nome diverso. Se si desidera, è possibile immettere un percorso diverso per il progetto.  
  
     Fare clic su **OK** per creare il nuovo progetto.  
  
4.  Se Esplora soluzioni non è visibile, fare clic su **Esplora** sul **vista** menu.  
  
5.  Aggiungere un nuovo file di origine al progetto:  
  
    -   Fare doppio clic su di **i file di origine** cartella in Esplora soluzioni, scegliere **Aggiungi** e fare clic su **nuovo elemento**.  
  
    -   Fare clic su **File C++ (. cpp)** e digitare un nome di file e quindi fare clic su **Aggiungi**.  
  
     Il **. cpp** file viene visualizzato nel **i file di origine** cartella in Esplora soluzioni e una finestra a schede viene visualizzata in cui si digita il codice desiderato nel file.  
  
6.  Fare clic su scheda appena creata in Visual Studio e digitare un programma Visual C++ valido, oppure copiare e incollare uno dei programmi di esempio.  
  
     Ad esempio, è possibile utilizzare il [come: scrivere un File di testo (C + + CLI)](../dotnet/how-to-write-a-text-file-cpp-cli.md) programma di esempio (nel **gestione File e i/o** nodo della Guida di programmazione).  
  
     Se si utilizza il programma di esempio, si noti che viene utilizzata la `gcnew` (parola chiave) anziché `new` quando si crea un oggetto .NET e che `gcnew` restituisce un handle (`^`) anziché un puntatore (`*`):  
  
     `StreamWriter^ sw = gcnew StreamWriter(fileName);`  
  
     Per ulteriori informazioni sulla nuova sintassi di Visual C++, vedere [estensioni componenti per le piattaforme Runtime](../windows/component-extensions-for-runtime-platforms.md).  
  
7.  Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Il **Output** finestra vengono visualizzate informazioni sullo stato di avanzamento di compilazione, ad esempio il percorso del log di compilazione e un messaggio che indica lo stato della compilazione.  
  
     Se si apportano modifiche e si esegue il programma senza eseguire una compilazione, una finestra di dialogo potrebbe indicare che il progetto è obsoleto. Selezionare la casella di controllo in questa finestra di dialogo prima di scegliere **OK** se desideri che Visual Studio per utilizzare sempre le versioni correnti dei file anziché la richiesta ogni volta che compila l'applicazione.  
  
8.  Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.  
  
9. Se è stato utilizzato il programma di esempio, quando si esegue il programma viene visualizzata una finestra di comando che indica che il file di testo è stato creato. Premere un tasto qualsiasi per chiudere la finestra di comando.  
  
     Il **textfile. txt** file di testo è ora disponibile nella directory del progetto. È possibile aprire questo file utilizzando blocco note.  
  
    > [!NOTE]
    >  Scelta di CLR vuoto modello di progetto impostata automaticamente la **/clr** l'opzione del compilatore. Per verificare questa condizione, fare clic sul progetto in **Esplora** e facendo clic su **proprietà**e quindi controllare il **supporto Common Language Runtime** opzione il  **Generale** nodo di **le proprietà di configurazione**.  
  
## <a name="whats-next"></a>Argomenti successivi  
 **Precedente:** [procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md) &#124; **Avanti:**[procedura dettagliata: compilare un programma C nella riga di comando](../build/walkthrough-compile-a-c-program-on-the-command-line.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)