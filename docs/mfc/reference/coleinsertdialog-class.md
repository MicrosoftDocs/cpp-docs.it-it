---
title: Classe classe COleInsertDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- OLE Insert Object dialog box
- dialog boxes, OLE
- COleInsertDialog class
- Insert Object dialog box
ms.assetid: a9ec610b-abde-431e-bd01-c40159a66dbb
caps.latest.revision: 24
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 078f421dacc79ff929249cd35c520b0c4d4a222e
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="coleinsertdialog-class"></a>Classe COleInsertDialog (classe)
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
|[COleInsertDialog::DoModal](#domodal)|Visualizza la finestra di dialogo di inserimento oggetto OLE.|  
|[COleInsertDialog::GetClassID](#getclassid)|Ottiene il **CLSID** associato all'elemento selezionato.|  
|[COleInsertDialog::GetDrawAspect](#getdrawaspect)|Indica se disegnare l'elemento come icona.|  
|[COleInsertDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato con il formato delle icone di questo elemento.|  
|[COleInsertDialog::GetPathName](#getpathname)|Ottiene il percorso completo del file selezionato nella finestra di dialogo.|  
|[COleInsertDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo di oggetto selezionato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleInsertDialog::m_io](#m_io)|Una struttura di tipo **OLEUIINSERTOBJECT** che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleInsertDialog` quando si desidera chiamare questa finestra di dialogo. Dopo un `COleInsertDialog` oggetto è stato costruito, è possibile utilizzare il [m_io](#m_io) struttura per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. Il `m_io` struttura è di tipo **OLEUIINSERTOBJECT**. Per ulteriori informazioni sull'utilizzo di questa classe di finestra di dialogo, vedere il [DoModal](#domodal) funzione membro.  
  
> [!NOTE]
>  Il codice dell'applicazione generato dalla procedura guidata contenitore utilizza questa classe.  
  
 Per ulteriori informazioni, vedere il [OLEUIINSERTOBJECT](http://msdn.microsoft.com/library/windows/desktop/ms691316) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
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
  
##  <a name="coleinsertdialog"></a>COleInsertDialog::COleInsertDialog  
 Questa funzione crea solo un `COleInsertDialog` oggetto.  
  
```  
COleInsertDialog (
    DWORD dwFlags = IOF_SELECTCREATENEW,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Flag di creazione che contiene un numero qualsiasi dei seguenti valori per essere combinati utilizzando l'operatore OR bit per bit:  
  
- **IOF_SHOWHELP** specifica che verrà visualizzato il pulsante della Guida in linea quando viene chiamata nella finestra di dialogo.  
  
- **IOF_SELECTCREATENEW** specifica che il nuovo pulsante di opzione verrà selezionato inizialmente quando viene chiamata nella finestra di dialogo. Questo è l'impostazione predefinita e non può essere utilizzato con **IOF_SELECTCREATEFROMFILE**.  
  
- **IOF_SELECTCREATEFROMFILE** specifica che il pulsante di opzione di creazione da File venga selezionato inizialmente quando viene chiamata nella finestra di dialogo. Non può essere utilizzato con **IOF_SELECTCREATENEW**.  
  
- **IOF_CHECKLINK** specifica che la casella di controllo di collegamento verrà verificata inizialmente quando viene chiamata nella finestra di dialogo.  
  
- **IOF_DISABLELINK** specifica che la casella di controllo di collegamento verrà disabilitata quando viene chiamata nella finestra di dialogo.  
  
- **IOF_CHECKDISPLAYASICON** specifica che verrà verificata inizialmente la casella di controllo Mostra come icona, verrà visualizzata l'icona corrente e verrà attivato il pulsante con icona di modifica quando viene chiamata nella finestra di dialogo.  
  
- **IOF_VERIFYSERVERSEXIST** specifica che la finestra di dialogo deve convalidare le classi viene aggiunto alla casella di riepilogo, garantendo che i server specificati nel database di registrazione esistano prima che venga visualizzata la finestra di dialogo. Impostare questo flag può compromettere notevolmente le prestazioni.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, la finestra padre dell'oggetto finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
##  <a name="createitem"></a>COleInsertDialog::CreateItem  
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
  
##  <a name="domodal"></a>COleInsertDialog::DoModal  
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
  
 `COleInsertDialog::DocObjectsOnly`Inserisce solo DocObjects.  
  
 `COleInsertDialog::ControlsOnly`Consente di inserire solo i controlli ActiveX.  
  
 Zero inserisce DocObject né un controllo ActiveX. Questo valore corrisponde alla stessa implementazione come il primo prototipo elencate in precedenza.  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
-   IDOK se è stata visualizzata correttamente nella finestra di dialogo.  
  
-   IDCANCEL se l'utente ha annullato la finestra di dialogo.  
  
-   IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere il [OleUIInsertObject](http://msdn.microsoft.com/library/windows/desktop/ms694325) in funzione il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri di [m_io](#m_io) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce IDOK, è possibile chiamare altri membri funzioni per recuperare le impostazioni o input informazioni nella finestra di dialogo dall'utente.  
  
##  <a name="getclassid"></a>COleInsertDialog::GetClassID  
 Chiamare questa funzione per ottenere il **CLSID** associato l'elemento selezionato solo se [DoModal](#domodal) restituisce **IDOK** e il tipo di selezione è **COleInsertDialog::createNewItem**.  
  
```  
REFCLSID GetClassID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il **CLSID** associato all'elemento selezionato.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getdrawaspect"></a>COleInsertDialog::GetDrawAspect  
 Chiamare questa funzione per determinare se l'utente sceglie di visualizzare l'elemento selezionato come icona.  
  
```  
DVASPECT GetDrawAspect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il metodo necessario per il rendering dell'oggetto.  
  
- `DVASPECT_CONTENT`Restituito se la casella di controllo Mostra come icona non è stata selezionata.  
  
- `DVASPECT_ICON`Restituito se è stata selezionata la casella di controllo Mostra come icona.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione solo se [DoModal](#domodal) restituisce **IDOK**.  
  
 Per ulteriori informazioni sulla creazione di aspetto, vedere [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nella struttura dei dati di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="geticonicmetafile"></a>COleInsertDialog::GetIconicMetafile  
 Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto delle icone dell'elemento selezionato.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile contenente l'aspetto delle icone dell'elemento selezionato, se la casella di controllo Mostra come icona è stata selezionata quando è stata chiusa la finestra di dialogo scegliendo **OK**; in caso contrario **NULL**.  
  
##  <a name="getpathname"></a>COleInsertDialog::GetPathName  
 Chiamare questa funzione per ottenere il percorso completo del solo se file selezionato [DoModal](#domodal) restituisce **IDOK** e il tipo di selezione non **COleInsertDialog::createNewItem**.  
  
```  
CString GetPathName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso completo del file selezionato nella finestra di dialogo. Se il tipo di selezione è `createNewItem`, questa funzione restituisce un inutile `CString` in modalità di rilascio o genera un'asserzione in modalità debug.  
  
##  <a name="getselectiontype"></a>COleInsertDialog::GetSelectionType  
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
  
- **COleInsertDialog::createNewItem** nuovo il pulsante di opzione è stata selezionata.  
  
- **COleInsertDialog::insertFromFile** è stato selezionato il pulsante di opzione di creazione da File e non è stata selezionata la casella di controllo di collegamento.  
  
- **COleInsertDialog::linkToFile** è stato selezionato il pulsante di opzione di creazione da File ed è stata selezionata la casella di controllo di collegamento.  
  
##  <a name="m_io"></a>COleInsertDialog::m_io  
 Struttura di tipo **OLEUIINSERTOBJECT** utilizzato per controllare il comportamento della finestra di dialogo Inserisci oggetto.  
  
```  
OLEUIINSERTOBJECT m_io;  
```  
  
### <a name="remarks"></a>Note  
 I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per ulteriori informazioni, vedere il [OLEUIINSERTOBJECT](http://msdn.microsoft.com/library/windows/desktop/ms691316) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)

