---
title: "Controlli ActiveX MFC: argomenti avanzati | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FireError (metodo)"
  - "MFC (controlli ActiveX), accesso ai controlli invisibili della finestra di dialogo"
  - "MFC (controlli ActiveX), argomenti avanzati"
  - "MFC (controlli ActiveX), classi di database"
  - "MFC (controlli ActiveX), codici di errore"
  - "MFC (controlli ActiveX), proprietà con parametri"
  - "MFC (controlli ActiveX), tasti speciali"
  - "PreTranslateMessage (metodo)"
  - "ThrowError (metodo)"
ms.assetid: e9e34abb-8e2d-461e-bb9c-a1aec5dcecbd
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Controlli ActiveX MFC: argomenti avanzati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo vengono illustrati gli argomenti avanzati relativi ai controlli ActiveX di sviluppo.  tra cui:  
  
-   [Utilizzo di classi di database in controlli ActiveX](#_core_using_database_classes_in_activex_controls)  
  
-   [Implementare una proprietà con parametri](#_core_implementing_a_parameterized_property)  
  
-   [Gestione degli errori nel controllo ActiveX](#_core_handling_errors_in_your_activex_control)  
  
-   [Lo speciale di gestione tipi il controllo](#_core_handling_special_keys_in_your_control)  
  
-   [L'accesso ai comandi della finestra di dialogo non visibili in fase di esecuzione](#_core_accessing_dialog_controls_that_are_invisible_at_run_time)  
  
##  <a name="_core_using_database_classes_in_activex_controls"></a> Utilizzo di classi di database in controlli ActiveX  
 Poiché le classi di controlli ActiveX fa parte della libreria di classi, è possibile applicare le stesse procedure e regole per utilizzare le classi di database in un'applicazione MFC standard i controlli ActiveX di sviluppo che utilizzano le classi di database MFC.  
  
 Per cenni preliminari sulle classi di database MFC, vedere [Classi di database MFC \(DAO e ODBC\)](../data/mfc-database-classes-odbc-and-dao.md).  Articolo vengono illustrati sia le classi ODBC MFC che le classi DAO MFC e viene indirizzata a ulteriori dettagli su uno.  
  
> [!NOTE]
>  A partire da Visual C\+\+ .NET, l'ambiente e le procedure guidate di Visual C\+\+ non supportano più DAO, anche se le classi DAO sono incluse e possono essere comunque utilizzate.  Si consiglia di utilizzare [Modelli OLE DB](../data/oledb/ole-db-programming.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti.  di utilizzare DAO solo per la gestione delle applicazioni già esistenti.  
  
##  <a name="_core_implementing_a_parameterized_property"></a> Implementare una proprietà con parametri  
 Una proprietà con parametri \(talvolta detta matrice di proprietà\) è un metodo per esporre una raccolta di valori omogenea come un'unica proprietà del controllo.  Ad esempio, è possibile utilizzare una proprietà con parametri per esporre una matrice o un dizionario come proprietà.  In Visual Basic, tale proprietà viene eseguito tramite la notazione di matrice:  
  
 [!code-vb[NVC_MFC_AxVb#1](../mfc/codesnippet/VisualBasic/mfc-activex-controls-advanced-topics_1.vb)]  
  
 Utilizzare l'aggiunta guidata proprietà per implementare una proprietà con parametri.  L'aggiunta guidata proprietà implementare la proprietà aggiungendo una coppia di funzioni set\/Get che consentono all'utente di accedere alla proprietà utilizzando la notazione sopra o un modo standard.  
  
 Simile ai metodi e le proprietà, le proprietà con parametri hanno un numero illimitato di parametri concesse.  Nel caso delle proprietà con parametri, il limite di 15 parametri con un parametro riservato per archiviare il valore della proprietà\).  
  
 La procedura descritta di seguito viene aggiunta una proprietà con parametri, detta matrice, che può essere eseguito come una matrice bidimensionale di integer.  
  
#### Per aggiungere una proprietà con parametri tramite Aggiunta guidata proprietà  
  
1.  Caricare il progetto del controllo.  
  
2.  In Visualizzazione classi, espandere il nodo della libreria del controllo.  
  
3.  Fare clic con il pulsante destro del mouse sul nodo dell'interfaccia del controllo \(il secondo nodo il nodo della libreria\) per aprire il menu di scelta rapida.  
  
4.  Dal menu di scelta rapida, fare clic **Aggiungi** quindi fare clic **Aggiungi proprietà**.  
  
5.  Nella casella di **Nome proprietà**, digitare `Array`.  
  
6.  Nella casella di **Tipo proprietà**, **short**selezionato.  
  
7.  Per il tipo di **Implementazione**, fare clic **Metodi Get\/Set**.  
  
8.  Nelle caselle di **Imposta funzione** e di **Funzione Get** , i nomi al tipo univoci per il get e set le funzioni o accettare i nomi predefiniti.  
  
9. Aggiungere un parametro, denominato `row` \(tipo `short`\), utilizzando i controlli di **Tipo parametro**  e di **Nome parametro**.  
  
10. Aggiungere `column` chiamato secondo parametro \(tipo `short`\).  
  
11. Scegliere **Fine**.  
  
### Modifiche apportate dall'Aggiunta guidata proprietà  
 Quando si aggiunge una proprietà personalizzata, l'aggiunta guidata proprietà apportano modifiche all'intestazione della classe del controllo \(. H\) e i file di implementazione \(.CPP\).  
  
 Le seguenti righe aggiunte alla classe del controllo. File H:  
  
 [!code-cpp[NVC_MFC_AxUI#35](../mfc/codesnippet/CPP/mfc-activex-controls-advanced-topics_2.h)]  
  
 Questo codice dichiara due funzioni chiamate `GetArray` e `SetArray` che consentono all'utente richiedere una riga e la colonna specifiche quando si accede alla proprietà.  
  
 Inoltre, l'aggiunta guidata proprietà aggiungere le seguenti righe alla mappa di invio del controllo, che si trova nel file di implementazione della classe del controllo \(.CPP\):  
  
 [!code-cpp[NVC_MFC_AxUI#36](../mfc/codesnippet/CPP/mfc-activex-controls-advanced-topics_3.cpp)]  
  
 Infine, le implementazioni di `GetArray` e le funzioni di `SetArray` vengono aggiunti alla fine del file di .CPP.  Nella maggior parte dei casi, verrà modificata la funzione Get per restituire il valore della proprietà.  La funzione set generalmente conterrà codice da eseguire, before o after la proprietà cambia.  
  
 Perché la proprietà sia utile, è possibile dichiarare una variabile membro della matrice bidimensionale della classe del controllo, di tipo **short**, la memorizzazione dei valori della proprietà con parametri.  È quindi possibile modificare il metodo Get per restituire il valore archiviato nella riga e la colonna appropriate, come indicato dai parametri e modificare la funzione set per aggiornare il valore fatto riferimento nei parametri di riga e colonna.  
  
##  <a name="_core_handling_errors_in_your_activex_control"></a> Gestione degli errori nel controllo ActiveX  
 Se le condizioni di errore sul controllo, è possibile richiedere di segnalare l'errore nel contenitore di controlli.  Esistono due metodi per la segnalazione degli errori, a seconda della situazione in cui l'errore si verifica.  Se l'errore si verifica all'interno di una proprietà ottenere o impostare la funzione, o nell'implementazione di un metodo di automazione OLE, il controllo deve chiamare [COleControl::ThrowError](../Topic/COleControl::ThrowError.md), che segnala all'utente del controllo che si è verificato un errore.  Se l'errore si verifica in qualsiasi altro momento, il controllo deve chiamare [COleControl::FireError](../Topic/COleControl::FireError.md), che genera un evento di errore predefinito.  
  
 Per indicare il tipo di errore che si verifica, il controllo deve passare un codice di errore a `ThrowError` o a `FireError`.  Un codice di errore è un codice di stato OLE, con un valore a 32 bit.  Quando possibile, scegliere un codice di errore dallo standard di codici definiti nel file di intestazione OLECTL.H.  Nella tabella seguente vengono riepilogati i codici.  
  
### Codici di errore del controllo ActiveX  
  
|Errore|Descrizione|  
|------------|-----------------|  
|**CTL\_E\_ILLEGALFUNCTIONCALL**|Chiamata di funzione non valida|  
|**CTL\_E\_OVERFLOW**|Overflow|  
|**CTL\_E\_OUTOFMEMORY**|Memoria insufficiente|  
|**CTL\_E\_DIVISIONBYZERO**|Divisione per zero|  
|**CTL\_E\_OUTOFSTRINGSPACE**|Spazio di stringa|  
|**CTL\_E\_OUTOFSTACKSPACE**|Lo spazio dello stack|  
|**CTL\_E\_BADFILENAMEORNUMBER**|Nome file errato o numero|  
|**CTL\_E\_FILENOTFOUND**|File non trovato|  
|**CTL\_E\_BADFILEMODE**|File modo non corretto|  
|**CTL\_E\_FILEALREADYOPEN**|File già aperto|  
|**CTL\_E\_DEVICEIOERROR**|Errore dei\/O del dispositivo|  
|**CTL\_E\_FILEALREADYEXISTS**|Il file è già esistente|  
|**CTL\_E\_BADRECORDLENGTH**|La lunghezza del record|  
|**CTL\_E\_DISKFULL**|Disco pieno.|  
|**CTL\_E\_BADRECORDNUMBER**|Numero errato di record|  
|**CTL\_E\_BADFILENAME**|Nome file errato|  
|**CTL\_E\_TOOMANYFILES**|Troppi file|  
|**CTL\_E\_DEVICEUNAVAILABLE**|Dispositivo non disponibile|  
|**CTL\_E\_PERMISSIONDENIED**|Autorizzazione negata|  
|**CTL\_E\_DISKNOTREADY**|Disco non pronto|  
|**CTL\_E\_PATHFILEACCESSERROR**|Errore accesso ai file\/percorso|  
|**CTL\_E\_PATHNOTFOUND**|Percorso non trovato|  
|**CTL\_E\_INVALIDPATTERNSTRING**|Stringa modello non valida|  
|**CTL\_E\_INVALIDUSEOFNULL**|Utilizzo non valido NULL|  
|**CTL\_E\_INVALIDFILEFORMAT**|Formato di file non valido|  
|**CTL\_E\_INVALIDPROPERTYVALUE**|Valore della proprietà non valido|  
|**CTL\_E\_INVALIDPROPERTYARRAYINDEX**|Indice non valido della matrice di proprietà|  
|**CTL\_E\_SETNOTSUPPORTEDATRUNTIME**|Set di supporto in fase di esecuzione|  
|**CTL\_E\_SETNOTSUPPORTED**|Set di supporto \(proprietà di sola lettura\)|  
|**CTL\_E\_NEEDPROPERTYARRAYINDEX**|Indice della matrice di proprietà di necessario|  
|**CTL\_E\_SETNOTPERMITTED**|Set non consentito|  
|**CTL\_E\_GETNOTSUPPORTEDATRUNTIME**|Ottenere di supporto in fase di esecuzione|  
|**CTL\_E\_GETNOTSUPPORTED**|Ottenere non supportato \(proprietà di sola scrittura\)|  
|**CTL\_E\_PROPERTYNOTFOUND**|Proprietà non trovata|  
|**CTL\_E\_INVALIDCLIPBOARDFORMAT**|Formato degli Appunti non valido|  
|**CTL\_E\_INVALIDPICTURE**|Immagine non valida|  
|**CTL\_E\_PRINTERERROR**|Errore della stampante|  
|**CTL\_E\_CANTSAVEFILETOTEMP**|Impossibile salvare il file in TEMP|  
|**CTL\_E\_SEARCHTEXTNOTFOUND**|Testo cerca non trovato|  
|**CTL\_E\_REPLACEMENTSTOOLONG**|Sostituzioni troppo lungo|  
  
 Se necessario, utilizzare la macro di **CUSTOM\_CTL\_SCODE** per definire un codice di errore personalizzato a una condizione che non è descritta da uno dei codici standard.  Il parametro per questa macro deve essere un numero intero compreso tra 1000 e 32767, inclusi.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFC_AxUI#37](../mfc/codesnippet/CPP/mfc-activex-controls-advanced-topics_4.cpp)]  
  
 Se si crea un controllo ActiveX per sostituire un controllo esistente di VBX, definire i codici di errore del controllo ActiveX con gli stessi valori numerici che il controllo di VBX utilizza per garantire che i codici di errore siano compatibili.  
  
##  <a name="_core_handling_special_keys_in_your_control"></a> Lo speciale di gestione tipi il controllo  
 In alcuni casi potrebbe essere necessario gestire alcune combinazioni di tasti in modo speciale; ad esempio, inserire una nuova riga quando il tasto INVIO viene introdotto un controllo textbox o un movimento su più righe tra un gruppo di controlli di modifica quando una chiave direzionale ID sia stato premuto.  
  
 Se la classe base del controllo ActiveX è `COleControl`, è possibile eseguire l'override di [CWnd::PreTranslateMessage](../Topic/CWnd::PreTranslateMessage.md) per gestire i messaggi prima che il contenitore vengano elaborati.  Quando si utilizza questa tecnica, **TRUE** sempre return se si gestisce il messaggio nell'override di `PreTranslateMessage`.  
  
 Nell'esempio di codice viene illustrata una modalità possibile di gestire tutti i messaggi relativi alle chiavi direzionali.  
  
 [!code-cpp[NVC_MFC_AxUI#38](../mfc/codesnippet/CPP/mfc-activex-controls-advanced-topics_5.cpp)]  
  
 Per ulteriori informazioni sulla tastiera gestione delle interfacce per un controllo ActiveX, vedere la documentazione di ActiveX SDK.  
  
##  <a name="_core_accessing_dialog_controls_that_are_invisible_at_run_time"></a> L'accesso ai comandi della finestra di dialogo non visibili in fase di esecuzione  
 È possibile creare comandi della finestra di dialogo privi di interfaccia utente e sono invisibili in fase di esecuzione.  Se si aggiunge in fase di esecuzione un controllo ActiveX invisibile a una finestra di dialogo e utilizzare [CWnd::GetDlgItem](../Topic/CWnd::GetDlgItem.md) per accedere al controllo, il controllo non funzionerà correttamente.  Al contrario, utilizzare una delle tecniche seguenti per ottenere un oggetto che rappresenta il controllo:  
  
-   Mediante l'aggiunta guidata variabile membro, **Variabile controllo** quindi selezionare l'id del controllo  Un nome di variabile membro e selezionare la classe wrapper del controllo come **Tipo controllo**.  
  
     \- oppure \-  
  
-   Dichiarare una variabile locale e una sottoclasse come elemento della finestra di dialogo.  Inserire codice simile a quello riportato di seguito \(`CMyCtrl` è una classe wrapper, `IDC_MYCTRL1` è l'id del controllo\):  
  
     [!code-cpp[NVC_MFC_AxCont#19](../mfc/codesnippet/CPP/mfc-activex-controls-advanced-topics_6.cpp)]  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)