---
title: 'ODBC: libreria di cursori ODBC'
ms.date: 11/04/2016
helpviewer_keywords:
- cursor library [ODBC]
- snapshots, support in ODBC
- timestamps, ODBC timestamp columns
- ODBC cursor library [ODBC]
- static cursors
- ODBC drivers, Level 1
- ODBC drivers, cursor support
- positioned updates
- cursors, ODBC cursor library
- Level 1 ODBC drivers
- cursor library [ODBC], snapshots
- ODBC, timestamp
- positioning cursors
ms.assetid: 6608db92-82b1-4164-bb08-78153c227be3
ms.openlocfilehash: 51524604cad34ace18ffda2b5f48cc3c5fd89ad7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213096"
---
# <a name="odbc-the-odbc-cursor-library"></a>ODBC: libreria di cursori ODBC

In questo argomento viene descritta la libreria di cursori ODBC e viene illustrato come usarla. Per altre informazioni, vedere:

- [Driver ODBC della libreria di cursori e di livello 1](#_core_the_cursor_library_and_level_1_odbc_drivers)

- [Colonne timestamp e aggiornamenti posizionati](#_core_positioned_updates_and_timestamp_columns)

- [Utilizzo della libreria di cursori](#_core_using_the_cursor_library)

La libreria di cursori ODBC è una libreria di collegamento dinamico (DLL) che risiede tra Gestione driver ODBC e il driver. In termini di ODBC, un driver mantiene un cursore per tenere traccia della propria posizione nel recordset. Il cursore contrassegna la posizione nel recordset a cui è già stato eseguito lo scorrimento, ovvero il record corrente.

##  <a name="cursor-library-and-level-1-odbc-drivers"></a><a name="_core_the_cursor_library_and_level_1_odbc_drivers"></a>Driver ODBC della libreria di cursori e di livello 1

La libreria di cursori ODBC fornisce ai driver di livello 1 le seguenti nuove funzionalità:

- Scorrimento avanti e indietro. I driver di livello 2 non richiedono la libreria di cursori perché sono già scorrevoli.

- Supporto per gli snapshot. La libreria di cursori gestisce un buffer contenente i record dello snapshot. Questo buffer riflette le eliminazioni del programma e le modifiche ai record, ma non le aggiunte, le eliminazioni o le modifiche di altri utenti. Lo snapshot è quindi solo come il buffer della libreria di cursori. Il buffer non riflette anche le proprie aggiunte fino a quando non si chiama `Requery`. I dynaset non utilizzano la libreria di cursori.

La libreria di cursori fornisce gli snapshot (cursori statici) anche se non sono normalmente supportati dal driver. Se il driver supporta già i cursori statici, non è necessario caricare la libreria di cursori per ottenere il supporto dello snapshot. Se si utilizza la libreria di cursori, è possibile utilizzare solo gli snapshot e i recordset di sola trasmissione. Se il driver supporta i dynaset (KEYSET_DRIVEN cursori) e si desidera utilizzarli, è necessario non utilizzare la libreria di cursori. Se si desidera utilizzare sia snapshot che dynaset, è necessario basarli su due oggetti `CDatabase` diversi (due connessioni diverse), a meno che il driver non supporti entrambi.

##  <a name="positioned-updates-and-timestamp-columns"></a><a name="_core_positioned_updates_and_timestamp_columns"></a>Colonne timestamp e aggiornamenti posizionati

> [!NOTE]
>  Le origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, oppure tramite le classi DAO (Data Access Object) MFC.

> [!NOTE]
>  Se il driver ODBC supporta `SQLSetPos`, che MFC utilizza se disponibile, questo argomento non si applica all'utente.

La maggior parte dei driver di livello 1 non supporta gli aggiornamenti posizionati. Tali driver si basano sulla libreria di cursori per emulare le funzionalità dei driver di livello 2 in questo senso. La libreria di cursori emula il supporto degli aggiornamenti posizionati eseguendo un aggiornamento cercato nei campi che non cambiano.

In alcuni casi, un recordset potrebbe contenere una colonna timestamp come uno dei campi che non cambiano. Si verificano due problemi nell'utilizzo di recordset MFC con tabelle contenenti colonne di tipo timestamp.

Il primo problema riguarda gli snapshot aggiornabili sulle tabelle con colonne timestamp. Se la tabella a cui è associato lo snapshot contiene una colonna di tipo timestamp, è necessario chiamare `Requery` dopo aver chiamato `Edit` e `Update`. In caso contrario, potrebbe non essere possibile modificare di nuovo lo stesso record. Quando si chiama `Edit` e quindi si `Update`, il record viene scritto nell'origine dati e la colonna timestamp viene aggiornata. Se non si chiama `Requery`, il valore timestamp per il record nello snapshot non corrisponde più al timestamp corrispondente nell'origine dati. Quando si tenta di aggiornare nuovamente il record, è possibile che l'origine dati non consenta l'aggiornamento a causa della mancata corrispondenza.

Il secondo problema riguarda le limitazioni della classe [CTime](../../atl-mfc-shared/reference/ctime-class.md) quando viene utilizzata con la funzione `RFX_Date` per trasferire le informazioni relative a data e ora da o verso una tabella. L'elaborazione dell'oggetto `CTime` impone un sovraccarico sotto forma di elaborazione intermedia aggiuntiva durante il trasferimento dei dati. L'intervallo di date degli oggetti `CTime` potrebbe anche essere troppo limitato per alcune applicazioni. Una nuova versione della funzione `RFX_Date` accetta un parametro ODBC *TIMESTAMP_STRUCT* invece di un oggetto `CTime`. Per ulteriori informazioni, vedere `RFX_Date` in [macro e Globals](../../mfc/reference/mfc-macros-and-globals.md) in *riferimenti a MFC*.

##  <a name="using-the-cursor-library"></a><a name="_core_using_the_cursor_library"></a>Utilizzo della libreria di cursori

Quando ci si connette a un'origine dati, chiamando [CDatabase:: OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) , è possibile specificare se utilizzare la libreria di cursori per l'origine dati. Se si intende creare snapshot per tale origine dati, specificare l'opzione `CDatabase::useCursorLib` nel parametro `dwOptions` per `OpenEx` o specificare TRUE per il parametro *bUseCursorLib* per `Open` (il valore predefinito è true). Se il driver ODBC supporta i dynaset e si desidera aprire i dynaset nell'origine dati, non utilizzare la libreria di cursori (maschera alcune funzionalità di driver necessarie per i dynaset). In tal caso, non specificare `CDatabase::useCursorLib` in `OpenEx` o specificare FALSE per il parametro *bUseCursorLib* in `Open`.

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
