---
title: "Scrittura e refactoring del codice (C++) | Microsoft Docs"
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
ms.assetid: 56ffb9e9-514f-41f4-a3cf-fd9ce2daf3b6
caps.latest.revision: 6
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Scrittura e refactoring del codice (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'editor di codice e l'IDE di Visual C\+\+ includono numerosi strumenti per la scrittura di codice.  Alcuni sono specifici di C\+\+ e altri sono sostanzialmente uguali per tutti i linguaggi di Visual Studio.  Le opzioni per abilitare e configurare queste funzionalità sono disponibili nella finestra di dialogo Avanzate dell'editor di testo C\+\+ \(scegliere **Strumenti &#124; Opzioni &#124; Editor di testo &#124; C\/C\+\+ &#124; Avanzate** o digitare "Avanzate C\+\+" in **Avvio veloce**\).  Dopo aver scelto l'opzione da impostare, è possibile ottenere ulteriori informazioni premendo il tasto **F1** quando la finestra di dialogo è attiva.  Per le opzioni di formattazione di codice generale, digitare `Editor C++` in **Avvio veloce**.  
  
## Aggiunta di nuovo codice  
 Dopo aver creato un progetto, è possibile avviare la codifica nei file generati automaticamente.  Per aggiungere nuovi file, fare clic con il pulsante destro del mouse sul nodo del progetto in Esplora soluzioni e scegliere **Aggiungi &#124; Nuovo**.  
  
 Per impostare opzioni di formattazione quali rientri, completamento parentesi graffa e la colorazione, digitare`Formattazione C++` nella finestra **Avvio veloce**.  
  
### IntelliSense  
 IntelliSense è il nome di un set di funzionalità che forniscono informazioni inline su membri, tipi e overload di funzione.  Nella figura seguente viene illustrato l'elenco a discesa dei membri che viene visualizzato durante la digitazione.  È possibile premere TAB per inserire il testo dell'elemento selezionato nel file del codice.  
  
 ![Elenco a discesa di membri di Visual C&#43;&#43;](../ide/media/vs2015_cpp_statement_completion.png "vs2015\_cpp\_statement\_completion")  
  
 Per informazioni complete, vedere l'argomento [IntelliSense per Visual C\+\+](../Topic/Visual%20C++%20Intellisense.md).  
  
### Inserisci frammento di codice  
 Per frammento si intende una parte predefinita di codice sorgente.  Fare clic con il pulsante destro del mouse su un singolo punto o su testo selezionato per inserire un frammento oppure racchiudere il testo selezionato con il frammento.  Nella figura seguente sono illustrati i tre passaggi per racchiudere un'istruzione selezionata con un ciclo for.  Le evidenziazioni gialle nell'immagine finale sono campi modificabili a cui è possibile accedere premendo TAB.  Per altre informazioni, vedere [Frammenti di codice](../Topic/Code%20Snippets.md).  
  
 ![Elenco a discesa Inserisci frammento di Visual C&#43;&#43;](../ide/media/vs2015_cpp_surround_with.png "vs2015\_cpp\_surround\_with")  
  
### Aggiungi classe  
 Per aggiungere una nuova classe dal menu **Progetto**, usare la Creazione guidata classe.  
  
 ![Aggiungere una nuova classe in Visual C&#43;&#43;](../ide/media/vs2015_cpp_add_class.png "vs2015\_cpp\_add\_class")  
  
### Creazione guidata classe  
 Per modificare o esaminare una classe esistente oppure aggiungere una nuova classe, usare la Creazione guidata classe.  Per altre informazioni, vedere [Aggiunta di funzionalità con creazioni guidate codice \(C\+\+\)](../ide/adding-functionality-with-code-wizards-cpp.md).  
  
 ![Creazione guidata classe di Visual C&#43;&#43;](../ide/media/vs2015_cpp_class_wizard.png "vs2015\_cpp\_class\_wizard")  
  
## Refactoring  
 I refactoring sono disponibili nella voce del menu di scelta rapida Azioni rapide oppure facendo clic su una [lampadina](../Topic/Perform%20quick%20actions%20with%20light%20bulbs.md) nell'editor.  
  
### Rinomina  
 È possibile rinominare un tipo, una funzione o una variabile ovunque venga usato nell'ambito specificato.  Nella figura seguente il metodo `Eat` verrà rinominato in `Devour` nella classe di base e in quella derivata.  
  
 ![Finestra di dialogo Rinomina in Visual C&#43;&#43;](../ide/media/vss2015_cpp_rename.png "vss2015\_cpp\_rename")  
  
### Azione rapida: Percorso definizione spostamento  
 Consente di spostare una o più definizioni di funzione nel file di intestazione il cui nome è uguale a quello del file del codice.  Se l'intestazione non esiste già, ne verrà creata una nuova.  Le definizioni risultanti vengono visualizzate inline in una finestra di anteprima.  
  
 ![Spostare la definizione in Visual C&#43;&#43;](../ide/media/vs2015_cpp_move_definition.png "vs2015\_cpp\_move\_definition")  
  
### Azione rapida: Crea dichiarazione\/definizione  
 Consente di creare una o più definizioni nel file del codice associato per le dichiarazioni di intestazione selezionate.  
  
 ![Opzione Crea definizione di Visual C&#43;&#43;](../ide/media/vs2015_cpp_create_declaration.png "vs2015\_cpp\_create\_declaration")  
  
### Azione rapida: Implementa tutti gli elementi virtuali puri per una classe  
 Consente di generare rapidamente stub di implementazione vuoti per tutte le funzioni virtuali ereditate in una classe.  Per implementare solo le funzioni virtuali in una classe di base specifica, è sufficiente evidenziare la classe nella dichiarazione di classe derivata.  
  
 ![Finestra di implementazione virtuale di Visual C&#43;&#43;](../ide/media/vs2015_cpp_implement_virtuals.png "vs2015\_cpp\_implement\_virtuals")  
  
### Converti in valore letterale stringa non elaborata  
 Quando si posiziona il cursore su un valore letterale stringa, è possibile fare clic con il pulsante destro del mouse e scegliere **Azioni rapide &#124; Converti in valore letterale stringa non elaborata** per convertire una stringa normale in un valore letterale stringa non elaborata di C\+\+ 11.  
  
 ![Refactoring di C&#43;&#43; in un valore letterale stringa non elaborato](../ide/media/vs2015_cpp_raw_string_literal.png "vs2015\_cpp\_raw\_string\_literal")  
  
### Estrai funzione \(estensione di Visual Studio\)  
 Usare la funzionalità Estrai funzione \(disponibile come [estensione nella raccolta di Visual Studio](https://visualstudiogallery.msdn.microsoft.com/a081dc8c-c805-4589-9b8b-c2c309a05789)\) per spostare una sezione di codice nella propria funzione e sostituire il codice con una chiamata a tale funzione.  
  
 ![Finestra di dialogo Estrai funzione di Visual C&#43;&#43;](../ide/media/vs2015_cpp_extract_function.png "vs2015\_cpp\_extract\_function")  
  
## Spostamenti e approfondimenti  
  
### Informazioni rapide  
 È possibile passare con il puntatore del mouse su una variabile per visualizzare le informazioni sul relativo tipo.  Informazioni rapide  
  
 ![QuickInfo di Visual C&#43;&#43;](../ide/media/vs2015_cpp_quickinfo.png "vs2015\_cpp\_quickInfo")  
  
### Apri documento \(passa all'intestazione\)  
 Fare clic con il pulsante destro del mouse sul nome dell'intestazione in una direttiva `#include` per aprire il file di intestazione.  
  
 ![Opzione del menu Apri documento di Visual C&#43;&#43;](../ide/media/vs2015_cpp_open_document.png "vs2015\_cpp\_open\_document")  
  
### Visualizza definizione  
 Passare con il puntatore del mouse su una dichiarazione di variabile o di funzione, fare clic con il pulsante destro del mouse e scegliere **Visualizza definizione** per accedere a una visualizzazione inline della relativa definizione.  Per altre informazioni, vedere [Visualizza definizione \(ALT\+F12\)](../Topic/How%20to:%20View%20and%20Edit%20Code%20by%20Using%20Peek%20Definition%20\(Alt+F12\).md).  
  
 ![Visualizza definizione di Visual C&#43;&#43;](../ide/media/vs2015_cpp_peek_definition.png "vs2015\_cpp\_peek\_definition")  
  
### Vai a definizione  
 Passare con il puntatore del mouse su una dichiarazione di variabile o di funzione, fare clic con il pulsante destro del mouse e scegliere **Vai a definizione** per aprire il documento in cui è definito l'oggetto.  
  
### Visualizza gerarchia delle chiamate  
 Fare clic con il pulsante destro del mouse su una qualsiasi chiamata di funzione per visualizzare un elenco ricorsivo di tutte le funzioni chiamate e di tutte le funzioni che la chiamano.  È possibile espandere nello stesso modo tutte le singole funzioni dell'elenco.  Per altre informazioni, vedere [Gerarchia delle chiamate](../Topic/Call%20Hierarchy.md).  
  
 ![Gerarchia di chiamata di Visual C&#43;&#43;](../ide/media/vs2015_cpp_call_hierarchy.png "vs2015\_cpp\_call\_hierarchy")  
  
### Attiva\/disattiva file di codice\/intestazione  
 Fare clic con il pulsante destro del mouse e scegliere Attiva\/disattiva file di codice\/intestazione per passare da un file di intestazione al file del codice associato e viceversa.  
  
### Struttura  
 Fare clic con il pulsante destro del mouse in un punto qualsiasi di un file del codice sorgente e scegliere **Struttura** per comprimere o espandere definizioni e\/o aree personalizzate e individuare più facilmente solo le parti cui si è interessati.  Per altre informazioni, vedere [Struttura](../Topic/Outlining.md).  
  
 ![Struttura di Visual C&#43;&#43;](../ide/media/vs2015_cpp_outlining.png "vs2015\_cpp\_outlining")  
  
### Modalità mappa per barra di scorrimento  
 Questa modalità consente di scorrere rapidamente e spostarsi in un file del codice senza abbandonare la posizione corrente  oppure di fare clic su un punto qualsiasi nella mappa del codice per passare direttamente a tale posizione.  
  
 ![Mappa di codice in Visual C&#43;&#43;](../ide/media/vs2015_cpp_code_map.png "vs2015\_cpp\_code\_map")  
  
### Genera grafico dei file di inclusione  
 Fare clic con il pulsante destro del mouse su un file del codice del progetto e scegliere **Genera grafico dei file di inclusione** per visualizzare un grafico dei file inclusi da altri file.  
  
 ![Grafico dei file di inclusione di Visual C&#43;&#43;](../ide/media/vs2015_cpp_include_graph.png "vs2015\_cpp\_include\_graph")  
  
### F1 Guida  
 Posizionando il cursore su o dopo un qualsiasi tipo, parola chiave o funzione e premendo F1, verrà visualizzato direttamente l'argomento di riferimento pertinente della libreria MSDN.  F1 funziona anche con gli elementi dell'elenco errori e in numerose finestre di dialogo.  
  
### Avvio veloce  
 Per passare facilmente a qualsiasi finestra o strumento in Visual Studio, è sufficiente digitarne il nome nella finestra di avvio veloce nell'angolo in alto a destra dell'interfaccia utente.  L'elenco di completamento automatico verrà filtrato durante la digitazione.  
  
 ![Avvio veloce di Visual Studio](../ide/media/vs2015_cpp_quick_launch.png "vs2015\_cpp\_quick\_launch")