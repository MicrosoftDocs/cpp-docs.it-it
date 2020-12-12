---
description: 'Altre informazioni su: aggiunta di un controllo (esercitazione di ATL, parte 2)'
title: Aggiunta di un controllo (Esercitazione di ATL, parte 2)
ms.custom: get-started-article
ms.date: 08/19/2019
ms.assetid: c9575a75-1064-41f1-9697-7aada560c669
ms.openlocfilehash: 91e0f6ba4b091b6ca213495fb81727714755c635
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166304"
---
# <a name="adding-a-control-atl-tutorial-part-2"></a>Aggiunta di un controllo (Esercitazione di ATL, parte 2)

In questo passaggio si aggiunge un controllo al progetto, lo si compila e lo si testa in una pagina Web.

## <a name="procedures"></a>Procedure

### <a name="to-add-an-object-to-an-atl-project"></a>Per aggiungere un oggetto a un progetto ATL

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul `Polygon` progetto.

1. Scegliere **Aggiungi** dal menu di scelta rapida e fare clic su **nuovo elemento** nel sottomenu.

    Verrà visualizzata la finestra di dialogo **Aggiungi nuovo elemento** . Le diverse categorie di oggetti sono elencate nella struttura ad albero a sinistra.

1. Fare clic sulla cartella **ATL** .

1. Dall'elenco dei modelli a destra selezionare **controllo ATL**. Scegliere **Aggiungi**. Verrà aperta la creazione guidata **controllo ATL** ed è possibile configurare il controllo.

1. Digitare `PolyCtl` come nome breve e notare che gli altri campi vengono completati automaticamente. Non fare clic su **fine** , perché è necessario apportare altre modifiche.

La pagina **nomi** della creazione guidata **controllo ATL** contiene i campi seguenti:

|Campo|Contenuto|
|-----------|--------------|
|**Nome breve**|Nome immesso per il controllo.|
|**Classe**|Nome della classe C++ creato per implementare il controllo.|
|**File con estensione h**|File creato per contenere la definizione della classe C++.|
|**File con estensione cpp**|File creato per contenere l'implementazione della classe C++.|
|**Coclasse**|Nome della classe del componente per questo controllo.|
|**Interfaccia**|Nome dell'interfaccia in cui il controllo implementerà i metodi e le proprietà personalizzati.|
|**Tipo**|Descrizione del controllo.|
|**ProgID**|Nome leggibile che può essere utilizzato per cercare il CLSID del controllo.|

È necessario modificare alcune impostazioni aggiuntive nella creazione guidata **controllo ATL** .

### <a name="to-enable-support-for-rich-error-information-and-connection-points"></a>Per abilitare il supporto per le informazioni dettagliate sugli errori e i punti di connessione

1. Fare clic su **Opzioni** per aprire la pagina **Opzioni** .

1. Selezionare la casella di controllo **punti di connessione** . Questa opzione Crea il supporto per un'interfaccia in uscita nel file IDL.

È anche possibile aggiungere interfacce per estendere la funzionalità del controllo.

### <a name="to-extend-the-controls-functionality"></a>Per estendere la funzionalità del controllo

1. Fare clic su **interfacce** per aprire la pagina **interfacce** .

1. Selezionare `IProvideClassInfo2` e fare clic sulla freccia in **su** per spostarlo nell'elenco **supportato** .

1. Selezionare `ISpecifyPropertyPages` e fare clic sulla freccia in **su** per spostarlo nell'elenco **supportato** .

È anche possibile rendere il controllo *inseribile*, ovvero incorporabile in applicazioni che supportano oggetti incorporati, ad esempio Excel o Word.

### <a name="to-make-the-control-insertable"></a>Per rendere il controllo inseribile

1. Fare clic su **aspetto** per aprire la pagina **aspetto** .

1. Consente di selezionare la casella di controllo **inseribile** .

Il poligono visualizzato dall'oggetto avrà un colore di riempimento a tinta unita, quindi è necessario aggiungere una `Fill Color` proprietà predefinita.

### <a name="to-add-a-fill-color-stock-property-and-create-the-control"></a>Per aggiungere una proprietà del colore di riempimento e creare il controllo

1. Fare clic su **proprietà predefinite** per aprire la pagina **proprietà predefinite** .

1. In **non supportato** scorrere verso il basso l'elenco delle proprietà predefinite disponibili. Selezionare `Fill Color` e fare clic sulla freccia in **su** per spostarlo nell'elenco **supportato** .

1. Scegliere **Fine**.

Quando la procedura guidata crea il controllo, vengono eseguite diverse modifiche al codice e aggiunte al file. Vengono creati i seguenti file:

|File|Descrizione|
|----------|-----------------|
|PolyCtl. h|Contiene la maggior parte dell'implementazione della classe C++ `CPolyCtl` .|
|PolyCtl. cpp|Contiene le parti rimanenti di `CPolyCtl` .|
|PolyCtl. RGS|Un file di testo che contiene lo script del registro di sistema usato per registrare il controllo.|
|PolyCtl.htm|Pagina Web contenente un riferimento al controllo appena creato.|

La procedura guidata apporta inoltre le modifiche seguenti al codice:

- Aggiunge un' `#include` istruzione ai file di intestazione precompilata per includere i file ATL necessari per supportare i controlli.

- Modifica Polygon. idl per includere i dettagli del nuovo controllo.

- Aggiunge il nuovo controllo alla mappa degli oggetti in Polygon. cpp.

A questo punto è possibile compilare il controllo per verificarne l'azione.

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

### <a name="to-build-and-test-the-control"></a>Per compilare e testare il controllo

1. Scegliere **Compila poligono** dal menu **Compila** .

    Al termine della compilazione del controllo, fare clic con il pulsante destro del mouse su PolyCtl.htm in **Esplora soluzioni** e selezionare **Visualizza nel browser**. Viene visualizzata la pagina Web HTML contenente il controllo. Dovrebbe essere visualizzata una pagina con il titolo "pagina di test ATL 8,0 per l'oggetto PolyCtl" e il controllo, il testo PolyCtl.

> [!NOTE]
> Se il controllo non è visibile, alcuni browser richiedono regolazioni delle impostazioni per eseguire i controlli ActiveX. Per informazioni sull'abilitazione dei controlli ActiveX, vedere la documentazione del browser.

> [!NOTE]
> Al termine di questa esercitazione, se viene visualizzato un messaggio di errore che segnala che non è possibile creare il file DLL, chiudere il file di PolyCtl.htm e il contenitore di test del controllo ActiveX e compilare di nuovo la soluzione. Se non è ancora possibile creare la DLL, riavviare il computer o disconnettersi se si utilizza Servizi terminal.

Successivamente, verrà aggiunta una proprietà personalizzata al controllo.

[Tornare al passaggio 1](../atl/creating-the-project-atl-tutorial-part-1.md) &#124; al [passaggio 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md)

## <a name="see-also"></a>Vedi anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
