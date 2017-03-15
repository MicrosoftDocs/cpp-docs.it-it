---
title: "TN053: routine DFX personalizzate per le classi database DAO | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.dfx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "routine DFX personalizzate [C++]"
  - "DAO [C++], classi"
  - "DAO [C++], MFC"
  - "classi di database [C++], DAO"
  - "DFX (trasferimento di campi di record DAO) [C++]"
  - "DFX (trasferimento di campi di record DAO) [C++], routine personalizzate"
  - "MFC [C++], DAO e"
  - "TN053"
ms.assetid: fdcf3c51-4fa8-4517-9222-58aaa4f25cac
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# TN053: routine DFX personalizzate per le classi database DAO
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  A partire da Visual C\+\+ .NET, l'ambiente e le procedure guidate di Visual C\+\+ non supportano più DAO, anche se le classi DAO sono incluse e possono essere comunque utilizzate.  Si consiglia di utilizzare [Modelli OLE DB](../data/oledb/ole-db-templates.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti.  di utilizzare DAO solo per la gestione delle applicazioni già esistenti.  
  
 Questa nota tecnica viene descritto il meccanismo di trasferimento di campi di record DAO \(DFX\).  Per comprendere ciò che avviene nelle routine di DFX, la funzione di `DFX_Text` verrà illustrata in dettaglio come esempio.  Come fonte di informazioni aggiuntive alla nota tecnica, è possibile esaminare il codice per l'altro le funzioni di l DFX.  Probabilmente non spesso sono necessari di una routine personalizzata DFX come potrebbe essere necessaria una routine personalizzata RFX \(utilizzata con le classi di database ODBC\).  
  
 Questa nota tecnica contiene:  
  
-   Cenni preliminari su DFX  
  
