---
title: "Origine dati: Configurazione a livello di codice di un'origine dati ODBC | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
f1_keywords:
- SQLConfigDataSource
dev_langs:
- C++
helpviewer_keywords:
- ODBC data sources, configuring
- SQLConfigDataSource method example
- ODBC connections, configuring
- configuring ODBC data sources
ms.assetid: b8cabe9b-9e12-4d73-ae36-7cb12dee3213
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e1f46ad566874d80b45593e7aecfeee2d5d88841
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33091972"
---
# <a name="data-source-programmatically-configuring-an-odbc-data-source"></a>Origine dati: configurazione di un'origine dati ODBC a livello di codice
In questo argomento viene illustrato come configurare i nomi di origine dati Open Database Connectivity (ODBC) a livello di codice. Questo offre flessibilità per accedere ai dati senza forzare l'utente da utilizzare in modo esplicito l'amministratore ODBC o in altri programmi per specificare i nomi delle origini dati.  
  
 In genere, un utente esegue l'amministratore ODBC per creare un'origine dati se il sistema di gestione di database associato (DBMS) supporta l'operazione.  
  
 Quando si crea un'origine dati ODBC di Microsoft Access tramite Amministratore ODBC, è possibile disponibili due opzioni: è possibile selezionare un file con estensione mdb esistente oppure è possibile creare un nuovo file con estensione mdb. Non è a livello di codice di creazione del file con estensione mdb dall'applicazione ODBC MFC. Pertanto, se l'applicazione richiede l'inserimento di dati in un'origine dati Microsoft Access (file con estensione mdb), è probabile che si desidera disporre di un file con estensione mdb vuoto che è possibile utilizzare o copiare ogni volta che è necessario.  
  
 Tuttavia, DBMS più consentono la creazione dell'origine dati a livello di codice. Alcune origini dati gestiscono una specifica di directory per i database. Vale a dire, una directory è l'origine dati e ogni tabella all'interno dell'origine dati viene archiviato in un file separato (nel caso di file dBASE, ogni tabella è un file con estensione dbf). I driver per altri database ODBC, ad esempio Microsoft Access e SQL Server, richiedono che vengano soddisfatti alcuni criteri specifici prima di poter stabilire un'origine dati. Ad esempio, quando si utilizza il driver ODBC di SQL Server, è necessario aver stabilito un computer SQL Server.  
  
##  <a name="_core_sqlconfigdatasource_example"></a> Esempio SQLConfigDataSource  
 L'esempio seguente usa il **:: SQLConfigDataSource** funzione API ODBC per creare una nuova origine dati di Excel denominato nuova origine dati di Excel:  
  
