---
title: 'ODBC: Libreria di cursori ODBC | Documenti Microsoft'
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
ms.openlocfilehash: e57251263738d534b7e7e22ff287607fbc5159a5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="odbc-the-odbc-cursor-library"></a>ODBC: libreria di cursori ODBC
In questo argomento viene descritta la libreria di cursori ODBC e viene spiegato come utilizzarlo. Per altre informazioni, vedere:  
  
-   [Libreria di cursori e 1 livello di driver ODBC](#_core_the_cursor_library_and_level_1_odbc_drivers)  
  
-   [Gli aggiornamenti posizionati e colonne Timestamp](#_core_positioned_updates_and_timestamp_columns)  
  
-   [Utilizza la libreria di cursori](#_core_using_the_cursor_library)  
  
 La libreria di cursori ODBC è una libreria a collegamento dinamico (DLL) che si trova tra gestione Driver ODBC e il driver. In termini ODBC, un driver gestisce un cursore per tenere traccia della propria posizione nel recordset. Il cursore contrassegna la posizione del recordset a cui è già eseguito lo scorrimento, il record corrente.  
  
##  <a name="_core_the_cursor_library_and_level_1_odbc_drivers"></a> Libreria di cursori e 1 livello di driver ODBC  
 La libreria di cursori ODBC fornisce driver di livello 1 le nuove funzionalità seguenti:  
  
-   Scorrimento in avanti e indietro. I driver di livello 2 non è necessaria la libreria di cursori perché sono già scorrevoli.  
  
-   Supporto per gli snapshot. La libreria di cursori gestisce un buffer che contiene i record dello snapshot. Questo buffer riflette le operazioni di eliminazione del programma e le modifiche al record, ma non le aggiunte, eliminazioni o modifiche di altri utenti. Pertanto, lo snapshot è solo a quelle del buffer della libreria di cursori. Il buffer non riflette inoltre le aggiunte del programmatore finché non si chiama **Requery**. I dynaset non utilizzano la libreria di cursori.  
  
 Anche se non sono in genere supportati dal driver in uso, la libreria di cursori offre snapshot (cursori statici). Se il driver supporta già i cursori statici, non è necessario caricare la libreria di cursori per ottenere il supporto degli snapshot. Se si utilizza la libreria di cursori, è possibile utilizzare solo gli snapshot e Recordset forward-only. Se il driver supporta i dynaset (ovvero i cursori KEYSET_DRIVEN) e si desidera utilizzarli, è necessario non utilizzare la libreria di cursori. Se si desidera utilizzare sia snapshot che dynaset, devono essere basati su due diversi `CDatabase` oggetti (due connessioni differenti), a meno che il driver supporta entrambi.  
  
##  <a name="_core_positioned_updates_and_timestamp_columns"></a> Gli aggiornamenti posizionati e colonne Timestamp  
  
> [!NOTE]
>  Origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, oppure tramite le classi MFC oggetto DAO (Data Access).  
  
> [!NOTE]
>  Se il driver ODBC supporta **SQLSetPos**, utilizzato da MFC, se disponibile, in questo argomento non si applica all'utente.  
  
 La maggior parte dei driver di livello 1 non supportano gli aggiornamenti posizionati. Tali driver si basano sulla libreria di cursori per emulare le funzionalità del driver di livello 2 in questo senso. La libreria di cursori emula il supporto per gli aggiornamenti posizionati eseguendo un aggiornamento con ricerca nei campi non modificabili.  
  
 In alcuni casi, un oggetto recordset potrebbe contenere una colonna timestamp come uno di questi campi non modificabili. Si verificano due problemi nell'utilizzo di recordset MFC con le tabelle contenenti colonne di tipo timestamp.  
  
 Il primo problema riguarda gli snapshot aggiornabili in tabelle con colonne di tipo timestamp. Se la tabella a cui è associato lo snapshot contiene una colonna timestamp, è necessario chiamare **Requery** dopo aver chiamato **modifica** e **aggiornamento**. In caso contrario, potrebbe non essere in grado di modificare di nuovo lo stesso record. Quando si chiama **modifica** e quindi **aggiornamento**, il record viene scritto nell'origine dati e la colonna timestamp viene aggiornata. Se non si chiama **Requery**, il valore di timestamp per il record nello snapshot non corrisponde più il timestamp corrispondente nell'origine dati. Quando si tenta di eseguire nuovamente l'aggiornamento del record, l'origine dati potrebbe non consentire l'aggiornamento a causa della mancata corrispondenza.  
  
 Il secondo problema riguarda i limiti della classe [CTime](../../atl-mfc-shared/reference/ctime-class.md) quando si utilizza il `RFX_Date` funzione per trasferire le informazioni di data e ora da o verso una tabella. L'elaborazione di `CTime` oggetto richiede un certo overhead sotto forma di elaborazione intermedia aggiuntiva durante il trasferimento dei dati. L'intervallo di date `CTime` oggetti potrebbero anche essere troppo restrittivo alcune applicazioni. Una nuova versione di `RFX_Date` funzione accetta un ODBC **TIMESTAMP_STRUCT** parametro anziché una `CTime` oggetto. Per ulteriori informazioni, vedere `RFX_Date` in [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *riferimenti alla libreria MFC*.  

  
##  <a name="_core_using_the_cursor_library"></a> Utilizza la libreria di cursori  
 Quando ci si connette a un'origine dati, ovvero chiamando [:: OpenEx](../../mfc/reference/cdatabase-class.md#openex) o [CDatabase:: Open](../../mfc/reference/cdatabase-class.md#open) , è possibile specificare se utilizzare la libreria di cursori per l'origine dati. Se si creano gli snapshot in tale origine dati, specificare il **CDatabase:: useCursorLib** opzione il `dwOptions` parametro `OpenEx` o specificare **TRUE** per il  **bUseCursorLib** parametro **aprire** (il valore predefinito è **TRUE**). Se il driver ODBC supporta i dynaset e si desidera aprire dynaset sull'origine dati, non utilizzare la libreria di cursori (maschera alcune funzionalità del driver necessari per dynaset). In tal caso, non si specifica **CDatabase:: useCursorLib** in `OpenEx` o specificare **FALSE** per il **bUseCursorLib** parametro **aprire**.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)