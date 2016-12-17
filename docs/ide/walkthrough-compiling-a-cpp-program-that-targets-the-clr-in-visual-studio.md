---
title: "Procedura dettagliata: compilazione di un programma C++ destinato a CLR in Visual Studio | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni della riga di comando [C++], codice gestito"
  - "compilazione di programmi [C++]"
  - "codice gestito [C++]"
  - "Visual C++, codice gestito"
ms.assetid: 339f89df-a5d2-4040-831a-ddbe25b5dce4
caps.latest.revision: 40
caps.handback.revision: 40
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: compilazione di un programma C++ destinato a CLR in Visual Studio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare programmi Visual C\+\+ che utilizzano classi .NET e compilarli nell'ambiente di sviluppo di Visual Studio.  
  
 Per questa procedura è possibile digitare un programma Visual C\+\+ personalizzato o utilizzare uno di quelli di esempio.  Con l'esempio di programma utilizzato in questa procedura viene creato un file di testo denominato textfile.txt che viene salvato nella directory del progetto.  
  
## Prerequisiti  
 In questi argomenti si presuppone la conoscenza delle nozioni di base del linguaggio C\+\+.  
  
### Per creare un nuovo progetto in Visual Studio e aggiungere un nuovo file di origine  
  
1.  Creare un nuovo progetto.  Scegliere **Nuovo** dal menu **File** e quindi **Progetto...**.  
  
2.  Dai tipi di progetto Visual C\+\+, scegliere **CLR** e quindi **Progetto CLR vuoto**.  
  
3.  Digitare un nome di progetto.  
  
     Per impostazione predefinita, la soluzione che contiene il progetto ha lo stesso nome del nuovo progetto, benché sia possibile immetterne uno diverso.  Se lo si desidera, è possibile immettere un percorso diverso per il progetto.  
  
     Scegliere **OK** per creare il nuovo progetto.  
  
4.  Se Esplora soluzioni non è visibile, scegliere **Esplora soluzioni** dal menu **Visualizza**.  
  
5.  Aggiungere un nuovo file di origine al progetto:  
  
    -   Fare clic con il pulsante destro del mouse sulla cartella **File di origine** in Esplora soluzioni, scegliere **Aggiungi** e quindi **Nuovo elemento…**.  
  
    -   Fare clic su **File di C\+\+ \(.cpp\)** e immettere un nome di file, quindi scegliere **Aggiungi**.  
  
     Il file **.cpp** verrà visualizzato nella cartella **File di origine** in Esplora soluzioni e verrà visualizzata una finestra a schede nella quale digitare il codice che si desidera immettere in tale file.  
  
6.  Fare clic sulla scheda appena creata in Visual Studio e digitare un programma Visual C\+\+ valido oppure copiare e incollare un esempio di programma.  
  
     È possibile, ad esempio, utilizzare l'esempio di programma [Procedura: scrivere un file di testo](../dotnet/how-to-write-a-text-file-cpp-cli.md), accessibile dal nodo **Gestione di file e I\/O** della Guida di programmazione.  
  
     Se si utilizza un esempio di programma, si noti che viene utilizzata la parola chiave `gcnew` ``  anziché `new` per la creazione di un oggetto .NET e che `gcnew` restituisce un handle \(`^`\) anziché un puntatore \(`*`\):  
  
     `StreamWriter^ sw = gcnew StreamWriter(fileName);`  
  
     Per ulteriori informazioni sulla nuova sintassi di Visual C\+\+, vedere [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md).  
  
7.  Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Nella finestra di output vengono visualizzate informazioni relative allo stato della compilazione, ad esempio il percorso del log di compilazione e un messaggio indicante la riuscita dell'operazione.  
  
     Se si apportano modifiche e si esegue il programma senza eseguire una compilazione, è possibile che venga visualizzata una finestra di dialogo che segnala che il progetto non è aggiornato.  Selezionare la casella di controllo in questa finestra di dialogo prima di scegliere **OK** affinché in Visual Studio vengano sempre utilizzate le versioni correnti dei file senza visualizzare messaggi di richiesta durante la compilazione.  
  
8.  Scegliere **Avvia senza eseguire debug** dal menu **Debug**.  
  
9. Se è stato utilizzato l'esempio di programma, durante l'esecuzione verrà visualizzata una finestra di comando che indica che il file di testo è stato creato.  Premere un tasto qualsiasi per chiudere la finestra di comando.  
  
     Il file di testo **textfile.txt** creato si trova ora nella directory del progetto e  può essere aperto in Blocco note.  
  
    > [!NOTE]
    >  La scelta del modello di progetto CLR vuoto imposta automaticamente l'opzione del compilatore **\/clr**.  Per verificare questa impostazione, fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e scegliere **Proprietà**, quindi selezionare **Supporto di Common Language Runtime** nel nodo **Generale** di **Proprietà di configurazione**.  
  
## Argomenti successivi  
 **Precedente:** [Procedura dettagliata: compilazione di un programma C\+\+ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md) &#124; **Successivo:** [Procedura dettagliata: Compilazione di un programma in C dalla riga di comando](../Topic/Walkthrough:%20Compiling%20a%20C%20Program%20on%20the%20Command%20Line.md)  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C\/C\+\+](../build/building-c-cpp-programs.md)