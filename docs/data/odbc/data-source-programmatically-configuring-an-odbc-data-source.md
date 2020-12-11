---
description: "Altre informazioni su: origine dati: configurazione di un'origine dati ODBC a livello di codice"
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
ms.openlocfilehash: 4d3cab3de1a3b65bd8df9aee2b91bbaf243926d6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155722"
---
# <a name="data-source-programmatically-configuring-an-odbc-data-source"></a>Origine dati: configurazione di un'origine dati ODBC a livello di codice

In questo argomento viene illustrato come è possibile configurare i nomi delle origini dati Open Database Connectivity (ODBC) a livello di codice. Questo consente di accedere ai dati senza forzare l'utilizzo esplicito dell'amministratore ODBC o di altri programmi per specificare i nomi delle origini dati.

In genere, un utente esegue l'amministratore ODBC per creare un'origine dati se il sistema di gestione di database (DBMS) associato supporta questa operazione.

Quando si crea un'origine dati ODBC di Microsoft Access tramite l'amministratore ODBC, sono disponibili due opzioni: è possibile selezionare un file con estensione mdb esistente oppure è possibile creare un nuovo file con estensione mdb. Non esiste un modo programmatico per creare il file mdb dall'applicazione ODBC MFC. Pertanto, se l'applicazione richiede di inserire i dati in un'origine dati di Microsoft Access (file con estensione mdb), è molto probabile che si desideri avere un file con estensione mdb vuoto che è possibile usare o copiare ogni volta che è necessario.

Tuttavia, molti DBMS consentono la creazione di origini dati a livello di codice. Alcune origini dati gestiscono una specifica di directory per i database. Ovvero, una directory è l'origine dati e ogni tabella all'interno dell'origine dati viene archiviata in un file separato (nel caso di dBASE, ogni tabella è un file con estensione dbf). I driver per altri database ODBC, ad esempio Microsoft Access e SQL Server, richiedono che alcuni criteri specifici vengano soddisfatti prima di poter stabilire un'origine dati. Ad esempio, quando si utilizza il driver ODBC di SQL Server, è necessario avere stabilito un computer SQL Server.

## <a name="sqlconfigdatasource-example"></a><a name="_core_sqlconfigdatasource_example"></a> Esempio di SQLConfigDataSource

Nell'esempio seguente viene utilizzata la `::SQLConfigDataSource` funzione API ODBC per creare una nuova origine dati di Excel denominata nuova origine dati di Excel:

```
SQLConfigDataSource(NULL,ODBC_ADD_DSN, "Excel Files (*.xls)",
                   "DSN=New Excel Data Source\0"
                   "Description=New Excel Data Source\0"
                   "FileType=Excel\0"
                   "DataDirectory=C:\\EXCELDIR\0"
                   "MaxScanRows=20\0");
```

Si noti che l'origine dati è in realtà una directory (C:\EXCELDIR); Questa directory deve esistere. Il driver Excel usa le directory come origini dati e file come le singole tabelle (una tabella per ogni file xls).

