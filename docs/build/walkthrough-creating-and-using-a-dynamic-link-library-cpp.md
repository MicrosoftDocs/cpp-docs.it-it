---
title: "Procedura dettagliata: creazione e utilizzo di una libreria a collegamento dinamico (C++) | Microsoft Docs"
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
  - "DLL [C++], procedure dettagliate"
  - "librerie [C++], DLL"
ms.assetid: 3ae94848-44e7-4955-bbad-7d40f493e941
caps.latest.revision: 36
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: creazione e utilizzo di una libreria a collegamento dinamico (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura dettagliata viene illustrato come creare una DLL \(Dynamic\-Link Library\) da usare con un'app scritta in C\+\+.  Una libreria è un ottimo modo per riutilizzare il codice.  Anziché implementare di nuovo le stesse routine in tutte le applicazioni create, è possibile scriverle una sola volta in una libreria statica e quindi farvi riferimento dalle applicazioni che richiedono la funzionalità.  L'inserimento del codice nella DLL permette di risparmiare spazio in ogni app che vi fa riferimento, ed è possibile aggiornare la DLL senza dover ricompilare tutte le app.  Per altre informazioni sulle DLL, vedere [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md).  
  
 In questa procedura dettagliata vengono illustrate le seguenti attività:  
  
-   Creazione di un progetto DLL.  
  
-   Aggiunta di una classe alla DLL.  
  
-   Creazione di un'app console che usa il collegamento dinamico in fase di caricamento per fare riferimento alla DLL.  
  
-   Uso della funzionalità dalla classe nell'app.  
  
-   Esecuzione dell'app.  
  
 In questa procedura dettagliata verrà creata una DLL che può essere chiamata solo da app che usano convenzioni di chiamata C\+\+.  Per informazioni su come creare DLL da usare con altri linguaggi, vedere [Chiamata di funzioni DLL da applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md).  
  
## Prerequisiti  
 In questo argomento si presuppone la conoscenza delle nozioni di base del linguaggio C\+\+.  
  
### Per creare un progetto DLL  
  
1.  Nella barra dei menu scegliere **File**, **Nuovo**, **Progetto**.  
  
2.  Nel riquadro sinistro della finestra di dialogo **Nuovo progetto** espandere **Installato**, **Modelli**, **Visual C\+\+**, quindi selezionare **Win32**  
  
3.  Nel riquadro centrale, selezionare **Progetto console Win32**.  
  
4.  Specificare il nome del progetto, ad esempio MathFuncsDll, nella casella **Nome**.  Specificare un nome per la soluzione, ad esempio DynamicLibrary, nella casella **Nome soluzione**.  Fare clic su **OK**.  
  
5.  Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione Win32**, scegliere il pulsante **Avanti**.  
  
6.  Nella pagina **Impostazioni applicazione**, in **Tipo di applicazione** selezionare **DLL**.  
  
7.  Scegliere il pulsante **Fine** per creare il progetto.  
  
### Per aggiungere una classe alla DLL  
  
1.  Per creare un file di intestazione per una nuova classe, sulla barra dei menu scegliere **Progetto**,  **Aggiungi nuovo elemento**.  Nella finestra di dialogo **Aggiungi nuovo elemento** nel riquadro sinistro in **Visual C\+\+**, selezionare **Codice**.  Nel riquadro centrale selezionare **File di intestazione \(.h\)**.  Specificare un nome per il file di intestazione, ad esempio MathFuncsDll.h, quindi scegliere il pulsante **Aggiungi**.  Viene visualizzato un file di intestazione vuoto.  
  
2.  Aggiungere il codice seguente all'inizio del file di intestazione:  
  
     [!code-cpp[NVC_Create_DLL_Walkthrough#100](../build/codesnippet/CPP/walkthrough-creating-and-using-a-dynamic-link-library-cpp_1.h)]  
  
3.  Aggiungere una classe di base denominata MyMathFuncs per eseguire operazioni matematiche comuni quali addizione, sottrazione, moltiplicazione e divisione.  Il codice dovrebbe essere analogo al seguente:  
  
     [!code-cpp[NVC_Create_DLL_Walkthrough#101](../build/codesnippet/CPP/walkthrough-creating-and-using-a-dynamic-link-library-cpp_2.h)]  
  
     Quando il simbolo MATHFUNCSDLL\_EXPORTS è definito, il simbolo MATHFUNCSDLL\_API imposterà il modificatore `__declspec(dllexport)` nelle dichiarazioni di funzione membro all'interno del codice.  Questo modificatore consente alla DLL di esportare la funzione in modo che possa essere usata da altre applicazioni.  Quando il simbolo MATHFUNCSDLL\_EXPORTS non è definito, ad esempio quando il file di intestazione è incluso da un'applicazione, il simbolo MATHFUNCSDLL\_API definisce il modificatore `__declspec(dllimport)` nelle dichiarazioni di funzione membro.  Questo modificatore ottimizza l'importazione della funzione in un'applicazione.  Per impostazione predefinita, il modello Nuovo progetto per una DLL aggiunge `PROJECTNAME`\_EXPORTS ai simboli predefiniti per il progetto DLL.  In questo esempio, il simbolo MATHFUNCSDLL\_EXPORTS viene definito al momento della compilazione del progetto MathFuncsDll.  Per altre informazioni, vedere [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
    > [!NOTE]
    >  Se si compila il progetto DLL nella riga di comando, usare l'opzione del compilatore **\/D** per definire il simbolo MATHFUNCSDLL\_EXPORTS.  
  
4.  In **Esplora soluzioni**, nel progetto **MathFuncsDll** aprire il file MathFuncsDll.cpp nella cartella **File di origine**.  
  
5.  Implementare la funzionalità per MyMathFuncs nel file di origine.  Il codice dovrebbe essere analogo al seguente:  
  
     [!code-cpp[NVC_Create_DLL_Walkthrough#110](../build/codesnippet/CPP/walkthrough-creating-and-using-a-dynamic-link-library-cpp_3.cpp)]  
  
6.  Compilare la DLL selezionando **Compila**, **Compila soluzione** sulla barra dei menu.  
  
    > [!NOTE]
    >  Se si usa una versione Express Edition in cui non viene visualizzato il menu **Compila**, sulla barra dei menu scegliere **Strumenti**, **Impostazioni**, **Impostazioni avanzate** per abilitarlo e infine fare clic su **Compila** e **Compila soluzione**.  
  
    > [!NOTE]
    >  Se si compila il progetto nella riga di comando, usare l'opzione del compilatore **\/LD** per specificare che il file di output deve essere una DLL.  Per altre informazioni, vedere [\/MD, \/MT, \/LD \(Utilizza la libreria di runtime\)](../build/reference/md-mt-ld-use-run-time-library.md).  Usare l'opzione del compilatore **\/EHsc** per abilitare la gestione delle eccezioni C\+\+.  Per altre informazioni, vedere [\/EH \(Modello di gestione delle eccezioni\)](../build/reference/eh-exception-handling-model.md).  
  
### Per creare un'applicazione che faccia riferimento alla DLL  
  
1.  Per creare un'app C\+\+ che faccia riferimento e usi la DLL appena creata, sulla barra dei menu scegliere **File**, **Nuovo** e quindi **Progetto**.  
  
2.  Nel riquadro sinistro in **Visual C\+\+** selezionare **Win32**.  
  
3.  Nel riquadro centrale, selezionare **Progetto console Win32**.  
  
4.  Specificare il nome del progetto, ad esempio MyExecRefsDll, nella casella **Nome**.  Nell'elenco a discesa accanto a **Soluzione** selezionare **Aggiungi a soluzione**.  Verrà aggiunto un nuovo progetto alla soluzione che contiene la DLL.  Fare clic su **OK**.  
  
5.  Nella pagina **Panoramica** della finestra di dialogo **Creazione guidata applicazione Win32**, scegliere il pulsante **Avanti**.  
  
6.  Nella pagina **Impostazioni applicazione** in **Tipo di applicazione** selezionare **Applicazione console**.  
  
7.  Nella pagina **Impostazioni applicazione**, in **Opzioni aggiuntive**, deselezionare la casella di controllo **Intestazione precompilata**.  
  
8.  Scegliere il pulsante **Fine** per creare il progetto.  
  
### Per usare la funzionalità dalla libreria di classi nell'app  
  
1.  Dopo aver creato un'applicazione console, verrà creato un programma vuoto.  Il nome del file di origine è uguale al nome scelto in precedenza.  In questo esempio il file è denominato MyExecRefsDll.cpp.  
  
2.  Per usare nell'app le routine matematiche create nella DLL, è necessario farvi riferimenti.  A questo scopo, aprire il progetto MyExecRefsDll in **Esplora soluzioni** e scegliere **Progetto**, **Riferimenti** sulla barra dei menu.  Nella finestra di dialogo **Pagine delle proprietà** espandere il nodo **Proprietà comuni**, selezionare **Framework e riferimenti**, quindi scegliere il pulsante **Aggiungi nuovo riferimento**.  Per altre informazioni sulla finestra di dialogo **Riferimenti**, vedere [Aggiunta di riferimenti](../ide/adding-references-in-visual-cpp-projects.md).  
  
3.  La finestra di dialogo **Aggiungi riferimento** contiene l'elenco di tutte le librerie a cui è possibile fare riferimento.  Nella scheda **Progetti** sono elencati tutti i progetti presenti nella soluzione corrente e le eventuali librerie che essi contengono.  Nella scheda **Progetti** selezionare la casella di controllo accanto a MathFuncsDll e quindi scegliere il pulsante **OK**.  
  
4.  Per fare riferimento ai file di intestazione della DLL, è necessario modificare il percorso delle directory incluse.  A questo scopo, nella finestra di dialogo **Pagine delle proprietà** espandere il nodo **Proprietà di configurazione**, il nodo **C\/C\+\+**, quindi selezionare **Generale**.  Accanto a **Directory di inclusione aggiuntive** specificare o cercare il percorso del file di intestazione MathFuncsDll.h.  È possibile usare un percorso relativo, ad esempio ..\\MathFuncsDll\\, quindi scegliere il pulsante **OK**.  
  
5.  È ora possibile usare la classe MyMathFuncs nell'applicazione.  Sostituire i contenuti del file MyExecRefsDll.cpp con il codice seguente:  
  
     [!code-cpp[NVC_Create_DLL_Walkthrough#120](../build/codesnippet/CPP/walkthrough-creating-and-using-a-dynamic-link-library-cpp_4.cpp)]  
  
6.  Compilare l'eseguibile scegliendo **Compila**, **Compila soluzione** sulla barra dei menu.  
  
### Per eseguire l'applicazione  
  
1.  Verificare che MyExecRefsDll sia selezionato come progetto predefinito.  In **Esplora soluzioni** selezionare MyExecRefsDll e scegliere **Progetto**, **Imposta come progetto di avvio** sulla barra dei menu.  
  
2.  Per eseguire il progetto, sulla barra dei menu selezionare **Debug**, **Avvia senza eseguire debug**.  Il codice sarà analogo al seguente:  
  
  **a \+ b \= 106,4**  
**a \- b \= \-91,6**  
**a \* b \= 732,6**  
**a \/ b \= 0,0747475**  
**Eccezione generata: b non può essere zero.**  
  
## Vedere anche  
 [Visual C\+\+ Guided Tour](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)   
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Procedura dettagliata: Distribuzione di un programma \(C\+\+\)](../ide/walkthrough-deploying-your-program-cpp.md)   
 [Chiamata di funzioni DLL da applicazioni Visual Basic](../build/calling-dll-functions-from-visual-basic-applications.md)