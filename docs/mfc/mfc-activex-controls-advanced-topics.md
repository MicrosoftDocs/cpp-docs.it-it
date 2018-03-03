---
title: 'Controlli ActiveX MFC: Argomenti avanzati | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2205862a438099c08801556f511ebf3c5e93a277
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-activex-controls-advanced-topics"></a>Controlli ActiveX MFC: argomenti avanzati
In questo articolo illustra argomenti avanzati relativi allo sviluppo di controlli ActiveX. Sono inclusi:  
  
-   [Utilizzo di classi di Database nei controlli ActiveX](#_core_using_database_classes_in_activex_controls)  
  
-   [Implementazione di una proprietà con parametri](#_core_implementing_a_parameterized_property)  
  
-   [Gestione degli errori in un controllo ActiveX](#_core_handling_errors_in_your_activex_control)  
  
-   [La gestione delle chiavi speciali nel controllo](#_core_handling_special_keys_in_your_control)  
  
-   [Accesso ai controlli finestra di dialogo che non sono visibili in fase di esecuzione](#_core_accessing_dialog_controls_that_are_invisible_at_run_time)  
  
##  <a name="_core_using_database_classes_in_activex_controls"></a>Utilizzo di classi di Database nei controlli ActiveX  
 Poiché le classi di controlli ActiveX fanno parte della libreria di classi, è possibile applicare le stesse routine e le regole per l'utilizzo di classi di database in un'applicazione MFC standard per lo sviluppo di controlli ActiveX che utilizzano le classi di database MFC.  
  
 Per una panoramica generale delle classi di database MFC, vedere [classi di Database MFC (DAO e ODBC)](../data/mfc-database-classes-odbc-and-dao.md). L'articolo illustra le classi ODBC MFC e DAO MFC, classi e vengono indicati ulteriori dettagli su uno.  
  
> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano DAO (anche se sono incluse le classi DAO ed è comunque possibile usarle). Microsoft consiglia di utilizzare [modelli OLE DB](../data/oledb/ole-db-programming.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. Utilizzare solo DAO di gestione delle applicazioni esistenti.  
  
##  <a name="_core_implementing_a_parameterized_property"></a>Implementazione di una proprietà con parametri  
 Una proprietà con parametri (talvolta denominata matrice di proprietà) è un metodo per esporre un insieme omogeneo di valori come una singola proprietà del controllo. Ad esempio, è possibile utilizzare una proprietà con parametri per esporre una matrice o un dizionario come una proprietà. In Visual Basic, tale proprietà è possibile accedere tramite la notazione di matrice:  
  
 [!code-vb[NVC_MFC_AxVb#1](../mfc/codesnippet/visualbasic/mfc-activex-controls-advanced-topics_1.vb)]  
  
 Utilizzare l'aggiunta guidata proprietà per implementare una proprietà con parametri. L'aggiunta guidata proprietà implementa la proprietà mediante l'aggiunta di una coppia di funzioni Get/Set che consentono all'utente di controllo accedere alla proprietà utilizzando la notazione sopra o in modalità standard.  
  
 Inoltre, simile ai metodi e proprietà, le proprietà con parametri hanno un limite al numero di parametri consentiti. Nel caso delle proprietà con parametri, il limite è di 15 parametri (con un parametro riservato per archiviare il valore della proprietà).  
  
 La procedura seguente aggiunge una proprietà con parametri, denominata matrice, è possibile accedere come una matrice bidimensionale di interi.  
  
#### <a name="to-add-a-parameterized-property-using-the-add-property-wizard"></a>Per aggiungere una proprietà con parametri tramite l'aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo di libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo interfaccia del controllo (il secondo nodo del nodo di libreria) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi proprietà**.  
  
5.  Nel **nome della proprietà** digitare `Array`.  
  
6.  Nel **tipo di proprietà** , quindi selezionare **breve**.  
  
7.  Per **implementazione** tipo, fare clic su **metodi Get/Set**.  
  
8.  Nel **funzione Get** e **funzione Set** caselle, digitare i nomi univoci per le funzioni Get e Set o accettare i nomi predefiniti.  
  
9. Aggiungere un parametro, denominato `row` (tipo `short`), usando il **nome del parametro** e **tipo di parametro** controlli.  
  
10. Aggiungere un secondo parametro denominato `column` (tipo `short`).  
  
11. Scegliere **Fine**.  
  
### <a name="changes-made-by-the-add-property-wizard"></a>Le modifiche apportate per l'aggiunta guidata proprietà  
 Quando si aggiunge una proprietà personalizzata, l'aggiunta guidata proprietà apporta modifiche per l'intestazione della classe controllo (. H) e l'implementazione (. File CPP).  
  
 Le righe seguenti vengono aggiunti alla classe del controllo. File H:  
  
 [!code-cpp[NVC_MFC_AxUI#35](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_2.h)]  
  
 Questo codice dichiara due funzioni denominate `GetArray` e `SetArray` che consentono all'utente di richiedere una riga e colonna specifiche durante l'accesso alla proprietà.  
  
 Inoltre, l'aggiunta guidata proprietà aggiunge le righe seguenti alla mappa di invio del controllo, si trova nell'implementazione della classe controllo (. File CPP):  
  
 [!code-cpp[NVC_MFC_AxUI#36](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_3.cpp)]  
  
 Infine, le implementazioni del `GetArray` e `SetArray` funzioni vengono aggiunte alla fine del. File CPP. Nella maggior parte dei casi, si modificherà la funzione Get per restituire il valore della proprietà. La funzione Set in genere contiene codice che deve essere eseguito prima o dopo le modifiche alle proprietà.  
  
 Per questa proprietà essere utile, è possibile dichiarare una variabile membro di matrice bidimensionale nella classe del controllo, di tipo **breve**, per archiviare i valori della proprietà con parametri. È quindi possibile modificare la funzione Get per restituire il valore archiviato in corrispondenza la riga appropriata e la colonna, come indicato dai parametri e modificare la funzione di Set per aggiornare il valore a cui fa riferimento i parametri della riga e colonna.  
  
##  <a name="_core_handling_errors_in_your_activex_control"></a>Gestione degli errori in un controllo ActiveX  
 Se nel controllo si verificano condizioni di errore, si potrebbe essere necessario segnalare l'errore al contenitore del controllo. Esistono due metodi per la segnalazione degli errori, in base alla situazione in cui si verifica l'errore. Se l'errore si verifica all'interno di una proprietà Get o Set (funzione), o all'interno dell'implementazione di un metodo di automazione OLE, il controllo deve chiamare [COleControl:: ThrowError](../mfc/reference/colecontrol-class.md#throwerror), che segnala all'utente del controllo che si è verificato un errore. Se l'errore si verifica in qualsiasi momento, il controllo deve chiamare [COleControl:: FireError](../mfc/reference/colecontrol-class.md#fireerror), che viene generato un evento di errore predefinito.  
  
 Per indicare il tipo di errore che si è verificato, il controllo deve passare un codice di errore per `ThrowError` o `FireError`. Un codice di errore è un codice di stato OLE, che ha un valore a 32 bit. Quando possibile, scegliere un codice di errore dal set standard di codici definiti nel file di intestazione OLECTL. File di intestazione H. Nella tabella seguente vengono riepilogati questi codici.  
  
### <a name="activex-control-error-codes"></a>Codici di errore del controllo ActiveX  
  
|Error|Descrizione|  
|-----------|-----------------|  
|**CTL_E_ILLEGALFUNCTIONCALL**|Chiamata di funzione non valido|  
|**CTL_E_OVERFLOW**|Overflow|  
|**CTL_E_OUTOFMEMORY**|Memoria insufficiente|  
|**CTL_E_DIVISIONBYZERO**|Divisione per zero|  
|**CTL_E_OUTOFSTRINGSPACE**|Spazio di stringa insufficiente|  
|**CTL_E_OUTOFSTACKSPACE**|Spazio dello stack|  
|**CTL_E_BADFILENAMEORNUMBER**|Numero o nome file errato|  
|**CTL_E_FILENOTFOUND**|File non trovato|  
|**CTL_E_BADFILEMODE**|Modalità file non valida|  
|**CTL_E_FILEALREADYOPEN**|File già aperto|  
|**CTL_E_DEVICEIOERROR**|Errore di I/O del dispositivo|  
|**CTL_E_FILEALREADYEXISTS**|Il file esiste già|  
|**CTL_E_BADRECORDLENGTH**|Lunghezza del record non valida|  
|**CTL_E_DISKFULL**|Disco pieno|  
|**CTL_E_BADRECORDNUMBER**|Numero di record non valido|  
|**CTL_E_BADFILENAME**|Nome file non valido|  
|**CTL_E_TOOMANYFILES**|Troppi file.|  
|**CTL_E_DEVICEUNAVAILABLE**|Dispositivo non disponibile|  
|**CTL_E_PERMISSIONDENIED**|Autorizzazione negata|  
|**CTL_E_DISKNOTREADY**|Disco non pronto|  
|**CTL_E_PATHFILEACCESSERROR**|Errore di accesso percorso/file|  
|**CTL_E_PATHNOTFOUND**|Impossibile trovare il percorso|  
|**CTL_E_INVALIDPATTERNSTRING**|Stringa di ricerca non valida|  
|**CTL_E_INVALIDUSEOFNULL**|Utilizzo di NULL non valido|  
|**CTL_E_INVALIDFILEFORMAT**|Formato file non valido|  
|**CTL_E_INVALIDPROPERTYVALUE**|Valore proprietà non valido|  
|**CTL_E_INVALIDPROPERTYARRAYINDEX**|Indice di matrice di proprietà non valido|  
|**CTL_E_SETNOTSUPPORTEDATRUNTIME**|Set non supportato in fase di esecuzione|  
|**CTL_E_SETNOTSUPPORTED**|Set non supportato (proprietà di sola lettura)|  
|**CTL_E_NEEDPROPERTYARRAYINDEX**|Necessario indice della matrice di proprietà|  
|**CTL_E_SETNOTPERMITTED**|Set non consentito|  
|**CTL_E_GETNOTSUPPORTEDATRUNTIME**|Get non supportato in fase di esecuzione|  
|**CTL_E_GETNOTSUPPORTED**|Get non supportato (proprietà di sola scrittura)|  
|**CTL_E_PROPERTYNOTFOUND**|Proprietà non trovata|  
|**CTL_E_INVALIDCLIPBOARDFORMAT**|Formato degli Appunti non valido|  
|**CTL_E_INVALIDPICTURE**|Immagine non valido|  
|**CTL_E_PRINTERERROR**|Errore della stampante|  
|**CTL_E_CANTSAVEFILETOTEMP**|Impossibile salvare file in TEMP|  
|**CTL_E_SEARCHTEXTNOTFOUND**|Impossibile trovare il testo cercato|  
|**CTL_E_REPLACEMENTSTOOLONG**|Sostituzioni troppo lunghe|  
  
 Se necessario, utilizzare il **CUSTOM_CTL_SCODE** macro per definire un codice di errore personalizzato per una condizione che non è coperto da uno dei codici standard. Il parametro per questa macro deve essere un numero intero compreso tra 1000 e 32767, inclusivo. Ad esempio:  
  
 [!code-cpp[NVC_MFC_AxUI#37](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_4.cpp)]  
  
 Se si sta creando un controllo ActiveX per sostituire un controllo VBX esistente, è possibile definire i codici di errore del controllo ActiveX con gli stessi valori numerici, che il controllo VBX utilizza per assicurarsi che i codici di errore siano compatibili.  
  
##  <a name="_core_handling_special_keys_in_your_control"></a>La gestione delle chiavi speciali nel controllo  
 In alcuni casi si desidera gestire alcune combinazioni di tasti in modo speciale; ad esempio, inserire una nuova riga quando viene premuto il tasto INVIO in un testo su più righe, casella di controllo o spostare un gruppo di modifica quando viene controllato un direzionale premuto ID chiave.  
  
 Se la classe di base del controllo ActiveX è `COleControl`, è possibile eseguire l'override [CWnd:: PreTranslateMessage](../mfc/reference/cwnd-class.md#pretranslatemessage) per gestire i messaggi prima che il contenitore li elabora. Quando si utilizza questa tecnica, restituiscono sempre **TRUE** se si gestisce il messaggio nell'override di `PreTranslateMessage`.  
  
 Esempio di codice seguente viene illustrato un modo possibile gestire i messaggi correlati i tasti di direzione.  
  
 [!code-cpp[NVC_MFC_AxUI#38](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_5.cpp)]  
  
 Per ulteriori informazioni sulla gestione delle interfacce della tastiera per un controllo ActiveX, vedere la documentazione SDK ActiveX.  
  
##  <a name="_core_accessing_dialog_controls_that_are_invisible_at_run_time"></a>Accesso ai controlli finestra di dialogo che non sono visibili in fase di esecuzione  
 È possibile creare i controlli di finestra di dialogo che non dispongono di alcuna interfaccia utente e sono invisibili in fase di esecuzione. Se si aggiunge un invisibile in fase di esecuzione controllo ActiveX a una finestra di dialogo e usare [GetDlgItem](../mfc/reference/cwnd-class.md#getdlgitem) per il controllo di accesso, il controllo non funzionerà correttamente. È invece necessario utilizzare una delle tecniche seguenti per ottenere un oggetto che rappresenta il controllo:  
  
-   Se si utilizza l'aggiunta guidata variabile membro, selezionare **controllo variabile** e quindi selezionare l'ID. del controllo Immettere un nome di variabile membro e selezionare la classe del controllo wrapper come il **tipo di controllo**.  
  
     oppure  
  
-   Dichiarare una variabile locale e una sottoclasse dell'elemento della finestra di dialogo. Inserire codice simile al seguente (`CMyCtrl` è la classe wrapper, `IDC_MYCTRL1` è l'ID del controllo):  
  
     [!code-cpp[NVC_MFC_AxCont#19](../mfc/codesnippet/cpp/mfc-activex-controls-advanced-topics_6.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)