Per ulteriori informazioni sulla creazione di tabelle, vedere [origine dati: creazione di una tabella in un'origine dati ODBC a livello di](../../data/odbc/data-source-programmatically-creating-a-table-in-an-odbc-data-source.md)codice.

Le informazioni seguenti illustrano i parametri che devono essere passati alla `::SQLConfigDataSource` funzione API ODBC. Per utilizzare `::SQLConfigDataSource` , è necessario includere il file di intestazione ODBCINST. h e utilizzare la libreria di importazione ODBCINST. lib. Inoltre, Odbccp32.dll deve trovarsi nel percorso in fase di esecuzione (o Odbcinst.dll per 16 bit).

È possibile creare un nome di origine dati ODBC utilizzando un amministratore ODBC o un'utilità simile. Tuttavia, a volte è consigliabile creare un nome di origine dati direttamente dall'applicazione per ottenere l'accesso senza richiedere all'utente di eseguire un'utilità separata.

L'amministratore ODBC (in genere installato nel pannello di controllo) crea una nuova origine dati inserendo le voci nel registro di sistema di Windows (o, per 16 bit, nel file di Odbc.ini). Gestione driver ODBC esegue una query su questo file per ottenere le informazioni necessarie sull'origine dati. È importante sapere quali informazioni devono essere inserite nel registro di sistema perché è necessario fornirle con la chiamata a `::SQLConfigDataSource` .

Sebbene queste informazioni possano essere scritte direttamente nel registro di sistema senza utilizzare `::SQLConfigDataSource` , tutte le applicazioni che lo fanno si basano sulla tecnica corrente utilizzata da Gestione driver per gestire i dati. Se una revisione successiva di gestione driver ODBC implementa la conservazione dei record sulle origini dati in modo diverso, le applicazioni che utilizzano questa tecnica vengono interrotte. È in genere consigliabile usare una funzione API quando ne viene fornita una. Ad esempio, il codice è portabile da 16 bit a 32 bit se si usa la `::SQLConfigDataSource` funzione, perché la funzione scrive correttamente nel file di Odbc.ini o nel registro di sistema.

## <a name="sqlconfigdatasource-parameters"></a><a name="_core_sqlconfigdatasource_parameters"></a> Parametri SQLConfigDataSource

Di seguito vengono illustrati i parametri della `::SQLConfigDataSource` funzione. Gran parte delle informazioni è ricavata dal *riferimento per programmatore* API ODBC fornito con Visual C++ versione 1,5 e successive.

### <a name="function-prototype"></a><a name="_core_function_prototype"></a> Prototipo di funzione

```
BOOL SQLConfigDataSource(HWND hwndParent,UINT fRequest, LPCSTR lpszDriver, LPCSTR lpszAttributes);
```

### <a name="remarks"></a>Commenti

#### <a name="parameters-and-usage"></a><a name="_core_parameters_and_usage"></a> Parametri e utilizzo

*hwndParent*<br/>
La finestra specificata come proprietario di tutte le finestre di dialogo create da Gestione driver ODBC o dal driver ODBC specifico per ottenere informazioni aggiuntive dall'utente sulla nuova origine dati. Se il parametro *lpszAttributes* non fornisce informazioni sufficienti, viene visualizzata una finestra di dialogo. Il parametro *hwndParent* può essere null.

*lpszDriver*<br/>
Descrizione del driver. Questo è il nome visualizzato agli utenti anziché il nome del driver fisico (la DLL).

*lpszAttributes*<br/>
Elenco di attributi nel formato "nome/valore". Queste stringhe sono separate da terminatori null con due terminatori null consecutivi alla fine dell'elenco. Questi attributi sono principalmente voci specifiche del driver predefinite, che vengono inserite nel registro di sistema per la nuova origine dati. Una chiave importante non citata nel riferimento all'API ODBC per questa funzione è "DSN" ("nome origine dati"), che specifica il nome della nuova origine dati. Le altre voci sono specifiche del driver per la nuova origine dati. Spesso non è necessario fornire tutte le voci perché il driver può richiedere all'utente le finestre di dialogo per i nuovi valori. Per causare questa operazione, impostare *hwndParent* su null. Potrebbe essere necessario specificare in modo esplicito i valori predefiniti in modo che l'utente non venga richiesto.

#### <a name="to-determine-the-description-of-a-driver-for-the-lpszdriver-parameter-using-odbc-administrator"></a>Per determinare la descrizione di un driver per il parametro lpszDriver mediante l'amministratore ODBC

1. Eseguire amministratore ODBC.

1. Scegliere **Aggiungi**.

Viene visualizzato un elenco dei driver installati e delle relative descrizioni. Usare questa descrizione come parametro *lpszDriver* . Si noti che si usa l'intera descrizione, ad esempio "file di Excel (*. xls)", che include l'estensione del nome file e le parentesi se esistono nella descrizione.

In alternativa, è possibile esaminare il registro di sistema (o, per 16 bit, il file Odbcinst.ini), che contiene un elenco di tutte le voci di driver e le descrizioni nella chiave del registro di sistema "driver ODBC" (o la sezione [driver ODBC] in Odbcinst.ini).

Un modo per trovare i nomi delle proprietà e i valori per il parametro *lpszAttributes* consiste nell'esaminare il file di Odbc.ini per un'origine dati già configurata, ad esempio una configurata dall'amministratore ODBC.

#### <a name="to-find-keynames-and-values-for-the-lpszattributes-parameter"></a>Per trovare i nomi delle proprietà e i valori per il parametro lpszAttributes

1. Eseguire l'editor del registro di sistema di Windows (o, per 16 bit, aprire il file di Odbc.ini).

1. Individuare le informazioni sulle origini dati ODBC utilizzando uno dei seguenti elementi:

   - Per 32 bit, trovare la chiave **HKEY_CURRENT_USER\Software\ODBC\ODBC.INI \ODBC Data Sources** nel riquadro sinistro.

      Il riquadro destro elenca le voci nel formato: "pub: REG_SZ: *\<data source name>* ", dove *\<data source name>* è un'origine dati che è già stata configurata con le impostazioni desiderate per il driver che si intende usare. Selezionare l'origine dati desiderata, ad esempio SQL Server. Gli elementi che seguono la stringa "pub:" sono, in ordine, il nome e il valore della proprietà da usare nel parametro *lpszAttributes* .

   - Per 16 bit, trovare la sezione nel file di Odbc.ini contrassegnato da [ *\<data source name>* ].

      Le righe che seguono questa riga hanno il formato "nome-valore". Si tratta esattamente delle voci da usare nel parametro *lpszAttributes* .

Potrebbe inoltre essere necessario esaminare la documentazione relativa al driver specifico che si intende utilizzare. Per informazioni utili, vedere la Guida in linea del driver, a cui è possibile accedere eseguendo l'amministratore ODBC. Questi file della guida vengono in genere inseriti nella directory WINDOWS\SYSTEM per Windows NT, Windows 3,1 o Windows 95.

#### <a name="to-obtain-online-help-for-your-odbc-driver"></a>Per ottenere la Guida in linea per il driver ODBC

1. Eseguire amministratore ODBC.

1. Scegliere **Aggiungi**.

1. Selezionare il nome del driver.

1. Fare clic su **OK**.

Quando l'amministratore ODBC Visualizza le informazioni per la creazione di una nuova origine dati per quel particolare driver, **fare clic su**?. Verrà aperto il file della Guida per quel particolare driver, che in genere contiene informazioni importanti sull'utilizzo del driver.

## <a name="see-also"></a>Vedi anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)
