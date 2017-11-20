---
title: CDialogBar (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDialogBar
- AFXEXT/CDialogBar
- AFXEXT/CDialogBar::CDialogBar
- AFXEXT/CDialogBar::Create
dev_langs: C++
helpviewer_keywords:
- CDialogBar [MFC], CDialogBar
- CDialogBar [MFC], Create
ms.assetid: da2f7a30-970c-44e3-87f0-6094bd002cab
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4ee7507165c64f10def930f97c5f0ca2a62423dd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cdialogbar-class"></a>CDialogBar (classe)
Fornisce la funzionalità di una finestra di dialogo non modale di Windows in una barra di controllo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDialogBar : public CControlBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialogBar::CDialogBar](#cdialogbar)|Costruisce un oggetto `CDialogBar`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialogBar::Create](#create)|Crea una barra di finestra di dialogo di Windows e lo collega al `CDialogBar` oggetto.|  
  
## <a name="remarks"></a>Note  
 Una barra di finestra di dialogo è simile a una finestra di dialogo, in quanto contiene i controlli Windows standard che l'utente può spostarsi tra. Somiglianza un'altra è che si crea un modello di finestra di dialogo per rappresentare la barra di finestra di dialogo.  
  
 Creazione e utilizzo di una barra di finestra di dialogo è simile alla creazione e utilizzo di un `CFormView` oggetto. Innanzitutto, utilizzare il [editor finestre](../../windows/dialog-editor.md) per definire un modello di finestra di dialogo con lo stile **WS_CHILD** e non altri stili. Il modello non deve avere lo stile **WS_VISIBLE**. Nel codice dell'applicazione, chiamare il costruttore per costruire il `CDialogBar` dell'oggetto, quindi chiamare **crea** per creare la finestra di dialogo barra e associarlo al `CDialogBar` oggetto.  
  
 Per ulteriori informazioni su `CDialogBar`, vedere l'articolo [le barre di finestra di dialogo](../../mfc/dialog-bars.md) e [Nota tecnica 31](../../mfc/tn031-control-bars.md), barre di controllo.  
  
> [!NOTE]
>  Nella versione corrente, un `CDialogBar` oggetto non può contenere controlli Windows Form. Per ulteriori informazioni sui controlli Windows Form in Visual C++, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CDialogBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
##  <a name="cdialogbar"></a>CDialogBar::CDialogBar  
 Costruisce un oggetto `CDialogBar`.  
  
```  
CDialogBar();
```  
  
##  <a name="create"></a>CDialogBar::Create  
 Carica il modello di risorsa finestra di dialogo specificato da `lpszTemplateName` o `nIDTemplate`, crea la finestra di dialogo barra, imposta lo stile e lo associa al `CDialogBar` oggetto.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    LPCTSTR lpszTemplateName,  
    UINT nStyle,  
    UINT nID);

 
virtual BOOL Create(
    CWnd* pParentWnd,  
    UINT nIDTemplate,  
    UINT nStyle,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Un puntatore all'elemento padre `CWnd` oggetto.  
  
 `lpszTemplateName`  
 Un puntatore al nome del `CDialogBar` modello di risorsa finestra di dialogo dell'oggetto.  
  
 `nStyle`  
 Lo stile della barra degli strumenti. Stili barra degli strumenti aggiuntiva supportati sono:  
  
- `CBRS_TOP`Barra di controllo è nella parte superiore della finestra cornice.  
  
- `CBRS_BOTTOM`Barra di controllo è nella parte inferiore della finestra cornice.  
  
- `CBRS_NOALIGN`Barra di controllo non viene riposizionata quando l'elemento padre viene ridimensionato.  
  
- `CBRS_TOOLTIPS`Barra di controllo consente di visualizzare descrizioni comandi.  
  
- **CBRS_SIZE_DYNAMIC** barra di controllo è dinamica.  
  
- **CBRS_SIZE_FIXED** barra di controllo è fissa.  
  
- **CBRS_FLOATING** barra di controllo è mobile.  
  
- `CBRS_FLYBY`Barra di stato vengono visualizzate informazioni relative al pulsante.  
  
- **CBRS_HIDE_INPLACE** barra di controllo non viene visualizzata all'utente.  
  
 `nID`  
 L'ID di controllo della barra della finestra di dialogo.  
  
 `nIDTemplate`  
 L'ID della risorsa di `CDialogBar` modello finestra di dialogo dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se si specifica il `CBRS_TOP` o `CBRS_BOTTOM` lo stile di allineamento, larghezza della barra della finestra di dialogo della finestra cornice e l'altezza è quello di risorsa specificata dalla `nIDTemplate`. Se si specifica il `CBRS_LEFT` o `CBRS_RIGHT` lo stile di allineamento, altezza della barra della finestra di dialogo della finestra cornice e la larghezza è quello di risorsa specificata dalla `nIDTemplate`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCMessageMaps#13](../../mfc/reference/codesnippet/cpp/cdialogbar-class_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC viene](../../visual-cpp-samples.md)   
 [CControlBar (classe)](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CFormView](../../mfc/reference/cformview-class.md)   
 [Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)
