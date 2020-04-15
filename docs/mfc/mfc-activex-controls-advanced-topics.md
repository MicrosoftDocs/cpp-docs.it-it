---
title: 'Controlli ActiveX MFC: argomenti avanzati'
ms.date: 09/12/2018
helpviewer_keywords:
- MFC ActiveX controls [MFC], error codes
- MFC ActiveX controls [MFC], accessing invisible dialog controls
- MFC ActiveX controls [MFC], advanced topics
- FireError method [MFC]
- MFC ActiveX controls [MFC], database classes
- MFC ActiveX controls [MFC], special keys
- PreTranslateMessage method [MFC]
- MFC ActiveX controls [MFC], parameterized property
- ThrowError method [MFC]
ms.assetid: e9e34abb-8e2d-461e-bb9c-a1aec5dcecbd
ms.openlocfilehash: c5e3be3915a0707f8df17d3c9ebe2eb0e4f623b2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364633"
---
# <a name="mfc-activex-controls-advanced-topics"></a>Controlli ActiveX MFC: argomenti avanzati

In questo articolo vengono trattati argomenti avanzati relativi allo sviluppo di controlli ActiveX. incluse le seguenti:

- [Utilizzo di classi di database nei controlli ActiveXUsing Database Classes in ActiveX Controls](#_core_using_database_classes_in_activex_controls)

- [Implementazione di una proprietà con parametriImplementing a Parametered Property](#_core_implementing_a_parameterized_property)

- [Gestione degli errori nel controllo ActiveXHandling Errors in Your ActiveX Control](#_core_handling_errors_in_your_activex_control)

- [Gestione dei tasti speciali nel controlloHandling Special Keys in the Control](#_core_handling_special_keys_in_your_control)

- [Accesso ai controlli della finestra di dialogo invisibili in fase di esecuzioneAccessing Dialog Controls That Are Invisible at Run Time](#_core_accessing_dialog_controls_that_are_invisible_at_run_time)

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

## <a name="using-database-classes-in-activex-controls"></a><a name="_core_using_database_classes_in_activex_controls"></a>Utilizzo di classi di database nei controlli ActiveXUsing Database Classes in ActiveX Controls

Poiché le classi di controlli ActiveX fanno parte della libreria di classi, è possibile applicare le stesse procedure e regole per l'utilizzo delle classi di database in un'applicazione MFC standard per lo sviluppo di controlli ActiveX che utilizzano le classi di database MFC.

Per una panoramica generale delle classi di database MFC, vedere Classi di [database MFC (DAO e ODBC)](../data/mfc-database-classes-odbc-and-dao.md). L'articolo introduce le classi ODBC MFC e le classi DAO MFC e indirizza l'utente a ulteriori dettagli su entrambi.

> [!NOTE]
> DAO è supportato tramite Office 2013. DAO 3.6 è la versione finale ed è considerata obsoleta. L'ambiente e le procedure guidate di Visual C, non supportano DAO (anche se le classi DAO sono incluse ed è comunque possibile utilizzarle). Microsoft consiglia di utilizzare [i modelli OLE DB](../data/oledb/ole-db-programming.md) o ODBC e [MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare DAO solo nella gestione delle applicazioni esistenti.

## <a name="implementing-a-parameterized-property"></a><a name="_core_implementing_a_parameterized_property"></a>Implementazione di una proprietà con parametriImplementing a Parametered Property

Una proprietà con parametri (talvolta denominata matrice di proprietà) è un metodo per esporre una raccolta omogenea di valori come singola proprietà del controllo. Ad esempio, è possibile utilizzare una proprietà con parametri per esporre una matrice o un dizionario come proprietà. In Visual Basic, tale proprietà è accessibile utilizzando la notazione di matrice:In Visual Basic, such property is accessed using array notation:

[!code-vb[NVC_MFC_AxVb#1](../mfc/codesnippet/visualbasic/mfc-activex-controls-advanced-topics_1.vb)]

Utilizzare l'Aggiunta guidata proprietà per implementare una proprietà con parametri. L'Aggiunta guidata proprietà implementa la proprietà aggiungendo una coppia di funzioni Get/Set che consentono all'utente del controllo di accedere alla proprietà utilizzando la notazione precedente o nella modalità standard.

Analogamente ai metodi e alle proprietà, anche le proprietà con parametri hanno un limite al numero di parametri consentiti. Nel caso delle proprietà con parametri, il limite è 15 parametri (con un parametro riservato per l'archiviazione del valore della proprietà).

La procedura seguente aggiunge una proprietà con parametri, denominata Array, a cui è possibile accedere come matrice bidimensionale di interi.

#### <a name="to-add-a-parameterized-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà con parametri mediante l'Aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi proprietà**.

1. Nella casella **Nome** proprietà `Array`digitare .

1. Nella casella **Tipo di proprietà** selezionare **short**.

1. Per Tipo **di implementazione** , fare clic su **Get/Set Metodi**.

1. Nelle caselle **Funzione Get** e **Funzione set** digitare nomi univoci per le funzioni Get e Set oppure accettare i nomi predefiniti.

1. Aggiungere un parametro, denominato *row* (tipo *short*), utilizzando i controlli **Parameter Name** e **Parameter Type.**

1. Aggiungere un secondo parametro denominato *column* (tipo *short*).

1. Fare clic su **Fine**.

### <a name="changes-made-by-the-add-property-wizard"></a>Modifiche apportate dall'Aggiunta guidata proprietà

Quando si aggiunge una proprietà personalizzata, l'Aggiunta guidata proprietà apporta modifiche all'intestazione della classe del controllo (. H) e l'attuazione (. CPP).

Le righe seguenti vengono aggiunte alla classe del controllo . File H:

[!code-cpp[NVC_MFC_AxUI#35](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_2.h)]

Questo codice dichiara due `GetArray` `SetArray` funzioni chiamate e che consentono all'utente di richiedere una riga e una colonna specifiche quando si accede alla proprietà.

Inoltre, l'Aggiunta guidata proprietà aggiunge le righe seguenti alla mappa di invio del controllo, che si trova nell'implementazione della classe del controllo (. CPP) :

[!code-cpp[NVC_MFC_AxUI#36](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_3.cpp)]

Infine, le implementazioni `GetArray` `SetArray` delle funzioni e vengono aggiunte alla fine del file . File CPP. Nella maggior parte dei casi, si modificherà la funzione Get per restituire il valore della proprietà. La funzione Set contiene in genere codice che deve essere eseguito, prima o dopo le modifiche alle proprietà.

Affinché questa proprietà sia utile, è possibile dichiarare una variabile membro di matrice bidimensionale nella classe del controllo, di tipo **short**, per archiviare i valori per la proprietà con parametri. È quindi possibile modificare la funzione Get per restituire il valore archiviato nella riga e nella colonna appropriate, come indicato dai parametri, e modificare la funzione Set per aggiornare il valore a cui fanno riferimento i parametri di riga e colonna.

## <a name="handling-errors-in-your-activex-control"></a><a name="_core_handling_errors_in_your_activex_control"></a>Gestione degli errori nel controllo ActiveXHandling Errors in Your ActiveX Control

Se si verificano condizioni di errore nel controllo, potrebbe essere necessario segnalare l'errore al contenitore di controllo. Esistono due metodi per segnalare gli errori, a seconda della situazione in cui si verifica l'errore. Se l'errore si verifica all'interno della funzione Get o Set di una proprietà o all'interno dell'implementazione di un metodo di automazione OLE, il controllo deve chiamare [COleControl::ThrowError](../mfc/reference/colecontrol-class.md#throwerror), che segnala all'utente del controllo che si è verificato un errore. Se l'errore si verifica in qualsiasi altro momento, il controllo deve chiamare [COleControl::FireError](../mfc/reference/colecontrol-class.md#fireerror), che genera un evento stock Error.

Per indicare il tipo di errore che si è `ThrowError` `FireError`verificato, il controllo deve passare un codice di errore a o . Un codice di errore è un codice di stato OLE, che ha un valore a 32 bit. Quando possibile, scegliere un codice di errore dal set standard di codici definito nell'OLECTL. File di intestazione H. Nella tabella seguente vengono riepilogati questi codici.

### <a name="activex-control-error-codes"></a>Codici di errore dei controlli ActiveX

|Errore|Descrizione|
|-----------|-----------------|
|CTL_E_ILLEGALFUNCTIONCALL|Chiamata di funzione non valida|
|CTL_E_OVERFLOW|Overflow|
|CTL_E_OUTOFMEMORY|Memoria insufficiente|
|CTL_E_DIVISIONBYZERO|Divisione per zero|
|CTL_E_OUTOFSTRINGSPACE|Spazio di stringa insufficiente|
|CTL_E_OUTOFSTACKSPACE|Spazio dello stack insufficiente|
|CTL_E_BADFILENAMEORNUMBER|Numero o nome file errato|
|CTL_E_FILENOTFOUND|Impossibile trovare il file|
|CTL_E_BADFILEMODE|Modalità file non valida|
|CTL_E_FILEALREADYOPEN|File già aperto|
|CTL_E_DEVICEIOERROR|Errore di I/O del dispositivo|
|CTL_E_FILEALREADYEXISTS|Il file esiste già|
|CTL_E_BADRECORDLENGTH|Lunghezza del record non valida|
|CTL_E_DISKFULL|Disco pieno|
|CTL_E_BADRECORDNUMBER|Numero di record non valido|
|CTL_E_BADFILENAME|Nome file non valido|
|CTL_E_TOOMANYFILES|Troppi file.|
|CTL_E_DEVICEUNAVAILABLE|Dispositivo non disponibile|
|CTL_E_PERMISSIONDENIED|Autorizzazione negata|
|CTL_E_DISKNOTREADY|Disco non pronto|
|CTL_E_PATHFILEACCESSERROR|Errore di accesso al percorso/file|
|CTL_E_PATHNOTFOUND|Impossibile trovare il percorso|
|CTL_E_INVALIDPATTERNSTRING|Stringa di ricerca non valida|
|CTL_E_INVALIDUSEOFNULL|Utilizzo non valido di NULL|
|CTL_E_INVALIDFILEFORMAT|Formato di file non valido|
|CTL_E_INVALIDPROPERTYVALUE|Valore della proprietà non valido|
|CTL_E_INVALIDPROPERTYARRAYINDEX|Indice di matrice di proprietà non valido|
|CTL_E_SETNOTSUPPORTEDATRUNTIME|Set non supportato in fase di esecuzione|
|CTL_E_SETNOTSUPPORTED|Set non supportato (proprietà di sola lettura)|
|CTL_E_NEEDPROPERTYARRAYINDEX|Necessario indice della matrice di proprietà|
|CTL_E_SETNOTPERMITTED|Set non consentito|
|CTL_E_GETNOTSUPPORTEDATRUNTIME|Get non supportato in fase di esecuzione|
|CTL_E_GETNOTSUPPORTED|Get non supportato (proprietà di sola scrittura)|
|CTL_E_PROPERTYNOTFOUND|Proprietà non trovata|
|CTL_E_INVALIDCLIPBOARDFORMAT|Formato degli Appunti non valido|
|CTL_E_INVALIDPICTURE|Immagine non valida|
|CTL_E_PRINTERERROR|Errore della stampante|
|CTL_E_CANTSAVEFILETOTEMP|Impossibile salvare il file in TEMP|
|CTL_E_SEARCHTEXTNOTFOUND|Impossibile trovare il testo cercato|
|CTL_E_REPLACEMENTSTOOLONG|Sostituzioni troppo lunghe|

Se necessario, utilizzare la macro CUSTOM_CTL_SCODE per definire un codice di errore personalizzato per una condizione non coperta da uno dei codici standard. Il parametro per questa macro deve essere un numero intero compreso tra 1000 e 32767, inclusi. Ad esempio:

[!code-cpp[NVC_MFC_AxUI#37](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_4.cpp)]

Se si crea un controllo ActiveX per sostituire un controllo VBX esistente, definire i codici di errore del controllo ActiveX con gli stessi valori numerici utilizzati dal controllo VBX per garantire la compatibilità dei codici di errore.

## <a name="handling-special-keys-in-the-control"></a><a name="_core_handling_special_keys_in_your_control"></a>Gestione dei tasti speciali nel controlloHandling Special Keys in the Control

In alcuni casi potresti voler gestire alcune combinazioni di tasti in modo speciale; ad esempio, inserire una nuova riga quando viene premuto il tasto INVIO in un controllo casella di testo su più righe o spostarsi tra un gruppo di controlli di modifica quando viene premuto un ID tasto direzionale.

Se la classe base del `COleControl`controllo ActiveX è , è possibile eseguire l'override di [CWnd::PreTranslateMessage](../mfc/reference/cwnd-class.md#pretranslatemessage) per gestire i messaggi prima che il contenitore li elabori. Quando si utilizza questa tecnica, restituire sempre **TRUE** `PreTranslateMessage`se si gestisce il messaggio nell'override di .

Esempio di codice seguente viene illustrato un possibile modo di gestire i messaggi correlati ai tasti direzionali.

[!code-cpp[NVC_MFC_AxUI#38](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_5.cpp)]

Per ulteriori informazioni sulla gestione delle interfacce della tastiera per un controllo ActiveX, vedere la documentazione di ActiveX SDK.

## <a name="accessing-dialog-controls-that-are-invisible-at-run-time"></a><a name="_core_accessing_dialog_controls_that_are_invisible_at_run_time"></a>Accesso ai controlli della finestra di dialogo invisibili in fase di esecuzioneAccessing Dialog Controls that Are Invisible at Run Time

È possibile creare controlli della finestra di dialogo che non dispongono di interfaccia utente e sono invisibili in fase di esecuzione. Se si aggiunge un invisibile in fase di esecuzione controllo ActiveX a una finestra di dialogo e utilizzare [CWnd::GetDlgItem](../mfc/reference/cwnd-class.md#getdlgitem) per accedere al controllo, il controllo non funzionerà correttamente. Per ottenere un oggetto che rappresenta il controllo, è invece necessario utilizzare una delle tecniche seguenti:

- Utilizzando l'Aggiunta guidata variabile membro, selezionare **Variabile di controllo** e quindi selezionare l'ID del controllo. Immettere un nome di variabile membro e selezionare la classe wrapper del controllo come **Tipo di controllo**.

     -oppure-

- Dichiarare una variabile locale e una sottoclasse come elemento della finestra di dialogo. Inserire codice analogo al`CMyCtrl` seguente (è la classe wrapper IDC_MYCTRL1 id del controllo):

   [!code-cpp[NVC_MFC_AxCont#19](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
