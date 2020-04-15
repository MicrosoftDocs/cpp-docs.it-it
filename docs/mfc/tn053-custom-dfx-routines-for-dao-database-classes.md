---
title: 'TN053: routine DFX personalizzate per le classi database DAO'
ms.date: 09/17/2019
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
ms.openlocfilehash: f7ad854f4dbb4e90c09e886c69260e4e2eea3be2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365254"
---
# <a name="tn053-custom-dfx-routines-for-dao-database-classes"></a>TN053: routine DFX personalizzate per le classi database DAO

> [!NOTE]
> DAO viene utilizzato con i database di Access ed è supportato tramite Office 2013. DAO 3.6 è la versione finale ed è considerata obsoleta. L'ambiente e le procedure guidate di Visual C, non supportano DAO (anche se le classi DAO sono incluse ed è comunque possibile utilizzarle). Microsoft consiglia di utilizzare [i modelli OLE DB](../data/oledb/ole-db-templates.md) o ODBC e [MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare DAO solo nella gestione delle applicazioni esistenti.

Questa nota tecnica descrive il meccanismo DFX (Record Field Exchange) DAO. Per comprendere meglio cosa sta accadendo nelle `DFX_Text` routine DFX, la funzione verrà spiegata in dettaglio come esempio. Come ulteriore fonte di informazioni a questa nota tecnica, è possibile esaminare il codice per le altre singole funzioni DFX. Probabilmente non sarà necessaria una routine DFX personalizzata tutte le volte che potrebbe essere necessaria una routine RFX personalizzata (utilizzata con le classi di database ODBC).

Questa nota tecnica contiene:

- Panoramica di DFX

