---
title: Classe classe COleConvertDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
- COleConvertDialog class
- OLE Convert dialog box
- dialog boxes, OLE
- OLE dialog boxes, Convert
- Convert dialog box
ms.assetid: a7c57714-31e8-4b78-834d-8ddd1b856a1c
caps.latest.revision: 22
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
ms.openlocfilehash: 6db5caf443e7f71c58e2c65b46794c2c9d246d38
ms.lasthandoff: 02/24/2017

---
# <a name="coleconvertdialog-class"></a>Classe COleConvertDialog (classe)
Per ulteriori informazioni, vedere il [OLEUICONVERT](http://msdn.microsoft.com/library/windows/desktop/ms686657) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
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
|[COleConvertDialog::DoModal](#domodal)|Visualizza la finestra di dialogo OLE Modifica elemento.|  
|[COleConvertDialog::GetClassID](#getclassid)|Ottiene il **CLSID** associato all'elemento selezionato.|  
|[COleConvertDialog::GetDrawAspect](#getdrawaspect)|Specifica se disegnare elementi come un'icona.|  
|[COleConvertDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato con il formato delle icone di questo elemento.|  
|[COleConvertDialog::GetSelectionType](#getselectiontype)|Ottiene il tipo dell'opzione selezionata.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleConvertDialog::m_cv](#m_cv)|Struttura che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il codice dell'applicazione generato dalla procedura guidata contenitore utilizza questa classe.  
  
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
  
##  <a name="coleconvertdialog"></a>COleConvertDialog::COleConvertDialog  
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
 Punta all'elemento per essere convertito o attivati.  
  
 `dwFlags`  
 Flag di creazione, che contiene un numero qualsiasi dei valori seguenti combinati utilizzando bit per bit-operatore or:  
  
- **CF_SELECTCONVERTTO** specifica che il pulsante di opzione Converti in sarà selezionato inizialmente quando viene chiamata nella finestra di dialogo. Questa è l'impostazione predefinita.  
  
- **CF_SELECTACTIVATEAS** specifica che il pulsante di opzione attiva come sarà selezionato inizialmente quando viene chiamata nella finestra di dialogo.  
  
- **CF_SETCONVERTDEFAULT** specifica che la classe i cui **CLSID** specificato dal **clsidConvertDefault** membro del `m_cv` struttura da utilizzare come selezione predefinita nella casella di riepilogo di classe quando si seleziona il pulsante di opzione Converti in.  
  
- **CF_SETACTIVATEDEFAULT** specifica che la classe i cui **CLSID** specificato dal **clsidActivateDefault** membro del `m_cv` struttura da utilizzare come selezione predefinita nella casella di riepilogo di classe quando si seleziona il pulsante di opzione attiva come.  
  
- **CF_SHOWHELPBUTTON** specifica che verrà visualizzato il pulsante della Guida in linea quando viene chiamata nella finestra di dialogo.  
  
 `pClassID`  
 Punta al CLSID dell'elemento da convertire o attivato. Se **NULL**, **CLSID** associato `pItem` verrà utilizzato.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, la finestra padre della finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
 Per ulteriori informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) e [OLEUICONVERT](http://msdn.microsoft.com/library/windows/desktop/ms686657) struttura.  
  
##  <a name="doconvert"></a>COleConvertDialog::DoConvert  
 Chiamare questa funzione, dopo l'uscita correttamente dal [DoModal](#domodal), ad esempio per convertire o attivare un oggetto di tipo [COleClientItem](../../mfc/reference/coleclientitem-class.md).  
  
```  
BOOL DoConvert(COleClientItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Punta all'elemento per essere convertito o attivati. Non può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'elemento viene convertito o attivato in base alle informazioni selezionate dall'utente nella finestra di dialogo Converti.  
  
##  <a name="domodal"></a>COleConvertDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo Converti OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se è stata visualizzata correttamente nella finestra di dialogo.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere il [OleUIConvert](http://msdn.microsoft.com/library/windows/desktop/ms680694) in funzione il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri di [m_cv](#m_cv) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare altri membri funzioni per recuperare le impostazioni o informazioni che è stato immesso dall'utente nella finestra di dialogo.  
  
##  <a name="getclassid"></a>COleConvertDialog::GetClassID  
 Chiamare questa funzione per ottenere il **CLSID** associato all'elemento selezionato nella finestra di dialogo Converti dall'utente.  
  
```  
REFCLSID GetClassID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il **CLSID** associato all'elemento selezionato nella finestra di dialogo Converti.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce **IDOK**.  
  
 Per ulteriori informazioni, vedere [chiave CLSID](http://msdn.microsoft.com/library/windows/desktop/ms691424) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getdrawaspect"></a>COleConvertDialog::GetDrawAspect  
 Chiamare questa funzione per determinare se l'utente sceglie di visualizzare l'elemento selezionato come icona.  
  
```  
DVASPECT GetDrawAspect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il metodo necessario per il rendering dell'oggetto.  
  
- `DVASPECT_CONTENT`Restituito se la casella di controllo Mostra come icona non è stata selezionata.  
  
- `DVASPECT_ICON`Restituito se è stata selezionata la casella di controllo Mostra come icona.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce **IDOK**.  
  
 Per ulteriori informazioni sulla creazione di aspetto, vedere il [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) nella struttura dei dati di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="geticonicmetafile"></a>COleConvertDialog::GetIconicMetafile  
 Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto delle icone dell'elemento selezionato.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile contenente l'aspetto delle icone dell'elemento selezionato, se la casella di controllo Mostra come icona è stata selezionata quando è stata chiusa la finestra di dialogo scegliendo **OK**; in caso contrario **NULL**.  
  
##  <a name="getselectiontype"></a>COleConvertDialog::GetSelectionType  
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
  
- **COleConvertDialog::noConversion** restituito se la finestra di dialogo è stata annullata o che l'utente ha selezionato alcuna conversione. Se `COleConvertDialog::DoModal` restituito **IDOK**, è possibile che l'utente ha selezionato un'icona diversa da quella selezionata in precedenza.  
  
- **COleConvertDialog::convertItem** restituito se è stato selezionato il pulsante di opzione Converti in, l'utente ha selezionato un elemento diverso per la conversione e `DoModal` restituito **IDOK**.  
  
- **COleConvertDialog::activateAs** restituito se il pulsante di opzione attiva come è stato selezionato, l'utente ha selezionato un elemento diverso da attivare, e `DoModal` restituito **IDOK**.  
  
##  <a name="m_cv"></a>COleConvertDialog::m_cv  
 Struttura di tipo **OLEUICONVERT** utilizzato per controllare il comportamento della finestra di dialogo Converti.  
  
```  
OLEUICONVERT m_cv;  
```  
  
### <a name="remarks"></a>Note  
 I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per ulteriori informazioni, vedere il [OLEUICONVERT](http://msdn.microsoft.com/library/windows/desktop/ms686657) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)

