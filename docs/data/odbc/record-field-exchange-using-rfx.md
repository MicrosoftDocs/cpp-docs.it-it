---
title: 'Trasferimento di campi di record: utilizzo di RFX'
ms.date: 11/04/2016
helpviewer_keywords:
- RFX (ODBC), implementing
ms.assetid: ada8f043-37e6-4d41-9db3-92c997a61957
ms.openlocfilehash: dc0cdcee758f4842b0738068a8a11c4e2e404155
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367139"
---
# <a name="record-field-exchange-using-rfx"></a>Trasferimento di campi di record: utilizzo di RFX

In questo argomento viene illustrato come utilizzare RFX in relazione alle operazioni eseguite dal framework.

> [!NOTE]
> Questo argomento si applica alle classi derivate da [CRecordset](../../mfc/reference/crecordset-class.md) in cui il recupero di massa di righe non è stato implementato. Se si usa il recupero di massa di righe, viene implementato il trasferimento di massa di campi di record (RFX di massa). RFX di massa è simile a RFX. Per informazioni sulle differenze, vedere [Recordset: recupero di massa di record (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

Gli argomenti seguenti contengono informazioni correlate:

- [Scambio di campi di record: l'utilizzo del codice della procedura guidata](../../data/odbc/record-field-exchange-working-with-the-wizard-code.md) introduce i componenti principali di RFX e spiega il codice che la Creazione guidata applicazione MFC e Aggiungi **classe** (come descritto in Aggiunta di un consumer [ODBC MFC](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) scrivono per supportare RFX e come si desidera modificare il codice della procedura guidata.

- [Scambio di campi di record: utilizzando le funzioni RFX](../../data/odbc/record-field-exchange-using-the-rfx-functions.md) viene illustrata la scrittura di chiamate alle funzioni RFX `DoFieldExchange` nell'override.

Nella tabella seguente viene illustrato il ruolo dell'utente in relazione alle operazioni eseguite dal framework.

### <a name="using-rfx-you-and-the-framework"></a>Utilizzo di RFX: tu e il framework

|Queste informazioni verranno usate|Framework|
|---------|-------------------|
|Dichiarare le classi recordset con una procedura guidata. Specificare i nomi e i tipi di dati dei membri dati di campo.|La procedura guidata `CRecordset` deriva una classe e scrive automaticamente un override di [DoFieldExchange,](../../mfc/reference/crecordset-class.md#dofieldexchange) inclusa una chiamata di funzione RFX per ogni membro dati di campo.|
|(Facoltativo) Aggiungere manualmente i membri dati di parametro necessari alla classe. Aggiungere manualmente una chiamata `DoFieldExchange` alla funzione RFX per ogni membro dati di parametro, aggiungere una chiamata a [CFieldExchange::SetFieldType](../../mfc/reference/cfieldexchange-class.md#setfieldtype) per il gruppo di parametri e specificare il numero totale di parametri in [m_nParams](../../mfc/reference/crecordset-class.md#m_nparams). Vedere [Recordset: applicazione di parametri a un recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md).||
|(Facoltativo) Associare manualmente colonne aggiuntive ai membri dati di campo. Incrementare manualmente [m_nFields](../../mfc/reference/crecordset-class.md#m_nfields). Vedere [Recordset: associazione dinamica di colonne di dati (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md).||
|Costruire un oggetto della classe recordset. Prima di utilizzare l'oggetto, impostare i valori dei relativi membri dati di parametro, se presenti.|Per migliorare l'efficienza, il framework preassocia i parametri, utilizzando ODBC. Quando si passano i valori dei parametri, il framework li passa all'origine dati. Solo i valori dei parametri vengono inviati per le query, a meno che le stringhe di ordinamento e/o filtro non siano state modificate.|
|Aprire un oggetto recordset utilizzando [CRecordset::Open](../../mfc/reference/crecordset-class.md#open).|Esegue la query del recordset, associa le colonne ai membri `DoFieldExchange` dati di campo del recordset e chiama per lo scambio di dati tra il primo record selezionato e i membri dati di campo del recordset.|
|Scorrere il recordset utilizzando [CRecordset::Move](../../mfc/reference/crecordset-class.md#move) o un comando di menu o barra degli strumenti.|Chiamate `DoFieldExchange` per trasferire dati ai membri dati di campo dal nuovo record corrente.|
|Aggiungere, aggiornare ed eliminare record.|Chiamate `DoFieldExchange` per trasferire dati all'origine dati.|

## <a name="see-also"></a>Vedere anche

[Scambio di campi record (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Trasferimento di campi di record: funzionamento di RFX](../../data/odbc/record-field-exchange-how-rfx-works.md)<br/>
[Recordset: recupero di somme e altri risultati aggregati (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md)<br/>
[CRecordset (classe)](../../mfc/reference/crecordset-class.md)<br/>
[Classe CFieldExchange](../../mfc/reference/cfieldexchange-class.md)<br/>
[Macro, funzioni globali e variabili globali](../../mfc/reference/mfc-macros-and-globals.md)