```  
SQLConfigDataSource(NULL,ODBC_ADD_DSN, "Excel Files (*.xls)",   
                   "DSN=New Excel Data Source\0"   
                   "Description=New Excel Data Source\0"   
                   "FileType=Excel\0"   
                   "DataDirectory=C:\\EXCELDIR\0"   
                   "MaxScanRows=20\0");  
```  
  
 Si noti che l'origine dati è in realtà una directory (C:\EXCELDIR); Questa directory deve esistere. Il driver per Excel utilizza directory come origini dati e i file come singole tabelle (in una tabella per ogni file con estensione xls).  
  
 Per ulteriori informazioni sulla creazione di tabelle, vedere [origine dati: creazione di una tabella in un'origine dati ODBC a livello di codice](../../data/odbc/data-source-programmatically-creating-a-table-in-an-odbc-data-source.md).  
  
 Le informazioni seguenti vengono descritti i parametri che devono essere passati al **:: SQLConfigDataSource** funzione API ODBC. Per utilizzare **:: SQLConfigDataSource**, è necessario includere il file di intestazione Odbcinst. h e utilizzare la libreria di importazione Odbcinst. Inoltre, deve essere Odbccp32 nel percorso in fase di esecuzione (o, per a 16 bit le applicazioni).  
  
 È possibile creare un nome di origine dati ODBC con Amministratore ODBC o un'utilità analoga. Tuttavia, talvolta è opportuno creare un nome origine dati direttamente dall'applicazione per ottenere l'accesso senza richiedere all'utente di eseguire un'utilità separata.  
  
 Amministratore ODBC (in genere installato nel Pannello di controllo) Crea una nuova origine dati mediante l'inserimento di voci del Registro di sistema (o, a 16 bit, nel file Odbc.ini). Gestione Driver ODBC esegue una query di questo file per ottenere le informazioni necessarie sull'origine dati. È importante sapere quali informazioni devono essere inseriti nel Registro di sistema poiché è necessario fornire la chiamata a **:: SQLConfigDataSource**.  
  
 Anche se è Impossibile scrivere queste informazioni direttamente il Registro di sistema senza utilizzare **:: SQLConfigDataSource**, qualsiasi applicazione che esegue questa operazione si basa sulla tecnica corrente utilizzato dalla gestione di Driver per mantenere i dati. Se una revisione recente di gestione Driver ODBC implementa i record delle informazioni sulle origini dati in modo diverso, qualsiasi applicazione che utilizza questa tecnica viene interrotta. È in genere consigliabile utilizzare una funzione API, se disponibile. Ad esempio, il codice può essere trasferito da 16 a 32 bit se si utilizza il **:: SQLConfigDataSource** funzione, in quanto la funzione esegue correttamente il file Odbc.ini o al Registro di sistema.  
  
##  <a name="_core_sqlconfigdatasource_parameters"></a> Parametri SQLConfigDataSource  
 Di seguito vengono descritti i parametri del **:: SQLConfigDataSource** (funzione). Molte delle informazioni da cui proviene l'API ODBC *di riferimento per programmatori* fornito con Visual C++ versione 1.5 e successive.  
  
###  <a name="_core_function_prototype"></a> Prototipo di funzione  
  
```  
BOOL SQLConfigDataSource(HWND hwndParent,UINT fRequest, LPCSTR lpszDriver, LPCSTR lpszAttributes);  
```  
  
### <a name="remarks"></a>Note  
  
####  <a name="_core_parameters_and_usage"></a> Utilizzo e parametri  
 *hwndParent*  
 La finestra specificata come proprietario di finestre di dialogo Gestione Driver ODBC o il driver ODBC crea per ottenere informazioni aggiuntive da parte dell'utente sulla nuova origine dati. Se il `lpszAttributes` parametro fornisce informazioni sufficienti, verrà visualizzata una finestra di dialogo. Il *hwndParent* parametro potrebbe essere **NULL**.  
  
 `lpszDriver`  
 Descrizione del driver. Si tratta del nome visualizzato agli utenti, anziché il nome del driver fisico (DLL).  
  
 `lpszAttributes`  
 Elenco di attributi nel formato "nome chiave = valore". Queste stringhe sono separate da caratteri di terminazione null con due terminatori null consecutivi alla fine dell'elenco. Questi attributi sono principalmente voci specifiche del driver predefinito, andare nel Registro di sistema per la nuova origine dati. Una chiave importante che non è indicata nel riferimento dell'API ODBC per questa funzione è "DSN" ("data source name"), che specifica il nome di una nuova origine dati. Il resto delle voci sono specifici del driver per la nuova origine dati. Non è spesso necessario fornire tutte le voci in quanto il driver può richiedere all'utente con finestre di dialogo per i nuovi valori. (Impostare *hwndParent* a **NULL** affinché questo.) Si potrebbe voler fornire in modo esplicito i valori predefiniti in modo che l'utente non è richiesto.  
  
###### <a name="to-determine-the-description-of-a-driver-for-the-lpszdriver-parameter-using-odbc-administrator"></a>Per determinare la descrizione di un driver per il parametro lpszDriver tramite Amministratore ODBC  
  
1.  Eseguire l'amministratore ODBC.  
  
2.  Fare clic su **Aggiungi**.  
  
 In questo modo un elenco di driver installati e delle relative descrizioni. Utilizzare questa descrizione come il `lpszDriver` parametro. Si noti che la descrizione completa, ad esempio "File di Excel (xls)", tra cui l'estensione di file e le parentesi se sono presenti nella descrizione.  
  
 In alternativa, è possibile esaminare il Registro di sistema (o, per il file Odbcinst.ini, a 16 bit), che contiene un elenco di tutte le voci di driver e le descrizioni nella chiave del Registro di sistema "Driver ODBC" (o la sezione [ODBC Driver] in Odbcinst.ini).  
  
 Un modo per trovare i nomi delle chiavi e valori per il `lpszAttributes` parametro consiste nell'esaminare il file Odbc.ini per un'origine dati già configurato (ad esempio uno che è stato configurato dall'amministratore ODBC).  
  
###### <a name="to-find-keynames-and-values-for-the-lpszattributes-parameter"></a>Per trovare i nomi delle chiavi e valori per il parametro lpszAttributes  
  
1.  Eseguire l'editor del Registro di sistema di Windows (oppure, per garantire a 16 bit, aprire il file Odbc.ini).  
  
2.  Trovare le informazioni di origini dati ODBC utilizzando uno dei valori seguenti:  
  
    -   32 bit, trovare la chiave **HKEY_CURRENT_USER\Software\ODBC\ODBC. Origini dati INI\ODBC** nel riquadro a sinistra.  
  
         Nel riquadro destro sono elencati le voci nel formato: "pub: REG_SZ:*<data source name>*", dove *<data source name>* è un'origine dati che è già stata configurata con le impostazioni desiderate per il driver da utilizzare. Selezionare l'origine dati desiderata, ad esempio, SQL Server. Gli elementi che seguono la stringa "pub:" sono, nell'ordine keyname e valore da utilizzare nel `lpszAttributes` parametro.  
  
    -   Per a 16 bit, individuare la sezione nel file Odbc.ini contrassegnati con [*\<nome dell'origine dati >*].  
  
         Le righe che seguono questa riga sono nel formato "nome chiave = valore". Si tratta esattamente le voci da utilizzare nel `lpszAttributes` parametro.  
  
 È anche possibile esaminare la documentazione per il driver che si intende utilizzare. È possibile trovare informazioni utili nella Guida in linea per il driver, che è possibile accedere dall'amministratore ODBC. I file della Guida vengono in genere posizionati nella directory WINDOWS\SYSTEM per Windows 95, Windows NT o Windows 3.1.  
  
###### <a name="to-obtain-online-help-for-your-odbc-driver"></a>Per ottenere la Guida in linea per il driver ODBC  
  
1.  Eseguire l'amministratore ODBC.  
  
2.  Fare clic su **Aggiungi**.  
  
3.  Selezionare il nome del driver.  
  
4.  Fare clic su **OK**.  
  
 Quando l'amministratore ODBC vengono visualizzate le informazioni per la creazione di una nuova origine dati per il driver selezionato, fare clic su **Guida**. Verrà aperto il file della Guida per il driver selezionato, che in genere contiene importanti informazioni sull'utilizzo del driver.  
  
## <a name="see-also"></a>Vedere anche  
 [Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)