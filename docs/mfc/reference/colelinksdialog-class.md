---
title: Classe COleLinksDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleLinksDialog
- AFXODLGS/COleLinksDialog
- AFXODLGS/COleLinksDialog::COleLinksDialog
- AFXODLGS/COleLinksDialog::DoModal
- AFXODLGS/COleLinksDialog::m_el
dev_langs:
- C++
helpviewer_keywords:
- COleLinksDialog [MFC], COleLinksDialog
- COleLinksDialog [MFC], DoModal
- COleLinksDialog [MFC], m_el
ms.assetid: fb2eb638-2809-46db-ac74-392a732affc7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e190c8b8cb11fefccb2847214dcaebf713f35dc4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33368969"
---
# <a name="colelinksdialog-class"></a>Classe COleLinksDialog
Utilizzato per la finestra di dialogo di modifica collegamenti OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleLinksDialog : public COleDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinksDialog::COleLinksDialog](#colelinksdialog)|Costruisce un oggetto `COleLinksDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinksDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo Modifica collegamenti OLE.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleLinksDialog::m_el](#m_el)|Una struttura di tipo **OLEUIEDITLINKS** che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleLinksDialog` quando si desidera chiamare questa finestra di dialogo. Dopo un `COleLinksDialog` oggetto è stato creato, è possibile utilizzare il [m_el](#m_el) struttura per inizializzare i valori o stati dei controlli nella finestra di dialogo. Il `m_el` struttura è di tipo **OLEUIEDITLINKS**. Per ulteriori informazioni sull'utilizzo di questa classe di finestra di dialogo, vedere il [DoModal](#domodal) funzione membro.  
  
> [!NOTE]
>  Il codice dell'applicazione contenitore generato dalla procedura guidata utilizza questa classe.  
  
 Per ulteriori informazioni, vedere il [OLEUIEDITLINKS](http://msdn.microsoft.com/library/windows/desktop/ms678492) struttura in Windows SDK.  
  
 Per ulteriori informazioni riguardanti le finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleLinksDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="domodal"></a>  COleLinksDialog::DoModal  
 Consente di visualizzare la finestra di dialogo Modifica collegamenti OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se la finestra di dialogo è stata visualizzata correttamente.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere il [OleUIEditLinks](http://msdn.microsoft.com/library/windows/desktop/ms679703) funzione in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_el](#m_el) struttura, è necessario farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
##  <a name="colelinksdialog"></a>  COleLinksDialog::COleLinksDialog  
 Costruisce un oggetto `COleLinksDialog`.  
  
```  
COleLinksDialog (
    COleDocument* pDoc,  
    CView* pView,  
    DWORD dwFlags = 0,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDoc`  
 Punta al documento OLE che contiene i collegamenti per essere modificato.  
  
 `pView`  
 Fa riferimento alla vista corrente in `pDoc`.  
  
 `dwFlags`  
 Flag di creazione, che contiene i valori validi sono 0 o **ELF_SHOWHELP** per specificare se verrà visualizzato il pulsante della Guida verrà visualizzata la finestra di dialogo.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è **NULL**, la finestra padre della finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione crea solo un `COleLinksDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
##  <a name="m_el"></a>  COleLinksDialog::m_el  
 Struttura di tipo **OLEUIEDITLINKS** consentono di controllare il comportamento della finestra di dialogo Modifica collegamenti.  
  
```  
OLEUIEDITLINKS m_el;  
```  
  
### <a name="remarks"></a>Note  
 Membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.  
  
 Per ulteriori informazioni, vedere il [OLEUIEDITLINKS](http://msdn.microsoft.com/library/windows/desktop/ms678492) struttura in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)
