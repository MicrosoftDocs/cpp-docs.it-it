---
title: Aggiungere una proprietà
ms.date: 11/09/2018
f1_keywords:
- vc.codewiz.prop.overview
- vc.codewiz.prop.idlattributes
helpviewer_keywords:
- interfaces, adding properties
- properties [C++], adding to interfaces
- names, add property wizard
- IDL attributes, add property wizard
- stock properties, about stock properties
- stock properties
ms.assetid: 37bd4db7-efd3-4faa-87ad-64902ed16a36
ms.openlocfilehash: 125d7272b5b9fb0f656ba0621667885026e152fb
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228674"
---
# <a name="add-a-property"></a>Aggiungere una proprietà

È possibile usare l'[Aggiunta guidata proprietà](#names-add-property-wizard) per aggiungere un metodo a un'interfaccia del progetto.

**Per aggiungere una proprietà all'oggetto:**

1. Nella [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) fare clic con il pulsante destro del mouse sul nome dell'interfaccia a cui si vuole aggiungere la proprietà.

   > [!NOTE]
   > È anche possibile aggiungere proprietà alle interfacce dispatch che, se il progetto non è attribuito, sono nidificate all'interno del nodo della libreria.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi **Aggiungi proprietà**.

1. Nell'[Aggiunta guidata proprietà](#names-add-property-wizard) specificare le informazioni per creare la proprietà.

1. Specificare le impostazioni del linguaggio di definizione dell'interfaccia (IDL) per la proprietà nella pagina [Attributi IDL](#idl-attributes-add-property-wizard) della procedura guidata.

1. Selezionare **Fine** per aggiungere la proprietà.

I metodi `Get` e `Put` della proprietà sono visualizzati come due icone nella Visualizzazione classi, sotto l'interfaccia in cui è definita. È possibile fare doppio clic su una delle icone per visualizzare la dichiarazione di proprietà nel file con estensione idl.

- Per le interfacce ATL, le funzioni `Get` e `Put` vengono aggiunte al file con estensione cpp e i riferimenti alle funzioni vengono aggiunti al file con estensione h.

- Per le interfacce dispatch MFC, se si seleziona **Variabile membro** come tipo di implementazione, vengono aggiunti un metodo e una variabile alla classe di implementazione. Se si selezionano i **metodi Get/Set** come tipo di implementazione, vengono aggiunti due metodi alla classe di implementazione.

## <a name="in-this-section"></a>Contenuto della sezione

