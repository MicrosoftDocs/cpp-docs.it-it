---
title: 'ODBC: Libreria di cursori ODBC | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 83b09d836422cbf32b70ac904aa31fcff2ad00bb
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50078258"
---
# <a name="odbc-the-odbc-cursor-library"></a>ODBC: libreria di cursori ODBC

In questo argomento descrive la libreria di cursori ODBC e illustra come usarlo. Per altre informazioni, vedere:

- [Driver ODBC di libreria di cursori e livello 1](#_core_the_cursor_library_and_level_1_odbc_drivers)

- [Colonne Timestamp e gli aggiornamenti posizionati](#_core_positioned_updates_and_timestamp_columns)

- [Usando la libreria di cursori](#_core_using_the_cursor_library)

La libreria di cursori ODBC è una libreria di collegamento dinamico (DLL) che risiede tra gestione Driver ODBC e driver. In termini di ODBC, un driver mantiene un cursore per tenere traccia della propria posizione nel set di record. Il cursore indica la posizione del recordset a cui è già eseguito lo scorrimento, ovvero il record corrente.

##  <a name="_core_the_cursor_library_and_level_1_odbc_drivers"></a> Driver ODBC di libreria di cursori e livello 1

La libreria di cursori ODBC offre i driver di livello 1 le nuove funzionalità seguenti:

- Lo scorrimento in avanti e indietro. I driver di livello 2, la libreria di cursori non sono necessario in quanto sono già scorrevole.

- Supporto per gli snapshot. La libreria di cursori gestisce un buffer contenente i record dello snapshot. Questo buffer riflette le operazioni di eliminazione del programma e apportare modifiche al record, ma non le aggiunte, eliminazioni o modifiche di altri utenti. Pertanto, lo snapshot è solo a quelle del buffer della libreria di cursori. Il buffer non riflette inoltre il proprio aggiunte finché non si chiama `Requery`. I dynaset non usano la libreria di cursori.

La libreria di cursori offre gli snapshot, ovvero i cursori statici, anche se non sono in genere supportate dal driver in uso. Se il driver supporta già i cursori statici, non occorre caricare la libreria di cursori per ottenere il supporto dello snapshot. Se si usa la libreria di cursori, è possibile usare solo gli snapshot e Recordset forward-only. Se il driver supporta dynaset (ovvero i cursori KEYSET_DRIVEN) e si vuole usarli, è necessario non utilizzare la libreria di cursori. Se si desidera utilizzare snapshot sia dynaset, è necessario basare tali criteri su due diversi `CDatabase` oggetti (due diverse connessioni) a meno che il driver supporta entrambi.

##  <a name="_core_positioned_updates_and_timestamp_columns"></a> Colonne Timestamp e gli aggiornamenti posizionati

> [!NOTE]
>  Origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, o tramite le classi MFC oggetto DAO (Data Access).

> [!NOTE]
>  Se il driver ODBC supporta `SQLSetPos`, utilizzato da MFC, se disponibile, in questo argomento non si applica all'utente.

La maggior parte dei driver di livello 1 non supportano gli aggiornamenti posizionati. Tali driver si basano su libreria di cursori per emulare le funzionalità del driver di livello 2 in questo senso. La libreria di cursori emula il supporto per gli aggiornamenti posizionati in questo modo un aggiornamento con ricerca nei campi rimane invariati.

In alcuni casi, un set di record potrebbe contenere una colonna timestamp come uno di tali campi rimane invariati. Si verificano due problemi con MFC Recordset con tabelle contenenti colonne di tipo timestamp.

Il primo problema riguarda gli snapshot aggiornabili in tabelle con colonne di tipo timestamp. Se la tabella a cui è associato lo snapshot contiene una colonna timestamp, è necessario chiamare `Requery` dopo aver chiamato `Edit` e `Update`. In caso contrario, potrebbe non essere in grado di modificare di nuovo lo stesso record. Quando si chiama `Edit` e quindi `Update`, il record viene scritto nell'origine dati e la colonna timestamp viene aggiornata. Se non è necessario chiamare `Requery`, il valore timestamp del record di snapshot non corrisponde più il timestamp corrispondente nell'origine dati. Quando si tenta nuovamente di aggiornare il record, l'origine dati potrebbe non consentire l'aggiornamento a causa della mancata corrispondenza.

Il secondo problema riguarda i limiti della classe [CTime](../../atl-mfc-shared/reference/ctime-class.md) quando usato con il `RFX_Date` funzione per trasferire informazioni di data e ora da o verso una tabella. L'elaborazione di `CTime` oggetto impone un sovraccarico sotto forma di elaborazione aggiuntivo intermedio durante il trasferimento dei dati. L'intervallo di date di `CTime` oggetti potrebbero anche essere troppo restrittivo alcune applicazioni. Una nuova versione del `RFX_Date` funzione accetta un ODBC *TIMESTAMP_STRUCT* parametro anziché un `CTime` oggetto. Per altre informazioni, vedere `RFX_Date` nelle [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *riferimenti alla libreria MFC*.

##  <a name="_core_using_the_cursor_library"></a> Usando la libreria di cursori

Quando ci si connette a un'origine dati, chiamando [CDatabase](../../mfc/reference/cdatabase-class.md#openex) oppure [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) , è possibile specificare se usare la libreria di cursori per l'origine dati. Se si creano gli snapshot in quell'origine dati, specificare il `CDatabase::useCursorLib` opzione il `dwOptions` parametro per `OpenEx` oppure specificare TRUE per il *bUseCursorLib* parametro `Open` (il valore predefinito è HA VALORE TRUE). Se il driver ODBC supporta dynaset e si desidera aprire dynaset sull'origine dati, non usare la libreria di cursori (maschera alcune funzionalità del driver necessari per dynaset). In tal caso, non si specifica `CDatabase::useCursorLib` nelle `OpenEx` oppure specificare FALSE per il *bUseCursorLib* parametro in `Open`.

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)