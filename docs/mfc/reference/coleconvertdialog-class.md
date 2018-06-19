---
title: Classe classe COleConvertDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleConvertDialog
- AFXODLGS/COleConvertDialog
- AFXODLGS/COleConvertDialog::COleConvertDialog
- AFXODLGS/COleConvertDialog::DoConvert
- AFXODLGS/COleConvertDialog::DoModal
- AFXODLGS/COleConvertDialog::GetClassID
- AFXODLGS/COleConvertDialog::GetDrawAspect
- AFXODLGS/COleConvertDialog::GetIconicMetafile
- AFXODLGS/COleConvertDialog::GetSelectionType
- AFXODLGS/COleConvertDialog::m_cv
dev_langs:
- C++
helpviewer_keywords:
- COleConvertDialog [MFC], COleConvertDialog
- COleConvertDialog [MFC], DoConvert
- COleConvertDialog [MFC], DoModal
- COleConvertDialog [MFC], GetClassID
- COleConvertDialog [MFC], GetDrawAspect
- COleConvertDialog [MFC], GetIconicMetafile
- COleConvertDialog [MFC], GetSelectionType
- COleConvertDialog [MFC], m_cv
ms.assetid: a7c57714-31e8-4b78-834d-8ddd1b856a1c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 90453d4e8550038493545b691c978b59bda90fad
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33370289"
---
# <a name="coleconvertdialog-class"></a>Classe classe COleConvertDialog
Per ulteriori informazioni, vedere il [OLEUICONVERT](http://msdn.microsoft.com/library/windows/desktop/ms686657) struttura in Windows SDK.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleConvertDialog : public COleDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleConvertDialog::COleConvertDialog](#coleconvertdialog)|Costruisce un oggetto `COleConvertDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleConvertDialog::DoConvert](#doconvert)|Esegue la conversione specificata nella finestra di dialogo.|  
|[COleConvertDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo OLE Modifica elemento.|  
|[COleConvertDialog::GetClassID](#getclassid)|Ottiene il **CLSID** associato all'elemento selezionato.|  
|[COleConvertDialog::GetDrawAspect](#getdrawaspect)|Specifica se disegnare elementi come un'icona.|  
|[COleConvertDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato al form sotto forma di icona di questo elemento.|  
|[COleConvertDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo dell'opzione selezionata.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleConvertDialog::m_cv](#m_cv)|Struttura che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il codice dell'applicazione contenitore generato dalla procedura guidata utilizza questa classe.  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleConvertDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="coleconvertdialog"></a>  COleConvertDialog::COleConvertDialog  
 Crea solo un `COleConvertDialog` oggetto.  
  
```  
explicit COleConvertDialog (
    COleClientItem* pItem,
    DWORD dwFlags = CF_SELECTCONVERTTO,
    CLSID* pClassID = NULL,
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Punta all'elemento da convertire o attivato.  
  
 `dwFlags`  
 Flag di creazione, che include il numero dei valori seguenti combinati tramite bit per bit-operatore or:  
  
- **CF_SELECTCONVERTTO** specifica che il pulsante di opzione Converti in verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Questa è l'impostazione predefinita.  
  
- **CF_SELECTACTIVATEAS** specifica che il pulsante di opzione attivare come verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.  
  
- **CF_SETCONVERTDEFAULT** specifica che la classe il cui **CLSID** specificato dal **clsidConvertDefault** appartenente il `m_cv` struttura verrà utilizzata come la selezione predefinita Nell'elenco di classi quando Converti in pulsante di opzione è selezionata.  
  
- **CF_SETACTIVATEDEFAULT** specifica che la classe di cui **CLSID** specificato dal **clsidActivateDefault** membro del `m_cv` struttura verrà utilizzata come impostazione predefinita selezione nella casella di riepilogo di classe quando attivare come pulsante di opzione è selezionata.  
  
- **CF_SHOWHELPBUTTON** specifica che il pulsante della Guida verrà visualizzato quando viene chiamata la finestra di dialogo.  
  
 `pClassID`  
 Punta al CLSID dell'elemento da convertire o attivato. Se **NULL**, **CLSID** associato `pItem` verrà utilizzato.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è **NULL**, la finestra padre della finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
 Per ulteriori informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) e [OLEUICONVERT](http://msdn.microsoft.com/library/windows/desktop/ms686657) struttura.  
  
##  <a name="doconvert"></a>  COleConvertDialog::DoConvert  
 Chiamare questa funzione, dopo aver restituito correttamente dal [DoModal](#domodal)da convertire, oppure di attivare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md).  
  
```  
BOOL DoConvert(COleClientItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Punta all'elemento da convertire o attivato. Non può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'elemento viene convertito o attivato in base alle informazioni selezionate dall'utente nella finestra di dialogo Converti.  
  
##  <a name="domodal"></a>  COleConvertDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo Converti OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se la finestra di dialogo è stata visualizzata correttamente.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere il [OleUIConvert](http://msdn.microsoft.com/library/windows/desktop/ms680694) funzione in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_cv](#m_cv) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare le funzioni per recuperare le impostazioni o informazioni che è stato immesso dall'utente nella finestra di dialogo altri membri.  
  
##  <a name="getclassid"></a>  COleConvertDialog::GetClassID  
 Chiamare questa funzione per ottenere il **CLSID** associato all'elemento selezionato nella finestra di dialogo Converti dall'utente.  
  
```  
REFCLSID GetClassID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il **CLSID** associato all'elemento selezionato nella finestra di dialogo Converti.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce **IDOK**.  
  
 Per ulteriori informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) in Windows SDK.  
  
##  <a name="getdrawaspect"></a>  COleConvertDialog::GetDrawAspect  
 Chiamare questa funzione per determinare se l'utente sceglie di visualizzare l'elemento selezionato come icona.  
  
```  
DVASPECT GetDrawAspect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il metodo necessario per il rendering dell'oggetto.  
  
- `DVASPECT_CONTENT` Restituito se non è stata selezionata la casella di controllo da visualizzare come icona.  
  
- `DVASPECT_ICON` Restituito se è stata selezionata la casella di controllo da visualizzare come icona.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce **IDOK**.  
  
 Per ulteriori informazioni sulla creazione di aspetto, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura dei dati in Windows SDK.  
  
##  <a name="geticonicmetafile"></a>  COleConvertDialog::GetIconicMetafile  
 Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto delle icone dell'elemento selezionato.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile contenente l'aspetto delle icone dell'elemento selezionato, se la casella di controllo da visualizzare come icona selezionata quando è stata chiusa la finestra di dialogo scegliendo **OK**; in caso contrario **NULL**.  
  
##  <a name="getselectiontype"></a>  COleConvertDialog::GetSelectionType  
 Chiamare questa funzione per determinare il tipo di conversione selezionato nella finestra di dialogo Converti.  
  
```  
UINT GetSelectionType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Tipo di selezione effettuata.  
  
### <a name="remarks"></a>Note  
 Vengono specificati i valori di tipo restituito per il **selezione** enumerazione tipo dichiarato nella `COleConvertDialog` classe.  
  
```  
enum Selection {
    noConversion,
    convertItem,
    activateAs
    };  
```  
  
 Seguono brevi descrizioni dei valori seguenti:  
  
- **COleConvertDialog::noConversion** restituito se la finestra di dialogo è stata annullata o che l'utente ha selezionato alcuna conversione. Se `COleConvertDialog::DoModal` restituito **IDOK**, è possibile che l'utente ha selezionato un'icona diversa rispetto a quello selezionato in precedenza.  
  
- **COleConvertDialog::convertItem** restituito se è stato selezionato il pulsante di opzione Converti in, l'utente ha selezionato un elemento diverso da convertire in, e `DoModal` restituito **IDOK**.  
  
- **COleConvertDialog::activateAs** restituito se il pulsante di opzione attivare come è stato selezionato, l'utente ha selezionato un elemento diverso da attivare, e `DoModal` restituito **IDOK**.  
  
##  <a name="m_cv"></a>  COleConvertDialog::m_cv  
 Struttura di tipo **OLEUICONVERT** consentono di controllare il comportamento della finestra di dialogo Converti.  
  
```  
OLEUICONVERT m_cv;  
```  
  
### <a name="remarks"></a>Note  
 Membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per ulteriori informazioni, vedere il [OLEUICONVERT](http://msdn.microsoft.com/library/windows/desktop/ms686657) struttura in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)