- [Esempi di](#_mfcnotes_tn053_examples) utilizzo dello scambio di campi di record DAO e dell'associazione dinamicaExamples using DAO Record Field Exchange and Dynamic Binding

- [Funzionamento di DFX](#_mfcnotes_tn053_how_dfx_works)

- [Scopo della routine DFX personalizzata](#_mfcnotes_tn053_what_your_custom_dfx_routine_does)

- [Dettagli di DFX_Text](#_mfcnotes_tn053_details_of_dfx_text)

**Panoramica di DFX**

Il meccanismo di scambio di campi di record DAO (DFX) `CDaoRecordset` viene utilizzato per semplificare la procedura di recupero e aggiornamento dei dati quando si utilizza la classe . Il processo viene semplificato `CDaoRecordset` utilizzando i membri dati della classe. Derivando da `CDaoRecordset`, è possibile aggiungere membri dati alla classe derivata che rappresenta ogni campo di una tabella o di una query. Questo meccanismo di "associazione statica" è semplice, ma potrebbe non essere il metodo di recupero/aggiornamento dei dati preferito per tutte le applicazioni. DFX recupera ogni campo associato ogni volta che viene modificato il record corrente. Se si sviluppa un'applicazione sensibile alle prestazioni che non richiede il recupero di `CDaoRecordset::GetFieldValue` `CDaoRecordset::SetFieldValue` tutti i campi quando la valuta viene modificata, "associazione dinamica" tramite e può essere il metodo di accesso ai dati di scelta.

> [!NOTE]
> DFX e l'associazione dinamica non si escludono a vicenda, pertanto è possibile usare un utilizzo ibrido dell'associazione statica e dinamica.

## <a name="example-1--use-of-dao-record-field-exchange-only"></a><a name="_mfcnotes_tn053_examples"></a>Esempio 1 : solo utilizzo di SCambio campi record DAO

(presupponendo `CDaoRecordset` che `CMySet` la classe derivata sia già aperta)

```
// Add a new record to the customers table
myset.AddNew();

myset.m_strCustID = _T("MSFT");

myset.m_strCustName = _T("Microsoft");

myset.Update();
```

**Esempio 2 - Utilizzo solo dell'associazione dinamicaExample 2 - Use of dynamic binding only**

(presuppone l'utilizzo di `CDaoRecordset` class, `rs`, ed è già aperto)

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

**Esempio 3 - Utilizzo di Scambio di campi di record DAO e associazione dinamica**

(presuppone l'esplorazione `CDaoRecordset`dei `emp`dati dei dipendenti con la classe derivata )

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

## <a name="how-dfx-works"></a><a name="_mfcnotes_tn053_how_dfx_works"></a>Funzionamento di DFX

Il meccanismo DFX funziona in modo simile al meccanismo di scambio di campi di record (RFX) utilizzato dalle classi ODBC MFC. I principi di DFX e RFX sono gli stessi, ma esistono numerose differenze interne. La progettazione delle funzioni DFX era tale che praticamente tutto il codice è condiviso dalle singole routine DFX. Al livello più alto DFX fa solo un paio di cose.

- DFX costruisce la clausola SQL **SELECT** e la clausola SQL **PARAMETERS,** se necessario.

- DFX costruisce la struttura di associazione `GetRows` utilizzata dalla funzione di DAO (ulteriori informazioni più avanti).

- DFX gestisce il buffer di dati utilizzato per rilevare i campi dirty (se viene utilizzato il doppio buffer)

- DFX gestisce le matrici di stato **NULL** e **DIRTY** e imposta i valori se necessario negli aggiornamenti.

Il cuore del meccanismo DFX è `CDaoRecordset` `DoFieldExchange` la funzione della classe derivata. Questa funzione invia le chiamate alle singole funzioni DFX di un tipo di operazione appropriato. Prima `DoFieldExchange` di chiamare le funzioni MFC interne impostare il tipo di operazione. L'elenco seguente mostra i vari tipi di operazione e una breve descrizione.

|Operazione|Descrizione|
|---------------|-----------------|
|`AddToParameterList`|Crea la clausola PARAMETERS|
|`AddToSelectList`|Crea la clausola SELECT|
|`BindField`|Imposta la struttura di rilegatura|
|`BindParam`|Imposta i valori dei parametri|
|`Fixup`|Imposta lo stato NULL|
|`AllocCache`|Alloca la cache per il controllo dirty|
|`StoreField`|Salva il record corrente nella cache|
|`LoadField`|Ripristina la cache ai valori dei membri|
|`FreeCache`|Memorizza cache|
|`SetFieldNull`|Imposta lo stato del campo & valore su NULL|
|`MarkForAddNew`|Contrassegna i campi dirty se non PSEUDO NULL|
|`MarkForEdit`|Contrassegna i campi dirty se non corrispondono alla cache|
|`SetDirtyField`|Imposta i valori dei campi contrassegnati come dirty|

Nella sezione successiva, ogni operazione verrà spiegata in modo più dettagliato per `DFX_Text`.

La funzionalità più importante da comprendere sul processo di scambio dei campi dei record DAO è che utilizza la `GetRows` funzione dell'oggetto. `CDaoRecordset` La funzione `GetRows` DAO può funzionare in diversi modi. Questa nota tecnica descrive `GetRows` solo brevemente in quanto non rientra nell'ambito di questa nota tecnica.
DAO `GetRows` può funzionare in diversi modi.

- Può recuperare più record e più campi di dati contemporaneamente. Ciò consente un accesso più rapido ai dati con la complicazione di gestire una struttura di dati di grandi dimensioni e gli offset appropriati per ogni campo e per ogni record di dati nella struttura. MFC non sfrutta questo meccanismo di recupero di più record.

- Un `GetRows` altro modo può funzionare è quello di consentire ai programmatori di specificare gli indirizzi di associazione per i dati recuperati di ogni campo per un record di dati.

- DAO inoltre "richiamare" nel chiamante per le colonne di lunghezza variabile per consentire al chiamante di allocare memoria. Questa seconda funzionalità ha il vantaggio di ridurre al minimo il numero di copie dei dati `CDaoRecordset` e di consentire l'archiviazione diretta dei dati nei membri di una classe (la classe derivata). Questo secondo meccanismo è il metodo MFC `CDaoRecordset` utilizza per eseguire l'associazione ai membri dati nelle classi derivate.

## <a name="what-your-custom-dfx-routine-does"></a><a name="_mfcnotes_tn053_what_your_custom_dfx_routine_does"></a>Scopo della routine DFX personalizzata

Da questa discussione risulta che l'operazione più importante implementata in qualsiasi funzione DFX `GetRows`deve essere la possibilità di impostare le strutture di dati necessarie per chiamare correttamente . Esistono numerose altre operazioni che una funzione DFX deve supportare, ma nessuna `GetRows` importante o complessa come la corretta preparazione per la chiamata.

L'utilizzo di DFX è descritto nella documentazione online. Essenzialmente, ci sono due requisiti. In primo luogo, i `CDaoRecordset` membri devono essere aggiunti alla classe derivata per ogni campo e parametro associato. A `CDaoRecordset::DoFieldExchange` segue questo dovrebbe essere sottoposto a override. Si noti che il tipo di dati del membro è importante. Deve corrispondere ai dati del campo nel database o almeno essere convertibile in quel tipo. Ad esempio, un campo numerico nel database, ad esempio un valore `CString` long integer, può sempre essere convertito in testo e associato a un membro, ma un campo di testo in un database non può essere necessariamente convertito in una rappresentazione numerica, ad esempio long integer e associato a un membro long integer. DAO e il modulo di gestione di database Microsoft Jet sono responsabili della conversione (anziché MFC).

## <a name="details-of-dfx_text"></a><a name="_mfcnotes_tn053_details_of_dfx_text"></a>Dettagli di DFX_Text

Come accennato in precedenza, il modo migliore per spiegare come funziona DFX è quello di lavorare attraverso un esempio. A questo scopo passare attraverso `DFX_Text` gli elementi interni di dovrebbe funzionare abbastanza bene per contribuire a fornire almeno una conoscenza di base di DFX.

- `AddToParameterList`

   Questa operazione crea la clausola SQL **PARAMETERS** ("`Parameters <param name>, <param type> ... ;`") richiesta da Jet. Ogni parametro è denominato e tipizzato (come specificato nella chiamata RFX). Vedere la `CDaoFieldExchange::AppendParamType` funzione funzione per visualizzare i nomi dei singoli tipi. Nel caso `DFX_Text`di , il tipo utilizzato è **text**.

- `AddToSelectList`

   Compila la clausola SQL **SELECT.** Questo è abbastanza semplice in quanto il nome della colonna`SELECT <column name>, ...`specificato dalla chiamata DFX viene semplicemente aggiunto (" ").

- `BindField`

   La più complessa delle operazioni. Come accennato in precedenza, è `GetRows` qui che viene impostata la struttura di associazione DAO utilizzata da. Come si può vedere `DFX_Text` dal codice nei tipi di informazioni nella struttura includono il tipo `DFX_Text`DAO utilizzato (**DAO_CHAR** o **DAO_WCHAR** nel caso di ). Inoltre, viene impostato anche il tipo di binding utilizzato. In una `GetRows` sezione precedente è stata descritta solo brevemente, ma era sufficiente spiegare che il tipo di associazione utilizzato da MFC è sempre l'associazione diretta degli indirizzi (**DAOBINDING_DIRECT**). Inoltre, per l'associazione `DFX_Text`di callback di colonna a lunghezza variabile (ad esempio ) viene utilizzata l'associazione di callback in modo che MFC possa controllare l'allocazione di memoria e specificare un indirizzo della lunghezza corretta. Ciò significa che MFC può sempre indicare a DAO "dove" inserire i dati, consentendo in tal modo l'associazione direttamente alle variabili membro. Il resto della struttura di associazione viene compilato con elementi come l'indirizzo della funzione di callback di allocazione di memoria e il tipo di associazione di colonna (associazione in base al nome della colonna).

- `BindParam`

   Si tratta di un'operazione semplice che chiama `SetParamValue` con il valore del parametro specificato nel membro del parametro.

- `Fixup`

   Compila lo stato **NULL** per ogni campo.

- `SetFieldNull`

   Questa operazione contrassegna solo lo stato di ogni campo come **NULL** e imposta il valore della variabile membro su **PSEUDO_NULL**.

- `SetDirtyField`

   Chiamate `SetFieldValue` per ogni campo contrassegnato come sporco.

Tutte le operazioni rimanenti riguardano solo l'utilizzo della cache di dati. La cache dei dati è un buffer aggiuntivo dei dati nel record corrente utilizzato per semplificare determinate operazioni. Ad esempio, i campi "sporchi" possono essere rilevati automaticamente. Come descritto nella documentazione online può essere disattivato completamente o a livello di campo. L'implementazione del buffer utilizza una mappa. Questa mappa viene utilizzata per abbinare le copie allocate dinamicamente dei dati `CDaoRecordset` con l'indirizzo del campo "associato" (o membro dati derivato).

- `AllocCache`

   Alloca dinamicamente il valore del campo memorizzato nella cache e lo aggiunge alla mappa.

- `FreeCache`

   Elimina il valore del campo memorizzato nella cache e lo rimuove dalla mappa.

- `StoreField`

   Copia il valore del campo corrente nella cache di dati.

- `LoadField`

   Copia il valore memorizzato nella cache nel membro del campo.

- `MarkForAddNew`

   Controlla se il valore del campo corrente è diverso**da NULL** e lo contrassegna come dirty se necessario.

- `MarkForEdit`

   Confronta il valore del campo corrente con la cache dei dati e contrassegna dirty se necessario.

> [!TIP]
> Modellare le routine DFX personalizzate nelle routine DFX esistenti per i tipi di dati standard.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
