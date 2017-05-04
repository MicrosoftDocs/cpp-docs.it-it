---
title: "Eventi (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 31c8e08a-00ad-40f9-8f7e-124864aaad58
caps.latest.revision: 17
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 17
---
# Eventi (C++/CX)
Un tipo [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] può dichiarare, ossia pubblicare, eventi e il codice client nello stesso componente o in altri componenti può sottoscrivere tali eventi associando all'evento metodi definiti *gestori eventi*. A un singolo evento possono essere associati più gestori eventi. Quando l'oggetto di pubblicazione genera l'evento, vengono richiamati tutti i gestori eventi. In questo modo, una classe di sottoscrizione può eseguire qualsiasi azione personalizzata appropriata quando l'editore genera l'evento . Un evento è un tipo delegato che specifica la firma che tutti i gestori eventi devono avere per sottoscrivere l'evento.  
  
## Utilizzo di eventi nei componenti di Windows  
 Molti componenti in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] espongono eventi. Ad esempio, un oggetto LightSensor genera un evento ReadingChanged quando il sensore segnala un nuovo valore di luminescenza. Quando usi un oggetto LightSensor nel programma, puoi definire un metodo che sarà chiamato quando viene generato l'evento ReadingChanged. Il metodo può eseguire qualsiasi operazione, il solo requisito è che la firma deve corrispondere a quella del delegato. Per ulteriori informazioni su come creare un gestore eventi del delegato e sottoscrivere un evento, vedi [Delegati](../cppcx/delegates-c-cx.md).  
  
## Creazione di eventi personalizzati  
  
### Dichiarazione  
 Puoi dichiarare un evento in una classe di riferimento o in un'interfaccia e puoi impostarne l'accessibilità pubblica, interna \(pubblica\/privata\), protetta pubblica, protetta, protetta privata o privata. Quando dichiari un evento, il compilatore crea internamente un oggetto che espone due metodi di accesso: aggiunta e rimozione. Quando gli oggetti di sottoscrizione registrano i gestori eventi, l'oggetto evento li archivia in una raccolta. Quando viene generato un evento, l'oggetto evento richiama a sua volta tutti i gestori nel proprio elenco. Un evento semplice, come quello nell'esempio seguente, dispone di un archivio di backup implicito nonché di metodi impliciti della funzione di accesso `add` e `remove`. Puoi anche specificare funzioni di accesso personali nello stesso modo in cui puoi specificare funzioni di accesso `get` e `set` personalizzate in una proprietà.  La classe di implementazione non è in grado di scorrere manualmente l'elenco di sottoscrittori eventi in un evento semplice.  
  
 Nell'esempio riportato di seguito viene illustrato come dichiarare e generare un evento. Nota che l'evento include un tipo di delegato e la sua dichiarazione include il simbolo "^".  
  
 [!code-cpp[cx_events#01](../snippets/cpp/VS_Snippets_Misc/cx_events/cpp/cx_events/class1.h#01)]  
  
### Utilizzo  
 L'esempio riportato di seguito mostra in che modo una classe di sottoscrizione usa l'operatore `+=` per sottoscrivere l'evento e come fornire un gestore eventi da richiamare al momento della generazione dell'evento. La funzione fornita corrisponde alla firma del delegato definito sul lato editore nello spazio dei nomi `EventTest`.  
  
 [!code-cpp[cx_events#02](../snippets/cpp/VS_Snippets_Misc/cx_events/cpp/eventsupportinvs/eventclientclass.h#02)]  
  
> [!WARNING]
>  In genere, è preferibile utilizzare una funzione denominata, anziché una funzione lambda, per un gestore eventi a meno che non si presti molta attenzione a evitare i riferimenti circolari. Una funzione denominata acquisisce il puntatore "this" per riferimento debole, mentre una funzione lambda lo acquisisce per riferimento forte e crea un riferimento circolare. Per ulteriori informazioni, vedi [Riferimenti deboli e interruzione di cicli \(C\+\+\/CX\)](../cppcx/weak-references-and-breaking-cycles-c-cx.md).  
  
### Metodi di aggiunta e rimozione personalizzati  
 Internamente, un evento dispone di un metodo di aggiunta, un metodo di rimozione e un metodo di generazione. Quando il codice client sottoscrive un evento, viene chiamato il metodo di aggiunta e il delegato passato viene aggiunto all'elenco di chiamate dell'evento. La classe di pubblicazione richiama l'evento, fa in modo che venga chiamato il metodo raise\(\) e a turno vengono richiamati i delegati nell'elenco. Un sottoscrittore può rimuovere se stesso dall'elenco di delegati, facendo così in modo che venga generato il metodo di rimozione dell'evento. Il compilatore fornisce le versioni predefinite di questi metodi se tali versioni non sono definite nel codice; queste risorse sono note come eventi semplici. In molti casi, un evento semplice è tutto ciò che occorre.  
  
 Se devi eseguire la logica personalizzata in risposta all'aggiunta o alla rimozione di sottoscrittori, puoi specificare i metodi di aggiunta, rimozione e generazione per un evento. Ad esempio, in presenza di un oggetto dispendioso che viene richiesto solo per la segnalazione di un evento, puoi rinviare la creazione dell'oggetto fino al momento in cui un client non sottoscrive effettivamente l'evento.  
  
 Nell'esempio successivo viene illustrato come aggiungere a un evento metodi di aggiunta, rimozione e generazione personalizzati.  
  
 [!code-cpp[cx_events#03](../snippets/cpp/VS_Snippets_Misc/cx_events/cpp/cx_events/class1.h#03)]  
  
## Rimozione di un gestore eventi dal lato del sottoscrittore  
 In alcuni casi rari, potrebbe essere necessario rimuovere un gestore eventi per un evento precedentemente sottoscritto. Potresti ad esempio volerlo sostituire con un altro gestore eventi oppure potresti voler eliminare alcune risorse da esso dipendenti. Per rimuovere un gestore, devi archiviare l'oggetto EventRegistrationToken restituito dall'operazione `+=`. A questo punto puoi utilizzare l'operatore `-=` sul token per rimuovere il gestore eventi.  Il gestore originale potrebbe essere comunque richiamato anche dopo la rimozione. Pertanto, se intendi rimuovere un gestore eventi, crea un flag di membro e impostalo se l'evento viene rimosso, quindi nel gestore eventi controlla il flag e verifica immediatamente se è impostato. Nell'esempio successivo viene illustrato il modello di base.  
  
 [!code-cpp[cx_events#04](../snippets/cpp/VS_Snippets_Misc/cx_events/cpp/eventsupportinvs/eventclientclass.h#04)]  
  
## Note  
 È possibile associare più gestori a uno stesso evento. L'origine evento chiama in modo sequenziale tutti i gestori eventi dallo stesso thread. Se un ricevitore di eventi si blocca nel metodo del gestore eventi, impedisce all'origine evento di richiamare altri gestori eventi per quell'evento.  
  
 L'ordine in cui l'origine evento richiama i gestori eventi sui ricevitori di eventi non è garantito e può variare da una chiamata all'altra.  
  
## Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Delegati](../cppcx/delegates-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)