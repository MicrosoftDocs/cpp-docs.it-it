---
title: 'TN053: Routine DFX personalizzate per DAO classi di Database | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.dfx
dev_langs:
- C++
helpviewer_keywords:
- MFC, DAO and
- database classes [MFC], DAO
- DAO [MFC], MFC
- DFX (DAO record field exchange) [MFC], custom routines
- TN053
- DAO [MFC], classes
- DFX (DAO record field exchange) [MFC]
- custom DFX routines [MFC]
ms.assetid: fdcf3c51-4fa8-4517-9222-58aaa4f25cac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 47d1c9769055e0ab69f57f58b136b7844cb1f860
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33386093"
---
# <a name="tn053-custom-dfx-routines-for-dao-database-classes"></a>TN053: routine DFX personalizzate per le classi database DAO
> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano DAO (anche se sono incluse le classi DAO ed è comunque possibile usarle). Microsoft consiglia di utilizzare [modelli OLE DB](../data/oledb/ole-db-templates.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. Utilizzare solo DAO di gestione delle applicazioni esistenti.  
  
 Questa nota tecnica viene descritto il meccanismo di scambio (DFX) di campi di record DAO. Per comprendere cosa avviene nelle routine DFX, il `DFX_Text` funzione verrà spiegata in dettaglio come esempio. Come un'origine aggiuntiva di informazioni da questa nota tecnica, è possibile esaminare il codice per l'altra le singole funzioni DFX. Probabilmente non si prevede una routine DFX personalizzata spesso è una routine RFX personalizzata (utilizzata con classi di database ODBC).  
  
 Questa nota tecnica contiene:  
  
-   Panoramica DFX  
  
- [Esempi](#_mfcnotes_tn053_examples) con campi di Record DAO e Binding dinamico  
  
- [Funzionamento di DFX](#_mfcnotes_tn053_how_dfx_works)  
  
- [Significato di una Routine DFX personalizzate](#_mfcnotes_tn053_what_your_custom_dfx_routine_does)  
  
- [Dettagli di DFX_Text](#_mfcnotes_tn053_details_of_dfx_text)  
  
 **Panoramica DFX**  
  
 Il meccanismo di scambio di campi di record DAO (DFX) viene utilizzato per semplificare la procedura di recupero e l'aggiornamento dei dati quando si utilizza la `CDaoRecordset` classe. Il processo viene semplificato utilizzando i membri dati di `CDaoRecordset` classe. Mediante la derivazione da `CDaoRecordset`, è possibile aggiungere i membri di dati alla classe derivata che rappresenta ogni campo in una tabella o query. Questo meccanismo "associazione statico" è semplice, ma potrebbe non essere il metodo di recupero o l'aggiornamento di dati scelto per tutte le applicazioni. DFX recupera ogni campo associato ogni volta che viene modificato il record corrente. Se si sviluppa un'applicazione sensibili alle prestazioni che non richiede il recupero di ogni campo quando viene modificato valuta, "associazione dinamica" tramite `CDaoRecordset::GetFieldValue` e `CDaoRecordset::SetFieldValue` potrebbe essere il metodo di accesso ai dati di scelta.  
  
> [!NOTE]
>  Associazione dinamica e DFX non sono si escludono a vicenda, pertanto può essere utilizzato un uso ibrido dei binding statici e dinamici.  
  
## <a name="_mfcnotes_tn053_examples"></a> Esempio 1: Utilizzo di DAO Record Field Exchange solo  
  
 (si presuppone `CDaoRecordset` -classe derivata `CMySet` già aperto)  
  
```  
// Add a new record to the customers table  
myset.AddNew();

myset.m_strCustID = _T("MSFT");

myset.m_strCustName = _T("Microsoft");

myset.Update();
```  
  
 **Esempio 2: Utilizzo di binding dinamico**  
  
 (presuppone l'uso di `CDaoRecordset` (classe), `rs`, ed è già aperta)  
  
```  
// Add a new record to the customers table  
COleVariant  varFieldValue1 (_T("MSFT"),
    VT_BSTRT);

//Note: VT_BSTRT flags string type as ANSI,
    instead of UNICODE default  
COleVariant  varFieldValue2  (_T("Microsoft"),
    VT_BSTRT);

rs.AddNew();

rs.SetFieldValue(_T("Customer_ID"),
    varFieldValue1);

rs.SetFieldValue(_T("Customer_Name"),
    varFieldValue2);

rs.Update();
```  
  
 **Esempio 3: Utilizzo di DAO Record Field Exchange e associazione dinamica**  
  
 (presuppone l'esplorazione di dati dipendenti con `CDaoRecordset`-classe derivata `emp`)  
  
```  
// Get the employee's data so that it can be displayed  
emp.MoveNext();

 
// If user wants to see employee's photograph,  
// fetch it  
COleVariant varPhoto;  
if (bSeePicture)  
    emp.GetFieldValue(_T("photo"),
    varPhoto);

 
// Display the data  
PopUpEmployeeData(emp.m_strFirstName,  
    emp.m_strLastName,
    varPhoto);
```  
  
## <a name="_mfcnotes_tn053_how_dfx_works"></a> Funzionamento di DFX  
  
 Il meccanismo DFX funziona in modo analogo al meccanismo di campi di record di RFX (exchange) utilizzato dalle classi ODBC MFC. I principi di DFX e RFX sono gli stessi, ma vi sono numerose differenze interne. La progettazione delle funzioni DFX è tale che quasi tutto il codice è condiviso dalle routine DFX singoli. Al massimo livello DFX solo esegue alcune operazioni.  
  
-   DFX costrutti SQL **selezionare** clausola e SQL **parametri** clausola se necessario.  
  
-   DFX costruisce la struttura di associazione utilizzata da DAO `GetRows` funzione (vedere più avanti in questo articolo).  
  
-   DFX gestisce il buffer di dati utilizzato per rilevare i campi dirty (se viene utilizzato il doppio buffer)  
  
-   DFX gestisce il **NULL** e **DIRTY** stato matrici e imposta valori se necessario per gli aggiornamenti.  
  
 Il fulcro di DFX meccanismo è il `CDaoRecordset` della classe derivata `DoFieldExchange` (funzione). Questa funzione Invia chiamate per le singole funzioni DFX di un tipo di operazione appropriata. Prima di chiamare `DoFieldExchange` le funzioni MFC interne impostano il tipo di operazione. L'elenco seguente mostra i diversi tipi di operazione e una breve descrizione.  
  
|Operazione|Descrizione|  
|---------------|-----------------|  
|**AddToParameterList**|Clausola di parametri di compilazioni|  
|**AddToSelectList**|Clausola SELECT le compilazioni|  
|**BindField**|Imposta la struttura di associazione|  
|**BindParam**|Imposta i valori dei parametri|  
|**Correzione**|Imposta lo stato NULL|  
|**AllocCache**|Alloca una cache per il controllo dirty|  
|**StoreField**|Salva il record corrente nella cache|  
|**LoadField**|Ripristini di cache ai valori del membro|  
|**FreeCache**|Libera cache|  
|`SetFieldNull`|Imposta campo stato & valore su NULL|  
|**MarkForAddNew**|Contrassegna i campi dirty se non è PSEUDO NULL|  
|**MarkForEdit**|Se dirty campi di virgolette non corrispondenti della cache|  
|**SetDirtyField**|Imposta campo valori contrassegnati come dirty|  
  
 Nella sezione successiva, verrà spiegati in dettaglio per ogni operazione `DFX_Text`.  
  
 La funzionalità più importante da comprendere sul processo di exchange di campi di record DAO è che utilizza il `GetRows` funzione il `CDaoRecordset` oggetto. Il DAO `GetRows` può funzionare in diversi modi. Questa nota tecnica solo brevemente `GetRows` perché è esterno all'ambito di questa nota tecnica.  
  
 DAO `GetRows` può operare in diversi modi.  
  
-   È possibile recuperare più record e più campi di dati in una sola volta. In questo modo più rapido accesso ai dati con la complessità di gestione di una struttura di dati di grandi dimensioni e gli offset appropriati per ogni campo e per ogni record di dati nella struttura. MFC non sfruttare il meccanismo di recupero più record.  
  
-   Un altro modo `GetRows` possibile lavoro consiste nel consentire ai programmatori di specificare gli indirizzi di associazione per i dati di ogni campo per un record di dati recuperati.  
  
-   DAO verrà anche "richiamare il" chiamante per le colonne di lunghezza variabile per consentire al chiamante di allocare memoria. Questa funzionalità secondo presenta il vantaggio di ridurre al minimo il numero di copie di dati, nonché consentire l'archiviazione diretta dei dati in membri di una classe (il `CDaoRecordset` classe derivata). Questo meccanismo secondo è il metodo usato da MFC da associare ai membri dati `CDaoRecordset` classi derivate.  
  
##  <a name="_mfcnotes_tn053_what_your_custom_dfx_routine_does"></a> Significato di una Routine DFX personalizzate  
 È evidente da questa discussione che l'operazione più importante implementata in qualsiasi funzione DFX deve essere la possibilità di impostare le strutture di dati necessari per chiamare correttamente `GetRows`. Esistono una serie di altre operazioni che deve essere supportati anche una funzione DFX, ma nessuno come importanti o complesse, ad esempio correttamente la preparazione per la `GetRows` chiamare.  
  
 L'utilizzo di DFX è descritto nella documentazione online. In pratica, esistono due requisiti. In primo luogo, è necessario aggiungere i membri per la `CDaoRecordset` classe derivata per ogni campo associato e un parametro. In questo `CDaoRecordset::DoFieldExchange` deve essere sottoposto a override. Si noti che il tipo di dati del membro sono importanti. Deve corrispondere ai dati del campo nel database o almeno essere convertibile in quel tipo. Ad esempio un campo numerico nel database, ad esempio un valore long integer può sempre essere convertito in testo e associato a un `CString` membro, ma un campo di testo in un database non necessariamente può essere convertiti in una rappresentazione numerica, ad esempio integer long e associato a un tempo Integr er membro. DAO e il motore di database Microsoft Jet sono responsabili per la conversione (anziché MFC).  
  
##  <a name="_mfcnotes_tn053_details_of_dfx_text"></a> Dettagli di DFX_Text  
 Come accennato in precedenza, il modo migliore per illustrare il funzionamento DFX è di eseguire un esempio. A questo scopo passare attraverso le caratteristiche interne di `DFX_Text` dovrebbe funzionare bene per fornire una conoscenza di base di DFX.  
  
 **AddToParameterList**  
 Questa operazione compilazioni SQL **parametri** clausola ("`Parameters <param name>, <param type> ... ;`") necessari per Jet. Ogni parametro è denominato e tipizzato (come specificato nella chiamata RFX). Vedere la funzione **CDaoFieldExchange::AppendParamType** funzione per visualizzare i nomi dei singoli tipi. In caso di `DFX_Text`, il tipo utilizzato è `text`.  
  
 **AddToSelectList**  
 Compilazioni SQL **selezionare** clausola. Viene aggiunta più facile in avanti è semplicemente il nome della colonna specificato dalla chiamata DFX ("`SELECT <column name>, ...`").  
  
 **BindField**  
 La più complessa delle operazioni. Come accennato in precedenza si tratta di dove la struttura di associazione di DAO utilizzato da `GetRows` è impostato. Come si può notare dal codice in `DFX_Text` i tipi di informazioni nella struttura includono il tipo DAO utilizzato (**DAO_CHAR** o **DAO_WCHAR** nel caso di `DFX_Text`). Inoltre, il tipo di associazione usato viene impostato anche. In una sezione precedente `GetRows` è stato descritto brevemente, ma è sufficiente per spiegare che il tipo di associazione utilizzati da MFC è sempre l'indirizzamento diretto associazione (**DAOBINDING_DIRECT**). Inoltre, per l'associazione delle colonne a lunghezza variabile (ad esempio `DFX_Text`) viene utilizzata l'associazione di callback in modo da MFC è possibile controllare l'allocazione di memoria e specificare un indirizzo della lunghezza corretta. Ciò significa che MFC è sempre possibile indicare DAO "where" per inserire i dati, consentendo in tal modo l'associazione diretta a variabili membro. Il resto della struttura di associazione viene compilato con elementi quali l'indirizzo della funzione di callback di allocazione della memoria e il tipo di associazione di colonna (associazione in base al nome di colonna).  
  
 **BindParam**  
 Si tratta di un'operazione semplice che chiama `SetParamValue` con il valore del parametro specificato nel membro del parametro.  
  
 **Correzione**  
 Compila il **NULL** stato per ogni campo.  
  
 `SetFieldNull`  
 Questa operazione solo di contrassegnare lo stato di ogni campo come **NULL** e imposta il membro valore della variabile **PSEUDO_NULL**.  
  
 **SetDirtyField**  
 Chiamate `SetFieldValue` per ogni campo contrassegnato come dirty.  
  
 Tutte le operazioni rimanenti riguardano solo con la cache dei dati. La cache dei dati è un buffer in eccesso di dati del record corrente viene utilizzata per rendere più semplice determinate operazioni. Ad esempio, i campi "dirty" possono essere rilevati automaticamente. Come descritto nella documentazione in linea che può essere disattivata a livello di campo o completamente. L'implementazione del buffer utilizza una mappa. Questo mapping viene utilizzato per individuare le corrispondenze allocate dinamicamente copie dei dati con l'indirizzo del campo "associato" (o `CDaoRecordset` derivato il membro dati).  
  
 **AllocCache**  
 In modo dinamico alloca il valore del campo memorizzati nella cache e la aggiunge alla mappa.  
  
 **FreeCache**  
 Elimina il valore del campo memorizzati nella cache e lo rimuove dalla mappa.  
  
 **StoreField**  
 Copia il valore del campo corrente nella cache di dati.  
  
 **LoadField**  
 Copia del valore memorizzato nel membro di campo.  
  
 **MarkForAddNew**  
 Controlla se il valore di campo corrente è non**NULL** e contrassegna dirty se necessario.  
  
 **MarkForEdit**  
 Confronta il valore di campo corrente con cache di dati e le contrassegna dirty se necessario.  
  
> [!TIP]
>  Nelle routine DFX esistente per tipi di dati standard del modello le routine DFX personalizzate.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

