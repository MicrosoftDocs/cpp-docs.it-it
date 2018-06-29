---
title: Classe COleUpdateDialog classe | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleUpdateDialog
- AFXODLGS/COleUpdateDialog
- AFXODLGS/COleUpdateDialog::COleUpdateDialog
- AFXODLGS/COleUpdateDialog::DoModal
dev_langs:
- C++
helpviewer_keywords:
- COleUpdateDialog [MFC], COleUpdateDialog
- COleUpdateDialog [MFC], DoModal
ms.assetid: 699ca980-52b1-4cf8-9ab1-ac6767ad5b0e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c0208a24b69c1884d72c0ae525ce95b3d3258271
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079974"
---
# <a name="coleupdatedialog-class"></a>Classe COleUpdateDialog (classe)
Utilizzata per un caso speciale della finestra di dialogo di modifica collegamenti OLE, che deve essere utilizzata quando è necessario aggiornare solo oggetti collegati o incorporati esistenti in un documento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleUpdateDialog : public COleLinksDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleUpdateDialog::COleUpdateDialog](#coleupdatedialog)|Costruisce un oggetto `COleUpdateDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleUpdateDialog::DoModal](#domodal)|Consente di visualizzare il **Modifica collegamenti** finestra di dialogo in una modalità di aggiornamento.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sulla finestra di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)  
  
 `COleUpdateDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="coleupdatedialog"></a>  COleUpdateDialog::COleUpdateDialog  
 Costruisce un oggetto `COleUpdateDialog`.  
  
```  
explicit COleUpdateDialog(
    COleDocument* pDoc,  
    BOOL bUpdateLinks = TRUE,  
    BOOL bUpdateEmbeddings = FALSE,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pDoc*  
 Punta al documento che contiene i collegamenti che potrebbe essere necessario l'aggiornamento.  
  
 *bUpdateLinks*  
 Flag che determina se gli oggetti collegati sono da aggiornare.  
  
 *bUpdateEmbeddings*  
 Flag che determina se gli oggetti incorporati sono da aggiornare.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se si tratta **NULL**, la finestra padre della finestra di dialogo verrà impostata su finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione crea solo un `COleUpdateDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare [DoModal](../../mfc/reference/colelinksdialog-class.md#domodal). Questa classe deve essere usata al posto della `COleLinksDialog` quando si desidera aggiornare esistente solo elementi collegati o incorporati.  
  
##  <a name="domodal"></a>  COleUpdateDialog::DoModal  
 Consente di visualizzare la finestra di dialogo Modifica collegamenti in modalità di aggiornamento.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se la finestra di dialogo è stato restituito correttamente.  
  
- **IDCANCEL** se nessuno degli elementi collegati o incorporati nel documento corrente è necessario aggiornare.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIEditLinks](http://msdn.microsoft.com/library/windows/desktop/ms679703) (funzione) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Tutti i collegamenti e/o incorporamenti vengono aggiornati, a meno che l'utente seleziona il pulsante Annulla.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)
