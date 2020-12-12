---
description: 'Altre informazioni su: TN053: routine DFX personalizzate per le classi di database DAO'
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
ms.openlocfilehash: cbe34963ec3f46a88e41521f119191e7d0afe1e6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97214975"
---
# <a name="tn053-custom-dfx-routines-for-dao-database-classes"></a>TN053: routine DFX personalizzate per le classi database DAO

> [!NOTE]
> DAO viene usato con i database di Access ed è supportato tramite Office 2013. DAO 3,6 è la versione finale ed è considerata obsoleta. L'ambiente Visual C++ e le procedure guidate non supportano DAO (sebbene le classi DAO siano incluse ed è comunque possibile usarle). Microsoft consiglia di utilizzare [OLE DB modelli](../data/oledb/ole-db-templates.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare solo DAO per la gestione delle applicazioni esistenti.

Questa nota tecnica descrive il meccanismo DFX (record Field Exchange) DAO. Per comprendere ciò che accade nelle routine DFX, la `DFX_Text` funzione verrà illustrata in dettaglio come esempio. Come fonte di informazioni aggiuntive per questa nota tecnica, è possibile esaminare il codice per le altre funzioni di DFX. Probabilmente non sarà necessaria una routine di DFX personalizzata con la stessa frequenza con cui potrebbe essere necessaria una routine RFX personalizzata (utilizzata con le classi di database ODBC).

Questa nota tecnica contiene:

- Panoramica di DFX

