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
ms.openlocfilehash: 13640dd2a8593057bef708a45dfc8471ba212563
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367186"
---
# <a name="odbc-the-odbc-cursor-library"></a>ODBC: libreria di cursori ODBC

In questo argomento viene descritta la libreria di cursori ODBC e viene illustrato come utilizzarla. Per altre informazioni, vedere:

- [Libreria di cursori e driver ODBC di livello 1Cursor Library and Level 1 ODBC Drivers](#_core_the_cursor_library_and_level_1_odbc_drivers)

- [Aggiornamenti posizionati e colonne timestamp](#_core_positioned_updates_and_timestamp_columns)

- [Utilizzo della libreria di cursori](#_core_using_the_cursor_library)

La libreria di cursori ODBC è una libreria a collegamento dinamico (DLL) che si trova tra Gestione driver ODBC e il driver. In termini ODBC, un driver mantiene un cursore per tenere traccia della posizione nel recordset. Il cursore contrassegna la posizione nel recordset in cui è già stato eseguito lo scorrimento, ovvero il record corrente.

## <a name="cursor-library-and-level-1-odbc-drivers"></a><a name="_core_the_cursor_library_and_level_1_odbc_drivers"></a>Libreria di cursori e driver ODBC di livello 1Cursor Library and Level 1 ODBC Drivers

La libreria di cursori ODBC offre ai driver di livello 1 le seguenti nuove funzionalità:

- Scorrimento avanti e indietro. I driver di livello 2 non necessitano della libreria di cursori perché sono già scorrevoli.

- Supporto per le istantanee. La libreria di cursori gestisce un buffer contenente i record dello snapshot. Questo buffer riflette le eliminazioni e le modifiche apportate ai record del programma, ma non le aggiunte, le eliminazioni o le modifiche di altri utenti. Pertanto, lo snapshot è corrente solo come buffer della libreria di cursori. Il buffer inoltre non riflette le proprie `Requery`aggiunte fino a quando non si chiama . I dynaset non utilizzano la libreria di cursori.

La libreria di cursori fornisce istantanee (cursori statici) anche se normalmente non sono supportate dal driver. Se il driver supporta già i cursori statici, non è necessario caricare la libreria di cursori per ottenere il supporto dello snapshot. Se si utilizza la libreria di cursori, è possibile utilizzare solo snapshot e recordset forward-only. Se il driver supporta dynaset (KEYSET_DRIVEN cursori) e si desidera utilizzarli, non è necessario utilizzare la libreria di cursori. Se si desidera utilizzare sia snapshot che dynaset, è `CDatabase` necessario basarli su due oggetti diversi (due connessioni diverse), a meno che il driver non supporti entrambi.

## <a name="positioned-updates-and-timestamp-columns"></a><a name="_core_positioned_updates_and_timestamp_columns"></a>Aggiornamenti posizionati e colonne timestamp

> [!NOTE]
> Le origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento o tramite le classi DAO (Data Access Object) MFC.

> [!NOTE]
> Se il driver `SQLSetPos`ODBC supporta , che MFC utilizza se disponibile, questo argomento non si applica all'utente.

La maggior parte dei driver di livello 1 non supporta gli aggiornamenti posizionati. Tali driver si basano sulla libreria di cursori per emulare le funzionalità dei driver di livello 2 a questo proposito. La libreria di cursori emula il supporto degli aggiornamenti posizionati eseguendo un aggiornamento cercato nei campi non modificabili.

In alcuni casi, un recordset potrebbe contenere una colonna timestamp come uno di questi campi immutabili. Due problemi si verificano nell'utilizzo di recordset MFC con tabelle che contengono colonne timestamp.

Il primo problema riguarda gli snapshot aggiornabili nelle tabelle con colonne timestamp. Se la tabella a cui è associato lo snapshot `Requery` contiene `Edit` una `Update`colonna timestamp, è necessario chiamare dopo aver chiamato e . In caso contrario, potrebbe non essere possibile modificare nuovamente lo stesso record. Quando si `Edit` chiama `Update`e quindi , il record viene scritto nell'origine dati e la colonna timestamp viene aggiornata. Se non si `Requery`chiama , il valore timestamp per il record nello snapshot non corrisponde più al timestamp corrispondente nell'origine dati. Quando si tenta di aggiornare nuovamente il record, l'origine dati potrebbe non consentire l'aggiornamento a causa della mancata corrispondenza.

Il secondo problema riguarda le limitazioni della `RFX_Date` classe [CTime](../../atl-mfc-shared/reference/ctime-class.md) quando viene utilizzato con la funzione per trasferire le informazioni su data e ora da o verso una tabella. L'elaborazione dell'oggetto `CTime` impone un certo sovraccarico sotto forma di elaborazione intermedia aggiuntiva durante il trasferimento dei dati. L'intervallo `CTime` di date degli oggetti potrebbe anche essere troppo limitante per alcune applicazioni. Una nuova versione `RFX_Date` della funzione accetta un `CTime` parametro di *TIMESTAMP_STRUCT* ODBC anziché un oggetto. Per ulteriori informazioni, vedere `RFX_Date` in Macro e [globali](../../mfc/reference/mfc-macros-and-globals.md) in Riferimenti a *MFC*.

## <a name="using-the-cursor-library"></a><a name="_core_using_the_cursor_library"></a>Utilizzo della libreria di cursori

Quando ci si connette a un'origine dati, chiamando [CDatabase::OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [CDatabase::Open](../../mfc/reference/cdatabase-class.md#open) , è possibile specificare se utilizzare la libreria di cursori per l'origine dati. Se si intende creare snapshot in tale `CDatabase::useCursorLib` origine dati, specificare l'opzione nel `dwOptions` parametro `Open` `OpenEx` o specificare TRUE per il parametro *bUseCursorLib* (il valore predefinito è TRUE). Se il driver ODBC supporta dynaset e si desidera aprire dynaset nell'origine dati, non utilizzare la libreria di cursori (maschera alcune funzionalità del driver necessarie per i dynaset). In tal caso, `CDatabase::useCursorLib` non `OpenEx` specificare né FALSE per il `Open`parametro *bUseCursorLib* in .

## <a name="see-also"></a>Vedere anche

[Nozioni di base su ODBCODBC Basics](../../data/odbc/odbc-basics.md)
