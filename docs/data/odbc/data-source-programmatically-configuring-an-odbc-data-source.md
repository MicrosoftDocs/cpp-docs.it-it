---
title: "Origine dati: configurazione di un&#39;origine dati ODBC a livello di codice | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SQLConfigDataSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "configurazione di origini dati ODBC"
  - "ODBC (connessioni), configurazione"
  - "ODBC (origini dati), configurazione"
  - "SQLConfigDataSource (esempio di metodo)"
ms.assetid: b8cabe9b-9e12-4d73-ae36-7cb12dee3213
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Origine dati: configurazione di un&#39;origine dati ODBC a livello di codice
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrata la configurazione dei nomi delle origini dati ODBC \(Open Database Connectivity\) a livello di codice.  Questa operazione consente di garantire l'accesso ai dati senza obbligare l'utente finale a utilizzare in modo esplicito l'Amministratore ODBC o altri programmi per specificare i nomi delle origini dati.  
  
 In genere, un utente esegue l'Amministratore ODBC per creare un'origine dati, se il sistema di gestione di database \(DBMS\) associato supporta questa operazione.  
  
 Quando si crea un'origine dati ODBC di Microsoft Access mediante l'Amministratore ODBC, è possibile selezionare un file con estensione mdb esistente oppure crearne uno nuovo.  Non esiste un metodo di creazione del file mdb dall'applicazione ODBC MFC a livello di codice.  Pertanto, se l'applicazione richiede l'inserimento di dati in un'origine dati di Microsoft Access \(file mdb\), si consiglia in genere di utilizzare un file con estensione mdb vuoto da copiare quando necessario.  
  
 La maggior parte dei DBMS consente tuttavia la creazione dell'origine dati a livello di codice.  Alcune origini dati gestiscono una specifica di directory per i database.  Una directory rappresenta cioè l'origine dati e ciascuna tabella all'interno dell'origine dati è memorizzata in un file distinto \(nel caso di dBASE o FoxPro, ogni tabella è un file dbf\).  I driver per gli altri database ODBC, quali Microsoft Access e SQL Server, richiedono che vengano soddisfatti alcuni criteri specifici prima di impostare un'origine dati.  Quando si utilizza ad esempio il driver ODBC per SQL Server, è necessario avere impostato in precedenza un server SQL.  
  
##  <a name="_core_sqlconfigdatasource_example"></a> Esempio di SQLConfigDataSource  
 Nell'esempio riportato di seguito viene utilizzata la funzione API ODBC **::SQLConfigDataSource** per creare una nuova origine dati di Microsoft Excel denominata New Excel Data Source.  
  
