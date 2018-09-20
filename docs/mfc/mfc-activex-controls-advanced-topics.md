---
title: 'Controlli ActiveX MFC: Argomenti avanzati | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 18d0a15b2fe1d61e1b7ba14d210b428f282bff4d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46386366"
---
# <a name="mfc-activex-controls-advanced-topics"></a>Controlli ActiveX MFC: argomenti avanzati

Questo articolo illustra argomenti avanzati relativi allo sviluppo di controlli ActiveX. Sono inclusi:

- [Uso di classi di Database nei controlli ActiveX](#_core_using_database_classes_in_activex_controls)

- [Implementazione di una proprietà con parametri](#_core_implementing_a_parameterized_property)

- [Gestione degli errori nel controllo ActiveX](#_core_handling_errors_in_your_activex_control)

- [La gestione delle chiavi speciale nel controllo](#_core_handling_special_keys_in_your_control)

- [Accedere ai controlli che non sono visibili in fase di esecuzione](#_core_accessing_dialog_controls_that_are_invisible_at_run_time)

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](activex-controls.md).

##  <a name="_core_using_database_classes_in_activex_controls"></a> Uso di classi di Database nei controlli ActiveX

Poiché le classi di controlli ActiveX sono parte della libreria di classi, è possibile applicare le stesse procedure e regole per l'uso di classi di database in un'applicazione MFC standard per lo sviluppo di controlli ActiveX che utilizzano le classi di database MFC.

Per una panoramica generale delle classi di database MFC, vedere [classi di Database MFC (ODBC e DAO)](../data/mfc-database-classes-odbc-and-dao.md). L'articolo illustra le classi ODBC MFC e DAO MFC, classi e vengono fornite informazioni per altri dettagli su uno.

> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano DAO (anche se sono incluse le classi DAO ed è comunque possibile usarli). Microsoft consiglia di usare [modelli OLE DB](../data/oledb/ole-db-programming.md) oppure [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare solo DAO nella gestione delle applicazioni esistenti.

##  <a name="_core_implementing_a_parameterized_property"></a> Implementazione di una proprietà con parametri

Una proprietà con parametri (talvolta denominata matrice di proprietà) è un metodo per l'esposizione di una raccolta eterogenea di valori come una singola proprietà del controllo. Ad esempio, è possibile usare una proprietà con parametri per esporre una matrice o un dizionario come una proprietà. In Visual Basic, tale proprietà è possibile accedere usando la notazione di matrice:

[!code-vb[NVC_MFC_AxVb#1](../mfc/codesnippet/visualbasic/mfc-activex-controls-advanced-topics_1.vb)]

Usare l'aggiunta guidata proprietà per implementare una proprietà con parametri. L'aggiunta guidata proprietà implementa la proprietà mediante l'aggiunta di una coppia di funzioni Get/Set che consentono all'utente di controllo accedere alla proprietà usando la notazione sopra o in modalità standard.

È simile a metodi e proprietà, le proprietà con parametri hanno anche un limite al numero di parametri consentiti. Nel caso delle proprietà con parametri, il limite è 15 parametri (con un parametro riservato per archiviare il valore della proprietà).

La procedura seguente aggiunge una proprietà con parametri, denominata matrice, che sono accessibili come una matrice bidimensionale di integer.

#### <a name="to-add-a-parameterized-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà con parametri tramite l'aggiunta guidata proprietà

1. Caricare il progetto del controllo.

1. In Visualizzazione classi, espandere il nodo di libreria del controllo.

1. Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.

1. Dal menu di scelta rapida, fare clic su **Add** e quindi fare clic su **Aggiungi proprietà**.

1. Nel **nome della proprietà** , digitare `Array`.

1. Nel **tipo di proprietà** , quindi selezionare **breve**.

1. Per la **implementazione** tipo, fare clic su **metodi Get/Set**.

1. Nel **funzione Get** e **funzione impostare** caselle, digitare i nomi univoci per le funzioni Get e Set o accettare i nomi predefiniti.

9. Aggiungere un parametro, denominato *riga* (tipo *breve*), utilizzando il **nome del parametro** e **tipo di parametro** controlli.

10. Aggiungere un secondo parametro denominato *colonna* (tipo *breve*).

11. Scegliere **Fine**.

### <a name="changes-made-by-the-add-property-wizard"></a>Le modifiche apportate per l'aggiunta guidata proprietà

Quando si aggiunge una proprietà personalizzata, l'aggiunta guidata proprietà apporta le modifiche per l'intestazione della classe controllo (. H) e l'implementazione (. File CPP).

Le righe seguenti vengono aggiunti alla classe del controllo. File H:

[!code-cpp[NVC_MFC_AxUI#35](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_2.h)]

Questo codice dichiara due funzioni denominate `GetArray` e `SetArray` che consentono all'utente di richiedere una riga e colonna specifiche durante l'accesso alla proprietà.

Inoltre, l'aggiunta guidata proprietà aggiunge le righe seguenti alla mappa di invio del controllo, che si trova nell'implementazione della classe di controllo (. File CPP):

[!code-cpp[NVC_MFC_AxUI#36](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_3.cpp)]

Infine, le implementazioni del `GetArray` e `SetArray` funzioni vengono aggiunte alla fine di. File CPP. Nella maggior parte dei casi, si modificherà la funzione Get per restituire il valore della proprietà. Funzione Set in genere contiene codice che deve essere eseguito prima o dopo le modifiche alle proprietà.

Per questa proprietà sia utile, è possibile dichiarare una variabile membro di matrice bidimensionale nella classe del controllo, di tipo **breve**, per archiviare i valori della proprietà con parametri. È quindi possibile modificare la funzione Get per restituire il valore archiviato nella riga appropriata e della colonna, come indicato dai parametri e modificare la funzione Set per aggiornare il valore a cui fanno riferimento i parametri di riga e colonna.

##  <a name="_core_handling_errors_in_your_activex_control"></a> Gestione degli errori nel controllo ActiveX

Se si verificano le condizioni di errore nel controllo, si potrebbe essere necessario segnalare l'errore al contenitore del controllo. Esistono due metodi per la segnalazione degli errori, a seconda della situazione in cui si verifica l'errore. Se l'errore si verifica all'interno di una proprietà ottenere o impostare funzione, o all'interno dell'implementazione di un metodo di automazione OLE, il controllo deve chiamare [COleControl:: ThrowError](../mfc/reference/colecontrol-class.md#throwerror), che segnala all'utente del controllo che si è verificato un errore. Se l'errore si verifica in qualsiasi momento, il controllo deve chiamare [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror), che viene generato un evento di errore predefinito.

Per indicare il tipo di errore che si è verificato, il controllo deve passare a un codice di errore `ThrowError` o `FireError`. Un codice di errore è un codice di stato OLE, che ha un valore a 32 bit. Quando possibile, scegliere un codice di errore dal set di codici definiti nel file di intestazione OLECTL standard. File di intestazione H. La tabella seguente riepiloga questi codici.

### <a name="activex-control-error-codes"></a>Codici errore del controllo ActiveX

|Error|Descrizione|
|-----------|-----------------|
|CTL_E_ILLEGALFUNCTIONCALL|Chiamata di funzione non valido|
|CTL_E_OVERFLOW|Overflow|
|CTL_E_OUTOFMEMORY|Memoria insufficiente|
|CTL_E_DIVISIONBYZERO|Divisione per zero|
|CTL_E_OUTOFSTRINGSPACE|Spazio di stringa insufficiente|
|CTL_E_OUTOFSTACKSPACE|Spazio dello stack insufficiente|
|CTL_E_BADFILENAMEORNUMBER|Numero o nome file errato|
|CTL_E_FILENOTFOUND|File non trovato|
|CTL_E_BADFILEMODE|Modalità file non valida|
|CTL_E_FILEALREADYOPEN|File già aperto|
|CTL_E_DEVICEIOERROR|Errore di I/O del dispositivo|
|CTL_E_FILEALREADYEXISTS|Il file esiste già|
|CTL_E_BADRECORDLENGTH|Lunghezza del record non valida|
|CTL_E_DISKFULL|Disco pieno|
|CTL_E_BADRECORDNUMBER|Numero di record non valido|
|CTL_E_BADFILENAME|Nome del file non valido|
|CTL_E_TOOMANYFILES|Troppi file.|
|CTL_E_DEVICEUNAVAILABLE|Dispositivo non disponibile|
|CTL_E_PERMISSIONDENIED|Autorizzazione negata|
|CTL_E_DISKNOTREADY|Disco non pronto|
|CTL_E_PATHFILEACCESSERROR|Errore di accesso percorso/file|
|CTL_E_PATHNOTFOUND|Impossibile trovare il percorso|
|CTL_E_INVALIDPATTERNSTRING|Stringa di ricerca non valida|
|CTL_E_INVALIDUSEOFNULL|Utilizzo di NULL non valido|
|CTL_E_INVALIDFILEFORMAT|Formato di file non valido|
|CTL_E_INVALIDPROPERTYVALUE|Valore della proprietà non valido|
|CTL_E_INVALIDPROPERTYARRAYINDEX|Indice della matrice della proprietà non valido|
|CTL_E_SETNOTSUPPORTEDATRUNTIME|Set non supportato in fase di esecuzione|
|CTL_E_SETNOTSUPPORTED|Set non supportato (proprietà di sola lettura)|
|CTL_E_NEEDPROPERTYARRAYINDEX|Necessario indice della matrice di proprietà|
|CTL_E_SETNOTPERMITTED|Set non consentito|
|CTL_E_GETNOTSUPPORTEDATRUNTIME|Get non supportato in fase di esecuzione|
|CTL_E_GETNOTSUPPORTED|Get non supportato (proprietà di sola scrittura)|
|CTL_E_PROPERTYNOTFOUND|Proprietà non trovata|
|CTL_E_INVALIDCLIPBOARDFORMAT|Formato degli Appunti non valido|
|CTL_E_INVALIDPICTURE|Immagine non valido|
|CTL_E_PRINTERERROR|Errore della stampante|
|CTL_E_CANTSAVEFILETOTEMP|Impossibile salvare file in TEMP|
|CTL_E_SEARCHTEXTNOTFOUND|Impossibile trovare il testo cercato|
|CTL_E_REPLACEMENTSTOOLONG|Sostituzioni troppo lunghe|

Se necessario, usare la macro CUSTOM_CTL_SCODE per definire un codice di errore personalizzato per una condizione che non è coperto da uno dei codici standard. Il parametro per questa macro deve essere un numero intero compreso tra 1000 e 32767, inclusivo. Ad esempio:

[!code-cpp[NVC_MFC_AxUI#37](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_4.cpp)]

Se si sta creando un controllo ActiveX per sostituire un controllo esistente VBX, definiscono i codici di errore del controllo ActiveX con gli stessi valori numerici, che il controllo VBX utilizza per assicurarsi che i codici di errore siano compatibili.

##  <a name="_core_handling_special_keys_in_your_control"></a> La gestione delle chiavi speciale nel controllo

In alcuni casi è possibile gestire determinate combinazioni di tasti in modo speciale; ad esempio, inserire una nuova riga quando viene premuto il tasto INVIO in un testo multiriga casella di controllo o spostare tra un gruppo di modifica quando viene controllato da un direzionale premuto ID della chiave.

Se la classe di base del controllo ActiveX `COleControl`, è possibile eseguire l'override [CWnd:: PreTranslateMessage](../mfc/reference/cwnd-class.md#pretranslatemessage) per gestire i messaggi prima che il contenitore li elabora. Quando si usa questa tecnica, restituisce sempre **TRUE** se si gestisce il messaggio nell'override della `PreTranslateMessage`.

Esempio di codice seguente illustra una possibile modalità di gestione di eventuali messaggi correlati a dei tasti di direzione.

[!code-cpp[NVC_MFC_AxUI#38](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_5.cpp)]

Per altre informazioni sulla gestione delle interfacce della tastiera per un controllo ActiveX, vedere la documentazione del SDK di ActiveX.

##  <a name="_core_accessing_dialog_controls_that_are_invisible_at_run_time"></a> Accedere ai controlli che non sono visibili in fase di esecuzione

È possibile creare i controlli di finestra di dialogo che non dispongono di alcuna interfaccia utente e non sono visibili in fase di esecuzione. Se si aggiunge un invisibile in fase di esecuzione controllo ActiveX a una finestra di dialogo e usare [GetDlgItem](../mfc/reference/cwnd-class.md#getdlgitem) per il controllo di accesso, il controllo non funzionerà correttamente. È invece consigliabile utilizzare una delle tecniche seguenti per ottenere un oggetto che rappresenta il controllo:

- Tramite l'aggiunta guidata variabile membro, selezionare **variabile di controllo** e quindi selezionare il relativo ID. Immettere un nome di variabile membro e selezionare la classe del controllo wrapper come le **tipo di controllo**.

     oppure

- Dichiarare una variabile locale e una sottoclasse dell'elemento di finestra di dialogo. Inserire codice simile al seguente (`CMyCtrl` è la classe wrapper, IDC_MYCTRL1 è l'ID del controllo):

     [!code-cpp[NVC_MFC_AxCont#19](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

