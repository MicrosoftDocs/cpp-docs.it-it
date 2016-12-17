---
title: "TN055: migrazione di applicazioni classi di database ODBC MFC a classi DAO MFC | Microsoft Docs"
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
  - "vc.mfc.odbc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DAO [C++], migrazione"
  - "migrazione di applicazioni di database"
  - "migrazione di applicazioni di database ODBC"
  - "migrazione [C++], applicazioni di database ODBC"
  - "ODBC [C++], DAO"
  - "classi ODBC [C++], classi DAO"
  - "porting di applicazioni di database a DAO"
  - "porting di applicazioni di database ODBC a DAO"
  - "TN055"
ms.assetid: 0f858bd1-e168-4e2e-bcd1-8debd82856e4
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN055: migrazione di applicazioni classi di database ODBC MFC a classi DAO MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  A partire da Visual C\+\+ .NET, l'ambiente e le procedure guidate di Visual C\+\+ non supportano più DAO, anche se le classi DAO sono incluse e possono essere comunque utilizzate.  Si consiglia di utilizzare i [Modelli OLE DB](../data/oledb/ole-db-templates.md) oppure [ODBC e MFC](../data/odbc/odbc-and-mfc.md) per i nuovi progetti.  di utilizzare DAO solo per la gestione delle applicazioni già esistenti.  
  
 **Panoramica**  
  
 In molte situazioni potrebbe risultare utile eseguire una migrazione delle applicazioni che utilizzano le classi di database ODBC MFC alle classi di database DAO MFC.  Questa nota tecnica illustrerà in dettaglio la maggior parte delle differenze tra le classi ODBC MFC e DAO MFC.  Conoscendo queste differenze, la migrazione delle applicazioni dalle classi ODBC alle classi MFC non dovrebbe risultare eccessivamente difficile.  
  
 **Perché eseguire la migrazione da ODBC a DAO?**  
  
 Esistono numerosi motivi per cui si potrebbe desiderare una migrazione delle applicazioni dalle classi di database ODBC alle classi di database DAO, ma la decisione non è necessariamente semplice o ovvia.  È necessario tenere presente che il motore di database Microsoft Jet utilizzato da DAO è in grado di leggere qualsiasi origine dati ODBC per la quale sia disponibile un driver ODBC.  Potrebbe essere più efficiente utilizzare le classi di database ODBC o chiamare direttamente ODBC, ma il motore di database Microsoft Jet è in grado di leggere i dati ODBC.  
  
 Alcuni casi semplici facilitano la decisione ODBC\/DAO.  Ad esempio, quando si ha la necessità di accedere ai dati in un formato che può essere letto direttamente dal motore di Microsoft Jet \(formato Access, formato Excel e così via\) la scelta ovvia è quella di usare le classi di database DAO.  
  
 I casi più complessi si verificano quando i dati sono già presenti su un server o quando sono presenti in una gamma di server diversi.  In questo caso, la decisione di utilizzare le classi di database ODBC o le classi di database DAO è difficile.  Se si desidera eseguire operazioni come join eterogenei \(join di dati provenienti da diversi server in più formati come SQL Server e Oracle\), allora il motore di database Microsoft Jet eseguirà il join automaticamente senza richiedere l'esecuzione del lavoro necessario nel caso in cui si utilizzino le classi di database ODBC o in caso di chiamate dirette a ODBC.  Se si utilizza un driver ODBC che supporta i cursori del driver, la scelta migliore potrebbe essere quella di utilizzare le classi di database ODBC.  
  
 La scelta può essere complicata, pertanto si consiglia di scrivere un codice di esempio per verificare che le prestazioni dei vari metodi soddisfino le proprie esigenze.  Questa nota tecnica presuppone che l'utente abbia deciso di effettuare la migrazione da classi di database ODBC alle classi di database DAO.  
  
 **Analogie tra le classi di database ODBC e le classi di database DAO MFC**  
  
 La progettazione originale delle classi ODBC MFC è basata sul modello a oggetti DAO utilizzato in Microsoft Access e in Microsoft Visual Basic.  Questo significa che sono disponibili molte funzionalità comuni per le classi ODBC MFC e DAO MFC, che non verranno elencate tutte in questa sezione.  I modelli di programmazione sono generalmente gli stessi.  
  
 Per evidenziare alcune somiglianze:  
  
-   Sia le classi ODBC che DAO presentano oggetti di database che utilizzano il sistema di gestione di database sottostante \(DBMS\).  
  
-   Entrambe dispongono di oggetti recordset che rappresentano un set di risultati restituito dal DBMS.  
  
-   Il database DAO e gli oggetti recordset dispongono di membri quasi identici alle classi ODBC.  
  
