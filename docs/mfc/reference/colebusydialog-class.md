---
title: Classe classe COleBusyDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleBusyDialog
- AFXODLGS/COleBusyDialog
- AFXODLGS/COleBusyDialog::COleBusyDialog
- AFXODLGS/COleBusyDialog::DoModal
- AFXODLGS/COleBusyDialog::GetSelectionType
- AFXODLGS/COleBusyDialog::m_bz
dev_langs:
- C++
helpviewer_keywords:
- Server Not Responding dialog box
- Server Busy dialog box
- COleBusyDialog class
ms.assetid: c881a532-9672-4c41-b51b-5ce4a7246a6b
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 0c3ed264cdb83bc97337f13279a20f26b21d454b
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="colebusydialog-class"></a>Classe COleBusyDialog (classe)
Utilizzata per la finestra di dialogo relativa al server OLE che non risponde o al server occupato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleBusyDialog : public COleDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleBusyDialog::COleBusyDialog](#colebusydialog)|Costruisce un oggetto `COleBusyDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleBusyDialog::DoModal](#domodal)|Visualizza la finestra di dialogo OLE Server occupato.|  
|[COleBusyDialog::GetSelectionType](#getselectiontype)|Determina la scelta effettuata nella finestra di dialogo.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleBusyDialog::m_bz](#m_bz)|Struttura di tipo **OLEUIBUSY** che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleBusyDialog` quando si desidera chiamare queste finestre di dialogo. Dopo un `COleBusyDialog` oggetto è stato costruito, è possibile utilizzare il [m_bz](#m_bz) struttura per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. Il `m_bz` struttura è di tipo **OLEUIBUSY**. Per ulteriori informazioni sull'utilizzo di questa classe di finestra di dialogo, vedere il [DoModal](#domodal) funzione membro.  
  
> [!NOTE]
>  Il codice dell'applicazione generato dalla procedura guidata contenitore utilizza questa classe.  
  
 Per ulteriori informazioni, vedere il [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleBusyDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="colebusydialog"></a>COleBusyDialog::COleBusyDialog  
 Questa funzione crea solo un `COleBusyDialog` oggetto.  
  
```  
explicit COleBusyDialog(
    HTASK htaskBusy,  
    BOOL bNotResponding = FALSE,  
    DWORD dwFlags = 0,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *htaskBusy*  
 Handle per l'attività di server è occupato.  
  
 *bNotResponding*  
 Se **TRUE**, chiamare la finestra di dialogo non risponde anziché la finestra di dialogo Server occupato. Il testo nella finestra di dialogo non risponde è leggermente diverso il testo nella finestra di dialogo Server occupato e il pulsante di annullamento è disabilitato.  
  
 `dwFlags`  
 Flag di creazione. Può contenere zero o più dei seguenti valori combinati con l'operatore OR bit per bit:  
  
- **BZ_DISABLECANCELBUTTON** disabilitare il pulsante Annulla quando si chiama la finestra di dialogo.  
  
- **BZ_DISABLESWITCHTOBUTTON** disabilitare il pulsante di opzione a quando si chiama la finestra di dialogo.  
  
- **BZ_DISABLERETRYBUTTON** disabilitare il pulsante di ripetizione dei tentativi quando si chiama la finestra di dialogo.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, la finestra padre dell'oggetto finestra di dialogo è impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare [DoModal](#domodal).  
  
 Per ulteriori informazioni, vedere il [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="domodal"></a>COleBusyDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo OLE Server occupato o di Server non risponde.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se è stata visualizzata correttamente nella finestra di dialogo.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere il [OleUIBusy](http://msdn.microsoft.com/library/windows/desktop/ms680125) in funzione il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri di [m_bz](#m_bz) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare altri membri funzioni per recuperare le impostazioni o informazioni che è stato immesso dall'utente nella finestra di dialogo.  
  
##  <a name="getselectiontype"></a>COleBusyDialog::GetSelectionType  
 Chiamare questa funzione per ottenere il tipo di selezione scelto dall'utente nella finestra di dialogo Server occupato.  
  
```  
UINT GetSelectionType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Tipo di selezione effettuata.  
  
### <a name="remarks"></a>Note  
 Vengono specificati i valori di tipo restituito per il **selezione** enumerazione tipo dichiarato nella `COleBusyDialog` classe.  
  
```  
enum Selection {
    switchTo,
    retry,
    callUnblocked
    };
```  
  
 Seguono brevi descrizioni dei valori seguenti:  
  
- **COleBusyDialog::switchTo** passa a pulsante è stato premuto.  
  
- **COleBusyDialog::retry** è stato premuto il pulsante di ripetizione dei tentativi.  
  
- **COleBusyDialog::callUnblocked** chiamata per attivare il server è ora sbloccato.  
  
##  <a name="m_bz"></a>COleBusyDialog::m_bz  
 Struttura di tipo **OLEUIBUSY** utilizzato per controllare il comportamento della finestra di dialogo Server occupato.  
  
```  
OLEUIBUSY m_bz;  
```  
  
### <a name="remarks"></a>Note  
 I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per ulteriori informazioni, vedere il [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)