```  
SQLConfigDataSource(NULL,ODBC_ADD_DSN, "Excel Files (*.xls)",   
                   "DSN=New Excel Data Source\0"   
                   "Description=New Excel Data Source\0"   
                   "FileType=Excel\0"   
                   "DataDirectory=C:\\EXCELDIR\0"   
                   "MaxScanRows=20\0");  
```  
  
 Si noti che l'origine dati è in effetti una directory esistente \(C:\\EXCELDIR\).  Il driver per Microsoft Excel utilizza le directory come origini dati e i file come singole tabelle \(una tabella per ciascun file con estensione xls\).  
  
 Per ulteriori informazioni sulla creazione di tabelle, vedere [Origine dati: creazione di una tabella in un'origine dati ODBC a livello di codice](../../data/odbc/data-source-programmatically-creating-a-table-in-an-odbc-data-source.md).  
  
 Di seguito sono riportate informazioni sui parametri da passare alla funzione API ODBC **::SQLConfigDataSource**.  Per utilizzare **::SQLConfigDataSource**, è necessario includere il file di intestazione Odbcinst.h e utilizzare la libreria di importazione Odbcinst.lib.  È necessario inoltre che nel percorso di esecuzione sia presente Odbccp32.dll o, per le applicazioni a 16 bit, Odbcinst.dll.  
  
 È possibile creare il nome di un'origine dati ODBC mediante l'Amministratore ODBC o un'utilità analoga.  Talvolta, tuttavia, è preferibile creare il nome di un'origine dati direttamente dall'applicazione, in modo da ottenere l'accesso senza che l'utente finale debba eseguire un'utilità distinta.  
  
 L'Amministratore ODBC, disponibile in genere dal Pannello di controllo, crea una nuova origine dati inserendo delle voci nel Registro di sistema di Windows o nel file Odbc.ini, per le applicazioni a 16 bit.  Gestione driver ODBC esegue una ricerca in questo file per ottenere le informazioni necessarie sull'origine dati.  È importante conoscere il tipo di informazioni da inserire nel Registro di sistema, in quanto è necessario fornire tali informazioni con la chiamata a **::SQLConfigDataSource**.  
  
 Anche se è possibile scrivere queste informazioni direttamente nel Registro di sistema senza utilizzare **::SQLConfigDataSource**, qualsiasi applicazione che esegue questa operazione si basa sulla tecnica corrente utilizzata in Gestione driver per mantenere i dati.  Se, in una revisione successiva, Gestione driver ODBC implementa i record delle informazioni sulle origini dati in modo diverso, le applicazioni che utilizzano questa tecnica non funzionano.  È in genere consigliabile utilizzare una funzione API, se disponibile.  Se si utilizza, ad esempio, la funzione **::SQLConfigDataSource**, è possibile convertire il codice da 16 a 32 bit, in quanto la funzione esegue correttamente l'operazione di scrittura nel file Odbc.ini o nel Registro di sistema.  
  
##  <a name="_core_sqlconfigdatasource_parameters"></a> Parametri di SQLConfigDataSource  
 Di seguito è riportata una descrizione dei parametri della funzione **::SQLConfigDataSource**.  La maggior parte delle informazioni è tratta da ODBC API *Programmer's Reference*, disponibile con Visual C\+\+ versione 1.5 e successive.  
  
###  <a name="_core_function_prototype"></a> Prototipo di funzione  
  
```  
BOOL SQLConfigDataSource(HWND hwndParent,UINT fRequest, LPCSTR lpszDriver, LPCSTR lpszAttributes);  
```  
  
### Osservazioni  
  
####  <a name="_core_parameters_and_usage"></a> Parametri e utilizzo  
 *hwndParent*  
 Finestra specificata come proprietaria di tutte le finestre di dialogo create in Gestione driver ODBC o dal driver ODBC specifico per recuperare informazioni aggiuntive sulla nuova origine dati.  Se il parametro `lpszAttributes` non fornisce informazioni sufficienti, viene visualizzata una finestra di dialogo.  Il parametro *hwndParent* può essere **NULL**.  
  
 `lpszDriver`  
 Descrizione del driver.  Si tratta del nome visualizzato agli utenti anziché del nome del driver fisico, ovvero della DLL.  
  
 `lpszAttributes`  
 Elenco di attributi nel formato "nome chiave\=valore".  Queste stringhe sono separate da terminatori null, con due terminatori null consecutivi alla fine dell'elenco.  Questi attributi sono principalmente voci specifiche del driver predefinite, inserite nel Registro di sistema per la nuova origine dati.  Una chiave importante non menzionata nel riferimento alle funzioni dell'API ODBC per questa funzione è DSN \(Data Source Name\), che specifica il nome della nuova origine dati.  Le voci rimanenti sono specifiche del driver per la nuova origine dati.  Spesso non è necessario fornire tutte le voci, in quanto è possibile che il driver visualizzi finestre di dialogo in cui l'utente deve inserire i nuovi valori. Per creare questa condizione, impostare *hwndParent* su **NULL**. Per evitare la visualizzazione di tali finestre, si consiglia di fornire in modo esplicito i valori predefiniti.  
  
###### Per determinare la descrizione di un driver per il parametro lpszDriver mediante l'Amministratore ODBC  
  
1.  Eseguire l'Amministratore ODBC.  
  
2.  Scegliere **Aggiungi**.  
  
 Verrà visualizzato un elenco dei driver installati con le relative descrizioni.  Utilizzare questa descrizione come parametro `lpszDriver`.  Utilizzare l'intera descrizione, come ad esempio Excel Files \(\*.xls\), comprese l'estensione del file e le parentesi, se presenti nella descrizione.  
  
 In alternativa, è possibile esaminare il Registro di sistema o, per le applicazioni a 16 bit, il file Odbcinst.ini. L'elenco di tutte le voci e le descrizioni dei driver è disponibile nella chiave ODBC Drivers del Registro di sistema o nella sezione \[ODBC Drivers\] del file Odbcinst.ini.  
  
 Per trovare i nomi delle chiavi e i valori per il parametro `lpszAttributes`, è possibile esaminare il file Odbc.ini per un'origine dati già configurata, ad esempio un'origine dati configurata dall'Amministratore ODBC.  
  
###### Per trovare i nomi delle chiavi e i valori per il parametro lpszAttributes  
  
1.  Eseguire l'editor del Registro di sistema di Windows o aprire il file Odbc.ini, per le applicazioni a 16 bit.  
  
2.  Individuare le informazioni sulle origini dati ODBC effettuando una delle operazioni riportate di seguito.  
  
    -   Per le applicazioni a 32 bit, trovare la chiave **HKEY\_CURRENT\_USER\\Software\\ODBC\\ODBC.INI\\ODBC Data Sources** nel riquadro di sinistra.  
  
         Nel riquadro destro sono elencate voci nel formato: "pub: REG\_SZ:*\<data source name\>*", dove *\<data source name\>* rappresenta l'origine dati già configurata con le impostazioni desiderate per il driver da utilizzare.  Selezionare l'origine dati desiderata, ad esempio SQL Server.  Gli elementi successivi alla stringa "pub:" sono, rispettivamente, il nome della chiave e il valore da utilizzare nel parametro `lpszAttributes`.  
  
    -   Per le applicazioni a 16 bit, individuare la sezione \[*\<data source name\>*\].  
  
         Le righe che seguono il titolo della sezione avranno il formato "nome chiave\=valore".  Queste sono esattamente le voci da utilizzare nel parametro `lpszAttributes`.  
  
 Potrebbe inoltre essere utile esaminare la documentazione relativa al driver specifico.  È possibile recuperare informazioni utili nella Guida del driver, a cui è possibile accedere dall'Amministratore ODBC.  I file della Guida si trovano in genere nella directory WINDOWS\\SYSTEM per Windows NT, Windows 3.1 o Windows 95.  
  
###### Per visualizzare la Guida per il driver ODBC  
  
1.  Eseguire l'Amministratore ODBC.  
  
2.  Scegliere **Aggiungi**.  
  
3.  Selezionare il nome del driver.  
  
4.  Scegliere **OK**.  
  
 Quando nell'Amministratore ODBC vengono visualizzate le informazioni per la creazione di una nuova origine dati per il driver selezionato, fare clic su **Guida**.  Verrà visualizzato il file della Guida relativo al driver, che contiene in genere informazioni importanti sull'utilizzo del driver stesso.  
  
## Vedere anche  
 [Origine dati \(ODBC\)](../../data/odbc/data-source-odbc.md)