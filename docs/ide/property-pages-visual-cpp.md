---
title: "Pagine delle propriet&#224; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.NotAProp.Edit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro di compilazione"
  - "macro, file di progetto"
  - "proprietà progetto [C++], valori predefiniti"
  - "proprietà progetto [C++], impostazione"
  - "micro file di progetto"
  - "proprietà (pagine), impostazioni di progetto"
  - "macro definite dall'utente"
  - "valori definiti dall'utente"
  - "progetti Visual C++, proprietà"
ms.assetid: 13ffe3ea-1bc3-4bee-be5e-053a8a99cce4
caps.latest.revision: 22
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Pagine delle propriet&#224; (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Usando le pagine delle proprietà è possibile specificare le impostazioni per i progetti di Visual Studio.  Per aprire la finestra di dialogo **Pagine delle proprietà** di un progetto di Visual Studio, scegliere **Proprietà** dal menu **Progetto**.  
  
 Le impostazioni di progetto possono essere specificate e applicate a tutte le configurazioni della build oppure si possono specificare proprietà di progetto diverse per ogni configurazione della build.  Ad esempio, è possibile specificare determinate impostazioni per la configurazione di rilascio e altre per la configurazione di debug.  
  
 Non tutte le pagine disponibili sono necessariamente visualizzate nella finestra di dialogo **Pagine delle proprietà**.  Le pagine visualizzate dipendono dai tipi di file nel progetto.  
  
 Per altre informazioni, vedere [Utilizzo di proprietà di progetto](../ide/working-with-project-properties.md).  
  
## Proprietà predefinitee modificate  
 Quando si usa la finestra di dialogo **Nuovo progetto** per creare un progetto, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] usa il modello di progetto specificato per inizializzare le proprietà del progetto.  Di conseguenza, i valori delle proprietà nel modello possono essere considerati come valori predefiniti per il tipo di progetto.   In altri tipi di progetto, le proprietà possono avere valori predefiniti diversi.  
  
 Se un valore di proprietà del progetto viene modificato, verrà visualizzato in grassetto.  Una proprietà di progetto può essere modificata per i motivi seguenti:  
  
-   La creazione guidata applicazione cambia la proprietà perché richiede un valore della proprietà diverso rispetto a quello specificato nel modello di progetto.  
  
-   L'utente specifica un valore della proprietà diverso nella finestra di dialogo **Nuovo progetto**.  
  
-   L'utente specifica un valore della proprietà diverso in una pagina delle proprietà del progetto.  
  
> [!TIP]
>  Per visualizzare il set finale di valori delle proprietà usato da MSBuild per compilare il progetto, esaminare il file di output del preprocessore, che è possibile produrre usando questa riga di comando: **MSBuild \/preprocess:***nomefile\_output\_preprocessore*opt *nomefile\_progetto*opt  
  
## Reimpostazione delle proprietà  
 Quando si visualizza la finestra di dialogo **Pagine delle proprietà** di un progetto e si seleziona il nodo del progetto in **Esplora soluzioni**, per molte proprietà è possibile selezionare **eredita da padre o da impostazioni predefinite progetto** o modificare il valore in altro modo.  
  
 Quando si visualizza la finestra di dialogo **Pagine delle proprietà** di un progetto e si seleziona un file in **Esplora soluzioni**, per molte proprietà è possibile selezionare **eredita da padre o da impostazioni predefinite progetto** o modificare il valore in altro modo.  Tuttavia, se il progetto contiene molti file con valori di proprietà diversi rispetto ai valori predefiniti, per la compilazione del progetto sarà necessario più tempo.  
  
> [!TIP]
>  Per aggiornare la finestra di dialogo **Pagine delle proprietà** in modo da visualizzare le ultime selezioni, fare clic su **Applica**.  
  
 La maggior parte delle impostazioni predefinite del progetto sono quelle del sistema \(piattaforma\).  Alcune impostazioni predefinite del progetto derivano dai fogli di stile applicati quando si aggiornano le proprietà nella sezione **Impostazioni predefinite progetto** della pagina delle proprietà di configurazione **Generale** del progetto.  Per altre informazioni, vedere [Pagina delle proprietà Generale \(Progetto\)](../ide/general-property-page-project.md).  
  
## Specifica di valori definiti dall'utente  
 Per alcune proprietà è necessario specificare i valori.  Un valore definito dall'utente può contenere uno o più caratteri alfanumerici o nomi di macro del file di progetto.  Alcune di queste proprietà accettano solo un valore definito dall'utente, altre possono accettare un elenco di più valori delimitato da punti e virgola.  
  
 Per specificare un valore definito dall'utente per una proprietà oppure un elenco di valori, se la proprietà accetta più valori definiti dall'utente, nella colonna a destra del nome della proprietà eseguire una delle operazioni seguenti:  
  
-   Digitare il valore o l'elenco di valori.  
  
-   Fare clic sulla freccia a discesa.  Se **Modifica** è disponibile, selezionarlo e quindi digitare il valore o l'elenco di valori nella casella di testo.  Un metodo alternativo per specificare un elenco consiste nel digitare ogni valore in una riga separata nella casella di testo.  Nella pagina delle proprietà, i valori verranno visualizzati sotto forma di un elenco delimitato da punti e virgola.  
  
     Per inserire una macro del file di progetto come valore, fare clic su **Macro** e quindi fare doppio clic sul nome della macro.  
  
