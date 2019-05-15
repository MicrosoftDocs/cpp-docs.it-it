---
title: 'TN053: Routine DFX personalizzate per le classi Database DAO'
ms.date: 11/04/2016
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
ms.openlocfilehash: 262da283f20df1fe7af6aa02785e8c1ceb09dfda
ms.sourcegitcommit: 934cb53fa4cb59fea611bfeb9db110d8d6f7d165
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/14/2019
ms.locfileid: "65611088"
---
# <a name="tn053-custom-dfx-routines-for-dao-database-classes"></a>TN053: Routine DFX personalizzate per le classi Database DAO

> [!NOTE]
>  L'ambiente di Visual C++ e le procedure guidate non supportano DAO (anche se sono incluse le classi DAO ed è comunque possibile usarli). Microsoft consiglia di usare [modelli OLE DB](../data/oledb/ole-db-templates.md) oppure [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare solo DAO nella gestione delle applicazioni esistenti.

In questa nota tecnica descrive il meccanismo di scambio (DFX) di campi di record DAO. Per comprendere ciò che accade nella routine DFX, il `DFX_Text` funzione verrà spiegata in dettaglio come esempio. Come un'ulteriore fonte di informazioni da questa nota tecnica, è possibile esaminare il codice per l'altra le singole funzioni DFX. Probabilmente non è necessario una routine DFX personalizzata ogni volta che si potrebbe essere necessario una routine RFX personalizzata (usata con classi di database ODBC).

In questa nota tecnica include:

- Panoramica DFX

