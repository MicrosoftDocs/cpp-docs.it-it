---
title: 'TN055: Migrazione di applicazioni di classi di database ODBC MFC a classi DAO MFC'
ms.date: 09/17/2019
helpviewer_keywords:
- DAO [MFC], migration
- TN055
- migration [MFC], ODBC database applications
- ODBC classes [MFC], DAO classes
- migrating ODBC database applications [MFC]
- porting database applications to DAO
- ODBC [MFC], DAO
- porting ODBC database applications to DAO
- migrating database applications [MFC]
ms.assetid: 0f858bd1-e168-4e2e-bcd1-8debd82856e4
ms.openlocfilehash: 7107964cc894a0aa45be5de362c9edd166dc0af1
ms.sourcegitcommit: 2f96e2fda591d7b1b28842b2ea24e6297bcc3622
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2019
ms.locfileid: "71095964"
---
# <a name="tn055-migrating-mfc-odbc-database-class-applications-to-mfc-dao-classes"></a>TN055: Migrazione di applicazioni di classi di database ODBC MFC a classi DAO MFC

> [!NOTE]
> DAO viene usato con i database di Access ed è supportato tramite Office 2013. 3,6 è la versione finale ed è considerata obsoleta. Gli ambienti C++ visivi e le procedure guidate non supportano DAO (sebbene le classi DAO siano incluse ed è comunque possibile usarle). Microsoft consiglia di utilizzare [OLE DB modelli](../data/oledb/ole-db-templates.md) o [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti. È consigliabile utilizzare solo DAO per la gestione delle applicazioni esistenti.

## <a name="overview"></a>Panoramica

In molte situazioni potrebbe risultare utile eseguire una migrazione delle applicazioni che utilizzano le classi di database ODBC MFC alle classi di database DAO MFC. In questa nota tecnica viene illustrata in dettaglio la maggior parte delle differenze tra le classi ODBC MFC e DAO MFC. Conoscendo queste differenze, la migrazione delle applicazioni dalle classi ODBC alle classi MFC non dovrebbe risultare eccessivamente difficile.

## <a name="why-migrate-from-odbc-to-dao"></a>Vantaggi della migrazione da ODBC a DAO

Esistono numerosi motivi per cui si potrebbe desiderare una migrazione delle applicazioni dalle classi di database ODBC alle classi di database DAO, ma la decisione non è necessariamente semplice o ovvia. È necessario tenere presente che il motore di database Microsoft Jet utilizzato da DAO è in grado di leggere qualsiasi origine dati ODBC per la quale sia disponibile un driver ODBC. Potrebbe essere più efficiente utilizzare le classi di database ODBC o chiamare direttamente ODBC, ma il motore di database Microsoft Jet è in grado di leggere i dati ODBC.

Alcuni casi semplici facilitano la scelta tra ODBC e DAO. Ad esempio, quando si ha la necessità di accedere ai dati in un formato che può essere letto direttamente dal motore di Microsoft Jet (formato Access, formato Excel e così via), la scelta ovvia è quella di usare le classi di database DAO.

Casi più complessi si verificano quando i dati sono già presenti su un server o in una gamma di server diversi. In questo caso, la decisione di utilizzare le classi di database ODBC o le classi di database DAO è difficile. Se si desidera eseguire operazioni come join eterogenei (join di dati provenienti da diversi server in più formati come SQL Server e Oracle), allora il motore di database Microsoft Jet eseguirà il join automaticamente senza richiedere l'esecuzione del lavoro necessario nel caso in cui si utilizzino le classi di database ODBC o in caso di chiamate dirette a ODBC. Se si utilizza un driver ODBC che supporta i cursori del driver, la scelta migliore potrebbe essere quella di utilizzare le classi di database ODBC.

La scelta può essere complicata, pertanto si consiglia di scrivere un codice di esempio per verificare che le prestazioni dei vari metodi soddisfino le proprie esigenze. Questa nota tecnica presuppone che l'utente abbia deciso di effettuare la migrazione dalle classi di database ODBC alle classi di database DAO.

## <a name="similarities-between-odbc-database-classes-and-mfc-dao-database-classes"></a>Analogie tra le classi di database ODBC e le classi di database DAO MFC

La progettazione originale delle classi ODBC MFC è basata sul modello a oggetti DAO utilizzato in Microsoft Access e in Microsoft Visual Basic. Questo significa che sono disponibili molte funzionalità comuni per le classi ODBC MFC e DAO MFC, che non verranno elencate tutte in questa sezione. In generale, i modelli di programmazione sono gli stessi.

Per evidenziare alcune somiglianze:

- Sia le classi ODBC che DAO presentano oggetti di database che utilizzano il sistema di gestione di database sottostante (DBMS).

- Entrambe dispongono di oggetti recordset che rappresentano un set di risultati restituito dal DBMS.

- Il database DAO e gli oggetti recordset dispongono di membri quasi identici alle classi ODBC.

- Con entrambi i set di classi, il codice per recuperare i dati è identico tranne che per alcune modifiche ai nomi di oggetti e membri. Le modifiche saranno necessarie, ma in genere il processo è una semplice ridenominazione quando si passa dalle classi ODBC alle classi DAO.

Ad esempio, in entrambi i modelli la procedura per recuperare i dati consiste nel creare e aprire un oggetto di database, creare e aprire un oggetto recordset e spostarsi attraverso i dati effettuando qualche operazione.

## <a name="differences-between-odbc-and-dao-mfc-classes"></a>Differenze tra le classi ODBC MFC e DAO MFC

Le classi DAO includono più oggetti e un set più ricco di metodi, ma in questa sezione verranno descritte in dettaglio solo le differenze nelle classi e nelle funzionalità simili.

Probabilmente la maggior parte delle differenze più ovvie tra le classi consiste nelle modifiche ai nomi per le classi e le funzioni globali simili. Di seguito vengono elencate le modifiche ai nomi degli oggetti, dei metodi e delle funzioni globali associati alle classi di database:

|Classe o funzione|Equivalente nelle classi DAO MFC|
|-----------------------|-----------------------------------|
|`CDatabase`|`CDaoDatabase`|
|`CDatabase::ExecuteSQL`|`CDaoDatabase::Execute`|
|`CRecordset`|`CDaoRecordset`|
|`CRecordset::GetDefaultConnect`|`CDaoRecordset::GetDefaultDBName`|
|`CFieldExchange`|`CDaoFieldExchange`|
|`RFX_Bool`|`DFX_Bool`|
|`RFX_Byte`|`DFX_Byte`|
|`RFX_Int`|`DFX_Short`|
|`RFX_Long`|`DFX_Long`|
||`DFX_Currency`|
|`RFX_Single`|`DFX_Single`|
|`RFX_Double`|`DFX_Double`|
|`RFX_Date`<sup>1</sup>|`DFX_Date`(`COleDateTime`basato su)|
|`RFX_Text`|`DFX_Text`|
|`RFX_Binary`|`DFX_Binary`|
|`RFX_LongBinary`|`DFX_LongBinary`|

<sup>1</sup> la `RFX_Date` funzione è basata su `CTime` e `TIMESTAMP_STRUCT`.

Le modifiche essenziali alle funzionalità che possono influenzare l'applicazione e che richiedono più di una semplice ridenominazione sono elencate di seguito.

- Le costanti e le macro utilizzate per specificare informazioni quali il tipo di apertura del recordset e le opzioni di apertura del recordset sono state modificate.

   Con le classi ODBC, in MFC è necessario definire queste opzioni tramite macro o tipi enumerati.

   Con le classi DAO, DAO fornisce la definizione di queste opzioni in un file di intestazione (DBDAOINT.H). Pertanto il tipo del recordset è un membro enumerato di `CRecordset`, ma con DAO è una costante. È ad esempio possibile utilizzare lo **snapshot** quando si specifica il `CRecordset` tipo di in ODBC, ma **DB_OPEN_SNAPSHOT** quando si `CDaoRecordset`specifica il tipo di.

- Il tipo di recordset predefinito `CRecordset` per è **snapshot** mentre il tipo di recordset `CDaoRecordset` predefinito per è **Dynaset** (vedere la nota di seguito per un ulteriore problema relativo agli snapshot della classe ODBC).

- La classe ODBC `CRecordset` include un'opzione per creare un recordset di tipo forward-only. Nella classe `CDaoRecordset`, forward-only non è un tipo di recordset, ma una proprietà (o un opzione) di determinati tipi di recordset.

- Un recordset append-only durante l'apertura di un oggetto `CRecordset` indica che i dati del recordset possono essere letti e aggiunti. Con l'oggetto `CDaoRecordset`, l'opzione append-only significa letteralmente che i dati del recordset possono essere solo aggiunti (e non letti).

- Le funzioni membro della transazione delle classi ODBC sono membri di `CDatabase` e operano a livello di database. Nelle classi DAO, le funzioni membro delle transazioni sono membri di una classe di livello superiore (`CDaoWorkspace`) e pertanto possono influire su più oggetti `CDaoDatabase` che condividono la stessa area di lavoro (spazio di transazione).

- La classe Exception è stata modificata. `CDBExceptions`vengono generate nelle classi ODBC e `CDaoExceptions` nelle classi DAO.

- `RFX_Date`USA `CTime` oggetti `TIMESTAMP_STRUCT` e durante `DFX_Date` l' uso`COleDateTime`di. È quasi identico a `CTime`, ma si basa su una **Data** OLE a 8 byte anziché su un time_t a 4 byte, in modo da poter mantenere un intervallo di dati molto più ampio. `COleDateTime`

   > [!NOTE]
   > Gli snapshot di DAO (`CDaoRecordset`) sono di sola lettura mentre gli snapshot di ODBC (`CRecordset`) possono essere aggiornati in base al driver e all'utilizzo della libreria di cursori ODBC. Se si utilizza la libreria di cursori, gli snapshot `CRecordset` sono aggiornabili. Se si utilizza uno dei driver Microsoft da Desktop Driver Pack 3.0 senza la libreria di cursori ODBC, gli snapshot `CRecordset` sono di sola lettura. Se si utilizza un altro driver, controllare la documentazione del driver per verificare se gli snapshot (`STATIC_CURSORS`) sono di sola lettura.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
