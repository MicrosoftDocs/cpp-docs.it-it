---
title: 'Controlli ActiveX MFC: Pagine delle proprietà | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DDP_ functions [MFC]
- MFC ActiveX controls [MFC], properties
- property pages [MFC], MFC ActiveX controls
- DoDataExchange method [MFC]
- OLEIVERB_PROPERTIES
- CPropertyPageDialog class [MFC]
- MFC ActiveX controls [MFC], property pages
ms.assetid: 1506f87a-9fd6-4505-8380-0dbc9636230e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 23f8aaf1e485d7ba38a561639f81b36d494a98f2
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930433"
---
# <a name="mfc-activex-controls-property-pages"></a>Controlli ActiveX MFC: pagine delle proprietà
Pagine delle proprietà consente un utente di un controllo ActiveX visualizzare e modificare le proprietà del controllo ActiveX. Queste proprietà sono accessibili tramite la chiamata di una finestra di dialogo di proprietà di controllo, che contiene uno o più pagine delle proprietà che forniscono un'interfaccia grafica personalizzata per visualizzare e modificare le proprietà del controllo.  
  
 Pagine proprietà del controllo ActiveX vengono visualizzate in due modi:  
  
-   Quando il verbo di proprietà del controllo (**OLEIVERB_PROPERTIES**) viene richiamato, il controllo apre una finestra di dialogo delle proprietà modale che contiene le pagine delle proprietà del controllo.  
  
-   Il contenitore può visualizzare il proprio finestra di dialogo non modale che mostra le pagine delle proprietà del controllo selezionato.  
  
 Finestra di dialogo Proprietà (illustrata nella figura riportata di seguito) è costituito da un'area per visualizzare la pagina delle proprietà corrente, le schede per lo spostamento tra le pagine delle proprietà e una raccolta di pulsanti che eseguono attività comuni quali la chiusura di finestra di dialogo pagina proprietà annullamento delle modifiche apportate oppure applicare immediatamente le modifiche per il controllo ActiveX.  
  
 ![Finestra di dialogo proprietà per Circ3](../mfc/media/vc373i1.gif "vc373i1")  
Finestra di dialogo proprietà  
  
 In questo articolo vengono trattati argomenti relativi all'utilizzo delle pagine delle proprietà in un controllo ActiveX. Sono inclusi:  
  
