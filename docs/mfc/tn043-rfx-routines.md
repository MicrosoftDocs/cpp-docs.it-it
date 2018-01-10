---
title: 'TN043: Routine RFX | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: RFX
dev_langs: C++
helpviewer_keywords:
- RFX (record field exchange), architecture
- TN043
- RFX (record field exchange)
ms.assetid: f552d0c1-2c83-4389-b472-42c9940aa713
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 19bb44653c03505d954318a01a6e34c1a297dba7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn043-rfx-routines"></a>TN043: routine RFX
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descrive l'architettura di campi di record (RFX) di exchange. Viene inoltre descritto come scrivere un **RFX_** procedura.  
  
## <a name="overview-of-record-field-exchange"></a>Panoramica dei campi di record  
 Tutte le funzioni di campo recordset vengono eseguite con il codice C++. Non esistono risorse speciali o magiche macro. Il cuore del meccanismo è una funzione virtuale che deve essere sottoposto a override in ogni classe derivata recordset. Si è sempre presente in questo formato:  
  
```  
void CMySet::DoFieldExchange(CFieldExchange* pFX)  
{ *//{{AFX_FIELD_MAP(CMySet)  
 <recordset exchange field type call>  
 <recordset exchange function call> *//}}AFX_FIELD_MAP  
}  
```  
  
 I commenti AFX formato speciale consentono ClassWizard individuare e modificare il codice all'interno di questa funzione. Codice che non è compatibile con la creazione guidata classe deve essere posizionato all'esterno di commenti di formato speciale.  
  
 Nell'esempio precedente, < recordset_exchange_field_type_call > è nel formato:  
  
```  
pFX->SetFieldType(CFieldExchange::outputColumn);
```  
  
 e < recordset_exchange_function_call > è nel formato:  
  
```  
RFX_Custom(pFX, "Col2",
    m_Col2);
```  
  
 La maggior parte delle **RFX_** funzioni dispongono di tre argomenti, come illustrato in precedenza, ma alcuni (ad esempio `RFX_Text` e `RFX_Binary`) dispongono di argomenti facoltativi aggiuntivi.  
  
 Più **RFX_** possono essere inclusi in ogni `DoDataExchange` (funzione).  
  
 Vedere 'AFXDB. h' per un elenco di tutti i recordset routine field exchange disponibili in MFC.  
  
 Le chiamate di campo recordset sono un modo di registrazione di posizioni di memoria (in genere membri di dati) per archiviare i dati di campo per un **CMySet** classe.  
  
## <a name="notes"></a>Note  
 Funzioni di campi di recordset sono progettate per funzionare solo con il `CRecordset` classi. Non sono in genere utilizzate dalle altre classi MFC.  
  
 I valori iniziali di dati vengono impostati nel costruttore standard di C++, in genere in un blocco con `//{{AFX_FIELD_INIT(CMylSet)` e `//}}AFX_FIELD_INIT` commenti.  
  
 Ogni **RFX_** funzione deve supportare varie operazioni, che vanno da restituire lo stato modificato del campo per campo in preparazione per la modifica del campo di archiviazione.  
  
 Ogni funzione che chiama `DoFieldExchange` (ad esempio `SetFieldNull`, `IsFieldDirty`), inizializzazione nella chiamata alla `DoFieldExchange`.  
  
## <a name="how-does-it-work"></a>Come funziona  
 Non è necessario conoscere le informazioni seguenti per utilizzare i campi di record. Tuttavia, comprendere a fondo il funzionamento dietro le quinte verrà è scrivere la propria procedura di exchange.  
  
 Il `DoFieldExchange` funzione membro è molto simile di `Serialize` funzione membro, è responsabile per ottenere o impostare i dati da e verso un modulo esterno (in questo caso colonne dal risultato di una query ODBC) da/verso i dati dei membri nella classe. Il `pFX` parametro è il contesto per eseguire l'operazione di scambio di dati ed è simile al `CArchive` parametro `CObject::Serialize`. Il `pFX` (un `CFieldExchange` oggetto) è un indicatore di operazione, è simile, ma una generalizzazione del `CArchive` flag di direzione. Una funzione RFX potrebbe avere supportare le operazioni seguenti:  
  
- **BindParam** : indica che in ODBC deve recuperare i dati dei parametri  
  
- **BindFieldToColumn** : indicare dove ODBC deve recuperare/deposito outputColumn dati  
  
- **Correzione** , impostare **CString/CByteArray** lunghezze, impostare lo stato NULL di tipo bit  
  
- **MarkForAddNew** -contrassegno dirty valore è stato modificato dopo chiamare AddNew  
  
- **MarkForUpdate** -contrassegno dirty se il valore è stato modificato dopo la chiamata Modifica  
  
- **Nome** , aggiungere i nomi dei campi per i campi contrassegnati come modificati  
  
- **NameValue** : Append "\<nome colonna > =" per i campi contrassegnati come modificati  
  
- **Valore** : Append "" seguita dal separatore, ad esempio ',' o ' '  
  
- `SetFieldDirty`-Consente campo (ad esempio modificato) dirty bit di impostare lo stato  
  
- `SetFieldNull`-Consente di impostare il bit di stato che indica un valore null per il campo  
  