-   Fare clic sulla freccia a discesa.  Se **Sfoglia** è disponibile, selezionarlo e quindi selezionare uno o più valori.  
  
 Per una proprietà multivalore, l'opzione **eredita da padre o da impostazioni predefinite progetto** è accessibile facendo clic sulla freccia a discesa nella colonna a destra del nome della proprietà e quindi scegliendo **Modifica**.  Questa opzione è selezionata per impostazione predefinita.  
  
 Si noti che in una pagina delle proprietà vengono visualizzate solo le impostazioni al livello corrente per una proprietà multivalore che eredita da un altro livello.  Se ad esempio si seleziona un file in **Esplora soluzioni** e si seleziona la proprietà **Definizioni preprocessore** C\/C\+\+, le definizioni a livello di file verranno visualizzate, ma non quelle ereditate a livello di progetto.  Per visualizzare sia i valori del livello corrente che quelli ereditati, fare clic sulla freccia a discesa nella colonna a destra del nome della proprietà, quindi scegliere **Modifica**.  Se si usa il [modello di progetto di Visual C\+\+](http://msdn.microsoft.com/it-it/06c1bbd9-4c79-4f97-ad6d-2b1dea8ecd1f), anche gli oggetti in file e progetti hanno lo stesso comportamento.  In altre parole, eseguendo una query per i valori su una proprietà a livello di file, non si otterranno i valori della proprietà a livello di progetto.  È necessario richiedere i valori della proprietà a livello di progetto in modo esplicito.  È anche possibile che alcuni valori ereditati di una proprietà derivino da un foglio di stile a cui non è possibile accedere a livello di codice.  
  
## Contenuto della sezione  
  
1.  [Finestra di dialogo Aggiungi percorso di ricerca riferimenti](http://msdn.microsoft.com/it-it/4520d80d-aa9f-4d11-b92b-2f64a1fd5cb2)  
  
2.  [Avanzate, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di \<nomeprogetto\>](../ide/advanced-manifest-tool.md)  
  
3.  [Pagine delle proprietà Riga di comando](../ide/command-line-property-pages.md)  
  
4.  [Pagina Istruzione di compilazione personalizzata: Generale](../ide/custom-build-step-property-page-general.md)  
  
5.  [Aggiunta di riferimenti](../ide/adding-references-in-visual-cpp-projects.md)  
  
6.  [Pagina delle proprietà Generale \(File\)](../ide/general-property-page-file.md)  
  
7.  [Pagina delle proprietà Generale \(Progetto\)](../ide/general-property-page-project.md)  
  
8.  [Generale, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di \<nomeprogetto\>](../ide/general-manifest-tool-configuration-properties.md)  
  
9. [Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)  
  
10. [Pagine delle proprietà HLSL: Avanzate](../ide/hlsl-property-pages-advanced.md)  
  
11. [Pagine delle proprietà HLSL: Generale](../ide/hlsl-property-pages-general.md)  
  
12. [Pagine delle proprietà HLSL: file di output](../ide/hlsl-property-pages-output-files.md)  
  
13. [Input e output, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di \<nomeprogetto\>](../ide/input-and-output-manifest-tool.md)  
  
14. [COM isolato, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di \<nomeprogetto\>](../ide/isolated-com-manifest-tool.md)  
  
15. [Pagine delle proprietà Linker](../ide/linker-property-pages.md)  
  
16. [Pagina delle proprietà delle risorse gestite](../ide/managed-resources-property-page.md)  
  
17. [Pagine delle proprietà dello strumento Manifesto](../ide/manifest-tool-property-pages.md)  
  
18. [Pagine delle proprietà MIDL](../ide/midl-property-pages.md)  
  
19. [Pagine delle proprietà MIDL: Avanzate](../ide/midl-property-pages-advanced.md)  
  
20. [Pagine delle proprietà MIDL: Generale](../ide/midl-property-pages-general.md)  
  
21. [Pagine delle proprietà MIDL: Output](../ide/midl-property-pages-output.md)  
  
22. [Pagina delle proprietà NMAKE](../ide/nmake-property-page.md)  
  
23. [Pagine delle proprietà Risorse](../ide/resources-property-pages.md)  
  
24. [Directory di VC\+\+ \(pagina delle proprietà\)](../ide/vcpp-directories-property-page.md)  
  
25. [Pagina delle proprietà Riferimenti Web](../ide/web-references-property-page.md)  
  
26. [Pagina delle proprietà dello strumento generatore di dati XML](../ide/xml-data-generator-tool-property-page.md)  
  
27. [Pagina delle proprietà dello strumento generatore di documenti XML](../ide/xml-document-generator-tool-property-pages.md)  
  
## Vedere anche  
 [Procedura: creare e rimuovere dipendenze di progetto](../Topic/How%20to:%20Create%20and%20Remove%20Project%20Dependencies.md)   
 [Procedura: creare e modificare le configurazioni](../Topic/How%20to:%20Create%20and%20Edit%20Configurations.md)   
 [Distribuzione di applicazioni](http://msdn.microsoft.com/it-it/4ff8881d-0daf-47e7-bfe7-774c625031b4)