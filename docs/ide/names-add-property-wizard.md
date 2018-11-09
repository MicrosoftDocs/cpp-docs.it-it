---
title: Nomi, Aggiunta guidata proprietà
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.prop.overview
ms.assetid: 0453b7ea-89cb-41a1-80a2-d45f61589c0a
ms.openlocfilehash: 1cb37b2e8f3efd9ff9789a315e6bf32add730708
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636917"
---
# <a name="names-add-property-wizard"></a>Nomi, Aggiunta guidata proprietà

Usare questa procedura guidata per aggiungere una proprietà a un'interfaccia.

- **Tipo di proprietà**

   Imposta il tipo di proprietà da aggiungere. Per le interfacce dispatch MFC, specificare il tipo o selezionarlo dall'elenco predefinito. Se si specifica un'implementazione predefinita di una proprietà, l'opzione **Tipo di proprietà** è impostata sul tipo predefinito e non può essere modificata.

- **Nome proprietà**

   Imposta il nome della proprietà. Per le interfacce dispatch MFC associate ai controlli ActiveX, è possibile specificare il nome oppure selezionare un nome di proprietà predefinito dall'elenco predefinito. Se si specifica il nome di proprietà, il tipo di implementazione **Predefinito** non è disponibile. Vedere [Proprietà predefinite](../ide/stock-properties.md) per una descrizione delle proprietà dell'elenco.

   |Tipo interfaccia|Descrizione|
   |--------------------|-----------------|
   |Interfaccia duale ATL, interfaccia personalizzata e interfaccia personalizzata locale|Specificare un nome di proprietà.|
   |Interfaccia dispatch MFC, interfaccia dispatch del controllo ActiveX MFC|Specificare un nome di proprietà o selezionare una proprietà predefinita dall'elenco. Se si seleziona una proprietà dall'elenco, il valore appropriato viene visualizzato nella casella **Tipo di proprietà**. È possibile modificare il tipo, a seconda dell'opzione selezionata in **Tipo di implementazione**.|

- **Tipo restituito**

   Solo interfacce ATL. Imposta il tipo restituito per la proprietà. Per le interfacce duali, il tipo restituito è sempre `HRESULT` e questa casella non è disponibile. Per le interfacce personalizzate, è possibile selezionare un tipo restituito dall'elenco. `HRESULT` è consigliato poiché offre un modo standard per restituire errori.

- **Nome variabile**

   Solo interfacce dispatch MFC. Disponibile solo se si specifica **Variabile membro** in **Tipo di implementazione**. Imposta il nome della variabile membro a cui è associata la proprietà. Per impostazione predefinita, il nome della variabile è impostato su m_*PropertyName*. È possibile modificare il nome.

- **Funzione di notifica**

   Solo interfacce dispatch MFC. Disponibile solo se si specifica **Variabile membro** in **Tipo di implementazione**. Imposta il nome dalla funzione di notifica chiamata se la proprietà viene modificata. Per impostazione predefinita, il nome della funzione di notifica è impostato su On*PropertyName*Changed. È possibile modificare il nome.

