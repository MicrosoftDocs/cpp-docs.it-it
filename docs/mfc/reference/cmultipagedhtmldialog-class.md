---
title: Classe CMultiPageDHtmlDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMultiPageDHtmlDialog
- AFXDHTML/CMultiPageDHtmlDialog
- AFXDHTML/CMultiPageDHtmlDialog::CMultiPageDHtmlDialog
dev_langs:
- C++
helpviewer_keywords:
- CMultiPageDHtmlDialog [MFC], CMultiPageDHtmlDialog
ms.assetid: 971accc1-824d-4df4-b4c1-b1a20e0f7e4f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8a1a4ca77e4b7a2cda10d87bd657e73931a50612
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37038006"
---
# <a name="cmultipagedhtmldialog-class"></a>Classe CMultiPageDHtmlDialog
Una finestra di dialogo a più pagine visualizza più pagine HTML in sequenza e gestisce gli eventi da ogni pagina.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMultiPageDHtmlDialog : public CDHtmlDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiPageDHtmlDialog::CMultiPageDHtmlDialog](#cmultipagedhtmldialog)|Costruisce un oggetto di finestra di dialogo DHTML (procedura guidata stile) a più pagine.|  
|[CMultiPageDHtmlDialog:: ~ CMultiPageDHtmlDialog](#cmultipagedhtmldialog__~cmultipagedhtmldialog)|Elimina un oggetto finestra di dialogo DHTML a più pagine.|  
  
## <a name="remarks"></a>Note  
 Il meccanismo per raggiungere questo obiettivo è un [mappa eventi URL e DHTML](dhtml-event-maps.md), che contiene incorporati mappe eventi per ogni pagina.  
  
## <a name="example"></a>Esempio  
 Questa finestra di dialogo a più pagine presuppone tre risorse HTML che definiscono funzionalità semplice procedura guidata. La prima pagina è una `Next` pulsante, il secondo un **Prev** e `Next` pulsante e la terza un **Prev** pulsante. Quando viene premuto un pulsante, una funzione del gestore chiama [CDHtmlDialog::LoadFromResource](../../mfc/reference/cdhtmldialog-class.md#loadfromresource) per caricare la pagina nuova appropriata.  
  
 Le parti pertinenti di dichiarazione di classe (in CMyMultiPageDlg.h):  
  
 [!code-cpp[NVC_MFCDocView#181](../../mfc/codesnippet/cpp/cmultipagedhtmldialog-class_1.h)]  
  
 Le parti pertinenti di implementazione della classe (in CMyMultipageDlg.cpp):  
  
 [!code-cpp[NVC_MFCDocView#182](../../mfc/codesnippet/cpp/cmultipagedhtmldialog-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDHtmlSinkHandlerBase2`  
  
 `CDHtmlSinkHandlerBase1`  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDHtmlSinkHandler`  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDHtmlEventSink`  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)  
  
 `CMultiPageDHtmlDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdhtml. h  
  
##  <a name="cmultipagedhtmldialog"></a>  CMultiPageDHtmlDialog::CMultiPageDHtmlDialog  
 Costruisce un oggetto di finestra di dialogo DHTML (procedura guidata stile) a più pagine.  
  
```  
CMultiPageDHtmlDialog(
    LPCTSTR lpszTemplateName,  
    LPCTSTR szHtmlResID = NULL,  
    CWnd* pParentWnd = NULL);

 
CMultiPageDHtmlDialog(
    UINT nIDTemplate,  
    UINT nHtmlResID = 0,  
    CWnd* pParentWnd = NULL);  
  
CMultiPageDHtmlDialog();
```  
  
### <a name="parameters"></a>Parametri  
 *lpszTemplateName*  
 La stringa con terminazione null che rappresenta il nome di una risorsa modello di finestra di dialogo.  
  
 *szHtmlResID*  
 La stringa con terminazione null che rappresenta il nome della risorsa HTML.  
  
 *pParentWnd*  
 Un puntatore all'oggetto finestra padre o proprietaria (di tipo [CWnd](../../mfc/reference/cwnd-class.md)) a cui appartiene l'oggetto finestra di dialogo. Se si tratta **NULL**, finestra padre dell'oggetto finestra di dialogo è impostata per la finestra principale dell'applicazione.  
  
 *nIDTemplate*  
 Contiene il numero di ID di una risorsa modello di finestra di dialogo.  
  
 *nHtmlResID*  
 Contiene il numero di ID di una risorsa HTML.  
  
##  <a name="_dtorcmultipagedhtmldialog"></a>  CMultiPageDHtmlDialog:: ~ CMultiPageDHtmlDialog  
 Elimina un oggetto finestra di dialogo DHTML a più pagine.  
  
```  
virtual ~CMultiPageDHtmlDialog();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)
