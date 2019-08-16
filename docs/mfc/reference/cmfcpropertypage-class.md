---
title: Classe CMFCPropertyPage
ms.date: 11/04/2016
f1_keywords:
- CMFCPropertyPage
- AFXPROPERTYPAGE/CMFCPropertyPage
- AFXPROPERTYPAGE/CMFCPropertyPage::CMFCPropertyPage
helpviewer_keywords:
- CMFCPropertyPage [MFC], CMFCPropertyPage
ms.assetid: d279d7f2-2d81-418d-9f23-6147d6e8df09
ms.openlocfilehash: 4be584135ef789d7fbe3b1743ac0ad6ce66ac5b1
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69505035"
---
# <a name="cmfcpropertypage-class"></a>Classe CMFCPropertyPage

La `CMFCPropertyPage` classe supporta la visualizzazione dei menu popup in una pagina delle proprietà.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyPage : public CPropertyPage
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPropertyPage::CMFCPropertyPage](#cmfcpropertypage)|Costruisce un oggetto `CMFCPropertyPage`.|
|`CMFCPropertyPage::~CMFCPropertyPage`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCPropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCPropertyPage::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|`CMFCPropertyPage::OnSetActive`|Questa funzione membro viene chiamata dal framework quando la pagina viene scelta dall'utente e diventa la pagina attiva. Esegue l'override di [CPropertyPage:: OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).|
|`CMFCPropertyPage::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Per ulteriori informazioni e la sintassi del metodo, vedere [CWnd::P retranslatemessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CPropertyPage::PreTranslateMessage`.|

## <a name="remarks"></a>Note

La `CMFCPropertyPage` classe rappresenta le singole pagine di una finestra delle proprietà, altrimenti nota come finestra di dialogo di tabulazione.

Usare la `CMFCPropertyPage` classe insieme alla classe [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) . Per utilizzare i menu in una pagina delle proprietà, sostituire tutte le occorrenze `CPropertyPage` della classe con `CMFCPropertyPage` la classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertypage. h

##  <a name="cmfcpropertypage"></a>CMFCPropertyPage:: CMFCPropertyPage

Costruisce un oggetto `CMFCPropertyPage`.

```
CMFCPropertyPage(
    UINT nIDTemplate,
    UINT nIDCaption=0);

CMFCPropertyPage(
    LPCTSTR lpszTemplateName,
    UINT nIDCaption=0);
```

### <a name="parameters"></a>Parametri

*nIDTemplate*<br/>
ID risorsa del modello per questa pagina.

*nIDCaption*<br/>
ID risorsa dell'etichetta da inserire nella scheda per questa pagina. Se è 0, il nome viene ottenuto dal modello della finestra di dialogo per questa pagina. Il valore predefinito è 0.

*lpszTemplateName*<br/>
Punta al nome del modello per questa pagina. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Per ulteriori informazioni sui parametri del costruttore, vedere [CPropertyPage:: CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)