- [Esempi](#_mfcnotes_tn053_examples) usando campi di Record DAO e Binding dinamico

- [Come funziona DFX](#_mfcnotes_tn053_how_dfx_works)

- [Funzionamento di una Routine DFX personalizzate](#_mfcnotes_tn053_what_your_custom_dfx_routine_does)

- [Dettagli di DFX_Text](#_mfcnotes_tn053_details_of_dfx_text)

**Panoramica DFX**

Il meccanismo di scambio DAO campi di record (DFX) viene usato per semplificare la procedura di recupero e aggiornamento dei dati quando si usa il `CDaoRecordset` classe. Il processo viene semplificato con i membri dati del `CDaoRecordset` classe. Mediante la derivazione da `CDaoRecordset`, è possibile aggiungere i membri dati per la classe derivata che rappresentano ogni campo in una tabella o query. Questo meccanismo "binding statico" è semplice, ma potrebbe non essere il metodo di recupero o aggiornare dati preferito per tutte le applicazioni. DFX recupera ogni campo associato ogni volta che viene modificato il record corrente. Se si sviluppa un'applicazione sensibili alle prestazioni che non richiede il recupero di tutti i campi quando valuta viene modificato, "dynamic binding" tramite `CDaoRecordset::GetFieldValue` e `CDaoRecordset::SetFieldValue` potrebbe essere il metodo di accesso dati scelta.

> [!NOTE]
>  DFX e binding dinamico non si escludono a vicenda, è possibile usare un uso ibrido dei binding statico e dinamico.

## <a name="_mfcnotes_tn053_examples"></a> Esempio 1: Utilizzo di DAO Record Field Exchange solo

(si presuppone `CDaoRecordset` , ovvero classe derivata `CMySet` già aperto)

```
// Add a new record to the customers table
myset.AddNew();

myset.m_strCustID = _T("MSFT");

myset.m_strCustName = _T("Microsoft");

myset.Update();
```

**Esempio 2: Uso del binding dinamico**

(presuppone l'utilizzo `CDaoRecordset` classe `rs`, ed è già aperto)

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

**Esempio 3: Utilizzo di DAO Record Field Exchange e binding dinamico**

(si presuppone che i dati di esplorazione dipendente con `CDaoRecordset`-classe derivata `emp`)

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

## <a name="_mfcnotes_tn053_how_dfx_works"></a> Come funziona DFX

Il meccanismo DFX funziona in modo analogo al meccanismo campi di record (RFX) di exchange utilizzato dalle classi ODBC MFC. I principi di RFX e DFX sono gli stessi, ma vi sono numerose differenze interne. La progettazione delle funzioni DFX è tale che praticamente tutto il codice è condiviso dalle singole routine DFX. A più alto livello DFX solo esegue alcune operazioni.

- DFX costruisce il codice SQL **selezionate** clausola e SQL **parametri** clausola se necessario.

- DFX costruisce la struttura di associazione utilizzata da DAO `GetRows` funzione (più avanti in questo articolo).

- DFX gestisce il buffer di dati usato per rilevare i campi modificati (se viene utilizzato il doppio buffer)

- DFX gestisce il **NULL** e **DIRTY** stato matrici e imposta i valori se necessario per gli aggiornamenti.

Il fulcro di DFX meccanismo è il `CDaoRecordset` della classe derivata `DoFieldExchange` (funzione). Questa funzione invia le chiamate alle funzioni DFX singoli di un tipo di operazione appropriata. Prima di chiamare `DoFieldExchange` le funzioni MFC interne impostano il tipo di operazione. Nell'elenco seguente illustra i vari tipi di operazione e una breve descrizione.

|Operazione|Descrizione|
|---------------|-----------------|
|`AddToParameterList`|Clausola di parametri di compilazioni|
|`AddToSelectList`|Clausola SELECT le compilazioni|
|`BindField`|Imposta la struttura di associazione|
|`BindParam`|Imposta i valori dei parametri|
|`Fixup`|Imposta lo stato NULL|
|`AllocCache`|Alloca lo spazio della cache per controllo dirty|
|`StoreField`|Record corrente viene salvato nella cache|
|`LoadField`|Ripristini di cache per i valori del membro|
|`FreeCache`|Libera la cache|
|`SetFieldNull`|Imposta campo stato & valore su NULL|
|`MarkForAddNew`|Contrassegna i campi dirty in caso contrario PSEUDO NULL|
|`MarkForEdit`|Se dirty campi virgolette non corrispondenti della cache|
|`SetDirtyField`|Set di valori contrassegnati come dirty del campo|

Nella sezione successiva, verrà spiegati in modo più dettagliato per ogni operazione `DFX_Text`.

La caratteristica più importante da comprendere il processo di scambio di campi di record DAO è che viene usato il `GetRows` funzione del `CDaoRecordset` oggetto. Nell'oggetto DAO `GetRows` la funzione può funzionare in diversi modi. In questa nota tecnica solo brevemente `GetRows` perché è esterna all'ambito di questa nota tecnica.

DAO `GetRows` può funzionare in diversi modi.

- È possibile recuperare più record e più campi di dati in una sola volta. Ciò consente l'accesso ai dati più veloce con complicazione di gestione di una struttura di dati di grandi dimensioni e gli offset appropriati a ogni campo e per ogni record di dati nella struttura. MFC non sfruttare i vantaggi di questo record più il meccanismo di recupero.

- Un altro modo `GetRows` possibile consiste nel consentire ai programmatori di specificare gli indirizzi di associazione per i dati di ogni campo per un record dei dati recuperati.

- DAO verrà anche "richiamare" al chiamante per le colonne a lunghezza variabile per consentire al chiamante di allocare memoria. Questa seconda funzione ha il vantaggio di ridurre al minimo il numero di copie dei dati, nonché che consente di archiviazione diretta dei dati in membri di una classe (i `CDaoRecordset` classe derivata). Questo meccanismo di secondo è il metodo MFC utilizza per associare ai membri dati `CDaoRecordset` classi derivate.

##  <a name="_mfcnotes_tn053_what_your_custom_dfx_routine_does"></a> Funzionamento di una Routine DFX personalizzate

È evidente da questa discussione che l'operazione più importante implementato in qualsiasi funzione DFX deve essere la possibilità di configurare le strutture di dati necessari per chiamare correttamente `GetRows`. Esistono una serie di altre operazioni che deve supportare anche una funzione DFX, ma nessuno come importanti o complesse, ad esempio corretta preparazione per il `GetRows` chiamare.

L'uso di DFX è descritto nella documentazione online. In pratica, esistono due requisiti. In primo luogo, è necessario aggiungere i membri per il `CDaoRecordset` classe derivata per ogni campo associato e un parametro. Dopo questo `CDaoRecordset::DoFieldExchange` deve essere sottoposto a override. Si noti che il tipo di dati del membro è importante. Opportuno corrispondono ai dati del campo nel database o essere convertibile in quel tipo. Ad esempio un campo numerico nel database, ad esempio un valore long integer, può sempre essere convertito in testo e associato a un `CString` membro, ma un campo di testo in un database non necessariamente può essere convertiti in una rappresentazione numerica, ad esempio valore long integer e associato a un long Integr er membro. DAO e il motore di database Microsoft Jet sono responsabili per la conversione (anziché MFC).

##  <a name="_mfcnotes_tn053_details_of_dfx_text"></a> Dettagli di DFX_Text

Come accennato in precedenza, per illustrare un esempio è il modo migliore per spiegare come funziona DFX. A tale scopo passare attraverso le caratteristiche interne di `DFX_Text` dovrebbe funzionare abbastanza bene per offrire almeno una conoscenza di base di DFX.

- `AddToParameterList`

   Questa operazione si basa il codice SQL **parametri** clausola ("`Parameters <param name>, <param type> ... ;`") necessari per Jet. Ogni parametro è denominato e tipizzata (come specificato nella chiamata di RFX). Vedere la funzione `CDaoFieldExchange::AppendParamType` funzione per visualizzare i nomi dei singoli tipi. Nel caso del `DFX_Text`, il tipo utilizzato **testo**.

- `AddToSelectList`

   Compila il codice SQL **seleziona** clausola. Viene piuttosto semplice come il nome della colonna specificato dalla chiamata DFX viene semplicemente aggiunta ("`SELECT <column name>, ...`").

- `BindField`

   La più complessa delle operazioni. Come accennato in precedenza si tratta di dove la struttura di associazione di DAO utilizzato da `GetRows` è configurato. Come si può notare dal codice nel `DFX_Text` i tipi di informazioni nella struttura di includono il tipo di DAO utilizzato (**DAO_CHAR** oppure **DAO_WCHAR** nel caso di `DFX_Text`). Inoltre, il tipo di associazione usato viene impostato anche. In una sezione precedente `GetRows` è descritto solo brevemente, ma è sufficiente spiegare che il tipo di associazione utilizzati da MFC è sempre associazione indirizzamento diretto (**DAOBINDING_DIRECT**). Inoltre, per l'associazione delle colonne a lunghezza variabile (ad esempio `DFX_Text`) viene utilizzata l'associazione di callback in modo che MFC è possibile controllare l'allocazione di memoria e specificare un indirizzo di lunghezza corretta. Ciò significa che MFC può sempre indicare DAO "where" per inserire i dati, consentendo in tal modo associazione diretta a variabili membro. Il resto della struttura di associazione viene compilato con elementi quali l'indirizzo della funzione di callback di allocazione di memoria e il tipo di associazione di colonna (associazione in base al nome di colonna).

- `BindParam`

   Si tratta di un'operazione semplice che chiama `SetParamValue` con il valore del parametro specificato nel membro del parametro.

- `Fixup`

   Viene compilato il **NULL** lo stato per ogni campo.

- `SetFieldNull`

   Questa operazione solo di contrassegnare ogni stato dei campi come **NULL** e imposta il membro valore della variabile **PSEUDO_NULL**.

- `SetDirtyField`

   Le chiamate `SetFieldValue` per ogni campo contrassegnato come modificato.

Tutte le operazioni rimanenti trattato solo tramite la cache dei dati. La cache dei dati è un buffer in eccesso dei dati presenti nel record corrente che consente di semplificare alcune cose. Ad esempio, i campi "dirty" possono essere rilevati automaticamente. Come descritto nella documentazione online che può essere disattivata a livello di campo o completamente. L'implementazione del buffer utilizza una mappa. Questo mapping viene utilizzato per abbinare allocate dinamicamente copie dei dati con l'indirizzo del campo "associato" (o `CDaoRecordset` derivato il membro dati).

- `AllocCache`

   Consente di allocare il valore del campo memorizzato nella cache e lo aggiunge alla mappa in modo dinamico.

- `FreeCache`

   Elimina il valore del campo memorizzato nella cache e lo rimuove dalla mappa.

- `StoreField`

   Copia il valore del campo corrente nella cache dei dati.

- `LoadField`

   Copia il valore memorizzato nella cache nel membro del campo.

- `MarkForAddNew`

   Controlla se il valore di campo corrente è non**NULL** e come contrassegnarlo dirty se necessario.

- `MarkForEdit`

   Confronta il valore di campo corrente con la cache di dati e le contrassegna dirty se necessario.

> [!TIP]
> Modello di routine DFX personalizzate sulle routine DFX esistente per i tipi di dati standard.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
