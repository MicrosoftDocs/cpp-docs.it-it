---
title: Classe classe COleInsertDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleInsertDialog
- AFXODLGS/COleInsertDialog
- AFXODLGS/COleInsertDialog::COleInsertDialog
- AFXODLGS/COleInsertDialog::CreateItem
- AFXODLGS/COleInsertDialog::DoModal
- AFXODLGS/COleInsertDialog::GetClassID
- AFXODLGS/COleInsertDialog::GetDrawAspect
- AFXODLGS/COleInsertDialog::GetIconicMetafile
- AFXODLGS/COleInsertDialog::GetPathName
- AFXODLGS/COleInsertDialog::GetSelectionType
- AFXODLGS/COleInsertDialog::m_io
dev_langs:
- C++
helpviewer_keywords:
- COleInsertDialog [MFC], COleInsertDialog
- COleInsertDialog [MFC], CreateItem
- COleInsertDialog [MFC], DoModal
- COleInsertDialog [MFC], GetClassID
- COleInsertDialog [MFC], GetDrawAspect
- COleInsertDialog [MFC], GetIconicMetafile
- COleInsertDialog [MFC], GetPathName
- COleInsertDialog [MFC], GetSelectionType
- COleInsertDialog [MFC], m_io
ms.assetid: a9ec610b-abde-431e-bd01-c40159a66dbb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 041b707bec58abeb19617fbfd275428ca2cf67e7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374881"
---
# <a name="coleinsertdialog-class"></a>Classe classe COleInsertDialog
Utilizzata per la finestra di dialogo di inserimento oggetto OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleInsertDialog : public COleDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleInsertDialog::COleInsertDialog](#coleinsertdialog)|Costruisce un oggetto `COleInsertDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleInsertDialog::CreateItem](#createitem)|Crea l'elemento selezionato nella finestra di dialogo.|  
|[COleInsertDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo di inserimento oggetto OLE.|  
|[COleInsertDialog::GetClassID](#getclassid)|Ottiene il **CLSID** associato all'elemento selezionato.|  
|[COleInsertDialog::GetDrawAspect](#getdrawaspect)|Indica se disegnare l'elemento come icona.|  
|[COleInsertDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato al form sotto forma di icona di questo elemento.|  
|[COleInsertDialog::GetPathName](#getpathname)|Ottiene il percorso completo del file selezionato nella finestra di dialogo.|  
|[COleInsertDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo di oggetto selezionato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleInsertDialog::m_io](#m_io)|Una struttura di tipo **OLEUIINSERTOBJECT** che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleInsertDialog` quando si desidera chiamare questa finestra di dialogo. Dopo un `COleInsertDialog` oggetto è stato creato, è possibile utilizzare il [m_io](#m_io) struttura per inizializzare i valori o stati dei controlli nella finestra di dialogo. Il `m_io` struttura è di tipo **OLEUIINSERTOBJECT**. Per ulteriori informazioni sull'utilizzo di questa classe di finestra di dialogo, vedere il [DoModal](#domodal) funzione membro.  
  
> [!NOTE]
>  Il codice dell'applicazione contenitore generato dalla procedura guidata utilizza questa classe.  
  
 Per ulteriori informazioni, vedere il [OLEUIINSERTOBJECT](http://msdn.microsoft.com/library/windows/desktop/ms691316) struttura in Windows SDK.  
  
 Per ulteriori informazioni riguardanti le finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleInsertDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="coleinsertdialog"></a>  COleInsertDialog::COleInsertDialog  
 Questa funzione crea solo un `COleInsertDialog` oggetto.  
  
```  
COleInsertDialog (
    DWORD dwFlags = IOF_SELECTCREATENEW,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Flag di creazione che include il numero dei valori seguenti combinati mediante l'operatore OR bit per bit:  
  
- **IOF_SHOWHELP** specifica che il pulsante della Guida verrà visualizzato quando viene chiamata la finestra di dialogo.  
  
- **IOF_SELECTCREATENEW** specifica che il pulsante di opzione Crea nuovo verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Questo è il valore predefinito e non può essere utilizzato con **IOF_SELECTCREATEFROMFILE**.  
  
- **IOF_SELECTCREATEFROMFILE** specifica che il pulsante di opzione di creazione da File verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Non può essere utilizzato con **IOF_SELECTCREATENEW**.  
  
- **IOF_CHECKLINK** specifica che la casella di controllo di collegamento vengono controllata inizialmente la finestra di dialogo viene chiamata.  
  
- **IOF_DISABLELINK** specifica che la casella di controllo di collegamento verrà disabilitata quando viene chiamata la finestra di dialogo.  
  
- **IOF_CHECKDISPLAYASICON** specifica che verrà controllata inizialmente la casella di controllo da visualizzare come icona, verrà visualizzata l'icona corrente e il pulsante dell'icona di modifica verrà abilitato quando viene chiamata la finestra di dialogo.  
  
- **IOF_VERIFYSERVERSEXIST** specifica che la finestra di dialogo deve convalidare le classi viene aggiunto alla casella di riepilogo, garantendo che i server specificati nel database di registrazione esistano prima che venga visualizzata la finestra di dialogo. Impostare questo flag può compromettere notevolmente le prestazioni.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è **NULL**, la finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
##  <a name="createitem"></a>  COleInsertDialog::CreateItem  
 Chiamare questa funzione per creare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md) solo se [DoModal](#domodal) restituisce **IDOK**.  
  
```  
BOOL CreateItem(COleClientItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Punta all'elemento da creare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stata creata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È necessario allocare il `COleClientItem` dell'oggetto prima di poter chiamare questa funzione.  
  
##  <a name="domodal"></a>  COleInsertDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo di inserimento oggetto OLE.  
  
```  
virtual INT_PTR   
    DoModal();

 
INT_PTR   
    DoModal(DWORD  dwFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Uno dei valori seguenti:  
  
 `COleInsertDialog::DocObjectsOnly` Inserisce solo DocObjects.  
  
 `COleInsertDialog::ControlsOnly` Inserisce solo i controlli ActiveX.  
  
 Zero inserisce DocObject né un controllo ActiveX. Questo valore corrisponde alla stessa implementazione come primo prototipo elencate in precedenza.  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
-   IDOK se la finestra di dialogo è stata visualizzata correttamente.  
  
-   IDCANCEL se l'utente ha annullato la finestra di dialogo.  
  
-   IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere il [OleUIInsertObject](http://msdn.microsoft.com/library/windows/desktop/ms694325) funzione in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_io](#m_io) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce IDOK, è possibile chiamare altri membri funzioni per recuperare le impostazioni o l'input di informazioni nella finestra di dialogo dall'utente.  
  
##  <a name="getclassid"></a>  COleInsertDialog::GetClassID  
 Chiamare questa funzione per ottenere il **CLSID** associata con l'elemento selezionato solo se [DoModal](#domodal) restituisce **IDOK** e il tipo di selezione è **classe COleInsertDialog:: createNewItem**.  
  
```  
REFCLSID GetClassID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il **CLSID** associato all'elemento selezionato.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) in Windows SDK.  
  
##  <a name="getdrawaspect"></a>  COleInsertDialog::GetDrawAspect  
 Chiamare questa funzione per determinare se l'utente sceglie di visualizzare l'elemento selezionato come icona.  
  
```  
DVASPECT GetDrawAspect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il metodo necessario per il rendering dell'oggetto.  
  
- `DVASPECT_CONTENT` Restituito se non è stata selezionata la casella di controllo da visualizzare come icona.  
  
- `DVASPECT_ICON` Restituito se è stata selezionata la casella di controllo da visualizzare come icona.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione solo se [DoModal](#domodal) restituisce **IDOK**.  
  
 Per ulteriori informazioni sulla creazione di aspetto, vedere [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura dei dati in Windows SDK.  
  
##  <a name="geticonicmetafile"></a>  COleInsertDialog::GetIconicMetafile  
 Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto delle icone dell'elemento selezionato.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile contenente l'aspetto delle icone dell'elemento selezionato, se la casella di controllo da visualizzare come icona selezionata quando è stata chiusa la finestra di dialogo scegliendo **OK**; in caso contrario **NULL**.  
  
##  <a name="getpathname"></a>  COleInsertDialog::GetPathName  
 Chiamare questa funzione per ottenere il percorso completo di solo se il file selezionato [DoModal](#domodal) restituisce **IDOK** e il tipo di selezione non **COleInsertDialog::createNewItem**.  
  
```  
CString GetPathName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso completo del file selezionato nella finestra di dialogo. Se il tipo di selezione è `createNewItem`, questa funzione restituisce un significativo `CString` in modalità di rilascio o genera un'asserzione in modalità di debug.  
  
##  <a name="getselectiontype"></a>  COleInsertDialog::GetSelectionType  
 Chiamare questa funzione per ottenere il tipo di selezione scelto quando è stata chiusa la finestra di dialogo Inserisci oggetto scegliendo **OK**.  
  
```  
UINT GetSelectionType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Tipo di selezione effettuata.  
  
### <a name="remarks"></a>Note  
 Vengono specificati i valori di tipo restituito per il **selezione** enumerazione tipo dichiarato nella `COleInsertDialog` classe.  
  
```  
enum Selection {
    createNewItem,
    insertFromFile,
    linkToFile
    };  
```  
  
 Seguono brevi descrizioni dei valori seguenti:  
  
- **COleInsertDialog::createNewItem** è stato selezionato la Crea nuovo pulsante di opzione.  
  
- **COleInsertDialog::insertFromFile** è stato selezionato il pulsante di opzione di creazione da File e non è stata selezionata la casella di controllo di collegamento.  
  
- **COleInsertDialog::linkToFile** è stato selezionato il pulsante di opzione di creazione da File e la casella di controllo di collegamento è stata archiviata.  
  
##  <a name="m_io"></a>  COleInsertDialog::m_io  
 Struttura di tipo **OLEUIINSERTOBJECT** consentono di controllare il comportamento della finestra di dialogo Inserisci oggetto.  
  
```  
OLEUIINSERTOBJECT m_io;  
```  
  
### <a name="remarks"></a>Note  
 Membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per ulteriori informazioni, vedere il [OLEUIINSERTOBJECT](http://msdn.microsoft.com/library/windows/desktop/ms691316) struttura in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)
