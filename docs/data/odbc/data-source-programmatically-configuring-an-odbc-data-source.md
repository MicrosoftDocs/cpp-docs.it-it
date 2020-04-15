---
title: "Origine dati: configurazione di un'origine dati ODBC a livello di codice"
ms.date: 11/04/2016
f1_keywords:
- SQLConfigDataSource
helpviewer_keywords:
- ODBC data sources, configuring
- SQLConfigDataSource method example
- ODBC connections, configuring
- configuring ODBC data sources
ms.assetid: b8cabe9b-9e12-4d73-ae36-7cb12dee3213
ms.openlocfilehash: ba0224d166795b34d636ace610265e115209e49c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358866"
---
# <a name="data-source-programmatically-configuring-an-odbc-data-source"></a>Origine dati: configurazione di un'origine dati ODBC a livello di codice

In questo argomento viene illustrato come configurare i nomi delle origini dati ODBC (Open Database Connectivity) a livello di codice. In questo modo è possibile accedere ai dati senza costringere l'utente a utilizzare in modo esplicito l'Amministratore ODBC o altri programmi per specificare i nomi delle origini dati.

In genere, un utente esegue l'Amministratore ODBC per creare un'origine dati se il sistema di gestione di database (DBMS) associato supporta questa operazione.

Quando si crea un'origine dati ODBC di Microsoft Access tramite l'Amministratore ODBC, vengono fornite due opzioni: è possibile selezionare un file mdb esistente oppure creare un nuovo file mdb. Non esiste un modo programmatico per creare il file mdb dall'applicazione ODBC MFC. Pertanto, se l'applicazione richiede l'immissione di dati in un'origine dati di Microsoft Access (file con estensione mdb), è probabile che si desideri disporre di un file mdb vuoto che è possibile utilizzare o copiare ogni volta che è necessario.

Tuttavia, molti DBS consentono la creazione di origini dati a livello di codice. Alcune origini dati mantengono una specifica di directory per i database. Ovvero, una directory è l'origine dati e ogni tabella all'interno dell'origine dati viene archiviata in un file separato (nel caso di dBASE, ogni tabella è un file con estensione dbf). I driver per altri database ODBC, ad esempio Microsoft Access e SQL Server, richiedono che vengano soddisfatti alcuni criteri specifici prima di poter stabilire un'origine dati. Ad esempio, quando si utilizza il driver ODBC di SQL Server, è necessario avere stabilito un computer SQL Server.

## <a name="sqlconfigdatasource-example"></a><a name="_core_sqlconfigdatasource_example"></a>Esempio SQLConfigDataSourceSQLConfigDataSource Example

Nell'esempio seguente `::SQLConfigDataSource` viene utilizzata la funzione API ODBC per creare una nuova origine dati di Excel denominata Nuova origine dati Excel:The following example uses the ODBC API function to create a new Excel data source called New Excel Data Source:

```
SQLConfigDataSource(NULL,ODBC_ADD_DSN, "Excel Files (*.xls)",
                   "DSN=New Excel Data Source\0"
                   "Description=New Excel Data Source\0"
                   "FileType=Excel\0"
                   "DataDirectory=C:\\EXCELDIR\0"
                   "MaxScanRows=20\0");
```

Si noti che l'origine dati è in realtà una directory (C: , EXCELDIR); questa directory deve esistere. Il driver di Excel utilizza le directory come origini dati e i file come singole tabelle (una tabella per ogni file xls).

