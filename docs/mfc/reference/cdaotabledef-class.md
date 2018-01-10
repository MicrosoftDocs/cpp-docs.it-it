---
title: Classe CDaoTableDef | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDaoTableDef
- AFXDAO/CDaoTableDef
- AFXDAO/CDaoTableDef::CDaoTableDef
- AFXDAO/CDaoTableDef::Append
- AFXDAO/CDaoTableDef::CanUpdate
- AFXDAO/CDaoTableDef::Close
- AFXDAO/CDaoTableDef::Create
- AFXDAO/CDaoTableDef::CreateField
- AFXDAO/CDaoTableDef::CreateIndex
- AFXDAO/CDaoTableDef::DeleteField
- AFXDAO/CDaoTableDef::DeleteIndex
- AFXDAO/CDaoTableDef::GetAttributes
- AFXDAO/CDaoTableDef::GetConnect
- AFXDAO/CDaoTableDef::GetDateCreated
- AFXDAO/CDaoTableDef::GetDateLastUpdated
- AFXDAO/CDaoTableDef::GetFieldCount
- AFXDAO/CDaoTableDef::GetFieldInfo
- AFXDAO/CDaoTableDef::GetIndexCount
- AFXDAO/CDaoTableDef::GetIndexInfo
- AFXDAO/CDaoTableDef::GetName
- AFXDAO/CDaoTableDef::GetRecordCount
- AFXDAO/CDaoTableDef::GetSourceTableName
- AFXDAO/CDaoTableDef::GetValidationRule
- AFXDAO/CDaoTableDef::GetValidationText
- AFXDAO/CDaoTableDef::IsOpen
- AFXDAO/CDaoTableDef::Open
- AFXDAO/CDaoTableDef::RefreshLink
- AFXDAO/CDaoTableDef::SetAttributes
- AFXDAO/CDaoTableDef::SetConnect
- AFXDAO/CDaoTableDef::SetName
- AFXDAO/CDaoTableDef::SetSourceTableName
- AFXDAO/CDaoTableDef::SetValidationRule
- AFXDAO/CDaoTableDef::SetValidationText
- AFXDAO/CDaoTableDef::m_pDAOTableDef
- AFXDAO/CDaoTableDef::m_pDatabase
dev_langs: C++
helpviewer_keywords:
- CDaoTableDef [MFC], CDaoTableDef
- CDaoTableDef [MFC], Append
- CDaoTableDef [MFC], CanUpdate
- CDaoTableDef [MFC], Close
- CDaoTableDef [MFC], Create
- CDaoTableDef [MFC], CreateField
- CDaoTableDef [MFC], CreateIndex
- CDaoTableDef [MFC], DeleteField
- CDaoTableDef [MFC], DeleteIndex
- CDaoTableDef [MFC], GetAttributes
- CDaoTableDef [MFC], GetConnect
- CDaoTableDef [MFC], GetDateCreated
- CDaoTableDef [MFC], GetDateLastUpdated
- CDaoTableDef [MFC], GetFieldCount
- CDaoTableDef [MFC], GetFieldInfo
- CDaoTableDef [MFC], GetIndexCount
- CDaoTableDef [MFC], GetIndexInfo
- CDaoTableDef [MFC], GetName
- CDaoTableDef [MFC], GetRecordCount
- CDaoTableDef [MFC], GetSourceTableName
- CDaoTableDef [MFC], GetValidationRule
- CDaoTableDef [MFC], GetValidationText
- CDaoTableDef [MFC], IsOpen
- CDaoTableDef [MFC], Open
- CDaoTableDef [MFC], RefreshLink
- CDaoTableDef [MFC], SetAttributes
- CDaoTableDef [MFC], SetConnect
- CDaoTableDef [MFC], SetName
- CDaoTableDef [MFC], SetSourceTableName
- CDaoTableDef [MFC], SetValidationRule
- CDaoTableDef [MFC], SetValidationText
- CDaoTableDef [MFC], m_pDAOTableDef
- CDaoTableDef [MFC], m_pDatabase
ms.assetid: 7c5d2254-8475-43c4-8a6c-2d32ead194c9
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7b140d61689672f9d27b8078ad7d2eab732c1582
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cdaotabledef-class"></a>Classe CDaoTableDef
Rappresenta la definizione archiviata di una tabella di base o di una tabella collegata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDaoTableDef : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoTableDef::CDaoTableDef](#cdaotabledef)|Costruisce un **CDaoTableDef** oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoTableDef:: Append](#append)|Aggiunge una nuova tabella nel database.|  
|[CDaoTableDef::CanUpdate](#canupdate)|Restituisce zero se la tabella può essere aggiornata (è possibile modificare la definizione dei campi o le proprietà della tabella).|  
|[CDaoTableDef::Close](#close)|Chiude un tabledef aperto.|  
|[CDaoTableDef::Create](#create)|Crea una tabella che può essere aggiunti al database tramite [Append](#append).|  
|[CDaoTableDef:: CreateField](#createfield)|Chiamato per creare un campo per una tabella.|  
|[CDaoTableDef::CreateIndex](#createindex)|Chiamato per creare un indice per una tabella.|  
|[CDaoTableDef::DeleteField](#deletefield)|Chiamata eseguita per eliminare un campo da una tabella.|  
|[CDaoTableDef::DeleteIndex](#deleteindex)|Chiamata eseguita per eliminare un indice da una tabella.|  
|[CDaoTableDef::GetAttributes](#getattributes)|Restituisce un valore che indica una o più caratteristiche di un `CDaoTableDef` oggetto.|  
|[CDaoTableDef::GetConnect](#getconnect)|Restituisce un valore che fornisce informazioni sull'origine di una tabella.|  
|[CDaoTableDef::GetDateCreated](#getdatecreated)|Restituisce la data e l'ora della tabella di base sottostante un `CDaoTableDef` oggetto è stato creato.|  
|[CDaoTableDef::GetDateLastUpdated](#getdatelastupdated)|Restituisce la data e l'ora della modifica più recente apportata alla struttura della tabella di base.|  
|[CDaoTableDef::GetFieldCount](#getfieldcount)|Restituisce un valore che rappresenta il numero di campi della tabella.|  
|[CDaoTableDef::GetFieldInfo](#getfieldinfo)|Restituisce i tipi specifici di informazioni sui campi nella tabella.|  
|[CDaoTableDef::GetIndexCount](#getindexcount)|Restituisce il numero di indici della tabella.|  
|[CDaoTableDef::GetIndexInfo](#getindexinfo)|Restituisce i tipi specifici di informazioni sugli indici per la tabella.|  
|[CDaoTableDef::GetName](#getname)|Restituisce il nome della tabella definita dall'utente.|  
|[CDaoTableDef::GetRecordCount](#getrecordcount)|Restituisce il numero di record nella tabella.|  
|[CDaoTableDef::GetSourceTableName](#getsourcetablename)|Restituisce un valore che specifica il nome della tabella associata nel database di origine.|  
|[CDaoTableDef::GetValidationRule](#getvalidationrule)|Restituisce un valore che convalida i dati in un campo, come viene modificato o aggiunto a una tabella.|  
|[CDaoTableDef::GetValidationText](#getvalidationtext)|Restituisce un valore che specifica il testo del messaggio che l'applicazione viene visualizzato se il valore di un oggetto Field non soddisfa la regola di convalida specificato.|  
|[CDaoTableDef::IsOpen](#isopen)|Aprire restituisce diverso da zero se la tabella.|  
|[CDaoTableDef::Open](#open)|Apre un oggetto tabledef esistente archiviato nel database insieme di oggetto TableDef del.|  
|[CDaoTableDef::RefreshLink](#refreshlink)|Aggiorna le informazioni di connessione per una tabella collegata.|  
|[CDaoTableDef::SetAttributes](#setattributes)|Imposta un valore che indica una o più caratteristiche di un `CDaoTableDef` oggetto.|  
|[CDaoTableDef::SetConnect](#setconnect)|Imposta un valore che fornisce informazioni sull'origine di una tabella.|  
|[CDaoTableDef::SetName](#setname)|Imposta il nome della tabella.|  
|[CDaoTableDef::SetSourceTableName](#setsourcetablename)|Imposta un valore che specifica il nome di una tabella collegata nel database di origine.|  
|[CDaoTableDef::SetValidationRule](#setvalidationrule)|Imposta un valore che convalida i dati in un campo, come viene modificato o aggiunto a una tabella.|  
|[CDaoTableDef::SetValidationText](#setvalidationtext)|Imposta un valore che specifica il testo del messaggio che l'applicazione viene visualizzato se il valore di un oggetto Field non soddisfa la regola di convalida specificato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoTableDef::m_pDAOTableDef](#m_pdaotabledef)|Un puntatore all'interfaccia DAO tabledef oggetto sottostante.|  
|[CDaoTableDef::m_pDatabase](#m_pdatabase)|Database di origine per questa tabella.|  
  
## <a name="remarks"></a>Note  
 Ogni oggetto di database DAO gestisce una raccolta, denominata TableDefs, che contiene tutti gli oggetti salvati tabledef DAO.  
  
 Modificare una definizione di tabella utilizzando un `CDaoTableDef` oggetto. Ad esempio, è possibile eseguire queste operazioni:  
  
-   Esaminare la struttura di campo e l'indice di una tabella locale, collegata o esterna in un database.  
  
-   Chiamare il `SetConnect` e `SetSourceTableName` funzioni membro per le tabelle collegate e utilizzare il `RefreshLink` funzione membro per aggiornare le connessioni a tabelle collegate.  
  
-   Chiamare il `CanUpdate` funzione membro per determinare se è possibile modificare le definizioni di campo nella tabella.  
  
-   Ottenere o impostare le condizioni di convalida utilizzando il `GetValidationRule` e `SetValidationRule`e `GetValidationText` e `SetValidationText` funzioni membro.  
  
-   Utilizzare il **aprire** funzione membro per creare una tabella, dynaset o tipo snapshot `CDaoRecordset` oggetto.  
  
    > [!NOTE]
    >  Classi di database DAO sono distinte dalle classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO; le classi DAO è in genere offrono funzionalità superiori perché sono specifiche per il motore di database Microsoft Jet.  
  
### <a name="to-use-tabledef-objects-either-to-work-with-an-existing-table-or-to-create-a-new-table"></a>Per utilizzare gli oggetti tabledef per funzionare con una tabella esistente o creare una nuova tabella  
  
1.  In tutti i casi, costruire un `CDaoTableDef` oggetto, fornire un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) dell'oggetto a cui appartiene la tabella.  
  
2.  Procedere come segue, a seconda di ciò che desidera:  
  
    -   Per utilizzare una tabella salvata esistente, chiamare la funzione membro [aprire](#open) funzione membro, specificando il nome della tabella salvata.  
  
    -   Per creare una nuova tabella, chiamare la funzione membro [crea](#create) funzione membro, fornendo il nome della tabella. Chiamare [CreateField](#createfield) e [CreateIndex](#createindex) per aggiungere campi e gli indici nella tabella.  
  
    -   Chiamare [Append](#append) per salvare la tabella aggiungendolo alla raccolta TableDefs del database. **Crea** inserisce tabledef in uno stato aperto, in tal caso, dopo la chiamata **crea** non è necessario chiamare **aprire**.  
  
        > [!TIP]
        >  Il modo più semplice per creare tabelle salvate è per crearli e archiviarli nel database utilizzando Microsoft Access. È quindi possibile aprire e utilizzarle nel codice MFC.  
  
 Per utilizzare l'oggetto tabledef aperto o creato, creare e aprire un `CDaoRecordset` oggetto, che specifica il nome dell'oggetto tabledef con un **dbOpenTable** valore il `nOpenType` parametro.  
  
 Utilizzare un oggetto tabledef per creare un `CDaoRecordset` dell'oggetto, in genere creare o aprire un oggetto tabledef come descritto in precedenza, quindi creare un oggetto recordset, passando un puntatore all'oggetto tabledef quando si chiama [CDaoRecordset:: Open](../../mfc/reference/cdaorecordset-class.md#open). Tabledef passato deve essere in uno stato aperto. Per ulteriori informazioni, vedere la classe [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md).  
  
 Al termine dell'utilizzo di un oggetto tabledef, chiamare il relativo [Chiudi](../../mfc/reference/cdaorecordset-class.md#close) membro funzione; quindi eliminare l'oggetto tabledef.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDaoTableDef`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="append"></a>CDaoTableDef:: Append  
 Chiamare questa funzione membro dopo aver chiamato [crea](#create) per creare un nuovo oggetto tabledef per salvare l'oggetto tabledef nel database.  
  
```  
virtual void Append();
```  
  
### <a name="remarks"></a>Note  
 La funzione aggiunge l'oggetto alla raccolta TableDefs del database. È possibile utilizzare l'oggetto tabledef come un oggetto temporaneo durante la sua definizione aggiungendolo non, ma se si desidera salvare e utilizzarlo, è necessario chiamare **Append**.  
  
> [!NOTE]
>  Se si tenta di aggiungere un oggetto senza nome tabledef (contenente una stringa vuota o null), MFC genera un'eccezione.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Append" nella Guida di DAO.  
  
##  <a name="canupdate"></a>CDaoTableDef::CanUpdate  
 Chiamare questa funzione membro per determinare se la definizione della tabella sottostante una `CDaoTableDef` oggetto può essere modificato.  
  
```  
BOOL CanUpdate();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è possibile modificare la struttura della tabella (schema) (aggiungere o eliminare i campi e gli indici), in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, una tabella appena creata sottostante un `CDaoTableDef` oggetto può essere aggiornato e una tabella collegata sottostante un `CDaoTableDef` oggetto non può essere aggiornato. Oggetto `CDaoTableDef` oggetto potrebbe essere aggiornabile, anche se il recordset risulta non è aggiornabile.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.  
  
##  <a name="cdaotabledef"></a>CDaoTableDef::CDaoTableDef  
 Costruisce un **CDaoTableDef** oggetto.  
  
```  
CDaoTableDef(CDaoDatabase* pDatabase);
```  
  
### <a name="parameters"></a>Parametri  
 `pDatabase`  
 Un puntatore a un [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Dopo la costruzione dell'oggetto, è necessario chiamare il [crea](#create) o [aprire](#open) funzione membro. Quando si termina con l'oggetto, è necessario chiamare il relativo [Chiudi](#close) membro funzione ed eliminare definitivamente il `CDaoTableDef` oggetto.  
  
##  <a name="close"></a>CDaoTableDef::Close  
 Chiamare questa funzione membro per chiudere e rilasciare l'oggetto tabledef.  
  
```  
virtual void Close();
```  
  
### <a name="remarks"></a>Note  
 In genere dopo la chiamata **Chiudi**, si elimina l'oggetto tabledef se è stato allocato con **nuova**.  
  
 È possibile chiamare [aprire](#open) nuovamente dopo la chiamata **Chiudi**. Ciò consente di riutilizzare l'oggetto tabledef.  
  
 Per informazioni correlate, vedere l'argomento "Close (metodo)" nella Guida di DAO.  
  
##  <a name="create"></a>CDaoTableDef::Create  
 Chiamare questa funzione membro per creare una nuova tabella salvata.  
  
```  
virtual void Create(
    LPCTSTR lpszName,  
    long lAttributes = 0,  
    LPCTSTR lpszSrcTable = NULL,  
    LPCTSTR lpszConnect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un puntatore a una stringa contenente il nome della tabella.  
  
 `lAttributes`  
 Un valore che corrisponde alle caratteristiche della tabella rappresentata dall'oggetto tabledef. È possibile utilizzare l'OR per combinare le costanti seguenti:  
  
|Costante|Descrizione|  
|--------------|-----------------|  
|**dbAttachExclusive**|Per i database che utilizzano il motore di database Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'uso esclusivo.|  
|**dbAttachSavePWD**|Per i database che utilizzano il motore di database Microsoft Jet, indica che l'ID utente e password per la tabella collegata vengono salvati con le informazioni di connessione.|  
|**dbSystemObject**|Indica che la tabella è una tabella di sistema fornita dal motore di database Microsoft Jet.|  
|**dbHiddenObject**|Indica che la tabella è una tabella nascosta fornita dal motore di database Microsoft Jet.|  
  
 *lpszSrcTable*  
 Un puntatore a una stringa contenente il nome di tabella di origine. Per impostazione predefinita, questo valore viene inizializzato come **NULL**.  
  
 `lpszConnect`  
 Un puntatore a una stringa che contiene la stringa di connessione predefinito. Per impostazione predefinita, questo valore viene inizializzato come **NULL**.  
  
### <a name="remarks"></a>Note  
 Dopo avere specificato l'oggetto tabledef, è possibile chiamare [Append](#append) salvare tabledef nella raccolta TableDefs del database. Dopo la chiamata **Append**, tabledef è stato aperto e utilizzarlo per creare un [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto.  
  
 Per informazioni correlate, vedere l'argomento "CreateTableDef Method" nella Guida di DAO.  
  
##  <a name="createfield"></a>CDaoTableDef:: CreateField  
 Chiamare questa funzione membro per aggiungere un campo alla tabella.  
  
```  
void CreateField(
    LPCTSTR lpszName,  
    short nType,  
    long lSize,  
    long lAttributes = 0);  
  
void CreateField(CDaoFieldInfo& fieldinfo);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Puntatore a un'espressione stringa che specifica il nome del campo.  
  
 `nType`  
 Un valore che indica il tipo di dati del campo. L'impostazione può essere uno dei valori seguenti:  
  
|Tipo|Dimensioni (byte)|Descrizione|  
|----------|--------------------|-----------------|  
|**dbBoolean**|1 byte|BOOL|  
|**dbByte**|1|BYTE|  
|**dbInteger**|2|int|  
|**dbLong**|4|long|  
|**dbCurrency**|8|Valuta ( [COleCurrency](../../mfc/reference/colecurrency-class.md))|  
|**dbSingle**|4|float|  
|**dbDouble**|8|double|  
|**dbDate**|8|Data/ora ( [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md))|  
|**dbText**|1 - 255|Testo ( [CString](../../atl-mfc-shared/reference/cstringt-class.md))|  
|**dbLongBinary**|0|Binario lungo (oggetto OLE), [CLongBinary](../../mfc/reference/clongbinary-class.md) o [CByteArray](../../mfc/reference/cbytearray-class.md)|  
|**dbMemo**|0|Memo ( [CString](../../atl-mfc-shared/reference/cstringt-class.md))|  
  
 `lSize`  
 Un valore che indica la dimensione massima, in byte, di un campo che contiene testo o dimensione fissa di un campo che contiene testo o valori numerici. Il `lSize` parametro viene ignorato per tutti i campi di testo.  
  
 `lAttributes`  
 Un valore che corrisponde alle caratteristiche del campo e che può essere combinato utilizzando un OR bit per bit.  
  
|Costante|Descrizione|  
|--------------|-----------------|  
|**dbFixedField**|Le dimensioni del campo sono fissa (impostazione predefinita per i campi numerici).|  
|**dbVariableField**|Le dimensioni del campo sono di tipo variabile (solo per i campi di testo).|  
|**dbAutoIncrField**|Il valore del campo per i nuovi record viene incrementato automaticamente per un long integer univoco che non può essere modificato. Supportato solo per le tabelle di database Microsoft Jet.|  
|**dbUpdatableField**|Il valore del campo può essere modificato.|  
|**dbDescending**|Il campo viene ordinato in ordine decrescente (a-Z o da 0 a 100) ordine (si applica solo a un oggetto di campo in una raccolta di campi di un oggetto Index). Se si omette questa costante, il campo viene ordinato in ordine crescente (A - Z o da 0 - 100) ordine (impostazione predefinita).|  
  
 `fieldinfo`  
 Un riferimento a un [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Oggetto **DAOField** oggetto (OLE) viene creato e aggiunto alla raccolta di campi di **DAOTableDef** oggetto (OLE). Oltre all'utilizzo per l'esame delle proprietà dell'oggetto, è inoltre possibile utilizzare `CDaoFieldInfo` per costruire un parametro di input per la creazione di nuovi campi in un oggetto tabledef. La prima versione di `CreateField` è più semplice da utilizzare, ma se si desidera un maggiore controllo, è possibile utilizzare la seconda versione di `CreateField`, che prende un `CDaoFieldInfo` parametro.  
  
 Se si utilizza la versione di `CreateField` che accetta un `CDaoFieldInfo` parametro, è necessario attentamente impostare ciascuno dei seguenti membri del `CDaoFieldInfo` struttura:  
  
- **m_strName**  
  
- `m_nType`  
  
- **m_lSize**  
  
- **m_lAttributes**  
  
- **m_bAllowZeroLength**  
  
 I membri rimanenti del `CDaoFieldInfo` deve essere impostato su **0**, **FALSE**, o una stringa vuota, come appropriato per il membro, o un `CDaoException` può verificarsi.  
  
 Per informazioni correlate, vedere l'argomento "Metodo CreateField" nella Guida di DAO.  
  
##  <a name="createindex"></a>CDaoTableDef::CreateIndex  
 Chiamare questa funzione per aggiungere un indice a una tabella.  
  
```  
void CreateIndex(CDaoIndexInfo& indexinfo);
```  
  
### <a name="parameters"></a>Parametri  
 `indexinfo`  
 Un riferimento a un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura.  
  
### <a name="remarks"></a>Note  
 Indici specificano l'ordine di accesso ai record dalle tabelle di database e o meno i record duplicati sono consentiti. Gli indici forniscono anche accesso efficiente ai dati.  
  
 Non è necessario creare indici per tabelle, ma nelle tabelle di grandi dimensioni, non indicizzate, l'accesso a un record specifico o la creazione di un recordset può richiedere molto tempo. D'altra parte, la creazione di un numero eccessivo di indici rallenta la aggiornamento, aggiungere ed eliminare le operazioni come tutti gli indici vengono aggiornati automaticamente. Considerare i seguenti fattori per stabilire quali indici da creare.  
  
 I seguenti membri del `CDaoIndexInfo` struttura deve essere impostata:  
  
- **m_strName** è necessario specificare un nome.  
  
- `m_pFieldInfos`Deve puntare a una matrice di `CDaoIndexFieldInfo` strutture.  
  
- `m_nFields`Specificare il numero di campi nella matrice di `CDaoFieldInfo` strutture.  
  
 I membri rimanenti verrà ignorato se impostato su **FALSE**. Inoltre, il **m_lDistinctCount** membro viene ignorato durante la creazione dell'indice.  
  
##  <a name="deletefield"></a>CDaoTableDef::DeleteField  
 Chiamare questa funzione membro per rimuovere un campo e renderlo inaccessibile.  
  
```  
void DeleteField(LPCTSTR lpszName);  
void DeleteField(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Puntatore a un'espressione stringa che rappresenta il nome di un campo esistente.  
  
 `nIndex`  
 L'indice del campo della tabella in base zero campi insieme, per la ricerca in base all'indice.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare questa funzione membro in un nuovo oggetto che non è stato accodato per il database o quando [CanUpdate](#canupdate) restituisce diverso da zero.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Delete" nella Guida di DAO.  
  
##  <a name="deleteindex"></a>CDaoTableDef::DeleteIndex  
 Chiamare questa funzione membro per eliminare un indice in una tabella sottostante.  
  
```  
void DeleteIndex(LPCTSTR lpszName);  
void DeleteIndex(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Puntatore a un'espressione stringa che rappresenta il nome di un indice esistente.  
  
 `nIndex`  
 Indice della matrice dell'oggetto indice del database in base zero TableDefs insieme, per la ricerca in base all'indice.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare questa funzione membro su un nuovo oggetto che non è stato accodato per il database o quando [CanUpdate](#canupdate) restituisce diverso da zero.  
  
 Per informazioni correlate, vedere l'argomento "Metodo Delete" nella Guida di DAO.  
  
##  <a name="getattributes"></a>CDaoTableDef::GetAttributes  
 Per un `CDaoTableDef` oggetto, il valore restituito specifica le caratteristiche della tabella rappresentata dal `CDaoTableDef` e può essere una somma delle seguenti costanti:  
  
```  
long GetAttributes();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore che indica una o più caratteristiche di un `CDaoTableDef` oggetto.  
  
### <a name="remarks"></a>Note  
  
|Costante|Descrizione|  
|--------------|-----------------|  
|**dbAttachExclusive**|Per i database che utilizzano il motore di database Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'uso esclusivo.|  
|**dbAttachSavePWD**|Per i database che utilizzano il motore di database Microsoft Jet, indica che l'ID utente e password per la tabella collegata vengono salvati con le informazioni di connessione.|  
|**dbSystemObject**|Indica che la tabella è una tabella di sistema fornita dal motore di database Microsoft Jet.|  
|**dbHiddenObject**|Indica che la tabella è una tabella nascosta fornita dal motore di database Microsoft Jet.|  
|**dbAttachedTable**|Indica che la tabella è una tabella collegata da un database non ODBC, ad esempio un database Paradox.|  
|**dbAttachedODBC**|Indica che la tabella è una tabella collegata da un database ODBC, ad esempio Microsoft SQL Server.|  
  
 Una tabella di sistema è una tabella creata dal motore di database Microsoft Jet per contenere informazioni interne diverse.  
  
 Una tabella nascosta è una tabella creata per l'utilizzo temporaneo dal motore di database Microsoft Jet.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
##  <a name="getconnect"></a>CDaoTableDef::GetConnect  
 Chiamare questa funzione membro per ottenere la stringa di connessione per un'origine dati.  
  
```  
CString GetConnect();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto contenente il tipo di percorso e il database per la tabella.  
  
### <a name="remarks"></a>Note  
 Per un `CDaoTableDef` oggetto che rappresenta una tabella collegata, la `CString` oggetto è costituito da uno o due parti (un identificatore di tipo di database e un percorso del database).  
  
 Il percorso, come illustrato nella tabella seguente è il percorso completo della directory contenente i file di database e deve essere preceduto dall'identificatore "DATABASE =". In alcuni casi (come Microsoft Excel e Microsoft Jet database), un nome di file è incluso nell'argomento del percorso del database.  
  
 La tabella in [CDaoTableDef::SetConnect](#setconnect) Mostra i tipi di database possibili e i corrispondenti identificatori di database e i percorsi:  
  
 Per tabelle di base del database Microsoft Jet, l'identificatore è una stringa vuota ("").  
  
 Se una password è obbligatorio ma non specificata, il driver ODBC viene visualizzato un'account di accesso finestra di dialogo la prima volta che si accede a una tabella e di nuovo se la connessione viene chiusa e riaperta. Se dispone di una tabella collegata di **dbAttachSavePWD** attributo, il prompt di accesso, non sono visibili quando si riapre la tabella.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà connessione" nella Guida di DAO.  
  
##  <a name="getdatecreated"></a>CDaoTableDef::GetDateCreated  
 Chiamare questa funzione per determinare la data e ora nella tabella sottostante il `CDaoTableDef` oggetto è stato creato.  
  
```  
COleDateTime GetDateCreated();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore contenente la data e ora di creazione della tabella sottostante il `CDaoTableDef` oggetto.  
  
### <a name="remarks"></a>Note  
 Le impostazioni di data e ora derivano dal computer in cui è stata creata o dell'ultimo aggiornamento della tabella di base. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server per evitare eventuali discrepanze; vale a dire tutti i client devono utilizzare un'origine ora "standard", ad esempio da un server.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
##  <a name="getdatelastupdated"></a>CDaoTableDef::GetDateLastUpdated  
 Chiamare questa funzione per determinare la data e ora nella tabella sottostante il **CDaoTableDef** ultimo aggiornamento dell'oggetto.  
  
```  
COleDateTime GetDateLastUpdated();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che contiene la data e ora nella tabella sottostante il **CDaoTableDef** ultimo aggiornamento dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Le impostazioni di data e ora derivano dal computer in cui è stata creata o dell'ultimo aggiornamento della tabella di base. In un ambiente multiutente, gli utenti devono ottenere queste impostazioni direttamente dal file server per evitare eventuali discrepanze; vale a dire tutti i client devono utilizzare un'origine ora "standard", ad esempio da un server.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà DateCreated e LastUpdated" nella Guida di DAO.  
  
##  <a name="getfieldcount"></a>CDaoTableDef::GetFieldCount  
 Chiamare questa funzione membro per recuperare il numero di campi definiti nella tabella.  
  
```  
short GetFieldCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di campi della tabella.  
  
### <a name="remarks"></a>Note  
 Se il valore è 0, non esistono alcun oggetto nella raccolta.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Count" nella Guida di DAO.  
  
##  <a name="getfieldinfo"></a>CDaoTableDef::GetFieldInfo  
 Chiamare questa funzione membro per ottenere i vari tipi di informazioni relative a un campo definito nell'oggetto tabledef.  
  
```  
void GetFieldInfo(
    int nIndex,  
    CDaoFieldInfo& fieldinfo,  
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

 
void GetFieldInfo(
    LPCTSTR lpszName,  
    CDaoFieldInfo& fieldinfo,  
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'oggetto campo della tabella in base zero campi insieme, per la ricerca in base all'indice.  
  
 `fieldinfo`  
 Un riferimento a un [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura.  
  
 `dwInfoOptions`  
 Opzioni che specificano quali informazioni sul campo da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la restituzione della funzione:  
  
- `AFX_DAO_PRIMARY_INFO`(Impostazione predefinita) Nome, tipo, dimensioni, gli attributi. Utilizzare questa opzione per ottenere prestazioni più veloci.  
  
- `AFX_DAO_SECONDARY_INFO`Le informazioni primarie, oltre a: posizione ordinale, richiesto, consentire Zero tabella di origine esterna nome, il campo di origine, lunghezza, ordine di ordinamento,  
  
- `AFX_DAO_ALL_INFO`Le informazioni primarie e secondarie, oltre a: valore predefinito di regola di convalida, il testo di convalida  
  
 `lpszName`  
 Un puntatore al nome dell'oggetto campo, per la ricerca in base al nome. Il nome è una stringa che identifica in modo univoco il campo con un massimo di 64 caratteri.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un campo in base all'indice. L'altra versione consente di cercare un campo in base al nome.  
  
 Per una descrizione delle informazioni restituite, vedere il [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Quando si richiedono informazioni su un unico livello, ottenere informazioni per tutti i livelli precedenti oltre.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
##  <a name="getindexcount"></a>CDaoTableDef::GetIndexCount  
 Chiamare questa funzione membro per ottenere il numero di indici per una tabella.  
  
```  
short GetIndexCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di indici della tabella.  
  
### <a name="remarks"></a>Note  
 Se il valore è 0, non sono presenti indici nella raccolta.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Count" nella Guida di DAO.  
  
##  <a name="getindexinfo"></a>CDaoTableDef::GetIndexInfo  
 Chiamare questa funzione membro per ottenere i vari tipi di informazioni su un indice definito nell'oggetto tabledef.  
  
```  
void GetIndexInfo(
    int nIndex,  
    CDaoIndexInfo& indexinfo,  
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

 
void GetIndexInfo(
    LPCTSTR lpszName,  
    CDaoIndexInfo& indexinfo,  
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 L'indice numerico dell'oggetto indice nella raccolta della tabella in base zero indici, per la ricerca in base alla posizione nella raccolta.  
  
 `indexinfo`  
 Un riferimento a un [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura.  
  
 `dwInfoOptions`  
 Opzioni che specificano le informazioni sull'indice da recuperare. Le opzioni disponibili sono elencate di seguito insieme a ciò che provocano la restituzione della funzione:  
  
- `AFX_DAO_PRIMARY_INFO`Campi nome, le informazioni di campo. Utilizzare questa opzione per ottenere prestazioni più veloci.  
  
- `AFX_DAO_SECONDARY_INFO`Le informazioni primarie, più: primario, Unique, cluster, ignorare i valori null, obbligatorio, esterna  
  
- `AFX_DAO_ALL_INFO`Le informazioni primarie e secondarie, oltre a: Distinct Count  
  
 `lpszName`  
 Un puntatore al nome dell'oggetto, indice per la ricerca in base al nome.  
  
### <a name="remarks"></a>Note  
 Una versione della funzione consente di cercare un indice in base alla posizione nella raccolta. L'altra versione consente di cercare un indice in base al nome.  
  
 Per una descrizione delle informazioni restituite, vedere il [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) struttura. Questa struttura dispone di membri che corrispondono agli elementi elencati in precedenza nella sezione Descrizione del `dwInfoOptions`. Quando si richiedono informazioni su un unico livello, ottenere informazioni per tutti i livelli precedenti oltre.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
##  <a name="getname"></a>CDaoTableDef::GetName  
 Chiamare questa funzione membro per ottenere il nome definito dall'utente della tabella sottostante.  
  
```  
CString GetName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un nome per una tabella definita dall'utente.  
  
### <a name="remarks"></a>Note  
 Questo nome inizia con una lettera e può contenere un massimo di 64 caratteri. Può includere numeri e caratteri di sottolineatura ma non può includere spazi o segni di punteggiatura.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
##  <a name="getrecordcount"></a>CDaoTableDef::GetRecordCount  
 Chiamare questa funzione membro per individuare il numero di record un `CDaoTableDef` oggetto.  
  
```  
long GetRecordCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di record è possibile accedere in un oggetto tabledef.  
  
### <a name="remarks"></a>Note  
 La chiamata `GetRecordCount` per un tipo di tabella `CDaoTableDef` oggetto riflette il numero approssimativo di record della tabella ed è interessato immediatamente come record della tabella vengono aggiunti ed eliminati. Eseguire il rollback di transazioni verranno visualizzati come parte del numero di record finché non si chiama [CDaoWorkspace:: CompactDatabase](../../mfc/reference/cdaoworkspace-class.md#compactdatabase). Oggetto `CDaoTableDef` oggetto record senza alcuna ha un'impostazione di proprietà di conteggio record pari a 0. Quando si utilizzano le tabelle collegate o database ODBC, `GetRecordCount` restituisce sempre -1.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà RecordCount" nella Guida di DAO.  
  
##  <a name="getsourcetablename"></a>CDaoTableDef::GetSourceTableName  
 Chiamare questa funzione membro per recuperare il nome di una tabella collegata in un database di origine.  
  
```  
CString GetSourceTableName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto che specifica il nome di origine di una tabella collegata o una stringa vuota se una tabella di dati nativi.  
  
### <a name="remarks"></a>Note  
 Una tabella collegata è una tabella in un altro database collegato a un database Microsoft Jet. Dati delle tabelle collegate rimangono nel database esterno, in cui possono essere modificato da altre applicazioni.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà SourceTableName" nella Guida di DAO.  
  
##  <a name="getvalidationrule"></a>CDaoTableDef::GetValidationRule  
 Chiamare questa funzione membro per recuperare la regola di convalida per un oggetto tabledef.  
  
```  
CString GetValidationRule();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **CString** oggetto che convalida i dati in un campo, come viene modificato o aggiunto a una tabella.  
  
### <a name="remarks"></a>Note  
 Le regole di convalida vengono utilizzate nell'ambito di operazioni di aggiornamento. Se un oggetto tabledef contiene una regola di convalida, gli aggiornamenti a tale tabledef devono corrispondere criteri predeterminati prima che i dati vengono modificati. Se la modifica non soddisfa i criteri, un'eccezione che contiene il valore di [GetValidationText](#getvalidationtext) viene generata un'eccezione. Per un `CDaoTableDef` dell'oggetto, questo `CString` è di sola lettura per una tabella collegata e lettura/scrittura per una tabella di base.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.  
  
##  <a name="getvalidationtext"></a>CDaoTableDef::GetValidationText  
 Chiamare questa funzione per recuperare la stringa da visualizzare quando un utente inserisce i dati che non corrispondono alla regola di convalida.  
  
```  
CString GetValidationText();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto che specifica il testo visualizzato se l'utente immette i dati che non corrispondono alla regola di convalida.  
  
### <a name="remarks"></a>Note  
 Per un `CDaoTableDef` dell'oggetto, questo `CString` è di sola lettura per una tabella collegata e lettura/scrittura per una tabella di base.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di messaggio di errore" nella Guida di DAO.  
  
##  <a name="isopen"></a>CDaoTableDef::IsOpen  
 Chiamare questa funzione membro per determinare se il `CDaoTableDef` oggetto è attualmente aperto.  
  
```  
BOOL IsOpen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CDaoTableDef` oggetto è aperta; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_pdatabase"></a>CDaoTableDef::m_pDatabase  
 Contiene un puntatore al [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) oggetto per questa tabella.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_pdaotabledef"></a>CDaoTableDef::m_pDAOTableDef  
 Contiene un puntatore all'interfaccia OLE per DAO tabledef oggetto sottostante la `CDaoTableDef` oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare l'indicatore di misura se è necessario accedere direttamente all'interfaccia DAO.  
  
##  <a name="open"></a>CDaoTableDef::Open  
 Insieme di oggetto TableDef di chiamata della funzione membro per aprire un oggetto tabledef salvata in precedenza nel database.  
  
```  
virtual void Open(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un puntatore a una stringa che specifica un nome di tabella.  
  
### <a name="remarks"></a>Note  
  
##  <a name="refreshlink"></a>CDaoTableDef::RefreshLink  
 Chiamare questa funzione membro per aggiornare le informazioni di connessione per una tabella collegata.  
  
```  
void RefreshLink();
```  
  
### <a name="remarks"></a>Note  
 Modificare le informazioni di connessione per una tabella collegata tramite una chiamata [SetConnect](#setconnect) nella corrispondente `CDaoTableDef` oggetto e quindi utilizzando il `RefreshLink` funzione membro per aggiornare le informazioni. Quando si chiama `RefreshLink`, non vengono modificate le proprietà della tabella associata.  
  
 Per forzare la modifica connessione informazioni per rendere effettive, tutte le [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetti basati su questo tabledef devono essere chiuso.  
  
 Per informazioni correlate, vedere l'argomento "Metodo RefreshLink" nella Guida di DAO.  
  
##  <a name="setattributes"></a>CDaoTableDef::SetAttributes  
 Imposta un valore che indica una o più caratteristiche di un `CDaoTableDef` oggetto.  
  
```  
void SetAttributes(long lAttributes);
```  
  
### <a name="parameters"></a>Parametri  
 `lAttributes`  
 Caratteristiche della tabella rappresentata dal `CDaoTableDef` e può essere una somma delle seguenti costanti:  
  
|Costante|Descrizione|  
|--------------|-----------------|  
|**dbAttachExclusive**|Per i database che utilizzano il motore di database Microsoft Jet, indica che la tabella è una tabella collegata aperta per l'uso esclusivo.|  
|**dbAttachSavePWD**|Per i database che utilizzano il motore di database Microsoft Jet, indica che l'ID utente e password per la tabella collegata vengono salvati con le informazioni di connessione.|  
|**dbSystemObject**|Indica che la tabella è una tabella di sistema fornita dal motore di database Microsoft Jet.|  
|**dbHiddenObject**|Indica che la tabella è una tabella nascosta fornita dal motore di database Microsoft Jet.|  
  
### <a name="remarks"></a>Note  
 Quando si impostano più attributi, è possibile combinare sommando le costanti appropriate utilizzando l'operatore OR bit per bit. Impostazione **dbAttachExclusive** su una tabella genera un'eccezione. Combinare i valori seguenti anche generare un'eccezione:  
  
- **dbAttachExclusive &#124; dbAttachedODBC**  
  
- **dbAttachSavePWD &#124; dbAttachedTable**  
  
 Per informazioni correlate, vedere l'argomento "Proprietà Attributes" nella Guida di DAO.  
  
##  <a name="setconnect"></a>CDaoTableDef::SetConnect  
 Per un `CDaoTableDef` oggetto che rappresenta una tabella collegata, l'oggetto string è costituito da uno o due parti (un identificatore di tipo di database e un percorso del database).  
  
```  
void SetConnect(LPCTSTR lpszConnect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszConnect`  
 Puntatore a un'espressione stringa che specifica i parametri aggiuntivi da passare per ODBC o driver ISAM installabili.  
  
### <a name="remarks"></a>Note  
 Il percorso, come illustrato nella tabella seguente è il percorso completo della directory contenente i file di database e deve essere preceduto dall'identificatore "DATABASE =". In alcuni casi (come Microsoft Excel e Microsoft Jet database), un nome di file è incluso nell'argomento del percorso del database.  
  
> [!NOTE]
>  Non includere uno spazio vuoto attorno il segno di uguale nelle istruzioni di percorso nel formato "DATABASE = unità:\\\path". Ciò genererà un'eccezione e ha generato l'errore di connessione.  
  
 La tabella seguente illustra i tipi di database possibili e i corrispondenti identificatori di database e i percorsi:  
  
|Tipo di database|Identificatore|Path|  
|-------------------|---------------|----------|  
|Database utilizzando il motore di database Jet|"[ `database`];"|" `drive`:\\\ *percorso*\\\ *filename*. MDB"|  
|file dBASE III|"dBASE III;"|" `drive`:\\\ *percorso*"|  
|file dBASE IV|"dBASE IV;"|" `drive`:\\\ *percorso*"|  
|file dBASE 5|"dBASE 5.0;"|" `drive`:\\\ *percorso*"|  
|Paradox 3. x|"Paradox 3; x"|" `drive`:\\\ *percorso*"|  
|Paradox 4. x|"Paradox 4. x;"|" `drive`:\\\ *percorso*"|  
|Paradox 5. x|"Paradox 5. x;"|" `drive`:\\\ *percorso*"|  
|Excel 3.0|"Excel 3.0".|" `drive`:\\\ *percorso*\\\ *filename*. XLS"|  
|Excel 4.0|"Excel 4.0".|" `drive`:\\\ *percorso*\\\ *filename*. XLS"|  
|Excel 5.0 o Excel 95|"Excel 5.0".|" `drive`:\\\ *percorso*\\\ *filename*. XLS"|  
|Excel 97|"Excel 8.0";|" `drive`:\\\ *percorso*\ *filename*. XLS"|  
|Importazione di HTML|"HTML"importazione;|" `drive`:\\\ *percorso*\ *filename*"|  
|Esportazione HTML|"Esportazione HTML";|" `drive`:\\\ *percorso*"|  
|Testo|"Testo".|"unità:\\\path"|  
|ODBC|"ODBC; DATABASE = `database`; UID = *utente*; PWD = *password*; DSN = *datasourcename;* LOGINTIMEOUT = *secondi;*" (Questo potrebbe non essere una stringa di connessione completa per tutti i server, è solo un esempio. È molto importante non siano presenti spazi tra i parametri).|nessuno|  
|Exchange|"Exchange;<br /><br /> MAPILEVEL = *folderpath*;<br /><br /> [TABLETYPE = {0 &#124; 1};]<br /><br /> [Profilo = *profilo*;]<br /><br /> [PWD = *password*;]<br /><br /> [DATABASE = `database`;] "|*"unità*:\\\ *percorso*\\\ *filename*. MDB"|  
  
> [!NOTE]
>  Btrieve non è più supportata a partire da DAO 3.5.  
  
 È necessario utilizzare una doppia barra rovesciata (\\\\) nelle stringhe di connessione. Se si hanno modificato le proprietà di una connessione esistente usando `SetConnect`, è necessario chiamare successivamente [RefreshLink](#refreshlink). Se si inizializza le proprietà di connessione tramite `SetConnect`, è necessario chiamare `RefreshLink`, ma qualora si scegliesse di eseguire questa operazione, aggiungere innanzitutto tabledef.  
  
 Se una password è obbligatorio ma non specificata, il driver ODBC viene visualizzato un'account di accesso finestra di dialogo la prima volta che si accede a una tabella e di nuovo se la connessione viene chiusa e riaperta.  
  
 È possibile impostare la stringa di connessione per un `CDaoTableDef` fornendo un argomento di origine per il **crea** funzione membro. È possibile controllare l'impostazione per determinare il tipo, percorso, l'ID utente, password o origine dati del database. Per ulteriori informazioni, vedere la documentazione per il driver specifico.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà connessione" nella Guida di DAO.  
  
##  <a name="setname"></a>CDaoTableDef::SetName  
 Chiamare questa funzione membro per impostare un nome definito dall'utente per una tabella.  
  
```  
void SetName(LPCTSTR lpszName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Puntatore a un'espressione stringa che specifica un nome per una tabella.  
  
### <a name="remarks"></a>Note  
 Il nome deve iniziare con una lettera e può contenere un massimo di 64 caratteri. Può includere numeri e caratteri di sottolineatura ma non può includere spazi o segni di punteggiatura.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
##  <a name="setsourcetablename"></a>CDaoTableDef::SetSourceTableName  
 Chiamare questa funzione membro per specificare il nome di una tabella collegata o il nome della tabella di base in cui il `CDaoTableDef` si basa l'oggetto, come è presente nell'origine dei dati.  
  
```  
void SetSourceTableName(LPCTSTR lpszSrcTableName);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszSrcTableName*  
 Puntatore a un'espressione stringa che specifica un nome di tabella nel database esterno. Per una tabella di base, l'impostazione è una stringa vuota ("").  
  
### <a name="remarks"></a>Note  
 È quindi necessario chiamare [RefreshLink](#refreshlink). Impostazione di questa proprietà è vuota per una tabella di base e di lettura/scrittura per una tabella collegata o un oggetto non è stato aggiunto a una raccolta.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà SourceTableName" nella Guida di DAO.  
  
##  <a name="setvalidationrule"></a>CDaoTableDef::SetValidationRule  
 Chiamare questa funzione membro per impostare una regola di convalida per un oggetto tabledef.  
  
```  
void SetValidationRule(LPCTSTR lpszValidationRule);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszValidationRule*  
 Puntatore a un'espressione stringa in cui un'operazione di convalida.  
  
### <a name="remarks"></a>Note  
 Le regole di convalida vengono utilizzate nell'ambito di operazioni di aggiornamento. Se un oggetto tabledef contiene una regola di convalida, gli aggiornamenti a tale tabledef devono corrispondere criteri predeterminati prima che i dati vengono modificati. Se la modifica non soddisfa i criteri, un'eccezione contenente il testo del [GetValidationText](#getvalidationtext) viene visualizzato.  
  
 La convalida è supportata solo per i database che utilizzano il motore di database Microsoft Jet. L'espressione non può fare riferimento a funzioni definite dall'utente, funzioni di aggregazione sui domini, le funzioni di aggregazione SQL o query. Una regola di convalida per un `CDaoTableDef` oggetto può fare riferimento a più campi in tale oggetto.  
  
 Ad esempio, per i campi denominati `hire_date` e `termination_date`, potrebbe essere una regola di convalida:  
  
 [!code-cpp[NVC_MFCDatabase#34](../../mfc/codesnippet/cpp/cdaotabledef-class_1.cpp)]  
  
 Per informazioni correlate, vedere l'argomento "Proprietà ValidationRule" nella Guida di DAO.  
  
##  <a name="setvalidationtext"></a>CDaoTableDef::SetValidationText  
 Chiamare questa funzione membro per impostare il testo dell'eccezione di una regola di convalida per un `CDaoTableDef` oggetto con una tabella di base sottostante supportata dal motore di database Microsoft Jet.  
  
```  
void SetValidationText(LPCTSTR lpszValidationText);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszValidationText*  
 Un puntatore a un'espressione stringa che specifica il testo visualizzato se i dati immessi non è valido.  
  
### <a name="remarks"></a>Note  
 È possibile impostare il testo di convalida di una tabella collegata.  
  
 Per informazioni correlate, vedere l'argomento "Proprietà di messaggio di errore" nella Guida di DAO.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoDatabase (classe)](../../mfc/reference/cdaodatabase-class.md)   
 [Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)