- `IsFieldDirty`: Valore del bit dirty stato restituito  
  
- `IsFieldNull`: Valore del bit di stato null restituito  
  
- `IsFieldNullable`: Restituisce TRUE se il campo può contenere valori NULL  
  
- **StoreField** , archiviare il valore di campo  
  
- **LoadField** : Ricarica archiviato il valore di campo  
  
- **GetFieldInfoValue** , restituire le informazioni generali su un campo  
  
- **GetFieldInfoOrdinal** , restituire le informazioni generali su un campo  
  
## <a name="user-extensions"></a>Estensioni per utente  
 Esistono diversi modi per estendere il meccanismo RFX predefinito. È possibile  
  
-   Aggiungere nuovi tipi di dati. Ad esempio:  
  
 ```  
    CBookmark 
 ```  
  
-   Aggiungere nuove procedure exchange (RFX_).  
  
 ```  
    void AFXAPI RFX_Bigint(CFieldExchange* pFX,
    const char *szName,  
    BIGINT& value);

 ```  
  
-   Dispone il `DoFieldExchange` funzione membro includono in modo condizionale aggiuntive RFX o tutte le altre istruzioni di C++ validi.  
  
 ```  
    while (posExtraFields != NULL)  
 {  
    RFX_Text(pFX,
    m_listName.GetNext(posExtraFields),   
    m_listValue.GetNext(posExtraValues));

 }  
 ```  
  
> [!NOTE]
>  Tale codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno di commenti formato speciale.  
  
## <a name="writing-a-custom-rfx"></a>Scrittura di un RFX personalizzato  
 Per scrivere la propria funzione RFX personalizzato, si consiglia di copiare una funzione RFX esistente e modificarlo con le proprie esigenze. Selezione di RFX destra per copiare può facilitare il processo. Alcune funzioni RFX dispongono alcune proprietà univoco che è necessario prendere in considerazione quando si decide di cui eseguire la copia.  
  
 **RFX_Long e RFX_Int**:  
 Si tratta delle funzioni RFX più semplice. Il valore di dati non richiede alcuna interpretazione speciale, e le dimensioni dei dati sono fissa.  
  
 **RFX_Single e RFX_Double**:  
 RFX_Long e RFX_Int precedenti, queste funzioni sono semplici e consentono di utilizzare in modo esteso dell'implementazione predefinita. Vengono memorizzati nella dbflt.cpp anziché dbrfx.cpp, tuttavia, per consentire il caricamento del runtime di libreria in virgola mobile solo quando sono esplicitamente riferimento.  
  
 **RFX_Text e RFX_Binary**:  
 Queste due funzioni preallocare un buffer statico per contenere le informazioni di stringa o binario e devono registrare questi buffer con ODBC SQLBindCol anziché registrazione & valore. Per questo motivo, queste due funzioni hanno un numero elevato di codice speciale.  
  
 `RFX_Date`:  
 ODBC restituisce informazioni di data e ora la propria struttura di dati TIMESTAMP_STRUCT. Questa funzione alloca dinamicamente una TIMESTAMP_STRUCT come "proxy" per l'invio e ricezione di dati di ora di inizio. Diverse operazioni è necessario trasferire le informazioni di data e ora tra C++ `CTime` oggetto e il proxy TIMESTAMP_STRUCT. Ciò complica notevolmente questa funzione, ma è un buon esempio di come usare un proxy per il trasferimento dei dati.  
  
 `RFX_LongBinary`:  
 Questa è la libreria di classi solo alle funzioni RFX che non utilizzano l'associazione di colonna per ricevere e inviare dati. Questa funzione ignora l'operazione BindFieldToColumn invece durante l'operazione di correzione, alloca spazio di archiviazione per contenere i dati in ingresso SQL_LONGVARCHAR o SQL_LONGVARBINARY, quindi esegue una chiamata di SQLGetData per recuperare il valore nell'archiviazione allocata. Quando si prepara a inviare nuovamente i valori dei dati all'origine dati (ad esempio, le operazioni di nome e valore), questa funzione utilizza le funzionalità DATA_AT_EXEC di ODBC. Vedere [Nota tecnica 45](../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md) per ulteriori informazioni sull'utilizzo di SQL_LONGVARBINARY e SQL_LONGVARCHARs.  
  
 Quando si scrive la propria **RFX_** funzione, spesso sarà in grado di utilizzare **CFieldExchange::Default** per implementare un'operazione specificata. Esaminare l'implementazione del valore predefinito per l'operazione in questione. Se esegue l'operazione sarebbe necessario scrivere **RFX_** funzione a cui è possibile delegare il **CFieldExchange::Default.** È possibile visualizzare esempi di chiamata **CFieldExchange::Default** in dbrfx.cpp  
  
 È importante chiamare `IsFieldType` all'inizio della funzione RFX e restituito immediatamente se restituisce FALSE. Questo meccanismo consente di mantenere le operazioni di parametro da cui viene eseguita su **outputColumns**e viceversa (simile alla chiamata **BindParam** su un **outputColumn**). Inoltre, `IsFieldType` automaticamente tiene traccia del numero di **outputColumns** (`m_nFields`) con parametri (`m_nParams`).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