-   Con entrambi i set di classi, il codice per recuperare i dati è identico tranne per alcune modifiche ai nomi di oggetti e membri.  Le modifiche saranno necessarie, ma in genere il processo è una semplice ridenominazione quando si passa dalle classi ODBC alle classi DAO.  
  
 Ad esempio, in entrambi i modelli la procedura per recuperare i dati consiste nel creare e aprire un oggetto di database, creare e aprire un oggetto recordset e spostarsi \(muoversi\) attraverso i dati realizzando qualche operazione.  
  
 **Differenze tra le classi ODBC MFC e DAO MFC**  
  
 Le classi DAO includono più oggetti e un set più ricco di metodi, ma in questa sezione si mostreranno in dettaglio solo le differenze nelle classi e funzionalità simili.  
  
 Probabilmente la maggior parte delle differenze più ovvie tra le classi consiste nelle modifiche ai nomi per le classi e le funzioni globali simili.  Di seguito vengono elencate le modifiche ai nomi degli oggetti, dei metodi e delle funzioni globali associati alle classi di database:  
  
|Classe o funzione|Equivalente nelle classi DAO MFC|  
|-----------------------|--------------------------------------|  
|`CDatabase`|`CDaoDatabase`|  
|`CDatabase::ExecuteSQL`|`CDaoDatabase::Execute`|  
|`CRecordset`|`CDaoRecordset`|  
|`CRecordset::GetDefaultConnect`|`CDaoRecordset::GetDefaultDBName`|  
|`CFieldExchange`|`CDaoFieldExchange`|  
|`RFX_Bool`|`DFX_Bool`|  
|`RFX_Byte`|`DFX_Byte`|  
|`RFX_Int`|`DFX_Short`|  
|`RFX_Long`|`DFX_Long`|  
||`DFX_Currency`|  
|`RFX_Single`|`DFX_Single`|  
|`RFX_Double`|`DFX_Double`|  
|**RFX\_Date \***|**DFX\_Date** \(`COleDateTime`\-based\)|  
|`RFX_Text`|`DFX_Text`|  
|`RFX_Binary`|`DFX_Binary`|  
|`RFX_LongBinary`|`DFX_LongBinary`|  
  
 \*    La funzione `RFX_Date` è basata su `CTime` e su **TIMESTAMP\_STRUCT**.  
  
 Le modifiche essenziali alle funzionalità che possono influenzare l'applicazione e che richiedono più di una semplice ridenominazione vengono elencate di seguito.  
  
-   Le costanti e le macro utilizzate per specificare informazioni quali il tipo aperto del recordset e le opzioni di apertura del recordset sono state modificate.  
  
     Con le classi ODBC, MFC deve definire queste opzioni tramite macro o tipi enumerati.  
  
     Con le classi DAO, DAO fornisce la definizione di queste opzioni in un file di intestazione \(DBDAOINT.H\).  Pertanto il tipo del recordset è un membro enumerato di `CRecordset`, ma con DAO è una costante.  Ad esempio si utilizza **snapshot** quando si specifica il tipo `CRecordset` in ODBC ma **DB\_OPEN\_SNAPSHOT** quando si specifica il tipo `CDaoRecordset`.  
  
-   Il tipo predefinito del recordset per `CRecordset` è **snapshot** mentre il tipo predefinito del recordset per `CDaoRecordset` è **dynaset** \(vedere la nota riportata di seguito per un problema aggiuntivo sugli snapshot della classe ODBC\).  
  
-   La classe ODBC `CRecordset` include un'opzione per creare un recordset di tipo forward\-only.  Nella classe `CDaoRecordset`, forward\-only non è un tipo di recordset, ma una proprietà \(o un opzione\) di determinati tipi di recordset.  
  
-   Un recordset append\-only durante l'apertura di un oggetto `CRecordset` indica che i dati del recordset possono essere letti e aggiunti.  Con l'oggetto `CDaoRecordset`, l'opzione append\-only significa letteralmente che i dati del recordset possono essere solo aggiunti \(e non letti\).  
  
-   Le funzioni membro della transazione delle classi ODBC sono membri di `CDatabase` e operano a livello di database.  Nelle classi DAO, le funzioni membro delle transazioni sono membri di una classe di livello superiore \(`CDaoWorkspace`\) e pertanto possono influire su più oggetti `CDaoDatabase` che condividono la stessa area di lavoro \(spazio di transazione\).  
  
-   La classe dell'eccezione è stata modificata.  **CDBExceptions** viene generata nelle classi ODBC e **CDaoExceptions** nelle classi DAO.  
  
-   `RFX_Date` utilizza gli oggetti `CTime` e **TIMESTAMP\_STRUCT** mentre **DFX\_Date** utilizza `COleDateTime`.  `COleDateTime` è pressoché identica a `CTime`, ma è basata su **DATA** di OLE a 8 byte anziché su `time_t` a 4 byte pertanto può contenere un intervallo di dati più grande.  
  
    > [!NOTE]
    >  Gli snapshot di DAO \(`CDaoRecordset`\) sono di sola lettura mentre gli snapshot di ODBC \(`CRecordset`\) possono essere aggiornati in base al driver e all'utilizzo della libreria di cursori ODBC.  Se si utilizza la libreria di cursori, gli snapshot `CRecordset` sono aggiornabili.  Se si utilizza uno dei driver di Microsoft dal Desktop Driver Pack 3.0 senza la libreria di cursori ODBC, gli snapshot `CRecordset` sono di sola lettura.  Se si utilizza un altro driver, consultare la documentazione del driver per verificare se gli snapshot \(**STATIC\_CURSORS**\) sono di sola lettura.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)