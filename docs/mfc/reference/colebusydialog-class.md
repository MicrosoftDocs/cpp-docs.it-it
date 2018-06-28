---
title: Classe classe COleBusyDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- COleBusyDialog [MFC], COleBusyDialog
- COleBusyDialog [MFC], DoModal
- COleBusyDialog [MFC], GetSelectionType
- COleBusyDialog [MFC], m_bz
ms.assetid: c881a532-9672-4c41-b51b-5ce4a7246a6b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4af90e9354e7d443cb50acbafaa1468c99c12c85
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37040912"
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
|[COleBusyDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo OLE Server occupato.|  
|[COleBusyDialog::GetSelectionType](#getselectiontype)|Determina la scelta effettuata nella finestra di dialogo.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleBusyDialog::m_bz](#m_bz)|Struttura di tipo **OLEUIBUSY** che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleBusyDialog` quando si desidera chiamare queste finestre di dialogo. Dopo un `COleBusyDialog` oggetto una volta creato, è possibile usare il [m_bz](#m_bz) struttura per inizializzare i valori o stati dei controlli nella finestra di dialogo. Il `m_bz` struttura è di tipo **OLEUIBUSY**. Per ulteriori informazioni sull'utilizzo di questa classe di finestra di dialogo, vedere la [DoModal](#domodal) funzione membro.  
  
> [!NOTE]
>  Codice dell'applicazione contenitore generato dalla procedura guidata utilizza questa classe.  
  
 Per altre informazioni, vedere la [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) struttura in Windows SDK.  
  
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
  
##  <a name="colebusydialog"></a>  COleBusyDialog::COleBusyDialog  
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
 Se **TRUE**, chiamare la finestra di dialogo non risponde anziché la finestra di dialogo Server occupato. Il testo nella finestra di dialogo non risponde è leggermente diverso rispetto a quella nella finestra di dialogo il Server è occupato e il pulsante Annulla è disabilitato.  
  
 *dwFlags*  
 Flag di creazione. Può contenere zero o più dei valori seguenti combinati tramite l'operatore OR bit per bit:  
  
- **BZ_DISABLECANCELBUTTON** disabilitare il pulsante di annullamento quando si chiama la finestra di dialogo.  
  
- **BZ_DISABLESWITCHTOBUTTON** disabilitare il pulsante passa a quando si chiama la finestra di dialogo.  
  
- **BZ_DISABLERETRYBUTTON** disabilitare il pulsante di ripetizione quando si chiama la finestra di dialogo.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se si tratta **NULL**, la finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare [DoModal](#domodal).  
  
 Per altre informazioni, vedere la [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) struttura in Windows SDK.  
  
##  <a name="domodal"></a>  COleBusyDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo OLE Server occupato o di Server non risponde.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se la finestra di dialogo è stata visualizzata correttamente.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIBusy](http://msdn.microsoft.com/library/windows/desktop/ms680125) (funzione) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo mediante impostazione dei membri del [m_bz](#m_bz) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo viene costruito.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare altri membri funzioni per recuperare le impostazioni o informazioni che è stato immesso dall'utente nella finestra di dialogo.  
  
##  <a name="getselectiontype"></a>  COleBusyDialog::GetSelectionType  
 Chiamare questa funzione per ottenere il tipo di selezione scelto dall'utente nella finestra di dialogo Server occupato.  
  
```  
UINT GetSelectionType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Tipo di selezione effettuata.  
  
### <a name="remarks"></a>Note  
 Vengono specificati i valori di tipo restituito per il **selezione** enumerazione tipo dichiarato nel `COleBusyDialog` classe.  
  
```  
enum Selection {
    switchTo,
    retry,
    callUnblocked
    };
```  
  
 Seguono brevi descrizioni dei valori seguenti:  
  
- **COleBusyDialog::switchTo** passa a pulsante premuto.  
  
- **COleBusyDialog::retry** è stato premuto il pulsante Riprova.  
  
- **COleBusyDialog::callUnblocked** chiamata per attivare il server è ora sbloccato.  
  
##  <a name="m_bz"></a>  COleBusyDialog::m_bz  
 Struttura di tipo **OLEUIBUSY** consentono di controllare il comportamento della finestra di dialogo Server occupato.  
  
```  
OLEUIBUSY m_bz;  
```  
  
### <a name="remarks"></a>Note  
 I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per altre informazioni, vedere la [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) struttura in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)