- [Nomi, Aggiunta guidata proprietà](#names-add-property-wizard)
- [Attributi IDL, Aggiunta guidata proprietà](#idl-attributes-add-property-wizard)
- [Proprietà predefinite](#stock-properties)

## <a name="names-add-property-wizard"></a>Nomi, Aggiunta guidata proprietà

Usare questa procedura guidata per aggiungere una proprietà a un'interfaccia.

- **Tipo di proprietà**

  Imposta il tipo di proprietà da aggiungere. Per le interfacce dispatch MFC, specificare il tipo o selezionarlo dall'elenco predefinito. Se si specifica un'implementazione predefinita di una proprietà, l'opzione **Tipo di proprietà** è impostata sul tipo predefinito e non può essere modificata.

- **Nome proprietà**

  Imposta il nome della proprietà. Per le interfacce dispatch MFC associate ai controlli ActiveX, è possibile specificare il nome oppure selezionare un nome di proprietà predefinito dall'elenco predefinito. Se si specifica il nome di proprietà, il tipo di implementazione **Predefinito** non è disponibile. Vedere [Proprietà predefinite](#stock-properties) per una descrizione delle proprietà dell'elenco.

  |Tipo interfaccia|Descrizione|
  |--------------------|-----------------|
  |Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Specificare un nome di proprietà.|
  |Interfaccia dispatch MFC, interfaccia dispatch del controllo ActiveX MFC|Specificare un nome di proprietà o selezionare una proprietà predefinita dall'elenco. Se si seleziona una proprietà dall'elenco, il valore appropriato viene visualizzato nella casella **Tipo di proprietà**. È possibile modificare il tipo, a seconda dell'opzione selezionata in **Tipo di implementazione**.|

- **Tipo restituito**

  Solo interfacce ATL. Imposta il tipo restituito per la proprietà. Per le interfacce duali, il tipo restituito è sempre `HRESULT` e questa casella non è disponibile. Per le interfacce personalizzate, è possibile selezionare un tipo restituito dall'elenco. `HRESULT` è consigliato poiché offre un modo standard per restituire errori.

- **Nome variabile**

  Solo interfacce dispatch MFC. Disponibile solo se si specifica **Variabile membro** in **Tipo di implementazione**. Imposta il nome della variabile membro a cui è associata la proprietà. Per impostazione predefinita, il nome della variabile è impostato su `m_`*PropertyName*. È possibile modificare il nome.

- **Funzione di notifica**

  Solo interfacce dispatch MFC. Disponibile solo se si specifica **Variabile membro** in **Tipo di implementazione**. Imposta il nome dalla funzione di notifica chiamata se la proprietà viene modificata. Per impostazione predefinita, il nome della funzione di notifica è impostato su `On` *PropertyName* `Changed` . È possibile modificare il nome.

- **Funzione Get**

  Per le interfacce dispatch MFC. Disponibile solo se si specificano i **metodi Get/Set** in **Tipo di implementazione**. Imposta il nome della funzione per ottenere la proprietà. Per impostazione predefinita, il nome della funzione `Get` è impostato su `Get`*PropertyName*. È possibile modificare il nome. Se si elimina il nome, la funzione [GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported) viene inserita nella mappa di invio dell'interfaccia. La funzione `Get`*PropertyName* specifica la proprietà come accessibile in lettura.

- **Set**

  Solo interfacce dispatch MFC. Disponibile solo se si specificano i **metodi Get/Set** in **Tipo di implementazione**. Imposta il nome della funzione per impostare la proprietà. Per impostazione predefinita, il nome della funzione `Set` è impostato su `Set`*PropertyName*. È possibile modificare il nome. Se si elimina il nome, la funzione [SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported) viene inserita nella mappa di invio dell'interfaccia. La funzione `Set`*PropertyName* specifica che la proprietà è accessibile in scrittura.

- **Tipo di implementazione**

  Solo interfacce dispatch MFC. Specifica come implementare la proprietà da aggiungere.

  |Tipo di implementazione|Descrizione|
  |-------------------------|-----------------|
  |**Predefinito**|Specifica un'implementazione predefinita per la proprietà selezionata in **Nome proprietà**. Valore predefinito. Per altre informazioni, vedere [Proprietà predefinite](#stock-properties).<br /><br /> Se si specifica **Predefinito**, **Tipo di proprietà**, **Tipo parametro** e **Nome parametro** appaiono disattivate.|
  |**Variabile membro**|Specifica che la proprietà viene aggiunta come variabile membro. È possibile aggiungere proprietà personalizzate o la maggior parte delle proprietà predefinite come variabili membro. Non è possibile specificare la **variabile membro** per le `Caption` `hWnd` proprietà, e `Text` .<br /><br /> Specifica i nomi predefiniti in **Nome variabile** e **Funzione di notifica**. È possibile modificare il nome.|
  |**Metodi Get/Set**|Specifica che la proprietà viene aggiunta come funzione `Get`*PropertyName* e `Set`*PropertyName* per impostazione predefinita. Questi nomi sono visualizzati nella funzione **Get** e **Set**.<br /><br /> È possibile modificare il **Tipo di proprietà** predefinito che passa un valore per la funzione Get. È possibile specificare parametri per le funzioni `Get` e `Set`.|

- **Funzione Get**

  Per le interfacce ATL. Imposta la proprietà come accessibile in lettura, ovvero crea il metodo `Get` per il recupero della proprietà dall'oggetto. Selezionare **Get**, **Put** o entrambe.

- **Put**

  Solo interfacce ATL. Imposta la proprietà come accessibile in scrittura, ovvero crea il metodo `Put` per l'impostazione o l'inserimento della proprietà dell'oggetto. Selezionare **Get**, **Put** o entrambe. Se si seleziona questa opzione, è possibile scegliere uno dei due modi seguenti per implementare il metodo:

  |Opzione|Description|
  |------------|-----------------|
  |**PropPut**|La funzione [PropPut](../windows/propput.md) restituisce una copia dell'oggetto. Questo è il valore predefinito e il modo più comune per impostare la proprietà come accessibile in scrittura.|
  |**PropPutRef**|La funzione [PropPutRef](../windows/propputref.md) restituisce un riferimento all'oggetto anziché restituire la copia dell'oggetto. Può essere utile usare questa opzione per gli oggetti, ad esempio struct o matrici di grandi dimensioni, che potrebbero avere un sovraccarico di inizializzazione.|

- **Attributi parametro**

  Solo interfacce ATL. Imposta un valore che indica se il parametro specificato in base al **nome del parametro** è `in` , `out` , both o None.

  |Opzione|Description|
  |------------|-----------------|
  |`in`|Indica che il parametro viene passato dalla routine chiamante alla routine chiamata.|
  |`out`|Indica che il parametro del puntatore viene restituito dalla routine chiamata alla routine chiamante (dal server al client).|

- **Tipo di parametro**

  Imposta il tipo di dati del parametro. Selezionare il tipo dall'elenco.

- **Nome parametro**

  Imposta il nome di un parametro da aggiungere per la proprietà, se la proprietà ha parametri. Dopo aver selezionato **Aggiungi**, il nome del parametro viene visualizzato nell'**Elenco parametri**.

- **Elenco di parametri**

  Visualizza l'elenco degli attributi da aggiungere alla proprietà. Ogni voce dell'elenco include il nome del parametro, il tipo di parametro e gli attributi. Usare **Aggiungi** e **Rimuovi** per aggiornare l'elenco.

- **Aggiungere**

  Aggiunge il parametro specificato in **Nome parametro** e **Tipo parametro** all'**Elenco parametri**. Selezionare **Aggiungi** per aggiungere un parametro all'elenco.

- **Rimuovi**

  Rimuove il parametro selezionato nell'**Elenco parametri**.

- **Proprietà predefinita**

  Solo interfaccia dispatch MFC. Imposta la proprietà come valore predefinito per l'interfaccia. Un'interfaccia può avere solo una proprietà predefinita. Dopo aver specificato la proprietà predefinita, per le altre proprietà aggiunte all'interfaccia questa casella non è disponibile.

## <a name="idl-attributes-add-property-wizard"></a>Attributi IDL, Aggiunta guidata proprietà

Usare questa pagina dell'Aggiunta guidata proprietà per specificare le impostazioni del linguaggio di definizione dell'interfaccia (IDL) per la proprietà.

- `id`

  Imposta l'ID numerico che identifica la proprietà. Questa opzione non è disponibile per le proprietà di interfacce personalizzate. Vedere [id](/windows/win32/Midl/id) in *MIDL Reference* (Riferimento MIDL).

- `helpcontext`

  Specifica un ID contesto che consente all'utente di visualizzare informazioni sulla proprietà corrente nel file della Guida. Vedere [helpcontext](/windows/win32/Midl/helpcontext) in *MIDL Reference* (Riferimento MIDL).

- `helpstring`

  Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata. Per impostazione predefinita, è impostato sul **`property`** &nbsp; * &nbsp; nome della proprietà*. Vedere [helpstring](/windows/win32/Midl/helpstring) in *MIDL Reference* (Riferimento MIDL).

### <a name="other-options"></a>Altre opzioni

Non tutte le opzioni sono disponibili per tutti i tipi di proprietà.

|Opzione|Description|
|------------|-----------------|
|`bindable`|Indica che la proprietà supporta il data binding. Vedere [bindable](/windows/win32/Midl/bindable) in *MIDL Reference* (Riferimento MIDL). Per l'implementazione predefinita della proprietà, questa opzione è impostata per impostazione predefinita e non può essere modificata.|
|`defaultbind`|Indica la singola proprietà associabile che meglio rappresenta l'oggetto. Vedere [defaultbind](/windows/win32/Midl/defaultbind) in *MIDL Reference* (Riferimento MIDL).|
|`displaybind`|Indica che la proprietà deve essere visualizzata all'utente come associabile. Vedere [displaybind](/windows/win32/Midl/displaybind) in *MIDL Reference* (Riferimento MIDL).|
|`immediatebind`|Indica che tutte le modifiche apportate alla proprietà di un oggetto associato a dati verranno immediatamente notificate al database. Vedere [immediatebind](/windows/win32/Midl/immediatebind) in *MIDL Reference* (Riferimento MIDL).|
|`defaultcollelem`|Indica che la proprietà è una funzione di accesso per un elemento della raccolta predefinita. Vedere [defaultcollelem](/windows/win32/Midl/defaultcollelem) in *MIDL Reference* (Riferimento MIDL).|
|`nonbrowsable`|Assegna un tag a un membro di interfaccia o interfaccia dispatch che non deve essere visualizzato in un visualizzatore di proprietà. Vedere [nonbrowsable](/windows/win32/Midl/nonbrowsable) in *MIDL Reference* (Riferimento MIDL).|
|`requestedit`|Indica che la proprietà supporta la notifica `OnRequestEdit`. Vedere [requestedit](/windows/win32/Midl/requestedit) in *MIDL Reference* (Riferimento MIDL). Per l'implementazione predefinita della proprietà, questa opzione è impostata per impostazione predefinita e non può essere modificata.|
|`source`|Indica che un membro della proprietà è un'origine di eventi. Vedere [source](/windows/win32/Midl/source) in *MIDL Reference* (Riferimento MIDL).|
|`hidden`|Indica che la proprietà esiste ma non deve essere visualizzata in un visualizzatore per utenti. Vedere [hidden](/windows/win32/Midl/hidden) in *MIDL Reference* (Riferimento MIDL).|
|`restricted`|Specifica che la proprietà non può essere chiamata in modo arbitrario. Vedere [restricted](/windows/win32/Midl/restricted) in *MIDL Reference* (Riferimento MIDL).|
|`local`|Specifica al compilatore MIDL che la proprietà non è remota. Vedere [local](/windows/win32/Midl/local) in *MIDL Reference* (Riferimento MIDL).|

## <a name="stock-properties"></a>Proprietà predefinite

Se si aggiunge una proprietà a un'interfaccia dispatch di MFC usando l'[Aggiunta guidata proprietà](#idl-attributes-add-property-wizard), è possibile scegliere una proprietà predefinita dall'elenco **Nome della proprietà** della pagina [Nomi](../ide/names-add-property-wizard.md) della procedura guidata. Di seguito sono riportate le proprietà:

|Nome proprietà|Descrizione|
|-------------------|-----------------|
|`Appearance`|Restituisce o imposta un valore che determina l'aspetto del controllo. La proprietà `Appearance` del controllo può includere o omettere effetti di visualizzazione tridimensionale. Questa è una proprietà di lettura/scrittura ambientale.|
|`BackColor`|Restituisce o imposta la proprietà ambientale `BackColor` del controllo su un colore della tavolozza (RGB) o un colore di sistema predefinito. Per impostazione predefinita, il relativo valore corrisponde al colore di sfondo del contenitore del controllo. Questa è una proprietà di lettura/scrittura ambientale.|
|`BorderStyle`|Restituisce o imposta lo stile del bordo per un controllo. Questa è una proprietà di lettura/scrittura.|
|`Caption`|Restituisce o imposta la proprietà `Caption` del controllo. La didascalia è il titolo della finestra. `Caption` non ha alcun tipo di implementazione **variabile membro**.|
|`Enabled`|Restituisce o imposta la proprietà `Enabled` del controllo. Un controllo abilitato può rispondere agli eventi generati dall'utente.|
|`Font`|Restituisce o imposta il tipo di carattere dell'ambiente del controllo. Null se il controllo non ha alcun tipo di carattere.|
|`ForeColor`|Restituisce o imposta la proprietà ambientale `ForeColor` del controllo.|
|`hWnd`|Restituisce o imposta la proprietà `hWnd` del controllo. `hWnd` non ha alcun tipo di implementazione **variabile membro**.|
|`ReadyState`|Restituisce o imposta la proprietà `ReadyState` del controllo. Un controllo può essere non inizializzato, inizializzato, in caricamento, interattivo o completo. Per altre informazioni, vedere [READYSTATE](/previous-versions/aa768362\(v=vs.85\)) in *Internet SDK*.|
|`Text`|Restituisce o imposta il testo contenuto in un controllo. `Text` non ha alcun tipo di implementazione **variabile membro**.|
