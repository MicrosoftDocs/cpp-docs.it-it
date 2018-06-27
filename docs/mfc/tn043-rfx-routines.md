---
title: 'TN043: Routine RFX | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- RFX
dev_langs:
- C++
helpviewer_keywords:
- RFX (record field exchange), architecture
- TN043
- RFX (record field exchange)
ms.assetid: f552d0c1-2c83-4389-b472-42c9940aa713
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bc6556cabaa8f1f04a2a53771b495233620e1a14
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954409"
---
# <a name="tn043-rfx-routines"></a>TN043: routine RFX
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota descrive l'architettura di campi di record (RFX) di exchange. Viene inoltre descritto come scrivere un' **RFX_** stored procedure.  
  
## <a name="overview-of-record-field-exchange"></a>Panoramica dei campi di record  
 Tutte le funzioni di campo recordset vengono eseguite con il codice C++. Non sono presenti risorse speciali o magiche macro. Il cuore del meccanismo di è una funzione virtuale che deve essere sottoposto a override in ogni classe derivata recordset. Viene sempre trovato in questo formato:  
  
```  
void CMySet::DoFieldExchange(CFieldExchange* pFX)  
{ *//{{AFX_FIELD_MAP(CMySet)  
 <recordset exchange field type call>  
 <recordset exchange function call> *//}}AFX_FIELD_MAP  
}  
```  
  
 I commenti AFX formato speciale consentono ClassWizard individuare e modificare il codice all'interno di questa funzione. Codice che non è compatibile con ClassWizard deve essere posizionato all'esterno di commenti formato speciale.  
  
 Nell'esempio precedente, < recordset_exchange_field_type_call > è nel formato:  
  
```  
pFX->SetFieldType(CFieldExchange::outputColumn);
```  
  
 e < recordset_exchange_function_call > è nel formato:  
  
```  
RFX_Custom(pFX, "Col2",
    m_Col2);
```  
  
 La maggior parte degli **RFX_** funzioni dispongono di tre argomenti, come illustrato in precedenza, ma alcuni (ad esempio `RFX_Text` e `RFX_Binary`) dispongono di argomenti aggiuntivi facoltativi.  
  
 Più di un **RFX_** possono essere inclusi in ogni `DoDataExchange` (funzione).  
  
 Vedere 'AFXDB. h' per un elenco di tutti i recordset routine field exchange disponibili in MFC.  
  
 Chiamate di campo recordset sono un modo di registrazione di posizioni di memoria (in genere membri di dati) per archiviare i dati di campo per un `CMySet` classe.  
  
## <a name="notes"></a>Note  
 Funzioni di campi di recordset sono progettate per funzionare solo con il `CRecordset` classi. Non sono in genere utilizzate dalle altre classi MFC.  
  
 I valori iniziali dei dati sono impostati nel costruttore standard di C++, in genere in un blocco con `//{{AFX_FIELD_INIT(CMylSet)` e `//}}AFX_FIELD_INIT` commenti.  
  
 Ogni **RFX_** funzione deve supportare varie operazioni, comprese tra restituendo lo stato modificato del campo per il campo in preparazione per la modifica del campo di archiviazione.  
  
 Ogni funzione che chiama `DoFieldExchange` (ad esempio `SetFieldNull`, `IsFieldDirty`), esegue il proprio inizializzazione nella chiamata alla `DoFieldExchange`.  
  
## <a name="how-does-it-work"></a>Come funziona  
 Non è necessario conoscere le informazioni seguenti per poter utilizzare i campi di record. Tuttavia, comprendere a fondo il funzionamento dietro le quinte verrà è scrivere la propria procedura di exchange.  
  
 Il `DoFieldExchange` funzione membro è molto simile di `Serialize` funzione membro, ovvero ed è responsabile per ottenere o impostare i dati da e verso un modulo esterno (in questo caso le colonne dal risultato di una query ODBC) da/verso i dati dei membri nella classe. Il *pFX* parametro è il contesto per eseguire lo scambio di dati ed è simile al *CArchive* parametro `CObject::Serialize`. Il *pFX* (un `CFieldExchange` oggetto) dispone di un indicatore di operazione, è simile, ma una generalizzazione del *CArchive* flag di direzione. Una funzione RFX potrebbe avere supportare le operazioni seguenti:  
  
- `BindParam` Ovvero indicare dove ODBC deve recuperare i dati dei parametri  
  
- `BindFieldToColumn` -Indicare dove ODBC deve recuperare/deposito outputColumn dati  
  
- `Fixup` : Impostare `CString/CByteArray` lunghezze, impostare lo stato NULL di tipo bit  
  
- `MarkForAddNew` Ovvero contrassegnare dirty valore è stato modificato dopo chiamare AddNew  
  
- `MarkForUpdate` Ovvero contrassegnare dirty valore è stato modificato dopo chiamare modifica  
  
