---
title: Classe classe COlePasteSpecialDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COlePasteSpecialDialog
- AFXODLGS/COlePasteSpecialDialog
- AFXODLGS/COlePasteSpecialDialog::COlePasteSpecialDialog
- AFXODLGS/COlePasteSpecialDialog::AddFormat
- AFXODLGS/COlePasteSpecialDialog::AddLinkEntry
- AFXODLGS/COlePasteSpecialDialog::AddStandardFormats
- AFXODLGS/COlePasteSpecialDialog::CreateItem
- AFXODLGS/COlePasteSpecialDialog::DoModal
- AFXODLGS/COlePasteSpecialDialog::GetDrawAspect
- AFXODLGS/COlePasteSpecialDialog::GetIconicMetafile
- AFXODLGS/COlePasteSpecialDialog::GetPasteIndex
- AFXODLGS/COlePasteSpecialDialog::GetSelectionType
- AFXODLGS/COlePasteSpecialDialog::m_ps
dev_langs:
- C++
helpviewer_keywords:
- COlePasteSpecialDialog [MFC], COlePasteSpecialDialog
- COlePasteSpecialDialog [MFC], AddFormat
- COlePasteSpecialDialog [MFC], AddLinkEntry
- COlePasteSpecialDialog [MFC], AddStandardFormats
- COlePasteSpecialDialog [MFC], CreateItem
- COlePasteSpecialDialog [MFC], DoModal
- COlePasteSpecialDialog [MFC], GetDrawAspect
- COlePasteSpecialDialog [MFC], GetIconicMetafile
- COlePasteSpecialDialog [MFC], GetPasteIndex
- COlePasteSpecialDialog [MFC], GetSelectionType
- COlePasteSpecialDialog [MFC], m_ps
ms.assetid: 0e82ef9a-9bbe-457e-8240-42c86a0534f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5e2e668a2ad15ec9ec2fb779be32d35c17eb57cc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374357"
---
# <a name="colepastespecialdialog-class"></a>Classe classe COlePasteSpecialDialog
Utilizzata per la finestra di dialogo incolla speciale OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COlePasteSpecialDialog : public COleDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePasteSpecialDialog::COlePasteSpecialDialog](#colepastespecialdialog)|Costruisce un oggetto `COlePasteSpecialDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePasteSpecialDialog::AddFormat](#addformat)|Aggiunge all'elenco dei formati che l'applicazione può inserire formati personalizzati.|  
|[COlePasteSpecialDialog::AddLinkEntry](#addlinkentry)|Aggiunge una nuova voce all'elenco dei formati degli Appunti supportati.|  
|[COlePasteSpecialDialog::AddStandardFormats](#addstandardformats)|Aggiunge **CF_BITMAP**, **CF_DIB**, `CF_METAFILEPICT`e facoltativamente `CF_LINKSOURCE` all'elenco dei formati di applicazione è possibile incollare.|  
|[COlePasteSpecialDialog::CreateItem](#createitem)|Crea l'elemento nel documento contenitore usando il formato specificato.|  
|[COlePasteSpecialDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo Incolla speciale OLE.|  
|[COlePasteSpecialDialog::GetDrawAspect](#getdrawaspect)|Indica se disegnare elementi come un'icona o non.|  
|[COlePasteSpecialDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato al form sotto forma di icona di questo elemento.|  
|[COlePasteSpecialDialog::GetPasteIndex](#getpasteindex)|Ottiene l'indice delle opzioni Incolla disponibili che è stato scelto dall'utente.|  
|[COlePasteSpecialDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo dell'opzione selezionata.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COlePasteSpecialDialog::m_ps](#m_ps)|Una struttura di tipo **OLEUIPASTESPECIAL** che controlla la funzione nella finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COlePasteSpecialDialog` quando si desidera chiamare questa finestra di dialogo. Dopo un `COlePasteSpecialDialog` oggetto è stato creato, è possibile utilizzare il [AddFormat](#addformat) e [AddStandardFormats](#addstandardformats) funzioni membro per aggiungere i formati degli Appunti nella finestra di dialogo. È inoltre possibile utilizzare il [m_ps](#m_ps) struttura per inizializzare i valori o stati dei controlli nella finestra di dialogo. Il `m_ps` struttura è di tipo **OLEUIPASTESPECIAL**.  
  
 Per ulteriori informazioni, vedere il [OLEUIPASTESPECIAL](http://msdn.microsoft.com/library/windows/desktop/ms692434) struttura in Windows SDK.  
  
 Per ulteriori informazioni riguardanti le finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COlePasteSpecialDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="addformat"></a>  COlePasteSpecialDialog::AddFormat  
 Chiamare questa funzione per aggiungere nuovi formati per l'elenco dei formati che può supportare l'applicazione in un'operazione di Incolla speciale.  
  
```  
void AddFormat(
    const FORMATETC& formatEtc,  
    LPTSTR lpszFormat,  
    LPTSTR lpszResult,  
    DWORD flags);

 
void AddFormat(
    UINT cf,  
    DWORD tymed,  
    UINT nFormatID,  
    BOOL bEnableIcon,  
    BOOL bLink);
```  
  
### <a name="parameters"></a>Parametri  
 *FMT*  
 Riferimento al tipo di dati da aggiungere.  
  
 `lpszFormat`  
 Stringa che descrive il formato per l'utente.  
  
 *lpszResult*  
 Stringa che descrive il risultato, se si sceglie questo formato nella finestra di dialogo.  
  
 `flags`  
 I diversi collegamento e incorporamento opzioni disponibili per questo formato. Questo flag è una combinazione bit per bit di uno o più dei diversi valori di **OLEUIPASTEFLAG** tipo enumerato.  
  
 `cf`  
 Il formato degli Appunti da aggiungere.  
  
 *TYMED*  
 I tipi di supporto disponibili in questo formato. Questa è una combinazione bit per bit di uno o più dei valori di **TYMED** tipo enumerato.  
  
 `nFormatID`  
 L'ID della stringa che identifica questo formato. Il formato di questa stringa è di due stringhe separate, separate da un carattere '\n'. Prima stringa corrisponde a quello che viene passato nel *lpstrFormat* parametro e il secondo è quello di *lpstrResult* parametro.  
  
 *bEnableIcon*  
 Flag che determina se la casella di controllo da visualizzare come icona è abilitata quando si sceglie il formato seguente nella casella di riepilogo.  
  
 *bLink*  
 Flag che determina se è abilitato il pulsante di opzione Incolla collegamento quando si sceglie il formato seguente nella casella di riepilogo.  
  
### <a name="remarks"></a>Note  
 Questa funzione può essere chiamata per aggiungere, ad esempio nessuno dei formati standard **CF_TEXT** o **CF_TIFF** o formati personalizzati che l'applicazione è registrata con il sistema. Per ulteriori informazioni su incollare gli oggetti di dati nell'applicazione, vedere l'articolo [oggetti dati e origini dati: modifica](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 Per ulteriori informazioni, vedere il [TYMED](http://msdn.microsoft.com/library/windows/desktop/ms691227) tipo di enumerazione e [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura in Windows SDK.  
  
 Per ulteriori informazioni, vedere il [OLEUIPASTEFLAG](http://msdn.microsoft.com/library/windows/desktop/ms682172) in Windows SDK tipo enumerato.  
  
##  <a name="addlinkentry"></a>  COlePasteSpecialDialog::AddLinkEntry  
 Aggiunge una nuova voce all'elenco dei formati degli Appunti supportati.  
  
```  
OLEUIPASTEFLAG AddLinkEntry(UINT cf);
```  
  
### <a name="parameters"></a>Parametri  
 `cf`  
 Il formato degli Appunti da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Un [OLEUIPASTEFLAG](http://msdn.microsoft.com/library/windows/desktop/ms682172) struttura contenente le informazioni per la nuova voce di collegamento.  
  
##  <a name="addstandardformats"></a>  COlePasteSpecialDialog::AddStandardFormats  
 Chiamare questa funzione per aggiungere i seguenti formati degli Appunti all'elenco dei formati che può supportare l'applicazione in un'operazione di Incolla speciale:  
  
```  
void AddStandardFormats(BOOL bEnableLink = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bEnableLink*  
 Flag che determina se aggiungere `CF_LINKSOURCE` all'elenco dei formati di applicazione è possibile incollare.  
  
### <a name="remarks"></a>Note  
  
- **CF_BITMAP**  
  
- **CF_DIB**  
  
- `CF_METAFILEPICT`  
  
- **"Incorporato"**  
  
-   (facoltativo) **"Link origine"**  
  
 Questi formati vengono utilizzati per supportare l'incorporamento e collegamento.  
  
##  <a name="colepastespecialdialog"></a>  COlePasteSpecialDialog::COlePasteSpecialDialog  
 Costruisce un oggetto `COlePasteSpecialDialog`.  
  
```  
COlePasteSpecialDialog(
    DWORD dwFlags = PSF_SELECTPASTE,  
    COleDataObject* pDataObject = NULL,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Flag di creazione, include il numero dei flag seguenti combinati tramite l'operatore OR bit per bit:  
  
- `PSF_SELECTPASTE` Specifica che il pulsante di opzione Incolla verrà verificato inizialmente la finestra di dialogo viene chiamata. Non può essere utilizzato in combinazione con `PSF_SELECTPASTELINK`. Questa è l'impostazione predefinita.  
  
- `PSF_SELECTPASTELINK` Specifica che il pulsante di opzione saranno Incolla collegamento inizialmente verificata quando viene chiamata nella finestra di dialogo. Non può essere utilizzato in combinazione con `PSF_SELECTPASTE`.  
  
- `PSF_CHECKDISPLAYASICON` Specifica che la casella di controllo da visualizzare come icona verrà verificata inizialmente la finestra di dialogo viene chiamata.  
  
- `PSF_SHOWHELP` Specifica che il pulsante della Guida verrà visualizzato quando viene chiamata la finestra di dialogo.  
  
 `pDataObject`  
 Punta al [COleDataObject](../../mfc/reference/coledataobject-class.md) per incollare. Se questo valore è **NULL**, ottiene il `COleDataObject` dagli Appunti.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è **NULL**, la finestra padre della finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione crea solo un `COlePasteSpecialDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
 Per ulteriori informazioni, vedere il [OLEUIPASTEFLAG](http://msdn.microsoft.com/library/windows/desktop/ms682172) in Windows SDK tipo enumerato.  
  
##  <a name="createitem"></a>  COlePasteSpecialDialog::CreateItem  
 Crea nuovo elemento è stato scelto nella finestra di dialogo Incolla speciale.  
  
```  
BOOL CreateItem(COleClientItem* pNewItem);
```  
  
### <a name="parameters"></a>Parametri  
 *pNewItem*  
 Punta a un `COleClientItem` istanza. Non può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è stato creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere chiamata solo dopo [DoModal](#domodal) restituisce **IDOK**.  
  
##  <a name="domodal"></a>  COlePasteSpecialDialog::DoModal  
 Consente di visualizzare la finestra di dialogo Incolla speciale OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se la finestra di dialogo è stata visualizzata correttamente.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere il [OleUIPasteSpecial](http://msdn.microsoft.com/library/windows/desktop/ms694512) funzione in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_ps](#m_ps) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare le funzioni per recuperare le impostazioni o input informazioni dall'utente nella finestra di dialogo altri membri.  
  
##  <a name="getdrawaspect"></a>  COlePasteSpecialDialog::GetDrawAspect  
 Determina se l'utente sceglie di visualizzare l'elemento selezionato come icona.  
  
```  
DVASPECT GetDrawAspect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il metodo necessario per il rendering dell'oggetto.  
  
- `DVASPECT_CONTENT` Restituito se la casella di controllo da visualizzare come icona non è stata selezionata quando la finestra di dialogo è stata annullata.  
  
- `DVASPECT_ICON` Restituito se è stata selezionata la casella di controllo da visualizzare come icona quando la finestra di dialogo è stata annullata.  
  
### <a name="remarks"></a>Note  
 Solo chiamare questa funzione dopo [DoModal](#domodal) restituisce **IDOK**.  
  
 Per ulteriori informazioni sulla creazione di aspetto, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) struttura in Windows SDK.  
  
##  <a name="geticonicmetafile"></a>  COlePasteSpecialDialog::GetIconicMetafile  
 Ottiene il metafile associato all'elemento selezionato dall'utente.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile contenente l'aspetto delle icone dell'elemento selezionato, se è stata selezionata la casella di controllo da visualizzare come icona quando la finestra di dialogo è stata annullata scegliendo **OK**; in caso contrario **NULL**.  
  
##  <a name="getpasteindex"></a>  COlePasteSpecialDialog::GetPasteIndex  
 Ottiene il valore di indice associato alla voce selezionata dall'utente.  
  
```  
int GetPasteIndex() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'indice nella matrice di **OLEUIPASTEENTRY** strutture che è stato selezionato dall'utente. Il formato che corrisponde all'indice selezionato deve essere utilizzato quando si esegue l'operazione Incolla.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il [OLEUIPASTEENTRY](http://msdn.microsoft.com/library/windows/desktop/ms690165) struttura in Windows SDK.  
  
##  <a name="getselectiontype"></a>  COlePasteSpecialDialog::GetSelectionType  
 Determina il tipo di selezioni dell'utente.  
  
```  
UINT GetSelectionType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce i tipo di selezione effettuata.  
  
### <a name="remarks"></a>Note  
 Vengono specificati i valori di tipo restituito per il **selezione** enumerazione tipo dichiarato nella `COlePasteSpecialDialog` classe.  
  
```  
enum Selection {
    pasteLink,
    pasteNormal,
    pasteOther,
    pasteStatic
    };  
```  
  
 Seguire desccriptions breve dei valori seguenti:  
  
- **COlePasteSpecialDialog::pasteLink** pulsante di opzione di Incolla collegamento è stato archiviato e il formato scelto non è un formato OLE standard.  
  
- **COlePasteSpecialDialog::pasteNormal** pulsante di opzione Incolla il è stato archiviato e il formato scelto non è un formato OLE standard.  
  
- **COlePasteSpecialDialog::pasteOther** formato selezionato non è un formato OLE standard.  
  
- **COlePasteSpecialDialog::pasteStatic** il formato scelto è stato un metafile.  
  
##  <a name="m_ps"></a>  COlePasteSpecialDialog::m_ps  
 Struttura di tipo **OLEUIPASTESPECIAL** consentono di controllare il comportamento della finestra di dialogo Incolla speciale.  
  
```  
OLEUIPASTESPECIAL m_ps;  
```  
  
### <a name="remarks"></a>Note  
 Membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per ulteriori informazioni, vedere il [OLEUIPASTESPECIAL](http://msdn.microsoft.com/library/windows/desktop/ms692434) struttura in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)
