---
title: 'Record Field Exchange: Utilizzo di RFX'
ms.date: 11/04/2016
helpviewer_keywords:
- RFX (ODBC), implementing
ms.assetid: ada8f043-37e6-4d41-9db3-92c997a61957
ms.openlocfilehash: 2a029f653753363e08b3c4f8b9fceab6295924af
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395651"
---
# <a name="record-field-exchange-using-rfx"></a>Record Field Exchange: Utilizzo di RFX

In questo argomento viene illustrato l'utilizzo di RFX in relazione a ciò che il framework esegue.

> [!NOTE]
>  Questo argomento si applica alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) in quale riga bulk il recupero non è stato implementato. Se si usa il recupero di righe bulk, viene implementata exchange di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: Recupero di record nel blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Gli argomenti seguenti contengono informazioni correlate:

- [Trasferimento di campi di record: Utilizzo di codice della procedura guidata](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md) presenta i componenti principali di RFX e viene illustrato il codice che la creazione guidata applicazione MFC e **Aggiungi classe** (come descritto in [aggiunta di un Consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) scrivere per il supporto RFX e come si potrebbe voler modificare il codice della procedura guidata.

- [Trasferimento di campi di record: Utilizzo delle funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md) illustra la scrittura delle chiamate per le funzioni RFX di `DoFieldExchange` eseguire l'override.

Nella tabella seguente viene illustrato il ruolo in relazione a ciò che il framework esegue automaticamente.

### <a name="using-rfx-you-and-the-framework"></a>Utilizzo di RFX: Programmatore e Framework

|Programmatore|Framework|
|---------|-------------------|
|Dichiarare le classi di recordset con una procedura guidata. Specificare i tipi di dati e i nomi dei membri di campo dati.|La procedura guidata deriva un `CRecordset` classi e le scritture una [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) eseguire l'override per l'utente, tra cui un RFX chiamata per ogni membro del campo dati alla funzione.|
|(Facoltativo) Aggiungere manualmente tutti i membri dati parametro necessari per la classe. Aggiungere manualmente una chiamata di funzione RFX al `DoFieldExchange` per ogni membro di dati di parametro, aggiungere una chiamata a [CFieldExchange::](../../mfc/reference/cfieldexchange-class.md#setfieldtype) per il gruppo di parametri e specificare il numero totale di parametri in [m_nParams ](../../mfc/reference/crecordset-class.md#m_nparams). Vedere [Recordset: Parametrizzazione di un Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).||
|(Facoltativo) Associare manualmente le colonne aggiuntive ai membri di campo dati. Incrementare manualmente [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields). Vedere [Recordset: Associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||
|Costruire un oggetto della classe del recordset. Prima di usare l'oggetto, impostare i valori del parametro membri dati, se presente.|Per migliorare l'efficienza, il framework preassocia i parametri, usando ODBC. Quando si passano i valori dei parametri, il framework li passa all'origine dati. Solo i valori dei parametri vengono inviati per ripetere la query, a meno che non sono state modificate le stringhe di ordinamento e/o di filtro.|
|Aprire un oggetto recordset usando [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open).|Viene eseguita la query del recordset, associa le colonne ai membri dati dei campi del recordset e chiamate `DoFieldExchange` per scambiare dati tra il primo record selezionato e i membri dati di campo del recordset.|
|Il recordset con scorrimento [CRecordset](../../mfc/reference/crecordset-class.md#move) o un comando di menu o sulla barra degli strumenti.|Le chiamate `DoFieldExchange` per trasferire i dati per i membri di dati di campo del nuovo record corrente.|
|Aggiungere, aggiornare ed eliminare i record.|Le chiamate `DoFieldExchange` per trasferire i dati all'origine dati.|

## <a name="see-also"></a>Vedere anche

[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)<br/>
[Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[Macro, funzioni globali e variabili globali](../../mfc/reference/mfc-macros-and-globals.md)

