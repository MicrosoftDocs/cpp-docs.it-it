---
title: Classe CMFCRibbonCustomizePropertyPage
ms.date: 11/04/2016
f1_keywords:
- CMFCRibbonCustomizePropertyPage
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizePropertyPage
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizePropertyPage::CMFCRibbonCustomizePropertyPage
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizePropertyPage::AddCustomCategory
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizePropertyPage::OnOK
helpviewer_keywords:
- CMFCRibbonCustomizePropertyPage [MFC], CMFCRibbonCustomizePropertyPage
- CMFCRibbonCustomizePropertyPage [MFC], AddCustomCategory
- CMFCRibbonCustomizePropertyPage [MFC], OnOK
ms.assetid: ea32a99a-dfbe-401e-8975-aa191552532f
ms.openlocfilehash: d36e3a301aa5b861c296b0bb4859e9442dbdb75e
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88560881"
---
# <a name="cmfcribboncustomizepropertypage-class"></a>Classe CMFCRibbonCustomizePropertyPage

Implementa una pagina personalizzata per la finestra di dialogo **Personalizza** nelle applicazioni basate su barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonCustomizePropertyPage: public CMFCPropertyPage
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCRibbonCustomizePropertyPage:: CMFCRibbonCustomizePropertyPage](#cmfcribboncustomizepropertypage)|Costruisce un oggetto `CMFCRibbonCustomizePropertyPage`.|
|`CMFCRibbonCustomizePropertyPage::~CMFCRibbonCustomizePropertyPage`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCRibbonCustomizePropertyPage:: AddCustomCategory](#addcustomcategory)|Aggiunge una categoria personalizzata alla casella combinata **comandi** .|
|`CMFCRibbonCustomizePropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonCustomizePropertyPage::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|[CMFCRibbonCustomizePropertyPage:: OnOK (](#onok)|Chiamata eseguita dal sistema quando un utente fa clic su **OK** nella finestra di dialogo **Personalizza** .|

## <a name="remarks"></a>Osservazioni

Se si desidera aggiungere comandi personalizzati alla finestra di dialogo **Personalizza** , è necessario gestire il messaggio di AFX_WM_ON_RIBBON_CUSTOMIZE. Nel gestore di messaggi creare un'istanza di un `CMFCRibbonCustomizePropertyPage` oggetto nello stack. Creare un elenco di comandi personalizzati, quindi chiamare `AddCustomCategory` per aggiungere la nuova pagina alla finestra di dialogo **Personalizza** .

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCRibbonCustomizePropertyPage` oggetto e aggiungere una categoria personalizzata.

[!code-cpp[NVC_MFC_RibbonApp#22](../../mfc/reference/codesnippet/cpp/cmfcribboncustomizepropertypage-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CPropertyPage](../../mfc/reference/cpropertypage-class.md)

[CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)

[CMFCRibbonCustomizePropertyPage](../../mfc/reference/cmfcribboncustomizepropertypage-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxribboncustomizedialog. h

## <a name="cmfcribboncustomizepropertypageaddcustomcategory"></a><a name="addcustomcategory"></a> CMFCRibbonCustomizePropertyPage:: AddCustomCategory

Aggiunge una categoria personalizzata alla casella combinata **comandi** .

```cpp
void AddCustomCategory(
    LPCTSTR lpszName,
    const CList<UINT, UINT>& lstIDS);
```

### <a name="parameters"></a>Parametri

*lpszName*\
in Specifica il nome della categoria personalizzata.

*lstIDS*\
in Contiene gli ID del comando della barra multifunzione da visualizzare nella categoria personalizzata.

### <a name="remarks"></a>Osservazioni

Questo metodo aggiunge una categoria denominata *lpszName* alla casella combinata **comandi** . Quando l'utente seleziona la categoria, i comandi specificati in *lstIDS* vengono visualizzati nell'elenco dei comandi.

## <a name="cmfcribboncustomizepropertypagecmfcribboncustomizepropertypage"></a><a name="cmfcribboncustomizepropertypage"></a> CMFCRibbonCustomizePropertyPage:: CMFCRibbonCustomizePropertyPage

Costruisce un oggetto `CMFCRibbonCustomizePropertyPage`.

```
CMFCRibbonCustomizePropertyPage(CMFCRibbonBar* pRibbonBar = NULL);
```

### <a name="parameters"></a>Parametri

*pRibbonBar*<br/>
in Puntatore a un controllo Ribbon per il quale è possibile personalizzare le opzioni.

## <a name="cmfcribboncustomizepropertypageonok"></a><a name="onok"></a> CMFCRibbonCustomizePropertyPage:: OnOK (

Calleld dal sistema quando un utente fa clic su **OK** nella finestra di dialogo **Personalizza** .

```
virtual void OnOK();
```

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita applica le opzioni selezionate nella finestra di dialogo **Personalizza** alla barra di accesso rapido.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
