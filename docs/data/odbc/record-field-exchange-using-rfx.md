---
title: 'Trasferimento di campi di record: utilizzo di RFX'
ms.date: 11/04/2016
helpviewer_keywords:
- RFX (ODBC), implementing
ms.assetid: ada8f043-37e6-4d41-9db3-92c997a61957
ms.openlocfilehash: 70197d2a9130388e86bb94f0d670360bb35febeb
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80075873"
---
# <a name="record-field-exchange-using-rfx"></a>Trasferimento di campi di record: utilizzo di RFX

In questo argomento vengono illustrate le operazioni da eseguire per utilizzare RFX in relazione alle operazioni eseguite dal Framework.

> [!NOTE]
>  Questo argomento si applica alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) in cui il recupero di righe bulk non è stato implementato. Se si usa il recupero di massa di righe, viene implementato il trasferimento di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per comprendere le differenze, vedere [Recordset: recupero di record in blocco (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Negli argomenti seguenti sono contenute informazioni correlate:

- [Trasferimento di campi di record: utilizzando il codice della procedura guidata](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md) vengono introdotti i componenti principali di RFX e viene illustrato il codice che la creazione guidata applicazione MFC e l' **aggiunta della classe** , come descritto in [aggiunta di un consumer ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md), scrivono per supportare RFX e come potrebbe essere necessario modificare il codice della procedura guidata.

- [Trasferimento di campi di record: usando le funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md) viene illustrato come scrivere le chiamate alle funzioni RFX nell'override del `DoFieldExchange`.

Nella tabella seguente viene illustrato il ruolo in relazione alle operazioni svolte dal Framework.

### <a name="using-rfx-you-and-the-framework"></a>Uso di RFX: l'utente e il Framework

|Queste informazioni verranno usate|Framework|
|---------|-------------------|
|Dichiarare le classi recordset con una procedura guidata. Specificare i nomi e i tipi di dati dei membri dati del campo.|Tramite la procedura guidata viene derivata una classe `CRecordset` e viene scritto un override di [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) , inclusa una chiamata di funzione RFX per ogni membro dati del campo.|
|Opzionale Aggiungere manualmente i membri dati dei parametri necessari alla classe. Aggiungere manualmente una chiamata di funzione RFX a `DoFieldExchange` per ogni membro dati del parametro, aggiungere una chiamata a [CFieldExchange:: SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) per il gruppo di parametri e specificare il numero totale di parametri nel [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams). Vedere [Recordset: parametrizzazione un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).||
|Opzionale Associare manualmente colonne aggiuntive ai membri dati di campo. Incrementare manualmente [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields). Vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||
|Costruire un oggetto della classe recordset. Prima di utilizzare l'oggetto, impostare i valori dei relativi membri dati di parametro, se presenti.|Per maggiore efficienza, il framework preassocia i parametri utilizzando ODBC. Quando si passano i valori dei parametri, il Framework li passa all'origine dati. Solo i valori dei parametri vengono inviati per le riquery, a meno che le stringhe di ordinamento e/o filtro non siano state modificate.|
|Aprire un oggetto recordset utilizzando [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open).|Esegue la query del recordset, associa le colonne ai membri dati di campo del recordset e chiama `DoFieldExchange` per scambiare dati tra il primo record selezionato e i membri dati di campo del recordset.|
|Scorrere il recordset utilizzando [CRecordset:: Move](../../mfc/reference/crecordset-class.md#move) o un menu o un comando della barra degli strumenti.|Chiama `DoFieldExchange` per trasferire i dati ai membri dati del campo dal nuovo record corrente.|
|Aggiungere, aggiornare ed eliminare record.|Chiama `DoFieldExchange` per trasferire i dati all'origine dati.|

## <a name="see-also"></a>Vedere anche

[Trasferimento di campi di record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)<br/>
[Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)<br/>
[Classe CRecordset](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[Macro, funzioni globali e variabili globali](../../mfc/reference/mfc-macros-and-globals.md)