- **Get**

   Per le interfacce dispatch MFC. Disponibile solo se si specificano i **metodi Get/Set** in **Tipo di implementazione**. Imposta il nome della funzione per ottenere la proprietà. Per impostazione predefinita, il nome della funzione Get è impostato su Get*PropertyName*. È possibile modificare il nome. Se si elimina il nome, la funzione [GetNotSupported](../mfc/reference/colecontrol-class.md#getnotsupported) viene inserita nella mappa di invio dell'interfaccia. La funzione Get*PropertyName* specifica la proprietà come accessibile in lettura.

- **Set**

   Solo interfacce dispatch MFC. Disponibile solo se si specificano i **metodi Get/Set** in **Tipo di implementazione**. Imposta il nome della funzione per impostare la proprietà. Per impostazione predefinita, il nome della funzione Set è impostato su Set*PropertyName*. È possibile modificare il nome. Se si elimina il nome, la funzione [SetNotSupported](../mfc/reference/colecontrol-class.md#setnotsupported) viene inserita nella mappa di invio dell'interfaccia. La funzione Set*PropertyName* specifica che la proprietà è accessibile in scrittura.

- **Tipo di implementazione**

   Solo interfacce dispatch MFC. Specifica come implementare la proprietà da aggiungere.

   |Tipo di implementazione|Descrizione|
   |-------------------------|-----------------|
   |**Predefinito**|Specifica un'implementazione predefinita per la proprietà selezionata in **Nome proprietà**. Valore predefinito. Per altre informazioni, vedere [Proprietà predefinite](../ide/stock-properties.md).<br /><br /> Se si specifica **Predefinito**, **Tipo di proprietà**, **Tipo parametro** e **Nome parametro** appaiono disattivate.|
   |**Variabile membro**|Specifica che la proprietà viene aggiunta come variabile membro. È possibile aggiungere proprietà personalizzate o la maggior parte delle proprietà predefinite come variabili membro. Non è possibile specificare **Variabile membro** per le proprietà **Caption**, **hWnd** e **Text**.<br /><br /> Specifica i nomi predefiniti in **Nome variabile** e **Funzione di notifica**. È possibile modificare il nome.|
   |**Metodi Get/Set**|Specifica che la proprietà viene aggiunta come funzione Get*PropertyName* e Set*PropertyName* per impostazione predefinita. Questi nomi sono visualizzati nella funzione **Get** e **Set**.<br /><br /> È possibile modificare il **Tipo di proprietà** predefinito che passa un valore per la funzione Get. È possibile specificare parametri per le funzioni **Get** e `Set`.|

- **Get**

   Per le interfacce ATL. Imposta la proprietà come accessibile in lettura, ovvero crea il metodo **Get** per il recupero della proprietà dall'oggetto. È necessario selezionare **Get**, `Put` o entrambe.

- **Put**

   Solo interfacce ATL. Imposta la proprietà come accessibile in scrittura, ovvero crea il metodo `Put` per l'impostazione o l'inserimento della proprietà dell'oggetto. È necessario selezionare **Get**, `Put` o entrambe. Se si seleziona questa opzione, è possibile scegliere uno dei due modi seguenti per implementare il metodo:

   |Opzione|Descrizione|
   |------------|-----------------|
   |**PropPut**|La funzione [PropPut](../windows/propput.md) restituisce una copia dell'oggetto. Questo è il valore predefinito e il modo più comune per impostare la proprietà come accessibile in scrittura.|
   |**PropPutRef**|La funzione [PropPutRef](../windows/propputref.md) restituisce un riferimento all'oggetto anziché restituire la copia dell'oggetto. Può essere utile usare questa opzione per gli oggetti, ad esempio struct o matrici di grandi dimensioni, che potrebbero avere un sovraccarico di inizializzazione.|

- **Attributi dei parametri**

   Solo interfacce ATL. Specifica se il parametro specificato tramite **Nome parametro** è **in**, **out**, entrambi o nessuno.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**in**|Indica che il parametro viene passato dalla routine chiamante alla routine chiamata.|
   |**out**|Indica che il parametro del puntatore viene restituito dalla routine chiamata alla routine chiamante (dal server al client).|

- **Tipo parametro**

   Imposta il tipo di dati del parametro. Selezionare il tipo dall'elenco.

- **Nome parametro**

   Imposta il nome di un parametro da aggiungere per la proprietà, se la proprietà ha parametri. Dopo aver fatto clic su **Aggiungi**, il nome del parametro viene visualizzato nell'**Elenco parametri**.

- **Elenco parametri**

   Visualizza l'elenco degli attributi da aggiungere alla proprietà. Ogni voce dell'elenco include il nome del parametro, il tipo di parametro e gli attributi. Usare **Aggiungi** e **Rimuovi** per aggiornare l'elenco.

- **Aggiungi**

   Aggiunge il parametro specificato in **Nome parametro** e **Tipo parametro** all'**Elenco parametri**. È necessario fare clic su **Aggiungi** per aggiungere un parametro all'elenco.

- **Rimuovi**

   Rimuove il parametro selezionato nell'**Elenco parametri**.

- **Proprietà predefinita**

   Solo interfaccia dispatch MFC. Imposta la proprietà come valore predefinito per l'interfaccia. Un'interfaccia può avere solo una proprietà predefinita. Dopo aver specificato la proprietà predefinita, per le altre proprietà aggiunte all'interfaccia questa casella non è disponibile.

## <a name="see-also"></a>Vedere anche

[Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)<br>
[Attributi IDL, Aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md)<br>
[Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)