Per ulteriori informazioni sulla creazione di tabelle, vedere [origine dati: creazione a livello di codice di una tabella in un'origine dati ODBC](../../data/odbc/data-source-programmatically-creating-a-table-in-an-odbc-data-source.md).

Le informazioni seguenti illustrano i parametri `::SQLConfigDataSource` che devono essere passati alla funzione API ODBC. Per `::SQLConfigDataSource`utilizzare , è necessario includere il file di intestazione Odbcinst.h e utilizzare la libreria di importazione Odbcinst.lib. Inoltre, Odbccp32.dll deve essere nel percorso in fase di esecuzione (o Odbcinst.dll per 16 bit).

È possibile creare un nome di origine dati ODBC utilizzando l'Amministratore ODBC o un'utilità simile. Tuttavia, a volte è consigliabile creare un nome di origine dati direttamente dall'applicazione per ottenere l'accesso senza richiedere all'utente di eseguire un'utilità separata.

L'Amministratore ODBC (in genere installato nel Pannello di controllo) crea una nuova origine dati inserendo voci nel Registro di sistema di Windows (o, per 16 bit, nel file Odbc.ini). Gestione Driver ODBC esegue una query su questo file per ottenere le informazioni necessarie sull'origine dati. È importante sapere quali informazioni devono essere inserite nel Registro di `::SQLConfigDataSource`sistema perché è necessario fornirle con la chiamata a .

Sebbene queste informazioni possano essere `::SQLConfigDataSource`scritte direttamente nel Registro di sistema senza utilizzare , qualsiasi applicazione che esegue questa operazione si basa sulla tecnica corrente utilizzata da Gestione Driver per gestire i dati. Se una revisione successiva di Gestione Driver ODBC implementa la conservazione dei record sulle origini dati in modo diverso, qualsiasi applicazione che utilizza questa tecnica viene interrotta. In genere è consigliabile usare una funzione API quando ne viene fornita una. Ad esempio, il codice è portabile da 16 `::SQLConfigDataSource` bit a 32 bit se si utilizza la funzione, perché la funzione scrive correttamente nel file Odbc.ini o nel Registro di sistema.

## <a name="sqlconfigdatasource-parameters"></a><a name="_core_sqlconfigdatasource_parameters"></a>Parametri SQLConfigDataSourceSQLConfigDataSource Parameters

Di seguito vengono illustrati `::SQLConfigDataSource` i parametri della funzione. La maggior parte delle informazioni è presa dall'API ODBC *Programmer's Reference* fornito con Visual C .

### <a name="function-prototype"></a><a name="_core_function_prototype"></a>Prototipo di funzione

```
BOOL SQLConfigDataSource(HWND hwndParent,UINT fRequest, LPCSTR lpszDriver, LPCSTR lpszAttributes);
```

### <a name="remarks"></a>Osservazioni

#### <a name="parameters-and-usage"></a><a name="_core_parameters_and_usage"></a>Parametri e utilizzo

*hwndPadre*<br/>
Finestra specificata come proprietario di tutte le finestre di dialogo create da Gestione driver ODBC o dal driver ODBC specifico per ottenere informazioni aggiuntive dall'utente sulla nuova origine dati. Se il *lpszAttributes* parametro non fornisce informazioni sufficienti, viene visualizzata una finestra di dialogo. Il *hwndParent* parametro potrebbe essere NULL.

*lpszDriver*<br/>
Descrizione del driver. Questo è il nome presentato agli utenti anziché il nome del driver fisico (la DLL).

*LpszAttributi*<br/>
Elenco di attributi nel formato "nomechiave/valore". Queste stringhe sono separate da terminatori null con due terminatori null consecutivi alla fine dell'elenco. Questi attributi sono principalmente voci specifiche del driver predefinito, che vanno nel Registro di sistema per la nuova origine dati. Una chiave importante non menzionata nel riferimento all'API ODBC per questa funzione è "DSN" ("nome origine dati"), che specifica il nome della nuova origine dati. Le altre voci sono specifiche del driver per la nuova origine dati. Spesso non è necessario fornire tutte le voci perché il driver può richiedere all'utente finestre di dialogo per i nuovi valori. (Impostare *hwndParent* su NULL per causare questo.) È possibile fornire in modo esplicito i valori predefiniti in modo che l'utente non venga richiesto.

#### <a name="to-determine-the-description-of-a-driver-for-the-lpszdriver-parameter-using-odbc-administrator"></a>Per determinare la descrizione di un driver per il parametro lpszDriver utilizzando l'Amministratore ODBC

1. Eseguire l'Amministratore ODBC.

1. Fare clic su **Aggiungi**.

Questo ti dà un elenco dei driver installati e le loro descrizioni. Utilizzare questa descrizione come parametro *lpszDriver.* Si noti che si utilizza l'intera descrizione, ad esempio "File di Excel (.xls)", inclusa l'estensione del nome file e le parentesi, se presenti nella descrizione.

In alternativa, è possibile esaminare il Registro di sistema (o, per 16 bit, il file Odbcinst.ini), che contiene un elenco di tutte le voci e le descrizioni dei driver nella chiave del Registro di sistema "ODBC Drivers" (o la sezione [ODBC Drivers] in Odbcinst.ini).

Un modo per trovare i nomi delle chiavi e i valori per il *lpszAttributes* parametro consiste nell'esaminare il file Odbc.ini per un'origine dati già configurata (forse uno che è stato configurato dall'amministratore ODBC).

#### <a name="to-find-keynames-and-values-for-the-lpszattributes-parameter"></a>Per trovare i nomi delle chiavi e i valori per il parametro lpszAttributes

1. Eseguire l'editor del Registro di sistema di Windows (o, per 16 bit, aprire il file Odbc.ini).

1. Trovare le informazioni sulle origini dati ODBC utilizzando una delle opzioni seguenti:

   - Per i bit a 32 bit, trovare la chiave **HKEY_CURRENT_USER Software ODBC ODBC. InI-Origini dati ODBC** nel riquadro sinistro.

      Nel riquadro di destra sono elencate le voci del modulo: "pub: REG_SZ:*\<nome dell'origine dati>*", dove * \<nome origine dati>* è un'origine dati che è già stata configurata con le impostazioni desiderate per il driver che si intende utilizzare. Selezionare l'origine dati desiderata, ad esempio SQL Server.Select the data source you want, for example, SQL Server. Gli elementi che seguono la stringa "pub:" sono, nell'ordine, il keyname e il valore da utilizzare nel parametro *lpszAttributes.*

   - Per 16 bit, individuare la sezione nel file*\< *Odbc.ini contrassegnata da [ nome origine dati>].

      Le righe che seguono questa riga hanno il formato "nomechiave/valore". Queste sono esattamente le voci da utilizzare nel parametro *lpszAttributes.*

È anche possibile esaminare la documentazione per il driver specifico che si intende utilizzare. È possibile trovare informazioni utili nella Guida in linea del driver, a cui è possibile accedere eseguendo l'Amministratore ODBC. Questi file della Guida vengono in genere inseriti nella directory WINDOWS-SYSTEM per Windows NT, Windows 3.1 o Windows 95.

#### <a name="to-obtain-online-help-for-your-odbc-driver"></a>Per ottenere la Guida in linea per il driver ODBC

1. Eseguire l'Amministratore ODBC.

1. Fare clic su **Aggiungi**.

1. Selezionare il nome del driver.

1. Fare clic su **OK**.

Quando l'Amministratore ODBC visualizza le informazioni per la creazione di una nuova origine dati per quel particolare driver, fare clic su **?** Verrà aperto il file della Guida relativo a quel particolare driver, che in genere contiene informazioni importanti relative all'utilizzo del driver.

## <a name="see-also"></a>Vedere anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)