- `Name` : Aggiungere i nomi dei campi per i campi contrassegnati come modificati  
  
- `NameValue` -Aggiungere "\<nome colonna > =" per i campi contrassegnati come modificati  
  
- `Value` -Aggiungere "" seguita dal separatore, ad esempio ',' o ' '  
  
- `SetFieldDirty` -Consente campo (ad esempio modificato) dirty bit di impostare lo stato  
  
- `SetFieldNull` -Consente di impostare il bit di stato che indica un valore null per il campo  
  
- `IsFieldDirty` : Valore del bit dirty stato restituito  
  
- `IsFieldNull` : Valore del bit di stato null restituito  
  
- `IsFieldNullable` : Restituisce TRUE se il campo può contenere valori NULL  
  
- `StoreField` Ovvero valore del campo archive  
  
- `LoadField` : Valore del campo archiviati ricaricare  
  
- `GetFieldInfoValue` : Restituisce le informazioni generali su un campo  
  
- `GetFieldInfoOrdinal` : Restituisce le informazioni generali su un campo  
  
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
  
-   Dispone il `DoFieldExchange` funzione membro includono in modo condizionale aggiuntive RFX o tutte le altre istruzioni C++ validi.  
  
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
 Per scrivere la propria funzione RFX personalizzato, si consiglia di copiare una funzione RFX esistente e modificarlo con le proprie esigenze. Selezione di RFX a destra per copiare può facilitare il processo. Alcune delle funzioni RFX hanno alcune proprietà univoci da prendere in considerazione quando si decide di cui eseguire la copia.  
  
 `RFX_Long` e `RFX_Int`:  
 Si tratta delle funzioni RFX più semplice. Il valore dei dati non è necessario interpretazione speciale, e le dimensioni dei dati sono fissa.  
  
 `RFX_Single` e `RFX_Double`:  
 Come RFX_Long e RFX_Int sopra, queste funzioni sono semplici e garantiscono ampio uso dell'implementazione predefinita. Esse vengono archiviate in dbflt.cpp anziché dbrfx.cpp, tuttavia, per consentire il caricamento del runtime di libreria in virgola mobile solo quando sono esplicitamente riferimento.  
  
 `RFX_Text` e `RFX_Binary`:  
 Queste due funzioni preallocare un buffer statico per contenere informazioni stringa/binario e devono registrare questi buffer con ODBC SQLBindCol anziché la registrazione e valore. Per questo motivo, queste due funzioni hanno un numero elevato di codice speciale.  
  
 `RFX_Date`:  
 ODBC restituisce informazioni su data e ora nella propria struttura di data TIMESTAMP_STRUCT. Questa funzione alloca dinamicamente una TIMESTAMP_STRUCT come "proxy" per inviare e ricevere i dati di ora di inizio. Diverse operazioni devono trasferire le informazioni di data e ora tra il C++ `CTime` oggetto e il proxy TIMESTAMP_STRUCT. Ciò complica notevolmente questa funzione, ma è un buon esempio di come usare un proxy per il trasferimento dei dati.  
  
 `RFX_LongBinary`:  
 Si tratta della libreria di classi solo alle funzioni RFX che non utilizzano l'associazione di colonna per ricevere e inviare dati. Questa funzione ignora l'operazione BindFieldToColumn invece durante l'operazione di correzione, alloca memoria per contenere i dati in ingresso SQL_LONGVARCHAR o SQL_LONGVARBINARY, quindi esegue una chiamata di SQLGetData per recuperare il valore nell'archiviazione allocata. Quando si prepara a inviare nuovamente i valori dei dati all'origine dati (ad esempio operazioni NameValue e valore), questa funzione utilizza funzionalità DATA_AT_EXEC ODBC. Vedere [Nota tecnica 45](../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md) per ulteriori informazioni sul relativo utilizzo, SQL_LONGVARBINARY e SQL_LONGVARCHARs.  
  
 Quando si scrive la propria **RFX_** funzione, spesso è possibile utilizzare `CFieldExchange::Default` per implementare un'operazione specificata. Esaminare l'implementazione del valore predefinito per le operazioni in questione. Se esegue l'operazione sarebbe necessario scrivere **RFX_** funzione è possibile delegare al `CFieldExchange::Default`. È possibile visualizzare esempi della chiamata al metodo `CFieldExchange::Default` in dbrfx.cpp  
  
 È importante chiamare `IsFieldType` all'inizio della funzione RFX e restituito immediatamente se restituisce FALSE. Questo meccanismo consente di mantenere le operazioni di parametro da in esecuzione nella *outputColumns*e viceversa (simile alla chiamata `BindParam` su un *outputColumn*). Inoltre, `IsFieldType` automaticamente tiene traccia del numero di *outputColumns* (*m_nFields*) e params (*m_nParams*).  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

