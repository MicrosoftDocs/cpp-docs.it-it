---
title: Classe COleChangeIconDialog | Microsoft Docs
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
ms.openlocfilehash: 40907720965647e076c6b516f1c2de9f1d3f9edb
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37850566"
---
# <a name="colechangeicondialog-class"></a>Classe COleChangeIconDialog
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
|[COleChangeIconDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo OLE 2 Cambia icona.|  
|[COleChangeIconDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle del metafile associato alla originalissima maschera di questo elemento.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeIconDialog::m_ci](#m_ci)|Struttura che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleChangeIconDialog` quando si desidera chiamare questa finestra di dialogo. Dopo una `COleChangeIconDialog` oggetto è stato costruito, è possibile usare il [m_ci](#m_ci) struttura per inizializzare i valori o degli stati dei controlli nella finestra di dialogo. Il `m_ci` struttura è di tipo OLEUICHANGEICON. Per altre informazioni sull'uso di questa classe di finestra di dialogo, vedere la [DoModal](#domodal) funzione membro.  
  
 Per altre informazioni, vedere la [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) struttura nel SDK di Windows.  
  
 Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
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
 Flag di creazione, che contiene qualsiasi numero dei valori seguenti combinati tramite bit per bit-operatore or:  
  
- CIF_SELECTCURRENT specifica che il pulsante di opzione corrente verrà inizialmente selezionato quando viene chiamata nella finestra di dialogo. Questa è l'impostazione predefinita.  
  
- CIF_SELECTDEFAULT specifica che il pulsante di opzione predefinita verrà inizialmente selezionato quando viene chiamata nella finestra di dialogo.  
  
- CIF_SELECTFROMFILE specifica che il pulsante di opzione da File saranno inizialmente selezionato quando viene chiamata nella finestra di dialogo.  
  
- CIF_SHOWHELP specifica che il pulsante della Guida verrà visualizzato quando viene chiamata la finestra di dialogo.  
  
- CIF_USEICONEXE specifica che l'icona deve essere estratto dal file eseguibile specificato nella `szIconExe` campo di [m_ci](#m_ci) invece recuperato dal tipo. Ciò è utile per l'incorporamento o il collegamento ai file non OLE.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
 Per altre informazioni, vedere la [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) struttura nel SDK di Windows.  
  
##  <a name="dochangeicon"></a>  COleChangeIconDialog::DoChangeIcon  
 Chiamare questa funzione per modificare l'icona che rappresenta l'elemento a quello selezionato nella finestra di dialogo dopo aver [DoModal](#domodal) restituisce IDOK.  
  
```  
BOOL DoChangeIcon(COleClientItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 *pItem*  
 Punta all'elemento la cui icona sta cambiando.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; modifica in caso contrario 0.  
  
##  <a name="domodal"></a>  COleChangeIconDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo di modifica dell'icona OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento della finestra di dialogo. Uno dei valori seguenti:  
  
- IDOK se la finestra di dialogo viene visualizzata correttamente.  
  
- IDCANCEL, se l'utente ha annullato la finestra di dialogo.  
  
- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il `COleDialog::GetLastError` funzione membro per ottenere altre informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIChangeIcon](http://msdn.microsoft.com/library/windows/desktop/ms688307) funzione nel SDK di Windows.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_ci](#m_ci) struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce IDOK, è possibile chiamare altri membri funzioni per recuperare le impostazioni o le informazioni che è stato immesso dall'utente nella finestra di dialogo.  
  
##  <a name="geticonicmetafile"></a>  COleChangeIconDialog::GetIconicMetafile  
 Chiamare questa funzione per ottenere un handle del metafile che contiene l'aspetto delle icone dell'elemento selezionato.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile contenente l'aspetto delle icone della nuova icona, se è stata chiusa la finestra di dialogo scegliendo **OK**; in caso contrario, l'icona come lo era prima è stata visualizzata la finestra di dialogo.  
  
##  <a name="m_ci"></a>  COleChangeIconDialog::m_ci  
 Struttura di tipo OLEUICHANGEICON consentono di controllare il comportamento della finestra di dialogo Cambia icona.  
  
```  
OLEUICHANGEICON m_ci;  
```  
  
### <a name="remarks"></a>Note  
 I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per altre informazioni, vedere la [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) struttura nel SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)
