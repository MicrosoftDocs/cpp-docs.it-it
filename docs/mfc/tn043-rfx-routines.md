---
title: "TN043: routine RFX | Microsoft Docs"
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
  - "RFX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RFX (Trasferimento di campi di record)"
  - "RFX (Trasferimento di campi di record), architettura"
  - "TN043"
ms.assetid: f552d0c1-2c83-4389-b472-42c9940aa713
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN043: routine RFX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritta l'architettura di trasferimento di campi di Record.  Viene descritto come scrivere una routine di **RFX\_**.  
  
## Panoramica di trasferimento di campi di Record  
 Tutte le funzioni di campo del recordset vengono apportate al codice C\+\+.  Non esistono risorse o speciali macro magiche.  Fondamentale del meccanismo è una funzione virtuale che deve essere sottoposti a override in ogni classe recordset derivata.  Si trova sempre nel seguente formato:  
  
```  
void CMySet::DoFieldExchange(CFieldExchange* pFX)  
{  
  //{{AFX_FIELD_MAP(CMySet)  
  <recordset exchange field type call>  
  <recordset exchange function call>  
  //}}AFX_FIELD_MAP  
}  
```  
  
 I commenti speciali di AFX di formato consentono di ClassWizard individuare e modificare il codice all'interno della funzione.  Il codice che non è compatibile con ClassWizard deve essere posizionato fuori dei commenti speciali di formato.  
  
 Nell'esempio precedente, \<il recordset\_exchange\_field\_type\_call\> è il formato seguente:  
  
```  
pFX->SetFieldType(CFieldExchange::outputColumn);  
```  
  
 e \<il recordset\_exchange\_function\_call\> è il formato seguente:  
  
```  
RFX_Custom(pFX, "Col2", m_Col2);  
```  
  
 La maggior parte delle funzioni di **RFX\_** hanno tre argomenti come illustrato nell'esempio precedente, ma some \(ad esempio  `RFX_Text` e `RFX_Binary`\) presentano argomenti aggiuntivi facoltativi.  
  
 Più di un **RFX\_** può essere incluso in ogni funzione di `DoDataExchange`.  
  
 Vedere "afxdb.h" per un elenco di tutte le routine di scambio di campo del recordset disponibili in MFC.  
  
 Le chiamate di campo del recordset rappresentano un modo per registrare le posizioni di memoria \(in genere membri dati\) per archiviare i dati del campo per una classe di **CMySet**.  
  
## Note  
 Le funzioni di campo del recordset sono progettate per essere eseguite solo con le classi di `CRecordset`.  Generalmente non sono utilizzabili da altre classi MFC.  
  
 I valori iniziali dei dati sono specificati nel costruttore C\+\+ standard, in genere in un blocco con `//{{AFX_FIELD_INIT(CMylSet)` e commenti di `//}}AFX_FIELD_INIT`.  
  
 Ogni funzione di **RFX\_** deve supportare diverse operazioni, varianti da restituire lo stato modificato il campo alla memorizzazione del campo in preparazione di modificare il campo.  
  
 Ogni funzione che chiama `DoFieldExchange` \(ad esempio `SetFieldNull`, `IsFieldDirty`\), esegue il proprio inizializzazione attorno alla chiamata a `DoFieldExchange`.  
  
## Funzionamento?  
 Non è necessario comprendere le seguenti per utilizzare trasferimento di campi di Record.  Tuttavia, comprendere il funzionamento in background possono consentire di scrivere una routine di scambio.  
  
 La funzione membro di `DoFieldExchange` è molto simile alla funzione membro di `Serialize` \- è responsabile di ottenere o dell'impostazione dei dati a\/da un form esterno \(in questo caso colonne dal risultato di una query ODBC\) da\/verso i dati dei membri della classe.  Il parametro di `pFX` è il contesto per eseguire lo scambio di dati ed è simile al parametro di `CArchive` a `CObject::Serialize`.  `pFX` \(un oggetto di `CFieldExchange` \) ha un indicatore delle operazioni, a cui è simile, ma una generalizzazione del flag di direzione `CArchive`.  Una funzione RFX può essere necessario supportare le operazioni seguenti:  
  
-   **BindParam** \- indicare dove ODBC deve recuperare i dati dei parametri  
  
-   **BindFieldToColumn** \- indicare dove ODBC deve recuperare\/data outputColumn del deposito  
  
-   **Fixup** \- lunghezze sui set di **CString\/CByteArray** bit, NULL dello stato del set  
  
-   **MarkForAddNew** contrassegno \- modificato se il valore modificato rispetto chiamata ad AddNew  
  
-   **MarkForUpdate** contrassegno \- modificato se il valore modificato rispetto chiamata di modifica  
  
-   **Nome** \- Aggiungere i nomi di campo per i campi ha contrassegnato come modificato  
  
-   **NameValue** \- aggiungere il "\<name\= della colonna\>?" per modificato contrassegnato campi  
  
-   **Valore** \- Aggiungere "?" seguito dal separatore, ad esempio "," o ''  
  
-   `SetFieldDirty` \- ovvero variata campo modificato bit lo stato stabilito  
  
-   `SetFieldNull` \- stabilito bit indicando valore null per il campo  
  
-   `IsFieldDirty` \- valore restituito di bit modifica dello stato  
  
