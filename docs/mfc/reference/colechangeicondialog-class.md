---
title: Classe classe COleChangeIconDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleChangeIconDialog
- AFXODLGS/COleChangeIconDialog
- AFXODLGS/COleChangeIconDialog::COleChangeIconDialog
- AFXODLGS/COleChangeIconDialog::DoChangeIcon
- AFXODLGS/COleChangeIconDialog::DoModal
- AFXODLGS/COleChangeIconDialog::GetIconicMetafile
- AFXODLGS/COleChangeIconDialog::m_ci
dev_langs:
- C++
helpviewer_keywords:
- COleChangeIconDialog [MFC], COleChangeIconDialog
- COleChangeIconDialog [MFC], DoChangeIcon
- COleChangeIconDialog [MFC], DoModal
- COleChangeIconDialog [MFC], GetIconicMetafile
- COleChangeIconDialog [MFC], m_ci
ms.assetid: 8d6e131b-ddbb-4dff-a432-f239efda8e3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a67b1e405f1e3be472f9b9b3b5ebe00be3fb8a5d
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37041045"
---
# <a name="colechangeicondialog-class"></a>Classe COleChangeIconDialog (classe)
Utilizzato per la finestra di dialogo di modifica dell'icona OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleChangeIconDialog : public COleDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeIconDialog::COleChangeIconDialog](#colechangeicondialog)|Costruisce un oggetto `COleChangeIconDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeIconDialog::DoChangeIcon](#dochangeicon)|Esegue la modifica specificata nella finestra di dialogo.|  
|[COleChangeIconDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo 2 modifica dell'icona OLE.|  
|[COleChangeIconDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato al form sotto forma di icona di questo elemento.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeIconDialog::m_ci](#m_ci)|Una struttura che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleChangeIconDialog` quando si desidera chiamare questa finestra di dialogo. Dopo un `COleChangeIconDialog` oggetto una volta creato, è possibile usare il [m_ci](#m_ci) struttura per inizializzare i valori o stati dei controlli nella finestra di dialogo. Il `m_ci` struttura è di tipo **OLEUICHANGEICON**. Per ulteriori informazioni sull'utilizzo di questa classe di finestra di dialogo, vedere la [DoModal](#domodal) funzione membro.  
  
 Per altre informazioni, vedere la [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) struttura in Windows SDK.  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleChangeIconDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="colechangeicondialog"></a>  COleChangeIconDialog::COleChangeIconDialog  
 Questa funzione crea solo un `COleChangeIconDialog` oggetto.  
  
```  
explicit COleChangeIconDialog(
    COleClientItem* pItem,  
    DWORD dwFlags = CIF_SELECTCURRENT,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pItem*  
 Punta all'elemento da convertire.  
  
 *dwFlags*  
 Flag di creazione, che include il numero dei valori seguenti combinati tramite bit per bit-operatore or:  
  
- **CIF_SELECTCURRENT** specifica che il pulsante di opzione corrente verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Questa è l'impostazione predefinita.  
  
- **CIF_SELECTDEFAULT** specifica che il pulsante di opzione predefinito verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.  
  
- **CIF_SELECTFROMFILE** specifica che il pulsante di opzione da File verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.  
  
- **CIF_SHOWHELP** specifica che il pulsante della Guida verrà visualizzato quando viene chiamata la finestra di dialogo.  
  
- **CIF_USEICONEXE** specifica che l'icona deve essere estratti dal file eseguibile specificato nella **szIconExe** campo [m_ci](#m_ci) anziché recuperata dal tipo di. Ciò è utile per incorporare o collegare i file non OLE di.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se si tratta **NULL**, la finestra padre della finestra di dialogo verrà impostata su finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
 Per altre informazioni, vedere la [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) struttura in Windows SDK.  
  
##  <a name="dochangeicon"></a>  COleChangeIconDialog::DoChangeIcon  
 Chiamare questa funzione per modificare l'icona che rappresenta l'elemento a quella selezionata nella finestra di dialogo dopo [DoModal](#domodal) restituisce **IDOK**.  
  
```  
BOOL DoChangeIcon(COleClientItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 *pItem*  
 Punta all'elemento di cui icona sta cambiando.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; modifica in caso contrario 0.  
  
##  <a name="domodal"></a>  COleChangeIconDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo di modifica dell'icona OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se la finestra di dialogo è stata visualizzata correttamente.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIChangeIcon](http://msdn.microsoft.com/library/windows/desktop/ms688307) (funzione) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo mediante impostazione dei membri del [m_ci](#m_ci) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo viene costruito.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare altri membri funzioni per recuperare le impostazioni o informazioni che è stato immesso dall'utente nella finestra di dialogo.  
  
##  <a name="geticonicmetafile"></a>  COleChangeIconDialog::GetIconicMetafile  
 Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto delle icone dell'elemento selezionato.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile contenente l'aspetto delle icone della nuova icona, se è stata chiusa la finestra di dialogo scegliendo **OK**; in caso contrario, l'icona perché era prima è stata visualizzata la finestra di dialogo.  
  
##  <a name="m_ci"></a>  COleChangeIconDialog::m_ci  
 Struttura di tipo **OLEUICHANGEICON** consentono di controllare il comportamento della finestra di dialogo Modifica dell'icona.  
  
```  
OLEUICHANGEICON m_ci;  
```  
  
### <a name="remarks"></a>Note  
 I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per altre informazioni, vedere la [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) struttura in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)
