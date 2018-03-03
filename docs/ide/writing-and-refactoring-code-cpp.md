---
title: Scrittura e refactoring del codice (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/27/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 56ffb9e9-514f-41f4-a3cf-fd9ce2daf3b6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b68d4190d8e3fc5040879eba4f8888467a07adf5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="writing-and-refactoring-code-c"></a>Scrittura e refactoring del codice (C++)

L'editor di codice e l'IDE di Visual C++ includono numerosi strumenti per la scrittura di codice. Alcuni sono specifici di C++ e altri sono sostanzialmente uguali per tutti i linguaggi di Visual Studio. Per ulteriori informazioni sulle funzionalità condivise, vedere [scrittura di codice nell'Editor di testo e del codice](/visualstudio/ide/writing-code-in-the-code-and-text-editor). Le opzioni per l'abilitazione e configurazione delle funzionalità specifiche di C++ sono disponibili nel [avanzate dell'Editor di testo C++](/visualstudio/ide/reference/options-text-editor-c-cpp-advanced) finestra di dialogo (**Tools &#124; Opzioni &#124; Editor di testo &#124; C/C++ &#124; Advanced** o digitare "Avanzate C++" **veloce**). Dopo aver scelto l'opzione da impostare, è possibile ottenere ulteriori informazioni premendo **F1** quando la finestra di dialogo è attiva. Per le opzioni di formattazione di codice generale, digitare `Editor C++` in **avvio veloce**.

Le funzionalità sperimentali che possono o non possono essere inclusi in una versione futura di Visual Studio, vedere il [Editor di testo C++ sperimentale](/visualstudio/ide/reference/options-text-editor-c-cpp-experimental) finestra di dialogo. In Visual Studio 2017 è possibile abilitare **Intellisense predittiva** in questa finestra di dialogo.

## <a name="adding-new-code"></a>Aggiunta di nuovo codice

Dopo aver creato un progetto, è possibile avviare la codifica nei file generati automaticamente. Per aggiungere nuovi file, fare clic sul nodo del progetto in Esplora soluzioni e scegliere **Aggiungi &#124; Nuovo**.

Per impostare opzioni di formattazione quali rientri, completamento parentesi graffa e la colorazione, digitare `C++ Formatting` nel **avvio veloce** finestra.

### <a name="intellisense"></a>IntelliSense

IntelliSense è il nome di un set di funzionalità che forniscono informazioni inline su membri, tipi e overload di funzione. Nella figura seguente viene illustrato l'elenco a discesa dei membri che viene visualizzato durante la digitazione. È possibile premere TAB per inserire il testo dell'elemento selezionato nel file del codice.

![C &#43; &#43; membro di elenco a discesa](../ide/media/vs2015_cpp_statement_completion.png "vs2015_cpp_statement_completion")

Per ulteriori informazioni, vedere [Visual C++ Intellisense](/visualstudio/ide/visual-cpp-intellisense).

### <a name="insert-snippets"></a>Inserisci frammento di codice

Per frammento si intende una parte predefinita di codice sorgente. Fare clic con il pulsante destro del mouse su un singolo punto o su testo selezionato per inserire un frammento oppure racchiudere il testo selezionato con il frammento. Nella figura seguente sono illustrati i tre passaggi per racchiudere un'istruzione selezionata con un ciclo for. Le evidenziazioni gialle nell'immagine finale sono campi modificabili a cui è possibile accedere premendo TAB. Per altre informazioni, vedere [Code Snippets](/visualstudio/ide/code-snippets) (Frammenti di codice).

![Visual C# 43; &#43; Inserisci frammento Drop &#45; giù](../ide/media/vs2015_cpp_surround_with.png "vs2015_cpp_surround_with")

### <a name="add-class"></a>Aggiungi classe

Aggiungere una nuova classe dal **progetto** menu utilizzando la creazione guidata classe.

![Aggiungere una nuova classe in Visual C# 43; &#43; ] (../ide/media/vs2015_cpp_add_class.png "vs2015_cpp_add_class")

### <a name="class-wizard"></a>Creazione guidata classe

Per modificare o esaminare una classe esistente oppure aggiungere una nuova classe, usare la Creazione guidata classe. Per ulteriori informazioni, vedere [aggiunta di funzionalità con creazioni guidate codice (C++)](../ide/adding-functionality-with-code-wizards-cpp.md).

![Visual C# 43; &#43; Creazione guidata classe](../ide/media/vs2015_cpp_class_wizard.png "vs2015_cpp_class_wizard")

## <a name="refactoring"></a>Refactoring

I refactoring sono disponibili nel menu di scelta rapida azioni rapide oppure facendo clic su un [lampadina](/visualstudio/ide/perform-quick-actions-with-light-bulbs) nell'editor.  Alcune sono incluse anche nel **Modifica > eseguire il refactoring** menu.  Queste funzionalità comprendono:

* [Rinomina](refactoring/rename.md)
* [Estrai funzione](refactoring/extract-function.md)
* [Implementa elementi virtuali puri](refactoring/implement-pure-virtuals.md)
* [Crea dichiarazione / definizione](refactoring/create-declaration-definition.md)
* [Sposta definizione della funzione](refactoring/move-definition-location.md)
* [Converti in valore letterale stringa non elaborata](refactoring/convert-to-raw-string-literal.md)
* [Modifica firma](refactoring/change-signature.md)

## <a name="navigate-and-understand"></a>Spostamenti e approfondimenti

Visual C++ ha molte funzionalità di spostamento di codice con altri linguaggi. Per ulteriori informazioni, vedere [spostamento nel codice](/visualstudio/ide/navigating-code) e [visualizzazione della struttura del codice](/visualstudio/ide/viewing-the-structure-of-code).

### <a name="quickinfo"></a>Informazioni rapide

È possibile passare con il puntatore del mouse su una variabile per visualizzare le informazioni sul relativo tipo.

![QuickInfo di Visual C&#43;&#43;](../ide/media/vs2015_cpp_quickinfo.png "vs2015_cpp_quickInfo")

### <a name="open-document-navigate-to-header"></a>Apri documento (passa all'intestazione)

Fare clic con il pulsante destro del mouse sul nome dell'intestazione in una direttiva `#include` per aprire il file di intestazione.

![Visual C# 43; &#43; Aprire l'opzione di menu documento](../ide/media/vs2015_cpp_open_document.png "vs2015_cpp_open_document")

### <a name="peek-definition"></a>Visualizza definizione

Passare il mouse su una variabile o una funzione dichiarazione, rapida, quindi scegliere **Visualizza definizione** per mostrare una visualizzazione inline della relativa definizione. Per ulteriori informazioni, vedere [Visualizza definizione (Alt + F12)](/visualstudio/ide/how-to-view-and-edit-code-by-using-peek-definition-alt-plus-f12).

![Visual C# 43; &#43; Visualizza definizione](../ide/media/vs2015_cpp_peek_definition.png "vs2015_cpp_peek_definition")

### <a name="go-to-definition"></a>Vai a definizione

Passare il mouse su una variabile o una funzione dichiarazione, rapida, quindi scegliere **Vai a definizione** per aprire il documento in cui l'oggetto è definito.

### <a name="view-call-hierarchy"></a>Visualizza gerarchia delle chiamate

Fare clic con il pulsante destro del mouse su una qualsiasi chiamata di funzione per visualizzare un elenco ricorsivo di tutte le funzioni chiamate e di tutte le funzioni che la chiamano. È possibile espandere nello stesso modo tutte le singole funzioni dell'elenco. Per ulteriori informazioni, vedere [gerarchia di chiamata](/visualstudio/ide/reference/call-hierarchy).

![Visual C# 43; &#43; Gerarchia di chiamata](../ide/media/vs2015_cpp_call_hierarchy.png "vs2015_cpp_call_hierarchy")

### <a name="toggle-header--code-file"></a>Attiva/disattiva file di codice/intestazione

Mouse e scegliere **Mostra/Nascondi / File di codice** per passare da un file di intestazione e il relativo file di codice associato.

### <a name="outlining"></a>struttura

Fare clic in un file di codice sorgente e scegliere **struttura** per comprimere o espandere definizioni e/o aree personalizzate per renderne più semplice visualizzare solo le parti di cui si è interessati. Per altre informazioni, vedere [Struttura](/visualstudio/ide/outlining).

![Visual C# 43; &#43; Struttura](../ide/media/vs2015_cpp_outlining.png "vs2015_cpp_outlining")

### <a name="scroll-bar-map-mode"></a>Modalità mappa per barra di scorrimento

Questa modalità consente di scorrere rapidamente e spostarsi in un file del codice senza abbandonare la posizione corrente oppure di fare clic su un punto qualsiasi nella mappa del codice per passare direttamente a tale posizione.

![Mappa del codice in Visual C# 43; &#43; ] (../ide/media/vs2015_cpp_code_map.png "vs2015_cpp_code_map")

### <a name="generate-graph-of-include-files"></a>Genera grafico dei file di inclusione

Fare clic su un file di codice nel progetto e scegliere **Genera grafico dei file di inclusione** per visualizzare un grafico dei file inclusi da altri file.

![Visual C# 43; &#43; grafico dei file di inclusione](../ide/media/vs2015_cpp_include_graph.png "vs2015_cpp_include_graph")

### <a name="f1-help"></a>F1 Guida

Posizionando il cursore su o dopo un qualsiasi tipo, parola chiave o funzione e premendo F1, verrà visualizzato direttamente l'argomento di riferimento pertinente della libreria MSDN. F1 funziona anche con gli elementi dell'elenco errori e in numerose finestre di dialogo.

### <a name="quick-launch"></a>Avvio veloce

Per passare facilmente a qualsiasi finestra o strumento in Visual Studio, è sufficiente digitarne il nome nella finestra di avvio veloce nell'angolo in alto a destra dell'interfaccia utente. L'elenco di completamento automatico verrà filtrato durante la digitazione.

![Avvio veloce di Visual Studio](../ide/media/vs2015_cpp_quick_launch.png "vs2015_cpp_quick_launch")