-   [Implementazione della pagina di proprietà predefinito per un controllo ActiveX](#_core_implementing_the_default_property_page)  
  
-   [Aggiunta di controlli a una pagina delle proprietà](#_core_adding_controls_to_a_property_page)  
  
-   [Personalizzazione della funzione DoDataExchange](#_core_customizing_the_dodataexchange_function)  
  
 Per ulteriori informazioni sull'utilizzo delle pagine delle proprietà in un controllo ActiveX, vedere gli articoli seguenti:  
  
-   [Controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md)  
  
-   [Controlli ActiveX MFC: uso delle pagine delle proprietà predefinite](../mfc/mfc-activex-controls-using-stock-property-pages.md)  
  
 Per informazioni sull'utilizzo delle finestre delle proprietà in un'applicazione MFC diverso da un controllo ActiveX, vedere [finestre delle proprietà](../mfc/property-sheets-mfc.md).  
  
##  <a name="_core_implementing_the_default_property_page"></a> Implementazione della pagina di proprietà predefinito  
 Se si utilizza la creazione guidata controllo ActiveX per creare il progetto di controllo, la creazione guidata controllo ActiveX fornisce una classe di pagina di proprietà predefinito per il controllo derivato dalla [COlePropertyPage classe](../mfc/reference/colepropertypage-class.md). Inizialmente, questa pagina delle proprietà è vuota, ma è possibile aggiungere qualsiasi controllo finestra di dialogo o un set di controlli a esso. Poiché la creazione guidata controllo ActiveX Crea classe di una sola proprietà pagina per impostazione predefinita, le classi di pagina di proprietà aggiuntive (anche derivato da `COlePropertyPage`) deve essere creata con Visualizzazione classi. Per ulteriori informazioni su questa procedura, vedere [controlli ActiveX MFC: aggiunta di un'altra pagina delle proprietà personalizzata](../mfc/mfc-activex-controls-adding-another-custom-property-page.md).  
  
 Implementazione di una proprietà pagina (in questo caso, il valore predefinito) è un processo costituito da tre passaggi:  
  
#### <a name="to-implement-a-property-page"></a>Per implementare una pagina delle proprietà  
  
1.  Aggiungere un `COlePropertyPage`-classe derivata per il progetto di controllo. Se il progetto è stato creato tramite la creazione guidata controllo ActiveX (come in questo caso), la classe delle pagine proprietà predefinito esiste già.  
  
2.  Utilizzare l'editor finestre per aggiungere tutti i controlli per il modello di pagina delle proprietà.  
  
3.  Personalizzare il `DoDataExchange` funzione del `COlePropertyPage`-derivata per lo scambio di valori compresi tra il controllo della pagina proprietà e il controllo ActiveX.  
  
 Ad esempio scopi, le procedure seguenti utilizzano un controllo semplice (denominato "Sample"). Esempio è stato creato utilizzando la creazione guidata controllo ActiveX e contiene solo la proprietà predefinita Caption.  
  
##  <a name="_core_adding_controls_to_a_property_page"></a> Aggiunta di controlli a una pagina delle proprietà  
  
#### <a name="to-add-controls-to-a-property-page"></a>Per aggiungere controlli a una pagina delle proprietà  
  
1.  Aprire il progetto di controllo, aprire Visualizzazione risorse.  
  
2.  Fare doppio clic sui **finestra di dialogo** icona directory.  
  
3.  Aprire il dialogo IDD_PROPPAGE_SAMPLE.  
  
     La creazione guidata controllo ActiveX aggiunge il nome del progetto alla fine della finestra di dialogo ID, in questo caso, esempio.  
  
4.  Trascinare e rilasciare il controllo selezionato dalla casella degli strumenti nell'area di finestra di dialogo.  
  
5.  Per questo esempio, un testo di un controllo di etichetta "Caption:" e un controllo casella di modifica con un identificatore IDC_CAPTION sono sufficienti.  
  
6.  Fare clic su **salvare** sulla barra degli strumenti per salvare le modifiche.  
  
 Ora che l'interfaccia utente è stato modificato, è necessario collegare la casella di modifica con la proprietà Caption. Questa operazione viene eseguita nella sezione seguente, modificando il `CSamplePropPage::DoDataExchange` (funzione).  
  
##  <a name="_core_customizing_the_dodataexchange_function"></a> Personalizzazione della funzione DoDataExchange  
 Pagina delle proprietà [CWnd:: DoDataExchange](../mfc/reference/cwnd-class.md#dodataexchange) funzione consente di collegare valori di proprietà di pagina con i valori effettivi delle proprietà nel controllo. Per stabilire i collegamenti, è necessario eseguire il mapping di campi della pagina proprietà appropriata per le proprietà dei rispettivi controlli.  
  
 Questi mapping vengono implementati utilizzando la pagina delle proprietà **DDP** funzioni. Il **DDP** funzioni il **DDX _** funzioni utilizzate nelle finestre MFC standard, con un'eccezione. Oltre al riferimento a una variabile membro **DDP** funzioni accettano il nome della proprietà del controllo. Ecco una voce tipica il `DoDataExchange` funzione per una pagina delle proprietà.  
  
 [!code-cpp[NVC_MFC_AxUI#31](../mfc/codesnippet/cpp/mfc-activex-controls-property-pages_1.cpp)]  
  
 Questa funzione associa la pagina delle proprietà *m_caption* variabile membro con la didascalia, utilizzando il `DDP_TEXT` (funzione).  
  
 Dopo aver creato il controllo della pagina proprietà inserito, è necessario stabilire un collegamento tra il controllo pagina delle proprietà, IDC_CAPTION e la proprietà del controllo effettivo, della barra del titolo, utilizzando il `DDP_Text` funzionano come descritto in precedenza.  
  
 [Pagine delle proprietà](../mfc/reference/property-pages-mfc.md) sono disponibili per altri tipi di controllo di finestra di dialogo, ad esempio caselle di controllo, pulsanti di opzione e caselle di riepilogo. Nella tabella seguente elenca il set intero di pagina delle proprietà **DDP** funzioni e gli scopi:  
  
### <a name="property-page-functions"></a>Pagina delle proprietà di funzioni  
  
|Nome funzione|Utilizzare questa funzione per collegare|  
|-------------------|-------------------------------|  
|`DDP_CBIndex`|Indice della stringa selezionata in una casella combinata con una proprietà del controllo.|  
|`DDP_CBString`|La stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere come il valore della proprietà ma non deve necessariamente corrispondere completamente.|  
|`DDP_CBStringExact`|La stringa selezionata in una casella combinata con una proprietà del controllo. La stringa selezionata e il valore della proprietà stringa deve corrispondere esattamente.|  
|`DDP_Check`|Una casella di controllo con una proprietà del controllo.|  
|`DDP_LBIndex`|Indice della stringa selezionata nella casella di riepilogo con una proprietà del controllo.|  
|`DDP_LBString`|La stringa selezionata in una casella di riepilogo con una proprietà del controllo. La stringa selezionata può iniziare con le stesse lettere come il valore della proprietà ma non deve necessariamente corrispondere completamente.|  
|`DDP_LBStringExact`|La stringa selezionata in una casella di riepilogo con una proprietà del controllo. La stringa selezionata e il valore della proprietà stringa deve corrispondere esattamente.|  
|`DDP_Radio`|Pulsante di opzione con una proprietà del controllo.|  
|`DDP_Text`|Testo con una proprietà del controllo.|  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Classe COlePropertyPage](../mfc/reference/colepropertypage-class.md)
