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
ms.openlocfilehash: f667310208d88dff39364de480309b4bfea71d16
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648084"
---
# <a name="cmfcribboncustomizepropertypage-class"></a>Classe CMFCRibbonCustomizePropertyPage

Implementa una pagina personalizzata per il **Personalizza** finestra di dialogo nelle applicazioni basate sulla barra multifunzione.

## <a name="syntax"></a>Sintassi

```
class CMFCRibbonCustomizePropertyPage: public CMFCPropertyPage
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCRibbonCustomizePropertyPage::CMFCRibbonCustomizePropertyPage](#cmfcribboncustomizepropertypage)|Costruisce un oggetto `CMFCRibbonCustomizePropertyPage`.|
|`CMFCRibbonCustomizePropertyPage::~CMFCRibbonCustomizePropertyPage`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|Nome|Descrizione|
|[CMFCRibbonCustomizePropertyPage::AddCustomCategory](#addcustomcategory)|Aggiunge una categoria personalizzata per il **comandi** casella combinata.|
|`CMFCRibbonCustomizePropertyPage::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|
|`CMFCRibbonCustomizePropertyPage::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|
|[CMFCRibbonCustomizePropertyPage::OnOK](#onok)|Chiamato dal sistema quando un utente fa clic **OK** nel **Personalizza** nella finestra di dialogo.|

## <a name="remarks"></a>Note

Se si desidera aggiungere comandi personalizzati per il **Personalizza** finestra di dialogo, è necessario gestire il messaggio AFX_WM_ON_RIBBON_CUSTOMIZE. Nel gestore di messaggi, creare un'istanza di un `CMFCRibbonCustomizePropertyPage` oggetto nello stack. Creare un elenco di comandi personalizzati e quindi chiamare `AddCustomCategory` per aggiungere la nuova pagina per il **Personalizza** nella finestra di dialogo.

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

**Intestazione:** afxribboncustomizedialog.h

##  <a name="addcustomcategory"></a>  CMFCRibbonCustomizePropertyPage::AddCustomCategory

Aggiunge una categoria personalizzata per il **comandi** casella combinata.

```
void AddCustomCategory(
    LPCTSTR lpszName,
    const CList<UINT, UINT>& lstIDS);
```

### <a name="parameters"></a>Parametri

|||
|-|-|
|Parametro|Descrizione|
|*lpszName*|[in] Specifica il nome della categoria personalizzata.|
|*lstIDS*|[in] Contiene l'ID di comando della barra multifunzione da visualizzare nella categoria personalizzata.|

### <a name="remarks"></a>Note

Questo metodo aggiunge una categoria denominata *lpszName* per il **comandi** casella combinata. Quando l'utente seleziona la categoria, i comandi specificati nel *lstIDS* vengono visualizzati nell'elenco dei comandi.

##  <a name="cmfcribboncustomizepropertypage"></a>  CMFCRibbonCustomizePropertyPage::CMFCRibbonCustomizePropertyPage

Costruisce un oggetto `CMFCRibbonCustomizePropertyPage`.

```
CMFCRibbonCustomizePropertyPage(CMFCRibbonBar* pRibbonBar = NULL);
```

### <a name="parameters"></a>Parametri

*pRibbonBar*<br/>
[in] Un puntatore a un controllo della barra multifunzione per i quali le opzioni di personalizzazione.

##  <a name="onok"></a>  CMFCRibbonCustomizePropertyPage::OnOK

Calleld dal sistema quando l'utente sceglie **OK** nel **Personalizza** nella finestra di dialogo.

```
virtual void OnOK();
```

### <a name="remarks"></a>Note

L'implementazione predefinita applica le opzioni selezionate durante la **Personalizza** finestra di dialogo per la barra di accesso rapido.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