-   `IsFieldNull` \- valore restituito del bit dello stato null  
  
-   `IsFieldNullable` \- TRUE return se il campo può utilizzare valori null  
  
-   **StoreField** \- valore del campo dell'archivio  
  
-   **LoadField** \- valore del campo archiviato ricarica  
  
-   **GetFieldInfoValue** \- informazioni generali di ritorno su un campo  
  
-   **GetFieldInfoOrdinal** \- informazioni generali di ritorno su un campo  
  
## Estensioni dell'utente  
 Esistono diversi modi per estendere il meccanismo di impostazione predefinita RFX.  È possibile:  
  
-   Aggiungere nuovi tipi di dati.  Di seguito è riportato un esempio.  
  
    ```  
    CBookmark  
    ```  
  
-   Aggiungere nuove procedure di scambio RFX\_ \(???\).  
  
    ```  
    void AFXAPI RFX_Bigint(CFieldExchange* pFX, const char *szName,  
        BIGINT& value);  
    ```  
  
-   Fare nella funzione membro di `DoFieldExchange` includere ulteriori chiamate a RFX o qualsiasi altra istruzione valide C\+\+.  
  
    ```  
    while (posExtraFields != NULL)  
    {  
        RFX_Text(pFX, m_listName.GetNext(posExtraFields),   
            m_listValue.GetNext(posExtraValues));  
    }  
    ```  
  
> [!NOTE]
>  Tale codice non può essere modificato da ClassWizard e deve essere utilizzato solo all'esterno di commenti speciali di formato.  
  
## Scrittura di custom RFX  
 Per scrivere una funzione RFX personalizzata, viene suggerito che si copia una funzione RFX esistente e la modifica dei propri scopi.  Selezionare la destra RFX copiare può rendere il processo molto più semplice.  Alcune funzioni RFX dispongono di proprietà univoche da tenere presenti quando si decide quale copiare.  
  
 **RFX\_Long and RFX\_Int**:  
 Queste sono le funzioni RFX più semplici.  Il valore dei dati non è necessaria alcuna interpretazione speciale e le dimensioni dei dati è fissa.  
  
 **RFX\_Single and RFX\_Double**:  
 Come RFX\_Long e RFX\_Int precedente, queste funzioni sono semplici e potrebbero utilizzare ampiamente l'implementazione predefinita.  Vengono archiviate in dbflt.cpp anziché dbrfx.cpp, tuttavia, per consentire il caricamento della libreria di runtime a virgola mobile solo quando sono in modo esplicito di riferimento.  
  
 **RFX\_Text and RFX\_Binary**:  
 Queste due funzioni preassegnano un buffer statico per contenere la stringa\/informazioni binarie e deve registrare i buffer con ODBC SQLBindCol anziché registrare &il valore.  Per questo motivo, queste due funzioni presentano quantità di codice speciale.  
  
 `RFX_Date`:  
 ODBC restituisce informazioni su data e ora nella propria struttura di dati TIMESTAMP\_STRUCT.  Questa funzione per allocare dinamicamente un TIMESTAMP\_STRUCT "come un proxy" per l'invio e la ricezione di dati relativi alla data e ora.  Diverse operazioni devono portare le informazioni su data e ora tra l'oggetto C\+\+ `CTime` e il proxy di TIMESTAMP\_STRUCT.  Ciò complica notevolmente questa funzione, ma è un ottimo esempio di come utilizzare un proxy per il trasferimento dei dati.  
  
 `RFX_LongBinary`:  
 Questa è l'unica funzione RFX libreria di classi che non utilizza l'associazione di colonna per ricevere e inviare i dati.  Questa funzione ignora l'operazione di BindFieldToColumn e viceversa, durante l'operazione della correzione, alloca un percorso di archiviazione per utilizzare i dati in ingresso di SQL\_LONGVARBINARY o di SQL\_LONGVARCHAR, quindi effettuare una chiamata di SQLGetData per recuperare il valore di archiviazione allocato.  In preparare inviare i valori dei dati nell'origine dati \(ad esempio NameValue e stimare le operazioni\), questa funzione utilizza la funzionalità di DATA\_AT\_EXEC ODBC.  Vedere [Nota tecnica 45](../mfc/tn045-mfc-database-support-for-long-varchar-varbinary.md) per ulteriori informazioni sull'utilizzo e SQL\_LONGVARBINARY SQL\_LONGVARCHARs.  
  
 Quando si crea una funzione di **RFX\_**, sarà possibile utilizzare spesso **CFieldExchange::Default** per implementare un'operazione specificata.  Esaminare l'implementazione di impostazione predefinita per l'operazione in questione.  Se l'azione si scrive nella funzione di **RFX\_** è possibile delegare **CFieldExchange::Default.** È possibile visualizzare esempi di chiamare **CFieldExchange::Default** in dbrfx.cpp  
  
 È importante chiamare `IsFieldType` all'inizio della funzione RFX e restituisce immediatamente un valore se restituisce FALSE.  Questo meccanismo consente le operazioni di parametro da essere eseguito su **outputColumns** e viceversa \(come chiamare **BindParam** su **outputColumn**\).  Inoltre, `IsFieldType` automaticamente tiene traccia del numero di **outputColumns** \(`m_nFields`\) e di lunghezza \(`m_nParams`\).  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)