-   [Esempi](#_mfcnotes_tn053_examples) utilizzando il trasferimento di campi di record DAO e del collegamento dinamico  
  
-   [Come DFX Works](#_mfcnotes_tn053_how_dfx_works)  
  
-   [Ciò che la routine personalizzate DFX fa](#_mfcnotes_tn053_what_your_custom_dfx_routine_does)  
  
-   [Dettagli di DFX\_Text](#_mfcnotes_tn053_details_of_dfx_text)  
  
 **Cenni preliminari su DFX**  
  
 Il meccanismo di trasferimento di campi di record DAO \(DFX\) viene utilizzata per semplificare la procedura di recuperare e aggiornare i dati quando si utilizza la classe di `CDaoRecordset`.  Il processo è semplificato utilizzando i membri dati della classe di `CDaoRecordset`.  Derivazione da `CDaoRecordset`, è possibile aggiungere i membri dati alla classe derivata che rappresenta ogni campo in una tabella o una query.  Questo "meccanismo di associazione statica" è semplice, ma non può essere il metodo di raccolta\/aggiornamento dei dati di scelta per tutte le applicazioni.  Anche DFX recupera tutti i campi associati ogni volta che il record corrente viene modificato.  Se si sviluppa un'applicazione mediante riservata che non richiede recuperare ogni campo quando la valuta viene modificata, il collegamento dinamico" tramite `CDaoRecordset::GetFieldValue` e `CDaoRecordset::SetFieldValue` possono essere il metodo di accesso ai dati di scelta.  
  
> [!NOTE]
>  Anche DFX e il collegamento dinamico non si escludono a vicenda, in modo da utilizzare un ibrido statico e il collegamento dinamico possono essere utilizzati.  
  
 **Esempio 1 \- utilizzo di trasferimento di campi di record DAO solo**  
  
 \(presuppone che `CDaoRecordset` \- classe derivata `CMySet` già aperto\)  
  
```  
// Add a new record to the customers table  
myset.AddNew();  
myset.m_strCustID = _T("MSFT");  
myset.m_strCustName = _T("Microsoft");  
myset.Update();  
```  
  
 **Esempio 2 \- utilizzo di collegamento dinamico solo**  
  
 \(si presuppone l'utilizzo della classe di `CDaoRecordset`, `rs` ed è già aperta\)  
  
```  
// Add a new record to the customers table  
COleVariant  varFieldValue1 ( _T("MSFT"), VT_BSTRT );  
//Note: VT_BSTRT flags string type as ANSI, instead of UNICODE default  
COleVariant  varFieldValue2  (_T("Microsoft"), VT_BSTRT );  
rs.AddNew();  
rs.SetFieldValue(_T("Customer_ID"), varFieldValue1);  
rs.SetFieldValue(_T("Customer_Name"), varFieldValue2);  
rs.Update();  
```  
  
 **Esempio 3 \- utilizzo di trasferimento di campi di record DAO e del collegamento dinamico**  
  
 \(presuppone che i dati con `CDaoRecordset`\- classe derivata `emp` employee di esplorazione\)  
  
```  
// Get the employee's data so that it can be displayed  
emp.MoveNext();  
  
// If user wants to see employee's photograph,  
// fetch it  
COleVariant varPhoto;  
if (bSeePicture)  
   emp.GetFieldValue(_T("photo"), varPhoto);  
  
// Display the data  
PopUpEmployeeData(emp.m_strFirstName,  
    emp.m_strLastName, varPhoto);  
```  
  
 **Come DFX Works**  
  
 Il meccanismo di DFX funziona in modo simile al meccanismo di trasferimento di campi di Record utilizzato dalle classi ODBC MFC.  I principi di DFX e RFX sono uguali ma esistono numerose differenze interne.  La progettazione delle funzioni di DFX è tale che praticamente qualsiasi codice è condiviso dalle routine dell'utente DFX.  DFX al livello più elevato è solo alcune operazioni.  
  
-   Anche DFX crea la clausola SQL **SELEZIONA** e la clausola SQL **PARAMETRI** se necessario.  
  
-   Anche DFX costruire la struttura di associazione utilizzata dalla funzione di `GetRows` di DAO \(ulteriori informazioni su questo versioni successive\).  
  
-   Anche DFX gestisce il buffer di dati utilizzato per rilevare i campi modificati \(se il doppio buffering utilizza\)  
  
-   Anche DFX gestisce le matrici dello stato di **MODIFICA** e di **NULL** e di set se necessario per gli aggiornamenti.  
  
 Al centro del meccanismo di DFX è la funzione di `DoFieldExchange` della classe derivata di `CDaoRecordset`.  Questa funzione invia le chiamate alle funzioni di l DFX di un tipo appropriato di un'operazione.  Prima di chiamare `DoFieldExchange` le funzioni MFC interne impostare il tipo di operazione.  Di seguito sono elencati i diversi tipi di un'operazione e una breve descrizione.  
  
|Operazione|Descrizione|  
|----------------|-----------------|  
|**AddToParameterList**|Clausola di PARAMETRI di compilazioni|  
|**AddToSelectList**|Le compilazioni la clausola SELECT|  
|**BindField**|Configura la struttura di associazione|  
|**BindParam**|Imposta i valori dei parametri|  
|**Correzioni**|Imposta ANNULLANO lo stato|  
|**AllocCache**|Alloca la cache per il controllo modificato|  
|**StoreField**|Salva il record corrente per memorizzare nella cache|  
|**LoadField**|I ripristina memorizzazione nella cache ai valori di membro|  
|**FreeCache**|Libera la cache|  
|`SetFieldNull`|Valore dello stato & dei campi di insiemi SU NULL|  
|**MarkForAddNew**|Contrassegnare NULL modifica dei campi se non di PSEUDO|  
|**MarkForEdit**|Contrassegna i campi modificati se non corrisponde alla cache|  
|**SetDirtyField**|Imposta i valori dei campi contrassegnati come modificati|  
  
 Nella sezione successiva, ogni operazione verrà illustrato in maggiore dettaglio per `DFX_Text`.  
  
 La funzionalità più importante comprendere sul processo di trasferimento di campi di record DAO è di utilizzare la funzione di `GetRows` dell'oggetto di `CDaoRecordset`.  La funzione di DAO `GetRows` può essere eseguita in diversi modi.  Questa nota tecnica brevemente descriverà solo `GetRows` come non è compreso nell'ambito di questa nota tecnica.  
  
 DAO `GetRows` può essere eseguita in diversi modi.  
  
-   Può recuperare più record e i più campi di dati contemporaneamente.  È pertanto possibile per l'accesso ai dati più veloce con una complicazione gestire grande struttura di dati e di offset appropriati per ogni campo e for ogni record di dati nella struttura.  MFC non sfrutta di questo meccanismo di recupero di più record.  
  
-   Un'altra modalità `GetRows` può funzionare prevede che i programmatori di specificare gli indirizzi di associazione dei dati recuperati da ogni campo per un record di dati.  
  
-   DAO anche "chiamerà indietro in" chiamante per le colonne di lunghezza variabile per consentire al chiamante di allocare memoria.  Questa seconda che funzionalità presenta il vantaggio di ridurre il numero di copie dei dati nonché di consentire l'archiviazione diretta dei dati dei membri di classe \(la classe derivata di `CDaoRecordset` \).  Questo secondo consiste il metodo utilizzato da MFC associare ai membri dati nelle classi derivate di `CDaoRecordset`.  
  
##  <a name="_mfcnotes_tn053_what_your_custom_dfx_routine_does"></a> Ciò che la routine personalizzate DFX fa  
 Viene confermato da questa discussione che l'operazione più importante implementata in qualsiasi funzione di DFX deve essere la possibilità di impostare le strutture dei dati necessari correttamente per chiamare `GetRows`.  Esistono numerosi altre operazioni che una funzione di DFX deve supportare anche, ma nessuno importanti o complesso quanto correttamente preparare la chiamata di `GetRows`.  
  
 L'utilizzo di DFX è descritto nella documentazione online.  Essenzialmente, esistono due requisiti.  Innanzitutto, i membri devono essere aggiunti alla classe derivata di `CDaoRecordset` per ogni campo associato e parametro.  Attenendosi a questa `CDaoRecordset::DoFieldExchange` deve essere sottoposto a override.  Si noti che il tipo di dati dei membri è importante.  Deve corrispondere ai dati del campo nel database o almeno essere convertibile nel tipo.  Ad esempio un campo numerico nel database, ad esempio un integer long, è possibile convertirlo sempre al testo a e limitare a un membro di `CString`, ma un campo di testo in un database non è necessariamente essere convertito in una rappresentazione numerica, come integer e limite lunghi a un membro Integer long.  DAO e Il modulo di gestione di database Microsoft Jet sono responsabili della conversione \(anziché MFC\).  
  
##  <a name="_mfcnotes_tn053_details_of_dfx_text"></a> Dettagli di DFX\_Text  
 Come accennato in precedenza, il modo migliore per illustrare il funzionamento di DFX venga eseguita con un esempio.  A questo scopo passare attraverso i internals di `DFX_Text` deve lavorare in modo per fornire almeno una conoscenza di base di DFX.  
  
 **AddToParameterList**  
 Questa operazione consente di compilare la clausola SQL **PARAMETRI** \(" "\)`Parameters <param name>, <param type> ... ;`richiesta da Jet.  Ciascun parametro è denominato e tipizzato \(come specificato nella chiamata a RFX\).  Vedere funzione di **CDaoFieldExchange::AppendParamType** di funzione per visualizzare i nomi di diversi tipi.  Nel caso di `DFX_Text`, il tipo utilizzato `text`.  
  
 **AddToSelectList**  
 Compilare la clausola SQL **SELEZIONA**.  Ciò è abbastanza semplice poiché la colonna nome specificato dalla chiamata di DFX viene aggiunto semplicemente \("`SELECT <column name>, ...`"\).  
  
 **BindField**  
 Il più complesso di operazioni.  Come accennato in precedenza in cui la struttura dell'associazione di DAO utilizzata da `GetRows` viene installata.  Come si può notare dal codice in `DFX_Text` i tipi di informazioni nella struttura includono il tipo di DAO utilizzato \(**DAO\_CHAR** o **DAO\_WCHAR** nel caso di `DFX_Text`\).  Inoltre, il tipo di associazione utilizzato è installato anche.  In una sezione precedente `GetRows` è stato illustrato solo brevemente, ma è sufficiente spiegare che il tipo di associazione utilizzato da MFC è sempre associazione a indirizzo diretto \(**DAOBINDING\_DIRECT**\).  Sempre per l'associazione di callback di lunghezza variabile dell'associazione di colonna \(come `DFX_Text`\) viene utilizzato in modo da poter controllare l'allocazione della memoria e specificare MFC un indirizzo della lunghezza corretta.  Cosa questi che è possibile eseguire tale MFC può stabilire sempre DAO "dove" inserire dati, consentendo pertanto a associare direttamente a variabili membro.  Il resto della struttura di associazione è compilato con informazioni quali l'indirizzo della funzione di callback dell'allocazione di memoria e del tipo di associazione di colonna \(che derivano dal nome della colonna\).  
  
 **BindParam**  
 Si tratta di un'operazione semplice che chiama `SetParamValue` con il valore del parametro specificato nel membro di parametro.  
  
 **Fixup**  
 Compilare lo stato di **NULL** per ogni campo.  
  
 `SetFieldNull`  
 Questa operazione contrassegna solo in ogni stato di campo come **NULL** e impostare il valore di una variabile membro a **PSEUDO\_NULL**.  
  
 **SetDirtyField**  
 Chiama `SetFieldValue` per ogni campo contrassegnato come modificato.  
  
 Tutte le operazioni rimanenti si tratta solo dell'utilizzo della cache di dati.  La cache di dati è un buffer aggiuntivo dei dati nel record corrente utilizzato per rendere determinate operazioni più semplici.  Ad esempio, i campi "modifica" possono essere automaticamente rilevati.  Come descritto nella documentazione online possono essere disabilitate completamente o al campo.  L'implementazione del buffering utilizza una mappa.  Questa mappa viene utilizzata per la corrispondenza sulle copie allocate in modo dinamico dei dati con l'indirizzo del campo "associato" \(o il membro dati derivato di `CDaoRecordset` \).  
  
 **AllocCache**  
 Alloca dinamicamente il valore del campo memorizzato nella cache e lo aggiunge alla mappa.  
  
 **FreeCache**  
 Elimina il valore del campo memorizzato nella cache e la rimuove dalla mappa.  
  
 **StoreField**  
 Copia il valore del campo corrente nella cache di dati.  
  
 **LoadField**  
 Copia il valore memorizzato nella cache del membro del campo.  
  
 **MarkForAddNew**  
 Controlla se il valore del campo corrente non è**NULL** e contrassegnarlo modificato se necessario.  
  
 **MarkForEdit**  
 Confronta il valore del campo corrente con la cache di dati e contrassegna modificato se necessario.  
  
> [!TIP]
>  Modelli delle routine personalizzate DFX sulle routine esistenti di DFX per i tipi di dati standard.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)