- [Esempi](#_mfcnotes_tn053_examples) di utilizzo di scambio di campi di record DAO e associazione dinamica

- [Funzionamento di DFX](#_mfcnotes_tn053_how_dfx_works)

- [Funzione della routine DFX personalizzata](#_mfcnotes_tn053_what_your_custom_dfx_routine_does)

- [Dettagli di DFX_Text](#_mfcnotes_tn053_details_of_dfx_text)

**Panoramica di DFX**

Il meccanismo di scambio dei campi di record DAO (DFX) viene usato per semplificare la procedura di recupero e aggiornamento dei dati quando si usa la `CDaoRecordset` classe. Il processo viene semplificato utilizzando i membri dati della `CDaoRecordset` classe. Grazie alla derivazione da `CDaoRecordset` , è possibile aggiungere membri dati alla classe derivata che rappresenta ogni campo di una tabella o di una query. Questo meccanismo di associazione statica è semplice, ma potrebbe non essere il metodo di recupero/aggiornamento dei dati scelto per tutte le applicazioni. DFX recupera ogni campo associato ogni volta che viene modificato il record corrente. Se si sta sviluppando un'applicazione sensibile alle prestazioni che non richiede il recupero di ogni campo quando viene modificata la valuta, "binding dinamico" tramite `CDaoRecordset::GetFieldValue` e `CDaoRecordset::SetFieldValue` potrebbe essere il metodo di accesso ai dati desiderato.

> [!NOTE]
> DFX e il binding dinamico non si escludono a vicenda, quindi è possibile usare un uso ibrido dell'associazione statica e dinamica.

## <a name="example-1--use-of-dao-record-field-exchange-only"></a><a name="_mfcnotes_tn053_examples"></a> Esempio 1: utilizzo del solo scambio di campi di record DAO

(presuppone che la `CDaoRecordset` classe derivata sia `CMySet` già aperta)

```
// Add a new record to the customers table
myset.AddNew();

myset.m_strCustID = _T("MSFT");

myset.m_strCustName = _T("Microsoft");

myset.Update();
```

**Esempio 2: utilizzo solo dell'associazione dinamica**

si presuppone che l'utilizzo della `CDaoRecordset` classe, `rs` , sia già aperto.

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

**Esempio 3: utilizzo di scambio di campi di record DAO e associazione dinamica**

(presuppone l'esplorazione dei dati dei dipendenti con la `CDaoRecordset` classe derivata da `emp` )

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

## <a name="how-dfx-works"></a><a name="_mfcnotes_tn053_how_dfx_works"></a> Funzionamento di DFX

Il meccanismo DFX funziona in modo simile al meccanismo RFX (record Field Exchange) utilizzato dalle classi ODBC MFC. I principi di DFX e RFX sono gli stessi, ma vi sono numerose differenze interne. La progettazione delle funzioni DFX era tale che praticamente tutto il codice è condiviso dalle singole routine DFX. Al livello più alto, DFX esegue solo alcune operazioni.

- Se necessario, DFX crea la clausola SQL **Select** e i **parametri** SQL.

- DFX crea la struttura di associazione utilizzata dalla funzione di DAO, `GetRows` più avanti in questo momento.

- DFX gestisce il buffer di dati utilizzato per rilevare i campi Dirty (se viene utilizzato il doppio buffering)

- DFX gestisce le matrici di stato **null** e **Dirty** e imposta i valori se necessario per gli aggiornamenti.

Alla base del meccanismo DFX si trova la `CDaoRecordset` funzione della classe derivata `DoFieldExchange` . Questa funzione Invia le chiamate alle singole funzioni DFX di un tipo di operazione appropriato. Prima `DoFieldExchange` di chiamare le funzioni MFC interne, impostare il tipo di operazione. Nell'elenco seguente vengono illustrati i vari tipi di operazione e una breve descrizione.

|Operazione|Descrizione|
|---------------|-----------------|
|`AddToParameterList`|Clausola Builds PARAMETERS|
|`AddToSelectList`|Compila clausola SELECT|
|`BindField`|Imposta la struttura di associazione|
|`BindParam`|Imposta i valori dei parametri|
|`Fixup`|Imposta lo stato NULL|
|`AllocCache`|Alloca la cache per il controllo Dirty|
|`StoreField`|Salva il record corrente nella cache|
|`LoadField`|Ripristina la cache ai valori dei membri|
|`FreeCache`|Cache libera|
|`SetFieldNull`|Imposta lo stato del campo & valore su NULL|
|`MarkForAddNew`|Contrassegna i campi Dirty se non PSEUDO NULL|
|`MarkForEdit`|Contrassegna i campi Dirty se non corrispondono alla cache|
|`SetDirtyField`|Imposta i valori di campo contrassegnati come Dirty|

Nella sezione successiva, ogni operazione verrà illustrata più dettagliatamente per `DFX_Text` .

La funzionalità più importante per comprendere il processo di scambio dei campi di record DAO è che usa la `GetRows` funzione dell' `CDaoRecordset` oggetto. La `GetRows` funzione DAO può funzionare in diversi modi. Questa nota tecnica verrà descritta solo brevemente `GetRows` in quanto esula dall'ambito di questa nota tecnica.
DAO `GetRows` può funzionare in diversi modi.

- Può recuperare più record e più campi di dati alla volta. Questo consente un accesso ai dati più veloce con la complicazione della gestione di una struttura di dati di grandi dimensioni e degli offset appropriati per ogni campo e per ogni record di dati nella struttura. MFC non sfrutta questo meccanismo di recupero di più record.

- Un altro modo `GetRows` può funzionare consiste nel consentire ai programmatori di specificare indirizzi di binding per i dati recuperati di ogni campo per un record di dati.

- DAO richiamerà anche il chiamante per le colonne a lunghezza variabile in modo da consentire al chiamante di allocare memoria. Questa seconda funzionalità ha il vantaggio di ridurre al minimo il numero di copie dei dati e di consentire l'archiviazione diretta dei dati in membri di una classe (la `CDaoRecordset` classe derivata). Questo secondo meccanismo è il metodo che MFC utilizza per associare i membri dati nelle `CDaoRecordset` classi derivate.

## <a name="what-your-custom-dfx-routine-does"></a><a name="_mfcnotes_tn053_what_your_custom_dfx_routine_does"></a> Funzione della routine DFX personalizzata

Da questa discussione è evidente che l'operazione più importante implementata in qualsiasi funzione DFX deve essere la possibilità di configurare le strutture di dati necessarie per chiamare correttamente `GetRows` . È necessario che anche una funzione di DFX supporti una serie di altre operazioni, ma nessuna è importante o complessa come preparazione corretta per la `GetRows` chiamata.

L'uso di DFX è descritto nella documentazione online. In sostanza, esistono due requisiti. Per prima cosa, i membri devono essere aggiunti alla `CDaoRecordset` classe derivata per ogni campo e parametro associato. `CDaoRecordset::DoFieldExchange`È necessario eseguire l'override di questa procedura. Si noti che il tipo di dati del membro è importante. Deve corrispondere ai dati del campo del database o almeno essere convertibili in quel tipo. Ad esempio, un campo numerico nel database, ad esempio un Long Integer, può essere sempre convertito in testo e associato a un `CString` membro, ma un campo di testo in un database potrebbe non essere necessariamente convertito in una rappresentazione numerica, ad esempio Long Integer e associato a un membro Long Integer. DAO e il motore di database di Microsoft Jet sono responsabili della conversione (anziché di MFC).

## <a name="details-of-dfx_text"></a><a name="_mfcnotes_tn053_details_of_dfx_text"></a> Dettagli di DFX_Text

Come indicato in precedenza, il modo migliore per spiegare il funzionamento di DFX consiste nell'usare un esempio. Per questo scopo, gli elementi interni di `DFX_Text` dovrebbero funzionare abbastanza bene per fornire almeno una conoscenza di base di DFX.

- `AddToParameterList`

   Questa operazione compila la clausola SQL **Parameters** (" `Parameters <param name>, <param type> ... ;` ") richiesta da Jet. Ogni parametro è denominato e tipizzato (come specificato nella chiamata RFX). Vedere la `CDaoFieldExchange::AppendParamType` funzione Function per visualizzare i nomi dei singoli tipi. Nel caso di `DFX_Text` , il tipo usato è il **testo**.

- `AddToSelectList`

   Compila la clausola SQL **Select** . Questo è piuttosto semplice perché il nome di colonna specificato dalla chiamata a DFX è semplicemente accodato (" `SELECT <column name>, ...` ").

- `BindField`

   Il più complesso delle operazioni. Come indicato in precedenza, questo è il punto in cui viene configurata la struttura di associazione DAO utilizzata da `GetRows` . Come è possibile osservare dal codice nei `DFX_Text` tipi di informazioni nella struttura, includere il tipo DAO usato (**DAO_CHAR** o **DAO_WCHAR** nel caso di `DFX_Text` ). Viene inoltre configurato il tipo di associazione utilizzata. In una sezione precedente `GetRows` è stata descritta solo brevemente, ma è sufficiente spiegare che il tipo di binding utilizzato da MFC è sempre associazione di indirizzi diretti (**DAOBINDING_DIRECT**). Per `DFX_Text` consentire a MFC di controllare l'allocazione di memoria e specificare un indirizzo della lunghezza corretta, viene utilizzata anche l'associazione di callback a lunghezza variabile (ad esempio). Ciò significa che MFC può sempre indicare a DAO "Where" di inserire i dati, consentendo così l'associazione diretta a variabili membro. Il resto della struttura di associazione viene compilato con elementi come l'indirizzo della funzione di callback di allocazione della memoria e il tipo di associazione di colonna (associazione in base al nome della colonna).

- `BindParam`

   Si tratta di un'operazione semplice che chiama `SetParamValue` con il valore del parametro specificato nel membro del parametro.

- `Fixup`

   Compila lo stato **null** per ogni campo.

- `SetFieldNull`

   Questa operazione contrassegna ogni stato del campo come **null** e imposta il valore della variabile membro su **PSEUDO_NULL**.

- `SetDirtyField`

   Chiama `SetFieldValue` per ogni campo contrassegnato come dirty.

Tutte le operazioni rimanenti riguardano solo l'uso della cache dei dati. La cache dei dati è un buffer aggiuntivo dei dati del record corrente utilizzato per semplificare l'attività. Ad esempio, i campi "Dirty" possono essere rilevati automaticamente. Come descritto nella documentazione online, è possibile disattivarlo completamente o a livello di campo. L'implementazione del buffer utilizza una mappa. Questa mappa viene utilizzata per trovare la corrispondenza di copie di dati allocate in modo dinamico con l'indirizzo del campo "Bound" (o `CDaoRecordset` membro dati derivato).

- `AllocCache`

   Alloca in modo dinamico il valore del campo memorizzato nella cache e lo aggiunge alla mappa.

- `FreeCache`

   Elimina il valore del campo memorizzato nella cache e lo rimuove dalla mappa.

- `StoreField`

   Copia il valore del campo corrente nella cache dei dati.

- `LoadField`

   Copia il valore memorizzato nella cache nel membro del campo.

- `MarkForAddNew`

   Verifica se il valore del campo corrente è diverso da **null** e lo contrassegna come modificato se necessario.

- `MarkForEdit`

   Confronta il valore del campo corrente con la cache di dati e contrassegna Dirty se necessario.

> [!TIP]
> Modellare le routine DFX personalizzate nelle routine DFX esistenti per i tipi di dati standard.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
