---
title: "ODBC: libreria di cursori ODBC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "libreria di cursori [ODBC]"
  - "libreria di cursori [ODBC], snapshot"
  - "cursori, ODBC (libreria di cursori)"
  - "Livello 1 (driver ODBC)"
  - "ODBC (libreria di cursori) [ODBC]"
  - "ODBC (driver), supporto cursore"
  - "ODBC (driver), Livello 1"
  - "ODBC, timestamp"
  - "aggiornamenti posizionati"
  - "posizionamento cursori"
  - "snapshot, supporto in ODBC"
  - "cursori statici"
  - "timestamp, colonne timestamp ODBC"
ms.assetid: 6608db92-82b1-4164-bb08-78153c227be3
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ODBC: libreria di cursori ODBC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono descritti la libreria di cursori ODBC e il relativo utilizzo.  Per ulteriori informazioni, vedere:  
  
-   [Libreria di cursori e driver ODBC di livello 1](#_core_the_cursor_library_and_level_1_odbc_drivers)  
  
-   [Aggiornamenti posizionati e colonne timestamp](#_core_positioned_updates_and_timestamp_columns)  
  
-   [Utilizzo della libreria di cursori](#_core_using_the_cursor_library)  
  
 La libreria di cursori ODBC è una libreria a collegamento dinamico \(DLL\) che si trova tra Gestione driver ODBC e il driver.  Nella terminologia relativa a ODBC, un driver gestisce un cursore per tenere traccia della propria posizione nel recordset.  Il cursore contrassegna la posizione all'interno del recordset su cui è già stato eseguito lo scorrimento, ovvero il record corrente.  
  
##  <a name="_core_the_cursor_library_and_level_1_odbc_drivers"></a> Libreria di cursori e driver ODBC di livello 1  
 La libreria di cursori ODBC fornisce ai driver di livello 1 le seguenti funzionalità aggiuntive.  
  
-   Scorrimento in avanti e indietro.  La libreria di cursori non è necessaria per i driver di livello 2, in quanto sono già scorrevoli.  
  
-   Supporto per gli snapshot.  La libreria di cursori gestisce un buffer contenente i record dello snapshot.  Tale buffer riflette le eliminazioni e le modifiche apportate ai record tramite il programma, ma non le aggiunte, le eliminazioni o le modifiche di altri utenti.  Pertanto, uno snapshot risulta aggiornato solo in relazione al buffer della libreria di cursori.  Il buffer non riflette inoltre le aggiunte del programmatore fino a quando non si chiama **Requery**.  I dynaset non utilizzano la libreria di cursori.  
  
 La libreria di cursori fornisce gli snapshot, ovvero i cursori statici, anche se, in genere, questi non sono supportati dal driver in uso.  Se il driver supporta già i cursori statici, non è necessario caricare la libreria di cursori per ottenere il supporto degli snapshot.  Se invece si utilizza la libreria di cursori, è possibile utilizzare solo gli snapshot e i recordset forward\-only.  Se il driver supporta i dynaset, ovvero i cursori KEYSET\_DRIVEN, e si desidera utilizzarli, la libreria di cursori non deve essere utilizzata.  Se si desidera utilizzare sia gli snapshot che i dynaset, è necessario basarli su due oggetti `CDatabase` differenti, cioè su due connessioni diverse, a meno che non siano entrambi supportati dal driver in uso.  
  
##  <a name="_core_positioned_updates_and_timestamp_columns"></a> Aggiornamenti posizionati e colonne timestamp  
  
> [!NOTE]
>  È possibile accedere alle origini dati ODBC tramite le classi ODBC MFC, come descritto nel presente argomento, oppure tramite le classi DAO \(Data Access Object\) MFC.  
  
> [!NOTE]
>  Se il driver ODBC supporta **SQLSetPos**, utilizzato da MFC quando disponibile, non è necessario leggere questo argomento.  
  
 La maggior parte dei driver di livello 1 non supporta gli aggiornamenti posizionati.  Tali driver utilizzano pertanto la libreria di cursori per emulare le funzionalità dei driver di livello 2.  La libreria di cursori emula il supporto per gli aggiornamenti posizionati eseguendo un aggiornamento tramite ricerca nei campi non modificabili.  
  
 In alcuni casi, un recordset può contenere una colonna timestamp tra i campi non modificabili.  L'utilizzo dei recordset MFC con tabelle contenenti colonne timestamp comporta due problemi.  
  
 Il primo problema riguarda gli snapshot aggiornabili in tabelle contenenti colonne timestamp.  Se la tabella a cui lo snapshot è associato contiene una colonna timestamp, è necessario chiamare **Requery** dopo aver eseguito una chiamata a **Edit** e a **Update**.  In caso contrario, non sarà possibile modificare lo stesso record una seconda volta.  Quando si chiamano **Edit** e **Update**, il record viene scritto nell'origine dati e la colonna timestamp viene aggiornata.  Se non si chiama **Requery**, non ci sarà più corrispondenza tra il valore timestamp per il record nello snapshot e il relativo valore timestamp nell'origine dati.  Quando si tenta di aggiornare nuovamente il record, è possibile che l'origine dati impedisca l'aggiornamento a causa della mancata corrispondenza.  
  
 Il secondo problema riguarda i limiti della classe [CTime](../../atl-mfc-shared/reference/ctime-class.md) quando viene utilizzata con la funzione `RFX_Date` per trasferire le informazioni sulla data e l'ora da o verso una tabella.  L'elaborazione dell'oggetto `CTime` richiede, durante il trasferimento dei dati, un certo overhead sotto forma di elaborazione intermedia aggiuntiva.  È possibile inoltre che l'intervallo di date degli oggetti `CTime` risulti troppo limitativo per alcune applicazioni.  Una nuova versione della funzione `RFX_Date` utilizza un parametro ODBC **TIMESTAMP\_STRUCT** anziché un oggetto `CTime`.  Per ulteriori informazioni, vedere `RFX_Date` in [Macro e funzioni globali](../Topic/Macros,%20Global%20Functions,%20and%20Global%20Variables.md) in *Riferimenti alla libreria MFC*.  
  
##  <a name="_core_using_the_cursor_library"></a> Utilizzo della libreria di cursori  
 Quando ci si connette a un'origine dati chiamando [CDatabase::OpenEx](../Topic/CDatabase::OpenEx.md) o [CDatabase::Open](../Topic/CDatabase::Open.md), è possibile specificare se utilizzare la libreria di cursori per l'origine dati.  Se si creano snapshot in tale origine dati, specificare l'opzione **CDatabase::useCursorLib** nel parametro `dwOptions` di `OpenEx` o specificare **TRUE** per il parametro **bUseCursorLib** di **Open** \(**TRUE** è l'impostazione predefinita\).  Se il driver ODBC supporta i dynaset e si desidera aprirli nell'origine dati, non utilizzare la libreria di cursori, in quanto nasconde alcune funzionalità del driver necessarie per i dynaset.  In tal caso, non specificare **CDatabase::useCursorLib** in `OpenEx` oppure specificare **FALSE** per il parametro **bUseCursorLib** in **Open**.  
  
## Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)