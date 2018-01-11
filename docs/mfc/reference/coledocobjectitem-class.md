---
title: Classe COleDocObjectItem | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
helpviewer_keywords:
- COleDocObjectItem [MFC], COleDocObjectItem
- COleDocObjectItem [MFC], DoDefaultPrinting
- COleDocObjectItem [MFC], ExecCommand
- COleDocObjectItem [MFC], GetActiveView
- COleDocObjectItem [MFC], GetPageCount
- COleDocObjectItem [MFC], OnPreparePrinting
- COleDocObjectItem [MFC], OnPrint
- COleDocObjectItem [MFC], QueryCommand
- COleDocObjectItem [MFC], Release
ms.assetid: d150d306-8fd3-4831-b06d-afbe71d8fc9b
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 246c645dad5ed11fb5428e2f90ed9b9574696417
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[COleDocObjectItem:: DoDefaultPrinting](#dodefaultprinting)|Stampa il documento dell'applicazione contenitore usando le impostazioni predefinite della stampante.|  
|[COleDocObjectItem::ExecCommand](#execcommand)|Esegue il comando specificato dall'utente.|  
|[COleDocObjectItem::GetActiveView](#getactiveview)|Recupera la visualizzazione attiva del documento.|  
|[COleDocObjectItem::GetPageCount](#getpagecount)|Recupera il numero di pagine nel documento dell'applicazione contenitore.|  
|[COleDocObjectItem](#onprepareprinting)|Prepara il documento dell'applicazione contenitore per la stampa.|  
|[COleDocObjectItem](#onprint)|Stampa il documento dell'applicazione contenitore.|  
|[COleDocObjectItem::QueryCommand](#querycommand)|Query per lo stato di uno o più comandi generati dagli eventi dell'interfaccia utente.|  
|[COleDocObjectItem::Release](#release)|Rilascia la connessione a un elemento collegato di OLE e chiude se era aperta. Non elimina l'elemento client.|  
  
## <a name="remarks"></a>Note  
 In MFC, un documento attivo viene gestito in modo analogo a una normale, sul posto modificabile incorporamento, con le differenze seguenti:  
  
-   Il `COleDocument`-classe derivata ancora gestisce un elenco di elementi incorporati; tuttavia, questi elementi possono essere `COleDocObjectItem`-elementi derivati.  
  
-   Quando un documento attivo è attivo, occupa l'intera area client della vista quando è attiva.  
  
-   Un contenitore di documenti attivi dispone del controllo completo di **Guida** menu.  
  
-   Il **Guida** menu contiene voci di menu per il contenitore di documenti attivi e il server.  
  
 Poiché il contenitore documento attivo possiede il **Guida** menu, il contenitore è responsabile per il server di inoltro **Guida** messaggi menu al server. Questa integrazione è gestita da `COleDocObjectItem`.  
  
 Per informazioni sull'unione di menu e attivazione del documento attivo, vedere la panoramica di [Active Document Containment](../../mfc/active-document-containment.md).  
  
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
 Un puntatore al `COleDocument` oggetto funge da contenitore di documenti attivi. Questo parametro deve essere **NULL** per abilitare **IMPLEMENT_SERIALIZE**. In genere elementi OLE sono costruiti con un non - **NULL** puntatore al documento.  
  
##  <a name="dodefaultprinting"></a>COleDocObjectItem:: DoDefaultPrinting  
 Chiamato dal framework per un documento usando le impostazioni predefinite.  
  
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
 L'identificatore di comando da eseguire. Deve essere il gruppo identificato da `pguidCmdGroup`.  
  
 `nCmdExecOpt`  
 Specifica le opzioni di esecuzione del comando. Per impostazione predefinita, impostato per eseguire il comando senza chiedere conferma all'utente. Vedere [OLECMDEXECOPT](http://msdn.microsoft.com/library/windows/desktop/ms683930) per un elenco di valori.  
  
 `pguidCmdGroup`  
 Identificatore univoco del gruppo di comando. Per impostazione predefinita, **NULL**, che consente di specificare il gruppo standard. Il comando passato `nCmdID` deve appartenere al gruppo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK` se ha esito positivo; in caso contrario, restituisce uno dei seguenti codici di errore.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**E_UNEXPECTED**|Si è verificato un errore imprevisto.|  
|**E_FAIL**|Errore.|  
|**E_NOTIMPL**|Indica di MFC stesso deve tentare di tradurre e inviare il comando.|  
|**OLECMDERR_E_UNKNOWNGROUP**|`pguidCmdGroup`è diverso da **NULL** ma non specifica un gruppo di comando riconosciuto.|  
|**OLECMDERR_E_NOTSUPPORTED**|`nCmdID`non è riconosciuto come comando valido in pGroup il gruppo.|  
|**OLECMDERR_DISABLED**|Il comando identificato dal `nCmdID` è disabilitato e non può essere eseguita.|  
|**OLECMDERR_NOHELP**|Chiamante richiesto per la Guida sul comando identificato da `nCmdID` ma non sono disponibili informazioni.|  
|**OLECMDERR_CANCELLED**|L'utente ha annullato l'esecuzione.|  
  
### <a name="remarks"></a>Note  
 Il `pguidCmdGroup` e `nCmdID` parametri insieme identificare in modo univoco il comando da richiamare. Il `nCmdExecOpt` parametro specifica l'azione da intraprendere esatto.  
  
##  <a name="getactiveview"></a>COleDocObjectItem::GetActiveView  
 Chiamare questa funzione membro per ottenere un puntatore per il `IOleDocumentView` interfaccia della visualizzazione attualmente attiva.  
  
```  
LPOLEDOCUMENTVIEW GetActiveView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al [IOleDocumentView](http://msdn.microsoft.com/library/windows/desktop/ms678455) interfaccia della visualizzazione attualmente attiva. Se non è presente alcuna visualizzazione corrente, restituisce **NULL**.  
  
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
 Identificatore del comando sottoposto a query.  
  
 `pdwStatus`  
 Puntatore a flag restituiti come risultato della query. Per un elenco di valori possibili, vedere [OLECMDF](http://msdn.microsoft.com/library/windows/desktop/ms695237).  
  
 `pCmdText`  
 Puntatore a un [OLECMDTEXT](http://msdn.microsoft.com/library/windows/desktop/ms693314) struttura in cui si desidera restituire le informazioni di nome e lo stato per un singolo comando. Può essere **NULL** per indicare che il chiamante non è necessario queste informazioni.  
  
 `pguidCmdGroup`  
 Identificatore univoco del gruppo di comandi; può essere **NULL** per specificare il gruppo standard.  
  
### <a name="return-value"></a>Valore restituito  
 Per un elenco completo dei valori restituiti, vedere [IOleCommandTarget::QueryStatus](http://msdn.microsoft.com/library/windows/desktop/ms688491) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del [IOleCommandTarget::QueryStatus](http://msdn.microsoft.com/library/windows/desktop/ms688491) (metodo), come descritto in Windows SDK.  
  
##  <a name="release"></a>COleDocObjectItem::Release  
 Rilascia la connessione a un elemento collegato di OLE e chiude se era aperta. Non elimina l'elemento client.  
  
```  
virtual void Release(OLECLOSE dwCloseOption = OLECLOSE_NOSAVE);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCloseOption`  
 Flag che specifica le condizioni dell'elemento OLE viene salvato quando ritorna allo stato caricato. Per un elenco di valori possibili, vedere [COleClientItem::Close](../../mfc/reference/coleclientitem-class.md#close).  
  
### <a name="remarks"></a>Note  
 Non elimina l'elemento client.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MFCBIND](../../visual-cpp-samples.md)   
 [Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleClientItem](../../mfc/reference/coleclientitem-class.md)   
 [Classe CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md)
