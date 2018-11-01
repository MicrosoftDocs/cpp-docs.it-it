---
title: Aggiunta di un controllo (Esercitazione di ATL, parte 2)
ms.custom: get-started-article
ms.date: 09/26/2018
ms.assetid: c9575a75-1064-41f1-9697-7aada560c669
ms.openlocfilehash: b59d8f05e151e1d543f6aa6bb2b62ae0f59dc36a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50428652"
---
# <a name="adding-a-control-atl-tutorial-part-2"></a>Aggiunta di un controllo (Esercitazione di ATL, parte 2)

In questo passaggio, si verrà aggiungere un controllo al progetto, compilarlo ed eseguirne il test in una pagina Web.

## <a name="procedures"></a>Procedure

### <a name="to-add-an-object-to-an-atl-project"></a>Per aggiungere un oggetto a un progetto ATL

1. Nelle **Esplora soluzioni**, fare doppio clic su di `Polygon` progetto.

1. Puntare **Add** nel menu di scelta rapida e fare clic su **nuovo elemento** nel sottomenu.

    Verrà visualizzata la finestra di dialogo **Aggiungi nuovo elemento**. Nella struttura ad albero a sinistra sono elencate le varie categorie di oggetti.

1. Scegliere il **ATL** cartella.

1. Nell'elenco dei modelli a destra, selezionare **del controllo ATL**. Fare clic su **Aggiungi**. Il **del controllo ATL** procedura guidata si aprirà, ed è possibile configurare il controllo.

1. Tipo `PolyCtl` come il nome breve e notare che gli altri campi vengono completati automaticamente. Non fare clic **fine** ancora, in quanto è necessario apportare alcune modifiche.

Il **del controllo ATL** della procedura guidata **nomi** pagina contiene i campi seguenti:

|Campo|Sommario|
|-----------|--------------|
|**Nome breve**|Il nome che immesso per il controllo.|
|**Classe**|Il nome della classe C++ creato per implementare il controllo.|
|**File con estensione h**|Il file creato per contenere la definizione della classe C++.|
|**File con estensione cpp**|Il file creato per contenere l'implementazione della classe C++.|
|**Coclasse**|Il nome della classe del componente di questo controllo.|
|**Interface**|Il nome dell'interfaccia in cui il controllo implementerà relativi metodi e proprietà personalizzati.|
|**Type**|Una descrizione per il controllo.|
|**ProgID**|Nome leggibile che può essere utilizzato per cercare il CLSID del controllo.|

È necessario apportare diverse impostazioni aggiuntive nel **del controllo ATL** procedura guidata.

### <a name="to-enable-support-for-rich-error-information-and-connection-points"></a>Per abilitare il supporto per la connessione e informazioni dettagliate sull'errore fa riferimento

1. Fare clic su **le opzioni** per aprire il **opzioni** pagina.

1. Selezionare il **punti di connessione** casella di controllo. Verrà creato il supporto per un'interfaccia in uscita nel file IDL.

È anche possibile aggiungere le interfacce per estendere la funzionalità del controllo.

### <a name="to-extend-the-controls-functionality"></a>Per estendere le funzionalità del controllo

1. Fare clic su **interfacce** per aprire il **interfacce** pagina.

1. Selezionare `IProvideClassInfo2` e fare clic sui **iscrizione** freccia per spostarla nel **supportati** elenco.

1. Selezionare `ISpecifyPropertyPages` e fare clic sui **iscrizione** freccia per spostarla nel **supportati** elenco.

È anche possibile rendere il controllo inseribile, il che significa che può essere incorporato in applicazioni che supportano gli oggetti incorporati, ad esempio Excel o Word.

### <a name="to-make-the-control-insertable"></a>Per rendere il controllo inseribile

1. Fare clic su **aspetto** per aprire il **aspetto** pagina.

1. Selezionare il **Insertable** casella di controllo.

Il poligono visualizzato dall'oggetto avrà un colore di riempimento a tinta unita, pertanto è necessario aggiungere un `Fill Color` proprietà predefinita.

### <a name="to-add-a-fill-color-stock-property-and-create-the-control"></a>Per aggiungere una proprietà predefinita colore riempimento e creare il controllo

1. Fare clic su **proprietà predefinite** per aprire il **proprietà predefinite** pagina.

1. Sotto **non è supportato**, scorrere verso il basso l'elenco delle possibili proprietà predefinite. Selezionare `Fill Color` e fare clic sui **iscrizione** freccia per spostarla nel **supportati** elenco.

1. Le opzioni per il controllo è stata completata. Scegliere **Fine**.

Come la procedura guidata ha creato il controllo, diverse modifiche al codice e aggiunte al file si è verificato. Sono stati creati i file seguenti:

|File|Descrizione|
|----------|-----------------|
|PolyCtl. H|Contiene la maggior parte dell'implementazione della classe C++ `CPolyCtl`.|
|PolyCtl|Contiene le parti rimanenti di `CPolyCtl`.|
|PolyCtl.rgs|Un file di testo che contiene lo script del Registro di sistema utilizzato per registrare il controllo.|
|PolyCtl. htm|Una pagina Web contenente un riferimento al controllo appena creato.|

La procedura guidata vengono eseguite anche le modifiche al codice seguente:

- Aggiunto un `#include` istruzione ai file stdafx. h e stdafx. h per includere la libreria ATL i file necessari per supportare i controlli.

- Polygon. idl modificato per includere i dettagli del nuovo controllo.

- Aggiunto il nuovo controllo alla mappa dell'oggetto in Polygon.

A questo punto è possibile compilare il controllo per vederlo in azione.

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

### <a name="to-build-and-test-the-control"></a>Per compilare e testare il controllo

1. Nel **compilare** menu, fare clic su **compilare poligono**.

    Al termine della compilazione, il controllo pulsante destro del mouse in PolyCtl. htm **Esplora soluzioni** e selezionare **Visualizza nel Browser**. Verrà visualizzata la pagina HTML Web contenente il controllo. Verrà visualizzata una pagina con il titolo "Pagina ATL test 8.0 per l'oggetto PolyCtl" e il testo PolyCtl. Si tratta del controllo.

> [!NOTE]
> Se il controllo non è visibile, significa che alcuni browser richiedono modifiche delle impostazioni per eseguire i controlli ActiveX. Consultare la documentazione del browser su come abilitare i controlli ActiveX.

> [!NOTE]
> Durante il completamento di questa esercitazione, se si riceve un messaggio di errore in cui non è possibile creare il file DLL, chiudere il file PolyCtl htm e il contenitore di Test del controllo ActiveX e compilare nuovamente la soluzione. Se non è possibile creare la DLL, riavviare il computer o disconnettersi (se si usa servizi Terminal).

Successivamente, si aggiungerà una proprietà personalizzata al controllo.

[Al passaggio 1](../atl/creating-the-project-atl-tutorial-part-1.md) &#124; [al passaggio 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
