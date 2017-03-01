---
title: Classe CDaoFieldExchange | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDaoFieldExchange
dev_langs:
- C++
helpviewer_keywords:
- DAO (Data Access Objects), record field exchange (DFX)
- field exchange
- DFX (DAO record field exchange)
- RFX (record field exchange), DAO classes
- field exchange, record for DAO classes
- exchanging data between databases and recordsets
- DFX (DAO record field exchange), DAO Record Field Exchange
- RFX (record field exchange)
- CDaoFieldExchange class
ms.assetid: 350a663e-92ff-44ab-ad53-d94efa2e5823
caps.latest.revision: 23
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 31b7121f8e93f85ed73b5d095ac0995f3ddee721
ms.lasthandoff: 02/24/2017

---
# <a name="cdaofieldexchange-class"></a>Classe CDaoFieldExchange
Supporta le routine DFX DAO (record field exchange) utilizzate dalle classi di database DAO.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDaoFieldExchange  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoFieldExchange::IsValidOperation](#isvalidoperation)|Restituisce diverso da zero se l'operazione corrente è appropriato per il tipo di campo da aggiornare.|  
|[CDaoFieldExchange:: SetFieldType](#setfieldtype)|Specifica il tipo di membro dati del recordset, colonna o parametro, rappresentato da tutte le chiamate successive alle funzioni DFX fino alla chiamata successiva a `SetFieldType`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoFieldExchange:: M_noperation](#m_noperation)|L'operazione DFX eseguita dalla chiamata corrente per il recordset `DoFieldExchange` funzione membro.|  
|[CDaoFieldExchange::m_prs](#m_prs)|Puntatore al recordset in cui DFX vengono eseguite le operazioni.|  
  
## <a name="remarks"></a>Note  
 `CDaoFieldExchange`non dispone di una classe di base.  
  
 Utilizzare questa classe se si intende scrivere routine di scambio dei dati per tipi di dati personalizzati. in caso contrario, non direttamente utilizzare questa classe. DFX scambia dati tra i membri dei dati di campo di [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto e i campi del record corrente nell'origine dati. DFX gestisce lo scambio in entrambe le direzioni, dall'origine dati e all'origine dati. Vedere [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) per informazioni sulla scrittura di routine DFX personalizzate.  
  
> [!NOTE]
>  Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado di supportare più classi MFC basate su ODBC. Le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite i propri motore di database. Supportano inoltre le operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi invece di dover chiamare DAO.  
  
> [!NOTE]
>  Campi di record DAO (DFX) sono molto simili a campi di record (RFX), nelle classi di database MFC basate su ODBC ( `CDatabase`, `CRecordset`). Se si comprende RFX, si troverà DFX facile da usare.  
  
 Oggetto `CDaoFieldExchange` oggetto fornisce le informazioni sul contesto necessarie per DAO campi di record che sostituisce. `CDaoFieldExchange`gli oggetti supportano un numero di operazioni, inclusi i parametri di associazione e i membri dati di campo e impostare diversi flag nei campi del record corrente. DFX operazioni vengono eseguite nei membri dati della classe recordset di tipi definiti dal `enum` **FieldType** in `CDaoFieldExchange`. Possibili **FieldType** i valori sono:  
  
- **CDaoFieldExchange::outputColumn** per i membri dati di campo.  
  
- **CDaoFieldExchange::param** per i membri dati di parametro.  
  
 Il [IsValidOperation](#isvalidoperation) funzione membro viene fornita per la scrittura di routine DFX personalizzate. Si utilizzerà [SetFieldType](#setfieldtype) frequentemente nel [CDaoRecordset::DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) funzioni. Per informazioni dettagliate sulle funzioni globali di DFX, vedere [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md). Per informazioni sulla scrittura di routine DFX personalizzate per i tipi di dati, vedere [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDaoFieldExchange`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="a-nameisvalidoperationa--cdaofieldexchangeisvalidoperation"></a><a name="isvalidoperation"></a>CDaoFieldExchange::IsValidOperation  
 Se si scrive una funzione DFX, chiamare `IsValidOperation` all'inizio della funzione per determinare se l'operazione corrente può essere eseguito su un tipo di membro dati di campo specifico (un **CDaoFieldExchange::outputColumn** o **CDaoFieldExchange::param**).  
  
```  
BOOL IsValidOperation();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione corrente è appropriato per il tipo di campo da aggiornare.  
  
### <a name="remarks"></a>Note  
 Alcune delle operazioni eseguite dal meccanismo di DFX si applicano solo a uno dei tipi di campo possibili. Seguire il modello delle funzioni DFX esistente.  
  
 Per ulteriori informazioni sulla scrittura di routine DFX personalizzate, vedere [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).  
  
##  <a name="a-namemnoperationa--cdaofieldexchangemnoperation"></a><a name="m_noperation"></a>CDaoFieldExchange:: M_noperation  
 Identifica l'operazione deve essere eseguita la [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto associato all'oggetto di exchange di campo.  
  
### <a name="remarks"></a>Note  
 Il `CDaoFieldExchange` oggetto fornisce il contesto per un numero di diverse operazioni DFX nel recordset.  
  
> [!NOTE]
>  Il **PSEUDONULL** valore descritto nell'ambito di operazioni MarkForAddNew e SetFieldNull riportata di seguito è un valore utilizzato per contrassegnare i campi Null. Il meccanismo di scambio di campi di record DAO (DFX) utilizza questo valore per determinare quali campi sono stati esplicitamente contrassegnati Null. **PSEUDONULL** non è necessaria per [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) e [COleCurrency](../../mfc/reference/colecurrency-class.md) campi.  
  
 I possibili valori di **m_nOperation** sono:  
  
|Operazione|Descrizione|  
|---------------|-----------------|  
|**AddToParameterList**|Compila il **parametri** clausola dell'istruzione SQL.|  
|**AddToSelectList**|Compila il **selezionare** clausola dell'istruzione SQL.|  
|**BindField**|Associa un campo nel database in una posizione di memoria dell'applicazione.|  
|**BindParam**|Imposta i valori dei parametri per la query del recordset.|  
|**Correzione**|Imposta lo stato Null per un campo.|  
|**AllocCache**|Alloca la cache utilizzata per verificare la presenza di campi del recordset "dirty".|  
|**StoreField**|Salva il record corrente alla cache.|  
|**LoadField**|Ripristina le variabili membro dei dati memorizzati nell'oggetto recordset.|  
|**FreeCache**|Libera la cache utilizzata per verificare la presenza di campi del recordset "dirty".|  
|`SetFieldNull`|Imposta lo stato di un campo su Null e il valore **PSEUDONULL**.|  
|**MarkForAddNew**|Contrassegna i campi "dirty" Se non **PSEUDONULL**.|  
|**MarkForEdit**|Contrassegna i campi "dirty" se la cache non corrispondono.|  
|**SetDirtyField**|Imposta campi valori contrassegnati come "dirty".|  
|**DumpField**|Trasferisce il contenuto del campo (solo debug).|  
|**MaxDFXOperation**|Utilizzato per la verifica dell'input.|  
  
##  <a name="a-namemprsa--cdaofieldexchangemprs"></a><a name="m_prs"></a>CDaoFieldExchange::m_prs  
 Contiene un puntatore al [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto associato di `CDaoFieldExchange` oggetto.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetfieldtypea--cdaofieldexchangesetfieldtype"></a><a name="setfieldtype"></a>CDaoFieldExchange:: SetFieldType  
 Chiamare `SetFieldType` nel `CDaoRecordset` della classe `DoFieldExchange` eseguire l'override.  
  
```  
void SetFieldType(UINT nFieldType);
```  
  
### <a name="parameters"></a>Parametri  
 `nFieldType`  
 Il valore di **enum FieldType**, dichiarati nel `CDaoFieldExchange`, che può essere uno dei seguenti:  
  
- **CDaoFieldExchange::outputColumn**  
  
- **CDaoFieldExchange::param**  
  
### <a name="remarks"></a>Note  
 In genere, ClassWizard scrive automaticamente questa chiamata. Se si scrivere una funzione e si utilizza la procedura guidata per scrivere il `DoFieldExchange` , aggiungere le chiamate alla funzione all'esterno della mappa di campo. Se non si utilizza la procedura guidata, non esisterà una mappa dei campi. La chiamata precedente le chiamate alle funzioni DFX, uno per ogni membro del campo dati della classe e identifica il tipo di campo come **CDaoFieldExchange::outputColumn**.  
  
 Se si imposta parametri per la classe del recordset, è necessario aggiungere chiamate DFX per tutti i membri dati di parametro (all'esterno della mappa di campo) e far precedere queste chiamate con una chiamata a `SetFieldType`. Passare il valore **CDaoFieldExchange::param**. (Al contrario, è possibile utilizzare un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e impostarne i valori di parametro.)  
  
 In generale, ogni gruppo di chiamate di funzione DFX associata a membri dati di campi o membri dati di parametro deve essere preceduto da una chiamata a `SetFieldType`. Il `nFieldType` di ogni parametro `SetFieldType` chiamata identifica il tipo dei membri dati rappresentati dalle chiamate di funzione DFX che seguono il `SetFieldType` chiamare.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDaoRecordset (classe)](../../mfc/reference/cdaorecordset-class.md)

