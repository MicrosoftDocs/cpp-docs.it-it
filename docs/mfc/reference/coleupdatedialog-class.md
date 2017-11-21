---
title: Classe classe COleUpdateDialog | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleUpdateDialog
- AFXODLGS/COleUpdateDialog
- AFXODLGS/COleUpdateDialog::COleUpdateDialog
- AFXODLGS/COleUpdateDialog::DoModal
dev_langs: C++
helpviewer_keywords:
- COleUpdateDialog [MFC], COleUpdateDialog
- COleUpdateDialog [MFC], DoModal
ms.assetid: 699ca980-52b1-4cf8-9ab1-ac6767ad5b0e
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 447d6571977d636809212adc616f21d284e7fc16
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="coleupdatedialog-class"></a>Classe classe COleUpdateDialog
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
|[COleUpdateDialog::DoModal](#domodal)|Consente di visualizzare il **Modifica collegamenti** la finestra di dialogo in modalità aggiornamento.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni riguardanti le finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
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
  
##  <a name="coleupdatedialog"></a>COleUpdateDialog::COleUpdateDialog  
 Costruisce un oggetto `COleUpdateDialog`.  
  
```  
explicit COleUpdateDialog(
    COleDocument* pDoc,  
    BOOL bUpdateLinks = TRUE,  
    BOOL bUpdateEmbeddings = FALSE,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pDoc`  
 Punta al documento che contiene i collegamenti che potrebbero richiedere un aggiornamento.  
  
 *bUpdateLinks*  
 Flag che determina se gli oggetti collegati devono essere aggiornati.  
  
 *bUpdateEmbeddings*  
 Flag che determina se gli oggetti incorporati sono da aggiornare.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è **NULL**, la finestra padre della finestra di dialogo verrà impostata su finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Questa funzione crea solo un `COleUpdateDialog` oggetto. Per visualizzare la finestra di dialogo, chiamare [DoModal](../../mfc/reference/colelinksdialog-class.md#domodal). Questa classe deve essere utilizzata al posto di `COleLinksDialog` quando si desidera aggiornare esistente solo elementi collegati o incorporati.  
  
##  <a name="domodal"></a>COleUpdateDialog::DoModal  
 Consente di visualizzare la finestra di dialogo Modifica collegamenti in modalità di aggiornamento.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se la finestra di dialogo è stato restituito correttamente.  
  
- **IDCANCEL** se nessuno degli elementi collegati o incorporati nel documento corrente è necessario aggiornare.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere il [OleUIEditLinks](http://msdn.microsoft.com/library/windows/desktop/ms679703) funzione in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Tutti i collegamenti e/o incorporamenti vengono aggiornate a meno che l'utente seleziona il pulsante Annulla.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC OCLIENT](../../visual-cpp-samples.md)   
 [Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)
