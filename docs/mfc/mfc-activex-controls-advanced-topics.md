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
ms.openlocfilehash: 9f1fa862a30a83cbda049fc63bac6c33a101587b
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74305385"
---
# <a name="mfc-activex-controls-advanced-topics"></a>Controlli ActiveX MFC: argomenti avanzati

Questo articolo illustra gli argomenti avanzati correlati allo sviluppo di controlli ActiveX. Sono inclusi:

- [Utilizzo di classi di database nei controlli ActiveX](#_core_using_database_classes_in_activex_controls)

- [Implementazione di una proprietà con parametri](#_core_implementing_a_parameterized_property)

- [Gestione degli errori nel controllo ActiveX](#_core_handling_errors_in_your_activex_control)

- [Gestione di chiavi speciali nel controllo](#_core_handling_special_keys_in_your_control)

- [Accesso ai controlli della finestra di dialogo invisibili in fase di esecuzione](#_core_accessing_dialog_controls_that_are_invisible_at_run_time)

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

##  <a name="_core_using_database_classes_in_activex_controls"></a>Utilizzo di classi di database nei controlli ActiveX

Poiché le classi di controlli ActiveX fanno parte della libreria di classi, è possibile applicare le stesse procedure e regole per l'utilizzo di classi di database in un'applicazione MFC standard allo sviluppo di controlli ActiveX che utilizzano le classi di database MFC.

Per una panoramica generale delle classi di database MFC, vedere [classi di database MFC (DAO e ODBC)](../data/mfc-database-classes-odbc-and-dao.md). In questo articolo vengono presentate le classi ODBC MFC e le classi DAO MFC e vengono fornite informazioni dettagliate su entrambi.

> [!NOTE]
> DAO è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta. Gli ambienti C++ visivi e le procedure guidate non supportano DAO (sebbene le classi DAO siano incluse ed è comunque possibile usarle). Microsoft consiglia di utilizzare [OLE DB modelli](../data/oledb/ole-db-programming.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare solo DAO per la gestione delle applicazioni esistenti.

##  <a name="_core_implementing_a_parameterized_property"></a>Implementazione di una proprietà con parametri

Una proprietà con parametri (talvolta denominata matrice di proprietà) è un metodo per esporre una raccolta omogenea di valori come una singola proprietà del controllo. Ad esempio, è possibile usare una proprietà con parametri per esporre una matrice o un dizionario come proprietà. In Visual Basic, è possibile accedere a tale proprietà utilizzando la notazione di matrice:

[!code-vb[NVC_MFC_AxVb#1](../mfc/codesnippet/visualbasic/mfc-activex-controls-advanced-topics_1.vb)]

Utilizzare l'aggiunta guidata proprietà per implementare una proprietà con parametri. L'aggiunta guidata proprietà implementa la proprietà tramite l'aggiunta di una coppia di funzioni get/set che consentono all'utente del controllo di accedere alla proprietà utilizzando la notazione precedente o nella modalità standard.

Analogamente ai metodi e alle proprietà, le proprietà con parametri hanno anche un limite al numero di parametri consentiti. Nel caso di proprietà con parametri, il limite è di 15 parametri (con un parametro riservato per l'archiviazione del valore della proprietà).

Nella procedura seguente viene aggiunta una proprietà con parametri, denominata Array, a cui è possibile accedere come matrice bidimensionale di numeri interi.

#### <a name="to-add-a-parameterized-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà con parametri utilizzando l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi proprietà**.

1. Nella casella **nome proprietà** Digitare `Array`.

1. Nella casella **tipo proprietà** selezionare **short**.

1. Per tipo di **implementazione** , fare clic su **metodi get/set**.

1. Nelle caselle **Get Function** e **set Function** digitare nomi univoci per le funzioni Get e set o accettare i nomi predefiniti.

9. Aggiungere un parametro, denominato *Row* (Type *short*), usando il **nome del parametro** e i controlli del **tipo di parametro** .

10. Aggiungere un secondo parametro denominato *Column* (Type *short*).

11. Fare clic su **Fine**.

### <a name="changes-made-by-the-add-property-wizard"></a>Modifiche apportate dall'aggiunta guidata proprietà

Quando si aggiunge una proprietà personalizzata, l'aggiunta guidata proprietà apporta modifiche all'intestazione della classe del controllo (. H) e l'implementazione di (. File CPP).

Alla classe Control vengono aggiunte le righe seguenti. File H:

[!code-cpp[NVC_MFC_AxUI#35](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_2.h)]

Questo codice dichiara due funzioni denominate `GetArray` e `SetArray` che consentono all'utente di richiedere una riga e una colonna specifiche durante l'accesso alla proprietà.

Inoltre, l'aggiunta guidata proprietà aggiunge le righe seguenti alla mappa di invio del controllo, che si trova nell'implementazione della classe del controllo (. File CPP):

[!code-cpp[NVC_MFC_AxUI#36](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_3.cpp)]

Infine, le implementazioni delle funzioni `GetArray` e `SetArray` vengono aggiunte alla fine di. File CPP. Nella maggior parte dei casi, la funzione Get viene modificata in modo da restituire il valore della proprietà. La funzione set conterrà in genere il codice che deve essere eseguito, prima o dopo la modifica della proprietà.

Affinché questa proprietà risulti utile, è possibile dichiarare una variabile membro della matrice bidimensionale nella classe del controllo, di tipo **short**, per archiviare i valori per la proprietà con parametri. È quindi possibile modificare la funzione Get per restituire il valore archiviato in corrispondenza della riga e della colonna corrette, come indicato dai parametri, e modificare la funzione set per aggiornare il valore a cui fanno riferimento i parametri di riga e colonna.

##  <a name="_core_handling_errors_in_your_activex_control"></a>Gestione degli errori nel controllo ActiveX

Se si verificano condizioni di errore nel controllo, potrebbe essere necessario segnalare l'errore al contenitore del controllo. Esistono due metodi per segnalare gli errori, a seconda della situazione in cui si verifica l'errore. Se l'errore si verifica all'interno di una funzione Get o set di una proprietà o nell'implementazione di un metodo di automazione OLE, il controllo deve chiamare [COleControl:: ThrowError](../mfc/reference/colecontrol-class.md#throwerror), che segnala all'utente del controllo che si è verificato un errore. Se l'errore si verifica in qualsiasi altro momento, il controllo deve chiamare [COleControl:: FireError (](../mfc/reference/colecontrol-class.md#fireerror), che genera un evento di errore di azione.

Per indicare il tipo di errore che si è verificato, il controllo deve passare un codice di errore per `ThrowError` o `FireError`. Un codice di errore è un codice di stato OLE, che ha un valore a 32 bit. Quando possibile, scegliere un codice di errore dal set standard di codici definiti in OLECTL. File di intestazione H. Nella tabella seguente vengono riepilogati questi codici.

### <a name="activex-control-error-codes"></a>Codici di errore del controllo ActiveX

|Errore|Descrizione|
|-----------|-----------------|
|CTL_E_ILLEGALFUNCTIONCALL|Chiamata di funzione non valida|
|CTL_E_OVERFLOW|Overflow|
|CTL_E_OUTOFMEMORY|Memoria esaurita|
|CTL_E_DIVISIONBYZERO|Divisione per zero|
|CTL_E_OUTOFSTRINGSPACE|Spazio di stringa insufficiente|
|CTL_E_OUTOFSTACKSPACE|Spazio dello stack insufficiente|
|CTL_E_BADFILENAMEORNUMBER|Numero o nome file errato|
|CTL_E_FILENOTFOUND|Il file non è stato trovato|
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
|CTL_E_INVALIDUSEOFNULL|Uso non valido di NULL|
|CTL_E_INVALIDFILEFORMAT|Formato di file non valido|
|CTL_E_INVALIDPROPERTYVALUE|Valore di proprietà non valido|
|CTL_E_INVALIDPROPERTYARRAYINDEX|Indice della matrice di proprietà non valido|
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
|CTL_E_CANTSAVEFILETOTEMP|Non è possibile salvare il file in TEMP|
|CTL_E_SEARCHTEXTNOTFOUND|Impossibile trovare il testo cercato|
|CTL_E_REPLACEMENTSTOOLONG|Sostituzioni troppo lunghe|

Se necessario, usare la macro CUSTOM_CTL_SCODE per definire un codice di errore personalizzato per una condizione non coperta da uno dei codici standard. Il parametro per questa macro deve essere un numero intero compreso tra 1000 e 32767 inclusi. Ad esempio:

[!code-cpp[NVC_MFC_AxUI#37](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_4.cpp)]

Se si sta creando un controllo ActiveX per sostituire un controllo VBX esistente, definire i codici di errore del controllo ActiveX con gli stessi valori numerici usati dal controllo VBX per assicurarsi che i codici di errore siano compatibili.

##  <a name="_core_handling_special_keys_in_your_control"></a>Gestione di chiavi speciali nel controllo

In alcuni casi è possibile che si desideri gestire determinate combinazioni di tasti in modo particolare. inserire, ad esempio, una nuova riga quando si preme il tasto invio in un controllo casella di testo su più righe o spostarsi tra un gruppo di controlli di modifica quando si preme un ID di chiave direzionale.

Se la classe base del controllo ActiveX è `COleControl`, è possibile eseguire l'override di [CWnd::P retranslatemessage](../mfc/reference/cwnd-class.md#pretranslatemessage) per gestire i messaggi prima che vengano elaborati dal contenitore. Quando si usa questa tecnica, restituire sempre **true** se si gestisce il messaggio nell'override di `PreTranslateMessage`.

Nell'esempio di codice seguente viene illustrata una possibile modalità di gestione dei messaggi correlati ai tasti direzionali.

[!code-cpp[NVC_MFC_AxUI#38](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_5.cpp)]

Per ulteriori informazioni sulla gestione delle interfacce della tastiera per un controllo ActiveX, vedere la documentazione di ActiveX SDK.

##  <a name="_core_accessing_dialog_controls_that_are_invisible_at_run_time"></a>Accesso ai controlli della finestra di dialogo invisibili in fase di esecuzione

È possibile creare controlli della finestra di dialogo che non dispongono di interfaccia utente e che sono invisibili in fase di esecuzione. Se si aggiunge un controllo ActiveX invisibile in fase di esecuzione a una finestra di dialogo e si utilizza [CWnd:: GetDlgItem](../mfc/reference/cwnd-class.md#getdlgitem) per accedere al controllo, il controllo non funzionerà correttamente. È invece consigliabile usare una delle tecniche seguenti per ottenere un oggetto che rappresenta il controllo:

- Utilizzando la procedura guidata Aggiungi variabile membro, selezionare **variabile di controllo** e quindi selezionare l'ID del controllo. Immettere un nome di variabile membro e selezionare la classe wrapper del controllo come **tipo di controllo**.

     -oppure-

- Dichiarare una variabile locale e una sottoclasse come elemento della finestra di dialogo. Inserire codice simile al seguente (`CMyCtrl` è la classe wrapper, IDC_MYCTRL1 è l'ID del controllo):

   [!code-cpp[NVC_MFC_AxCont#19](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)
