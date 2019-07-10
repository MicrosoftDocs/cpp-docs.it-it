---
title: "Origine dati: Configurazione a livello di codice di un'origine dati ODBC"
ms.date: 11/04/2016
f1_keywords:
- SQLConfigDataSource
helpviewer_keywords:
- ODBC data sources, configuring
- SQLConfigDataSource method example
- ODBC connections, configuring
- configuring ODBC data sources
ms.assetid: b8cabe9b-9e12-4d73-ae36-7cb12dee3213
ms.openlocfilehash: 33269b65835812a6e1a03e091833831781d97b6d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62395930"
---
# <a name="data-source-programmatically-configuring-an-odbc-data-source"></a>Origine dati: Configurazione a livello di codice di un'origine dati ODBC

Questo argomento illustra come è possibile configurare nomi delle origini dati di Open Database Connectivity (ODBC) a livello di codice. Questo offre flessibilità per accedere ai dati senza forzare l'utente da utilizzare in modo esplicito l'amministratore ODBC o altri programmi per specificare i nomi delle origini dati.

In genere, un utente esegue l'amministratore ODBC per creare un'origine dati se il sistema di gestione di database associato (DBMS) supporta questa operazione.

Quando si crea un'origine dati ODBC di Microsoft Access tramite Amministratore ODBC, l'utente ha due opzioni: è possibile selezionare un file con estensione mdb esistente oppure è possibile creare un nuovo file con estensione mdb. Non è possibile a livello di codice di creazione del file con estensione mdb dall'applicazione ODBC MFC. Pertanto, se l'applicazione richiede l'inserimento di dati in un'origine dati Microsoft Access (file con estensione mdb), è probabile che si desidera dispone di un file con estensione mdb vuoto che è possibile usare o copiare quando necessario.

Tuttavia, maggior parte dei DBMS consente la creazione dell'origine dati a livello di codice. Alcune origini dati gestiscono una specifica di directory per i database. Vale a dire, una directory è l'origine dati e ogni tabella all'interno dell'origine dati viene archiviata in un file distinto (nel caso di dBASE o FoxPro, ogni tabella è un file con estensione dbf). I driver per gli altri database ODBC, ad esempio Microsoft Access e SQL Server, richiedono che vengano soddisfatti alcuni criteri specifici prima di poter stabilire un'origine dati. Ad esempio, quando si usa il driver ODBC di SQL Server, è necessario aver stabilito un computer SQL Server.

##  <a name="_core_sqlconfigdatasource_example"></a> SQLConfigDataSource Example

L'esempio seguente usa il `::SQLConfigDataSource` funzione API ODBC per creare una nuova origine dati Excel denominata New Excel Data Source:

```
SQLConfigDataSource(NULL,ODBC_ADD_DSN, "Excel Files (*.xls)",
                   "DSN=New Excel Data Source\0"
                   "Description=New Excel Data Source\0"
                   "FileType=Excel\0"
                   "DataDirectory=C:\\EXCELDIR\0"
                   "MaxScanRows=20\0");
```

Si noti che l'origine dati è effettivamente una directory (C:\EXCELDIR); Questa directory deve esistere. Il driver per Excel Usa directory come origini dati e i file come singole tabelle (una tabella per ogni file con estensione xls).

