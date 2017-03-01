---
title: Classe classe COleChangeIconDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleChangeIconDialog
dev_langs:
- C++
helpviewer_keywords:
- OLE dialog boxes, Change Icon
- OLE Change Icon dialog box
- dialog boxes, OLE
- COleChangeIconDialog class
- Change Icon dialog box
ms.assetid: 8d6e131b-ddbb-4dff-a432-f239efda8e3d
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
ms.openlocfilehash: 07dfd7995bbbdb0f52f55dceedc318d8d702111b
ms.lasthandoff: 02/24/2017

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
|[COleChangeIconDialog::DoModal](#domodal)|Visualizza la finestra di dialogo 2 modifica dell'icona OLE.|  
|[COleChangeIconDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato con il formato delle icone di questo elemento.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeIconDialog::m_ci](#m_ci)|Struttura che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleChangeIconDialog` quando si desidera chiamare questa finestra di dialogo. Dopo un `COleChangeIconDialog` oggetto è stato costruito, è possibile utilizzare il [m_ci](#m_ci) struttura per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. Il `m_ci` struttura è di tipo **OLEUICHANGEICON**. Per ulteriori informazioni sull'utilizzo di questa classe di finestra di dialogo, vedere il [DoModal](#domodal) funzione membro.  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
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
  
##  <a name="a-namecolechangeicondialoga--colechangeicondialogcolechangeicondialog"></a><a name="colechangeicondialog"></a>COleChangeIconDialog::COleChangeIconDialog  
 Questa funzione crea solo un `COleChangeIconDialog` oggetto.  
  
```  
explicit COleChangeIconDialog(
    COleClientItem* pItem,  
    DWORD dwFlags = CIF_SELECTCURRENT,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Punta all'elemento da convertire.  
  
 `dwFlags`  
 Flag di creazione, che contiene un numero qualsiasi dei valori seguenti combinati utilizzando bit per bit-operatore or:  
  
- **CIF_SELECTCURRENT** specifica che il pulsante di opzione corrente venga selezionato inizialmente quando viene chiamata nella finestra di dialogo. Questa è l'impostazione predefinita.  
  
- **CIF_SELECTDEFAULT** specifica che il pulsante di opzione predefinito sarà selezionato inizialmente quando viene chiamata nella finestra di dialogo.  
  
- **CIF_SELECTFROMFILE** specifica che il pulsante di opzione da File venga selezionato inizialmente quando viene chiamata nella finestra di dialogo.  
  
- **CIF_SHOWHELP** specifica che verrà visualizzato il pulsante della Guida in linea quando viene chiamata nella finestra di dialogo.  
  
- **CIF_USEICONEXE** specifica che l'icona deve essere estratti dal file eseguibile specificato nel **szIconExe** campo [m_ci](#m_ci) anziché recuperati dal tipo. Ciò è utile per l'incorporamento o sul collegamento di file non OLE.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, la finestra padre della finestra di dialogo verrà impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedochangeicona--colechangeicondialogdochangeicon"></a><a name="dochangeicon"></a>COleChangeIconDialog::DoChangeIcon  
 Chiamare questa funzione per modificare l'icona che rappresenta l'elemento a quello selezionato nella finestra di dialogo dopo [DoModal](#domodal) restituisce **IDOK**.  
  
```  
BOOL DoChangeIcon(COleClientItem* pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Punta all'elemento la cui icona sta cambiando.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; modifica in caso contrario 0.  
  
##  <a name="a-namedomodala--colechangeicondialogdomodal"></a><a name="domodal"></a>COleChangeIconDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo Modifica dell'icona OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se è stata visualizzata correttamente nella finestra di dialogo.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere il [OleUIChangeIcon](http://msdn.microsoft.com/library/windows/desktop/ms688307) in funzione il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri di [m_ci](#m_ci) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare altri membri funzioni per recuperare le impostazioni o informazioni che è stato immesso dall'utente nella finestra di dialogo.  
  
##  <a name="a-namegeticonicmetafilea--colechangeicondialoggeticonicmetafile"></a><a name="geticonicmetafile"></a>COleChangeIconDialog::GetIconicMetafile  
 Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto delle icone dell'elemento selezionato.  
  
```  
HGLOBAL GetIconicMetafile() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'handle del metafile contenente l'aspetto delle icone della nuova icona, se è stata chiusa la finestra di dialogo scegliendo **OK**; in caso contrario, l'icona che è stato prima che è stata visualizzata la finestra di dialogo.  
  
##  <a name="a-namemcia--colechangeicondialogmci"></a><a name="m_ci"></a>COleChangeIconDialog::m_ci  
 Struttura di tipo **OLEUICHANGEICON** utilizzato per controllare il comportamento della finestra di dialogo Modifica dell'icona.  
  
```  
OLEUICHANGEICON m_ci;  
```  
  
### <a name="remarks"></a>Note  
 I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGEICON](http://msdn.microsoft.com/library/windows/desktop/ms680098) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)

