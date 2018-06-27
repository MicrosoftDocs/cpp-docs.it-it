---
title: Classe CDaoFieldExchange | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoFieldExchange
- AFXDAO/CDaoFieldExchange
- AFXDAO/CDaoFieldExchange::IsValidOperation
- AFXDAO/CDaoFieldExchange::SetFieldType
- AFXDAO/CDaoFieldExchange::m_nOperation
- AFXDAO/CDaoFieldExchange::m_prs
dev_langs:
- C++
helpviewer_keywords:
- CDaoFieldExchange [MFC], IsValidOperation
- CDaoFieldExchange [MFC], SetFieldType
- CDaoFieldExchange [MFC], m_nOperation
- CDaoFieldExchange [MFC], m_prs
ms.assetid: 350a663e-92ff-44ab-ad53-d94efa2e5823
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b9e65b4880c80f8a4b0d9a192f316b16a92a3e69
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36953909"
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
|[CDaoFieldExchange:: M_noperation](#m_noperation)|DFX operazione in corso dalla chiamata corrente per il recordset `DoFieldExchange` funzione membro.|  
|[CDaoFieldExchange::m_prs](#m_prs)|Un puntatore al recordset in cui DFX vengono eseguite le operazioni.|  
  
## <a name="remarks"></a>Note  
 `CDaoFieldExchange` non dispone di una classe basa.  
  
 Utilizzare questa classe se si siano scrivendo una routine di scambio dei dati per tipi di dati personalizzati. in caso contrario, non direttamente utilizzare questa classe. DFX scambia dati tra i membri dei dati di campo del [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto e i campi del record corrente nell'origine dati. DFX gestisce lo scambio in entrambe le direzioni, dall'origine dati e all'origine dati. Vedere [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) per informazioni su come scrivere routine DFX personalizzate.  
  
> [!NOTE]
>  Classi di database DAO sono distinte da classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado di supportare più classi MFC basate su ODBC. Le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite i propri motore di database. Supportano inoltre le operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi invece di dover chiamare DAO manualmente.  
  
> [!NOTE]
>  Campi di record DAO (DFX) sono molto simili per il trasferimento di campi di record (RFX) nelle classi di database MFC basate su ODBC ( `CDatabase`, `CRecordset`). Se si comprende RFX, si troverà DFX facile da usare.  
  
 Oggetto `CDaoFieldExchange` oggetto fornisce le informazioni sul contesto necessarie per DAO campi di record per aver luogo. `CDaoFieldExchange` gli oggetti supportano un numero di operazioni, tra cui i parametri di associazione e i membri dati di campo e l'impostazione di vari flag nei campi del record corrente. DFX operazioni vengono eseguite su membri dati della classe recordset di tipi definiti dal **enum** **FieldType** in `CDaoFieldExchange`. Possibili **FieldType** i valori sono:  
  
- **CDaoFieldExchange::outputColumn** per i membri dati di campo.  
  
- **CDaoFieldExchange::param** per i membri dati di parametro.  
  
 Il [IsValidOperation](#isvalidoperation) funzione membro viene fornita per scrivere la propria routine DFX personalizzate. Si utilizzerà [SetFieldType](#setfieldtype) frequentemente nel [CDaoRecordset::DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) funzioni. Per informazioni dettagliate sulle funzioni DFX globale, vedere [funzioni RFX](../../mfc/reference/record-field-exchange-functions.md). Per informazioni su come scrivere routine DFX personalizzate per i tipi di dati, vedere [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDaoFieldExchange`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="isvalidoperation"></a>  CDaoFieldExchange::IsValidOperation  
 Se si scrive una funzione DFX, chiamare `IsValidOperation` all'inizio di una funzione per determinare se l'operazione corrente può essere eseguita su un tipo di membro dati di campo specifico (una **CDaoFieldExchange::outputColumn** o **CDaoFieldExchange::param**).  
  
```  
BOOL IsValidOperation();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione corrente è appropriato per il tipo di campo da aggiornare.  
  
### <a name="remarks"></a>Note  
 Alcune delle operazioni eseguite dal meccanismo di DFX si applica solo a uno dei tipi di campo possibili. Seguire il modello delle funzioni DFX esistente.  
  
 Per ulteriori informazioni su come scrivere routine DFX personalizzate, vedere [53 Nota tecnica](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).  
  
##  <a name="m_noperation"></a>  CDaoFieldExchange:: M_noperation  
 Identifica l'operazione da eseguire sul [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto associato all'oggetto exchange campo.  
  
### <a name="remarks"></a>Note  
 Il `CDaoFieldExchange` oggetto fornisce il contesto per un numero di operazioni DFX diverse nel recordset.  
  
> [!NOTE]
>  Il **PSEUDONULL** valore descritto nell'ambito di operazioni MarkForAddNew e SetFieldNull seguente è un valore utilizzato per contrassegnare i campi Null. Il meccanismo di scambio di campi di record DAO (DFX) utilizza questo valore per determinare quali campi sono stati contrassegnati esplicitamente Null. **PSEUDONULL** non è necessaria per [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) e [COleCurrency](../../mfc/reference/colecurrency-class.md) campi.  
  
 I valori possibili del **m_nOperation** sono:  
  
|Operazione|Descrizione|  
|---------------|-----------------|  
|**AddToParameterList**|Compila la **parametri** clausola dell'istruzione SQL.|  
|**AddToSelectList**|Compila la **selezionare** clausola dell'istruzione SQL.|  
|**BindField**|Associa un campo nel database in una posizione di memoria nell'applicazione.|  
|**BindParam**|Imposta i valori dei parametri per la query del recordset.|  
|**Correzione**|Imposta lo stato Null per un campo.|  
|**AllocCache**|Alloca la cache utilizzata per cercare "dirty" campi del recordset.|  
|**StoreField**|Salva il record corrente nella cache.|  
|**LoadField**|Ripristina le variabili di membro dati memorizzati nella cache del recordset.|  
|**FreeCache**|Libera la cache utilizzata per cercare "dirty" campi del recordset.|  
|**SetFieldNull**|Imposta lo stato di un campo su Null e il valore **PSEUDONULL**.|  
|**MarkForAddNew**|Contrassegna i campi "dirty" Se non **PSEUDONULL**.|  
|**MarkForEdit**|Contrassegna i campi "dirty" se la cache non corrispondono.|  
|**SetDirtyField**|Imposta campo valori contrassegnati come "dirty".|  
|**DumpField**|Trasferisce il contenuto del campo (solo debug).|  
|**MaxDFXOperation**|Utilizzato per il controllo di input.|  
  
##  <a name="m_prs"></a>  CDaoFieldExchange::m_prs  
 Contiene un puntatore ai [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) oggetto associato di `CDaoFieldExchange` oggetto.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setfieldtype"></a>  CDaoFieldExchange:: SetFieldType  
 Chiamare `SetFieldType` nella `CDaoRecordset` della classe `DoFieldExchange` eseguire l'override.  
  
```  
void SetFieldType(UINT nFieldType);
```  
  
### <a name="parameters"></a>Parametri  
 *nFieldType*  
 Il valore di **enum FieldType**, dichiarati nel `CDaoFieldExchange`, che può essere uno dei seguenti:  
  
- **CDaoFieldExchange::outputColumn**  
  
- **CDaoFieldExchange::param**  
  
### <a name="remarks"></a>Note  
 In genere, ClassWizard scrive automaticamente questa chiamata. Se si scrive la propria funzione e utilizza la procedura guidata per scrivere il `DoFieldExchange` funzione, aggiungere chiamate a una funzione personalizzata all'esterno della mappa di campo. Se non si utilizza la procedura guidata, non esisterà un mapping di campi. La chiamata precede le chiamate a funzioni DFX, uno per ogni membro della classe, dati di campo e identifica il tipo di campo come `CDaoFieldExchange::outputColumn`.  
  
 Se si parametrizzazione della classe recordset, è necessario aggiungere chiamate DFX per tutti i membri dati di parametro (all'esterno della mappa di campo) e anteporre queste chiamate con una chiamata a `SetFieldType`. Passare il valore `CDaoFieldExchange::param`. (Al contrario, è possibile utilizzare un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) e impostarne i valori di parametro.)  
  
 In generale, ogni gruppo DFX delle chiamate di funzione associata a membri dati di campi o membri dati di parametro deve essere preceduto da una chiamata a `SetFieldType`. Il `nFieldType` parametro di ciascuna `SetFieldType` chiamata identifica il tipo dei membri dati rappresentato dalle chiamate di funzione DFX che seguono il `SetFieldType` chiamare.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CDaoRecordset](../../mfc/reference/cdaorecordset-class.md)
