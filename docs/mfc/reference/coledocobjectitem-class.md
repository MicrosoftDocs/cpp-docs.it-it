---
title: Classe COleDocObjectItem | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleDocObjectItem
- AFXOLE/COleDocObjectItem
- AFXOLE/COleDocObjectItem::COleDocObjectItem
- AFXOLE/COleDocObjectItem::DoDefaultPrinting
- AFXOLE/COleDocObjectItem::ExecCommand
- AFXOLE/COleDocObjectItem::GetActiveView
- AFXOLE/COleDocObjectItem::GetPageCount
- AFXOLE/COleDocObjectItem::OnPreparePrinting
- AFXOLE/COleDocObjectItem::OnPrint
- AFXOLE/COleDocObjectItem::QueryCommand
- AFXOLE/COleDocObjectItem::Release
dev_langs:
- C++
helpviewer_keywords:
- COleDocObjectItem class
- document object containment
- containment
- containment, doc object
- doc object containment
ms.assetid: d150d306-8fd3-4831-b06d-afbe71d8fc9b
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 0815454fa4b194e97a2d16a621cfc25da61d5fd0
ms.lasthandoff: 02/24/2017

---
# <a name="coledocobjectitem-class"></a>Classe COleDocObjectItem
Implementa Active Document Containment.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDocObjectItem : public COleClientItem  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocObjectItem::COleDocObjectItem](#coledocobjectitem)|Costruisce un `COleDocObject` elemento.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDocObjectItem:: DoDefaultPrinting](#dodefaultprinting)|Stampa il documento dell'applicazione contenitore usando le impostazioni della stampante predefinita.|  
|[COleDocObjectItem::ExecCommand](#execcommand)|Esegue il comando specificato dall'utente.|  
|[COleDocObjectItem::GetActiveView](#getactiveview)|Recupera visualizzazione attiva del documento.|  
|[COleDocObjectItem::GetPageCount](#getpagecount)|Recupera il numero di pagine nel documento dell'applicazione contenitore.|  
|[COleDocObjectItem](#onprepareprinting)|Prepara il documento dell'applicazione contenitore per la stampa.|  
|[COleDocObjectItem](#onprint)|Stampa il documento dell'applicazione contenitore.|  
|[COleDocObjectItem::QueryCommand](#querycommand)|Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.|  
|[COleDocObjectItem::Release](#release)|Rilascia la connessione a un elemento collegato di OLE e lo chiude se è stato superato. Non elimina l'elemento client.|  
  
## <a name="remarks"></a>Note  
 In MFC, un documento attivo viene gestito in modo analogo a un normale, in posizione modificabile incorporamento, con le seguenti differenze:  
  
-   Il `COleDocument`-classe derivata ancora gestisce un elenco di elementi incorporati; tuttavia, questi elementi possono essere `COleDocObjectItem`-elementi derivati.  
  
-   Quando un documento attivo è attivo, occupa l'intera area client della visualizzazione quando è attiva.  
  
-   Un contenitore di documenti attivi dispone di controllo completo di **Guida** menu.  
  
-   Il **Guida** menu contiene voci di menu per il contenitore di documenti attivi e server.  
  
 Poiché il contenitore documento attivo possiede il **Guida** menu, il contenitore è responsabile per server di inoltro **Guida** messaggi menu al server. Questa integrazione è gestita da `COleDocObjectItem`.  
  
 Per ulteriori informazioni su attivazione di documento attivo e l'unione di menu, vedere Panoramica di [Active Document Containment](../../mfc/active-document-containment.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocItem](../../mfc/reference/cdocitem-class.md)  
  
 [COleClientItem](../../mfc/reference/coleclientitem-class.md)  
  
 `COleDocObjectItem`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXOLE. h  
  
##  <a name="coledocobjectitem"></a>COleDocObjectItem::COleDocObjectItem  
 Chiamare questa funzione membro per inizializzare il `COleDocObjectItem` oggetto.  
  
```  
COleDocObjectItem(COleDocument* pContainerDoc = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pContainerDoc`  
 Un puntatore per il `COleDocument` oggetto funge da contenitore di documenti attivi. Questo parametro deve essere **NULL** per abilitare **IMPLEMENT_SERIALIZE**. In genere elementi OLE vengono costruiti con un **NULL** puntatore al documento.  
  
##  <a name="dodefaultprinting"></a>COleDocObjectItem:: DoDefaultPrinting  
 Chiamato dal framework per un documento utilizzando le impostazioni predefinite.  
  
```  
static HRESULT DoDefaultPrinting(
    CView* pCaller,  
    CPrintInfo* pInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pCaller`  
 Un puntatore a un [CView](../../mfc/reference/cview-class.md) oggetto che invia il comando di stampa.  
  
 `pInfo`  
 Un puntatore a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) oggetto che descrive il processo di stampa.  
  
##  <a name="execcommand"></a>COleDocObjectItem::ExecCommand  
 Chiamare questa funzione membro per eseguire il comando specificato dall'utente.  
  
```  
HRESULT ExecCommand(
    DWORD nCmdID,  
    DWORD nCmdExecOpt = OLECMDEXECOPT_DONTPROMPTUSER,  
    const GUID* pguidCmdGroup = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nCmdID`  
 L'identificatore di comando da eseguire. È necessario appartenere al gruppo identificato da `pguidCmdGroup`.  
  
 `nCmdExecOpt`  
 Specifica le opzioni di esecuzione del comando. Per impostazione predefinita, impostare per eseguire il comando senza chiedere conferma all'utente. Vedere [OLECMDEXECOPT](http://msdn.microsoft.com/library/windows/desktop/ms683930) per un elenco di valori.  
  
 `pguidCmdGroup`  
 Identificatore univoco del gruppo di comando. Per impostazione predefinita, **NULL**, che specifica il gruppo di standard. Il comando passato `nCmdID` deve appartenere al gruppo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` se ha esito positivo; in caso contrario, restituisce uno dei seguenti codici di errore.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**E_UNEXPECTED**|Errore imprevisto.|  
|**E_FAIL**|Errore.|  
|**E_NOTIMPL**|Indica MFC stessa deve tentare di tradurre e inviare il comando.|  
|**OLECMDERR_E_UNKNOWNGROUP**|`pguidCmdGroup`è diverso da **NULL** ma non specifica un gruppo di comando riconosciuto.|  
|**OLECMDERR_E_NOTSUPPORTED**|`nCmdID`non è riconosciuto come un comando valido in pGroup il gruppo.|  
|**OLECMDERR_DISABLED**|Il comando identificato da `nCmdID` è disabilitato e non può essere eseguita.|  
|**OLECMDERR_NOHELP**|Chiamante richiesto per la Guida sul comando identificato da `nCmdID` ma non sono disponibili informazioni.|  
|**OLECMDERR_CANCELLED**|Esecuzione annullata dall'utente.|  
  
### <a name="remarks"></a>Note  
 Il `pguidCmdGroup` e `nCmdID` parametri insieme identificare in modo univoco il comando da richiamare. Il `nCmdExecOpt` parametro specifica l'esatta azione da intraprendere.  
  
##  <a name="getactiveview"></a>COleDocObjectItem::GetActiveView  
 Chiamare questa funzione per ottenere un puntatore a membro di `IOleDocumentView` interfaccia della visualizzazione attualmente attiva.  
  
```  
LPOLEDOCUMENTVIEW GetActiveView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [IOleDocumentView](http://msdn.microsoft.com/library/windows/desktop/ms678455) interfaccia della visualizzazione attualmente attiva. Se non vi è alcuna visualizzazione corrente, verrà restituito **NULL**.  
  
### <a name="remarks"></a>Note  
 Il conteggio dei riferimenti sull'oggetto restituito `IOleDocumentView` puntatore non viene incrementato prima che venga restituito da questa funzione.  
  
##  <a name="getpagecount"></a>COleDocObjectItem::GetPageCount  
 Chiamare questa funzione membro per recuperare il numero di pagine del documento.  
  
```  
BOOL GetPageCount(
    LPLONG pnFirstPage,  
    LPLONG pcPages);
```  
  
### <a name="parameters"></a>Parametri  
 *pnFirstPage*  
 Puntatore al numero di pagina prima del documento. Può essere **NULL**, che indica il chiamante non è necessario questo numero.  
  
 *pcPages*  
 Puntatore al numero totale di pagine del documento. Può essere **NULL**, che indica il chiamante non è necessario questo numero.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="onprepareprinting"></a>COleDocObjectItem  
 Questa funzione membro viene chiamata dal framework per preparare un documento per la stampa.  
  
```  
static BOOL OnPreparePrinting(
    CView* pCaller,  
    CPrintInfo* pInfo,  
    BOOL bPrintAll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pCaller`  
 Un puntatore a un [CView](../../mfc/reference/cview-class.md) oggetto che invia il comando di stampa.  
  
 `pInfo`  
 Un puntatore a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) oggetto che descrive il processo di stampa.  
  
 `bPrintAll`  
 Specifica se l'intero documento da stampare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="onprint"></a>COleDocObjectItem  
 Questa funzione membro viene chiamata dal framework per stampare un documento.  
  
```  
static void OnPrint(
    CView* pCaller,  
    CPrintInfo* pInfo,  
    BOOL bPrintAll = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pCaller`  
 Un puntatore a un oggetto CView che invia il comando di stampa.  
  
 `pInfo`  
 Un puntatore a un [CPrintInfo](../../mfc/reference/cprintinfo-structure.md) oggetto che descrive il processo di stampa.  
  
 `bPrintAll`  
 Specifica se l'intero documento da stampare.  
  
##  <a name="querycommand"></a>COleDocObjectItem::QueryCommand  
 Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.  
  
```  
HRESULT QueryCommand(
    ULONG nCmdID,  
    DWORD* pdwStatus,  
    OLECMDTEXT* pCmdText =NULL,  
    const GUID* pguidCmdGroup =NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nCmdID`  
 Identificatore del comando sottoposta a query.  
  
 `pdwStatus`  
 Un puntatore a flag restituiti in seguito alla query. Per un elenco di valori possibili, vedere [OLECMDF](http://msdn.microsoft.com/library/windows/desktop/ms695237).  
  
 `pCmdText`  
 Puntatore a un [OLECMDTEXT](http://msdn.microsoft.com/library/windows/desktop/ms693314) struttura in cui si desidera ottenere informazioni di nome e lo stato di un unico comando. Può essere **NULL** per indicare che il chiamante non è necessario queste informazioni.  
  
 `pguidCmdGroup`  
 Identificatore univoco del gruppo di comando; può essere **NULL** per specificare il gruppo standard.  
  
### <a name="return-value"></a>Valore restituito  
 Per un elenco completo dei valori restituiti, vedere [IOleCommandTarget::QueryStatus](http://msdn.microsoft.com/library/windows/desktop/ms688491) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità di [IOleCommandTarget::QueryStatus](http://msdn.microsoft.com/library/windows/desktop/ms688491) (metodo), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="release"></a>COleDocObjectItem::Release  
 Rilascia la connessione a un elemento collegato di OLE e lo chiude se è stato superato. Non elimina l'elemento client.  
  
```  
virtual void Release(OLECLOSE dwCloseOption = OLECLOSE_NOSAVE);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCloseOption`  
 Flag che specifica le condizioni dell'elemento OLE viene salvato quando torna allo stato caricato. Per un elenco di valori possibili, vedere [COleClientItem::Close](../../mfc/reference/coleclientitem-class.md#close).  
  
### <a name="remarks"></a>Note  
 Non elimina l'elemento client.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MFCBIND](../../visual-cpp-samples.md)   
 [Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)   
 [Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)

