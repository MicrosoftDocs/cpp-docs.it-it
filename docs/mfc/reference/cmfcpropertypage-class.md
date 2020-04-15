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
ms.openlocfilehash: e493f016b6384a768935186c31e3fc71ade6382f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81361762"
---
# <a name="cmfcpropertypage-class"></a>Classe CMFCPropertyPage

La `CMFCPropertyPage` classe supporta la visualizzazione dei menu a comparsa in una pagina delle proprietà.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyPage : public CPropertyPage
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPropertyPage::CMFCPropertyPage](#cmfcpropertypage)|Costruisce un oggetto `CMFCPropertyPage`.|
|`CMFCPropertyPage::~CMFCPropertyPage`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCPropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCPropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|`CMFCPropertyPage::OnSetActive`|Questa funzione membro viene chiamata dal framework quando la pagina viene scelta dall'utente e diventa la pagina attiva. (OverrideS [CPropertyPage::OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).)|
|`CMFCPropertyPage::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Per ulteriori informazioni e sintassi del metodo, vedere [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). Esegue l'override di `CPropertyPage::PreTranslateMessage`.|

## <a name="remarks"></a>Osservazioni

La `CMFCPropertyPage` classe rappresenta singole pagine di una finestra delle proprietà, nota anche come finestra di dialogo delle schede.

Utilizzare `CMFCPropertyPage` la classe con il [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) classe. Per utilizzare i menu in una pagina delle `CPropertyPage` proprietà, `CMFCPropertyPage` sostituire tutte le occorrenze della classe con la classe .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertypage.h

## <a name="cmfcpropertypagecmfcpropertypage"></a><a name="cmfcpropertypage"></a>CMFCPropertyPage::CMFCPropertyPage

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

*NIDTemplate (modello)*<br/>
ID risorsa del modello per questa pagina.

*nIDCaption (didascalie di identità)*<br/>
ID risorsa dell'etichetta da inserire nella scheda di questa pagina. Se 0, il nome viene ottenuto dal modello di finestra di dialogo per questa pagina. Il valore predefinito è 0.

*lpszTemplateName (nome di metodo)*<br/>
Punta al nome del modello per questa pagina. Non può essere NULL.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui parametri del costruttore, vedere [CPropertyPage::CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)