Per altre informazioni sulla creazione di tabelle, vedere [Zdroj dat: A livello di codice crea una tabella in un'origine dati ODBC](../../data/odbc/data-source-programmatically-creating-a-table-in-an-odbc-data-source.md).

Le informazioni seguenti vengono illustrati i parametri che devono essere passati al `::SQLConfigDataSource` funzione API ODBC. Usare `::SQLConfigDataSource`, è necessario includere il file di intestazione Odbcinst. h e usare la libreria di importazione Odbcinst. Inoltre, Odbccp32 deve essere il percorso in fase di esecuzione (presente Odbccp32.dll o 16 bit).

È possibile creare un nome di origine dati ODBC con Amministratore ODBC o un'utilità analoga. Tuttavia, talvolta è preferibile creare il nome dell'origine dati direttamente dall'applicazione per ottenere l'accesso senza richiedere all'utente di eseguire un'utilità distinta.

Amministratore ODBC (in genere installato nel Pannello di controllo) Crea una nuova origine dati inserendo le voci del Registro di sistema di Windows (oppure, per a 16 bit, nel file ini). Gestione Driver ODBC esegue una query in questo file per ottenere le informazioni necessarie sull'origine dati. È importante sapere quali informazioni devono essere inserita nel Registro di sistema perché è necessario inserire la chiamata a `::SQLConfigDataSource`.

Anche se è stato possibile scrivere queste informazioni direttamente nel Registro di sistema senza usare `::SQLConfigDataSource`, qualsiasi applicazione che esegue questa operazione si basa sulla tecnica corrente utilizzato dalla gestione Driver per mantenere i dati. Se una revisione successiva gestione Driver ODBC implementa i record delle informazioni sulle origini dati in modo diverso, qualsiasi applicazione che usa questa tecnica viene interrotta. È in genere consigliabile utilizzare una funzione API quando ne viene specificato uno. Ad esempio, il codice sia portabile da 16 a 32 bit se si usa il `::SQLConfigDataSource` funzionare, perché la funzione scrive in modo corretto per il file ODBC ini o nel Registro di sistema.

##  <a name="_core_sqlconfigdatasource_parameters"></a> SQLConfigDataSource Parameters

Di seguito vengono descritti i parametri del `::SQLConfigDataSource` (funzione). Molte delle informazioni da cui proviene l'API ODBC *di riferimento per programmatori* forniti con Visual C++ versione 1.5 e successive.

###  <a name="_core_function_prototype"></a> Prototipo di funzione

```
BOOL SQLConfigDataSource(HWND hwndParent,UINT fRequest, LPCSTR lpszDriver, LPCSTR lpszAttributes);
```

### <a name="remarks"></a>Note

####  <a name="_core_parameters_and_usage"></a> Parametri e sull'utilizzo

*hwndParent*<br/>
La finestra specificata come proprietario di tutte le finestre di dialogo Gestione Driver ODBC o il driver ODBC specifico creato per ottenere informazioni aggiuntive da parte dell'utente sulla nuova origine dati. Se il *lpszAttributes* parametro fornisce informazioni sufficienti, viene visualizzata una finestra di dialogo. Il *hwndParent* parametro potrebbe essere NULL.

*lpszDriver*<br/>
Descrizione del driver. Si tratta del nome visualizzato agli utenti, anziché il nome del driver fisico (DLL).

*lpszAttributes*<br/>
Elenco di attributi nel formato "nome chiave = valore". Queste stringhe sono separate da terminatori null, con due terminatori null consecutivi alla fine dell'elenco. Questi attributi sono principalmente voci specifiche del driver predefinite, andare nel Registro di sistema per la nuova origine dati. Una chiave importante non menzionata nel riferimento all'API ODBC per questa funzione è "DSN" ("data source name"), che specifica il nome della nuova origine dati. Le voci rimanenti sono specifiche del driver per la nuova origine dati. Non è spesso necessario fornire tutte le voci in quanto il driver può richiedere all'utente le finestre di dialogo per i nuovi valori. (Impostata *hwndParent* su NULL per fare in questo modo.) È possibile fornire in modo esplicito i valori predefiniti in modo che l'utente non viene richiesto.

#### <a name="to-determine-the-description-of-a-driver-for-the-lpszdriver-parameter-using-odbc-administrator"></a>Per determinare la descrizione di un driver per il parametro lpszDriver mediante l'amministratore ODBC

1. Eseguire l'amministratore ODBC.

1. Fare clic su **Aggiungi**.

Ciò offre un elenco di driver installati con le relative descrizioni. Utilizzare questa descrizione come le *lpszDriver* parametro. Si noti che è utilizzare la descrizione completa, ad esempio "File di Excel (*.xls)", tra cui l'estensione di file e le parentesi, se presenti nella descrizione.

In alternativa, è possibile esaminare il Registro di sistema (oppure, per il file Odbcinst. ini a 16 bit), che contiene un elenco di tutte le voci di driver e le descrizioni nella chiave del Registro di sistema "ODBC Drivers" (o la sezione [ODBC Drivers] in Odbcinst. ini).

Un modo per trovare i nomi delle chiavi e valori per il *lpszAttributes* parametro consiste nell'esaminare il file ODBC ini per un'origine dati già configurata (magari uno che è stato configurato dall'amministratore ODBC).

#### <a name="to-find-keynames-and-values-for-the-lpszattributes-parameter"></a>Per trovare i nomi delle chiavi e valori per il parametro lpszAttributes

1. Eseguire l'editor del Registro di sistema di Windows (oppure, per a 16 bit, aprire il file ini).

1. Trovare le informazioni di origini dati ODBC usando uno dei seguenti:

   - 32 bit, trovare la chiave **HKEY_CURRENT_USER\Software\ODBC\ODBC. Zdroje dat INI\ODBC** nel riquadro sinistro.

      Riquadro di destra elenca le voci del modulo: "pub: REG_SZ: *<data source name>* ", dove *<data source name>* è un'origine dati che è già stata configurata con le impostazioni desiderate per il driver si intende usare. Selezionare l'origine dati desiderata, ad esempio, SQL Server. Gli elementi che seguono la stringa "pub:" sono, nell'ordine, il nome chiave e il valore da usare nel *lpszAttributes* parametro.

   - Per a 16 bit, individuare la sezione nel file ini contrassegnato da [ *\<nome dell'origine dati >* ].

      Le righe che seguono sono nel formato "nome chiave = valore". Queste sono esattamente le voci da utilizzare nel *lpszAttributes* parametro.

È anche possibile esaminare la documentazione relativa al driver specifico che si intende usare. È possibile trovare informazioni utili nella Guida in linea per il driver, che è possibile accedere dall'amministratore ODBC. I file della Guida vengono inseriti generalmente nelle directory WINDOWS\SYSTEM per Windows NT, Windows 3.1 o Windows 95.

#### <a name="to-obtain-online-help-for-your-odbc-driver"></a>Per ottenere la Guida in linea per il driver ODBC

1. Eseguire l'amministratore ODBC.

1. Fare clic su **Aggiungi**.

1. Selezionare il nome del driver.

1. Fare clic su **OK**.

Quando l'amministratore ODBC vengono visualizzate le informazioni per la creazione di una nuova origine dati per il driver selezionato, fare clic su **aiutare**. Ciò consente di aprire il file della Guida relativo al driver, che in genere sono contenute importanti informazioni relative all'uso del driver.

## <a name="see-also"></a>Vedere anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)
