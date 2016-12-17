---
title: "Procedura dettagliata: Creazione e uso di una libreria statica (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "statiche, librerie [C++]"
  - "librerie statiche [C++]"
ms.assetid: 3cc36411-7d66-4240-851e-dacb9a8fd6ac
caps.latest.revision: 38
caps.handback.revision: 38
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: Creazione e uso di una libreria statica (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa procedura dettagliata illustra come creare una libreria statica \(un file con estensione lib\) da usare con le app C\+\+. L'uso di una libreria statica è consigliato per riusare il codice. Anziché implementare nuovamente le stesse routine in tutte le applicazioni che richiedono la funzionalità, è possibile scriverle una sola volta in una libreria statica e quindi farvi riferimento dalle applicazioni. Il codice collegato a una libreria statica diventa parte dell'applicazione. Non è necessario installare un altro file per usare il codice.  
  
 In questa procedura dettagliata vengono illustrate le seguenti attività:  
  
-   [Creazione di un progetto di libreria statica](#BKMK_CreateLibProject)  
  
-   [Aggiunta di una classe alla libreria statica](#BKMK_AddClassToLib)  
  
-   [Creazione di un'applicazione console che fa riferimento alla libreria statica](#BKMK_CreateAppToRefTheLib)  
  
-   [Uso della funzionalità della libreria statica nell'applicazione](#BKMK_UseLibInApp)  
  
-   [Esecuzione dell'app](#BKMK_RunApp)  
  
## Prerequisiti  
 Conoscenza delle nozioni di base del linguaggio C\+\+.  
  
##  <a name="BKMK_CreateLibProject"></a> Creazione di un progetto di libreria statica  
  
#### Per creare un progetto di libreria statica  
  
1.  Nella barra dei menu scegliere **File**, **Nuovo**, **Progetto**.  
  
2.  Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** espandere **Installato**, **Modelli**, **Visual C\+\+**, quindi selezionare **Win32**  
  
3.  Nel riquadro centrale, selezionare **Progetto console Win32**.  
  
4.  Specificare il nome del progetto, ad esempio **MathFuncsLib**, nella casella **Nome**. Specificare un nome per la soluzione, ad esempio **StaticLibrary**, nella casella **Nome soluzione**. Fare clic sul pulsante **OK**.  
  
5.  Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione Win32**, scegliere il pulsante **Avanti**.  
  
6.  Nella pagina **Impostazioni applicazione**, in **Tipo di applicazione**, selezionare **Libreria statica**.  
  
7.  Nella pagina **Impostazioni applicazione**, in **Opzioni aggiuntive**, deselezionare la casella di controllo **Intestazione precompilata**.  
  
8.  Scegliere il pulsante **Fine** per creare il progetto.  
  
##  <a name="BKMK_AddClassToLib"></a> Aggiunta di una classe alla libreria statica  
  
#### Per aggiungere una classe alla libreria statica  
  
1.  Per creare un file di intestazione per una nuova classe, aprire il menu di scelta rapida per il progetto **MathFuncsLib** in **Esplora soluzioni** e quindi scegliere **Aggiungi**, **Nuovo elemento**. Nella finestra di dialogo **Aggiungi nuovo elemento** nel riquadro sinistro in **Visual C\+\+**, selezionare **Codice**. Nel riquadro centrale selezionare **File di intestazione \(.h\)**. Specificare un nome per il file d'intestazione, ad esempio **MathFuncsLib.h** e quindi scegliere il pulsante **Aggiungi**. Viene visualizzato un file di intestazione vuoto.  
  
2.  Aggiungere una classe denominata **MyMathFuncs** per eseguire operazioni matematiche comuni quali addizione, sottrazione, moltiplicazione e divisione. Il codice dovrebbe essere analogo al seguente:  
  
     [!code-cpp[NVC_Walkthrough_Create_Static_Lib#100](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_1.h)]  
  
3.  Per creare un file di origine per la nuova classe, scegliere **Esplora soluzioni** dal menu di scelta rapida del progetto **MathFuncsLib** e quindi scegliere **Aggiungi**, **Nuovo elemento**. Nella finestra di dialogo **Aggiungi nuovo elemento** nel riquadro sinistro in **Visual C\+\+**, selezionare **Codice**. Nel riquadro centrale selezionare **File di C\+\+ \(.cpp\)**. Specificare un nome per il file di origine, ad esempio **MathFuncsLib.cpp** e quindi scegliere il pulsante **Aggiungi**. Viene visualizzato un file di origine vuoto.  
  
4.  Usare questo file di origine per implementare la funzionalità per **MyMathFuncs**. Il codice dovrebbe essere analogo al seguente:  
  
     [!code-cpp[NVC_Walkthrough_Create_Static_Lib#110](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_2.cpp)]  
  
5.  Compilare la libreria statica selezionando **Compila**, **Compila soluzione** sulla barra dei menu. Verrà creata una libreria statica che può essere usata da altri programmi.  
  
    > [!NOTE]
    >  Quando si usa la riga di comando in Visual Studio per la compilazione, è necessario compilare il programma in due passaggi. Eseguire prima **cl \/c \/EHsc MathFuncsLib.cpp** per compilare il codice e creare un file oggetto denominato **MathFuncsLib.obj**. Il comando **cl** richiama il compilatore, Cl.exe, e l'opzione **\/c** specifica la compilazione senza collegamento. Per altre informazioni, vedere [\/c \(Compila senza collegamenti\)](../build/reference/c-compile-without-linking.md). Successivamente, eseguire **lib MathFuncsLib.obj** per collegare il codice e creare la libreria statica **MathFuncsLib.lib**. Il comando **lib** richiama Gestione librerie, Lib.exe. Per altre informazioni, vedere [Riferimenti a LIB](../build/reference/lib-reference.md).  
  
##  <a name="BKMK_CreateAppToRefTheLib"></a> Creazione di un'applicazione console che fa riferimento alla libreria statica  
  
#### Per creare un'applicazione console in C\+\+ che faccia riferimento alla libreria statica  
  
1.  Nella barra dei menu scegliere **File**, **Nuovo**, **Progetto**.  
  
2.  Nel riquadro sinistro in **Visual C\+\+** selezionare **Win32**.  
  
3.  Nel riquadro centrale, selezionare **Progetto console Win32**.  
  
4.  Specificare il nome del progetto, ad esempio **MyExecRefsLib**, nella casella **Nome**. Nell'elenco a discesa accanto a **Soluzione** selezionare **Aggiungi a soluzione**. Verrà aggiunto un nuovo progetto alla soluzione che contiene le librerie statiche. Fare clic sul pulsante **OK**.  
  
5.  Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione Win32**, scegliere il pulsante **Avanti**.  
  
6.  Nella pagina **Impostazioni applicazione** in **Tipo di applicazione** selezionare **Applicazione console**.  
  
7.  Nella pagina **Impostazioni applicazione**, in **Opzioni aggiuntive**, deselezionare la casella di controllo **Intestazione precompilata**.  
  
8.  Scegliere il pulsante **Fine** per creare il progetto.  
  
##  <a name="BKMK_UseLibInApp"></a> Uso della funzionalità della libreria statica nell'applicazione  
  
#### Per usare questa funzionalità della libreria statica nell'applicazione  
  
1.  Dopo aver creato un'applicazione console, verrà creato un programma vuoto. Il nome del file di origine è uguale al nome scelto in precedenza. In questo esempio il file è denominato **MyExecRefsLib.cpp**.  
  
2.  Per poter usare le routine matematiche della libreria statica, è necessario fare riferimento a esse. A tal fine, aprire il menu di scelta rapida del progetto **MyExecRefsLib** in **Esplora soluzioni** e selezionare **Riferimenti**. Nella finestra di dialogo **Pagine delle proprietà** di **MyExecRefsLib** espandere il nodo **Proprietà comuni**, selezionare **Framework e riferimenti** e quindi scegliere il pulsante **Aggiungi nuovo riferimento**. Per altre informazioni sulla finestra di dialogo **Riferimenti**, vedere [Aggiunta di riferimenti](../ide/adding-references-in-visual-cpp-projects.md).  
  
3.  La finestra di dialogo **Aggiungi riferimento** contiene l'elenco di tutte le librerie a cui è possibile fare riferimento. Nella scheda **Progetti** sono elencati tutti i progetti presenti nella soluzione corrente e le eventuali librerie che essi contengono. Nella scheda **Progetti** selezionare la casella di controllo **MathFuncsLib** e quindi scegliere il pulsante **OK**.  
  
4.  Per fare riferimento al file di intestazione **MathFuncsLib.h**, è necessario modificare il percorso delle directory incluse. Nella finestra di dialogo **Pagine delle proprietà** per **MyExecRefsLib** espandere il nodo **Proprietà di configurazione**, il nodo **C\/C\+\+** e quindi selezionare **Generale**. Accanto a **Directory di inclusione aggiuntive** specificare o cercare il percorso della directory **MathFuncsLib**.  
  
     Per accedere al percorso della directory, aprire il menu a discesa dei valori della proprietà, quindi selezionare **Modifica**. Nella casella di testo della finestra di dialogo **Directory di inclusione aggiuntive** selezionare una riga vuota, quindi scegliere il pulsante con i puntini di sospensione \(**…**\) alla fine della riga. Nella finestra di dialogo **Seleziona directory** selezionare la directory contenente **MathFuncsLib** e quindi scegliere il pulsante **Selezione cartella** per salvare la selezione e chiudere la finestra di dialogo. Nella finestra di dialogo **Directory di inclusione aggiuntive** scegliere il pulsante **OK**, quindi nella finestra di dialogo **Pagine delle proprietà**, scegliere il pulsante **OK** per salvare le modifiche apportate al progetto.  
  
5.  È ora possibile usare la classe **MyMathFuncs** nell'applicazione. A tal fine, sostituire il contenuto di **MyExecRefsLib.cpp** con il seguente codice:  
  
     [!code-cpp[NVC_Walkthrough_Create_Static_Lib#120](../windows/codesnippet/CPP/walkthrough-creating-and-using-a-static-library-cpp_3.cpp)]  
  
6.  Compilare l'eseguibile scegliendo **Compila**, **Compila soluzione** sulla barra dei menu.  
  
##  <a name="BKMK_RunApp"></a> Esecuzione dell'app  
  
#### Per eseguire l'app  
  
1.  Assicurarsi che **MyExecRefsLib** sia selezionato come progetto predefinito aprendo il menu di scelta rapida di **MyExecRefsLib** in **Esplora soluzioni** e quindi selezionando **Imposta come progetto di avvio**.  
  
2.  Per eseguire il progetto, sulla barra dei menu selezionare **Debug**, **Avvia senza eseguire debug**. Il codice sarà analogo al seguente:  
  
    ```Output  
    a + b = 106.4 a - b = -91.6 a * b = 732.6 a / b = 0.0747475  
    ```  
  
## Vedere anche  
 [Presentazione guidata di Visual C\+\+](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [Procedura dettagliata: creazione e utilizzo di una libreria a collegamento dinamico \(C\+\+\)](../build/walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)   
 [Applicazioni desktop di Windows \(Visual C\+\+\)](../windows/desktop-applications-visual-cpp.md)