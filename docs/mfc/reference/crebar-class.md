---
title: CReBar (classe)
ms.date: 11/19/2018
f1_keywords:
- CReBar
- AFXEXT/CReBar
- AFXEXT/CReBar::AddBar
- AFXEXT/CReBar::Create
- AFXEXT/CReBar::GetReBarCtrl
helpviewer_keywords:
- CReBar [MFC], AddBar
- CReBar [MFC], Create
- CReBar [MFC], GetReBarCtrl
ms.assetid: c1ad2720-1d33-4106-8e4e-80aa84f93559
ms.openlocfilehash: 4216898e85ebbec748598e10ebb31ce5510f7908
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267784"
---
# <a name="crebar-class"></a>CReBar (classe)

Barra di controllo che fornisce le informazioni su layout, persistenza e stato per i controlli Rebar.

## <a name="syntax"></a>Sintassi

```
class CReBar : public CControlBar
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReBar::AddBar](#addbar)|Aggiunge una banda di un controllo rebar.|
|[CReBar::Create](#create)|Crea il controllo rebar e lo collega al `CReBar` oggetto.|
|[CReBar::GetReBarCtrl](#getrebarctrl)|Consente l'accesso diretto al controllo sottostante comune.|

## <a name="remarks"></a>Note

Un oggetto rebar può contenere diverse finestre figlio, in genere altri controlli, incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. Un oggetto rebar può visualizzare le finestre figlio proprie su una bitmap specificata. L'applicazione può ridimensionare automaticamente il controllo rebar, o l'utente può ridimensionare manualmente il controllo rebar facendo clic o trascinando la barra gripper.

![Esempio di RebarMenu](../../mfc/reference/media/vc4sc61.gif "esempio di RebarMenu")

## <a name="rebar-control"></a>Controllo Rebar

Un oggetto rebar si comporta in modo analogo a un oggetto della barra degli strumenti. Un controllo rebar Usa il meccanismo di fare clic e trascinare per ridimensionare le bande. Un controllo Rebar può contenere una o più bande, con ciascuna banda che contiene una combinazione qualsiasi di una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio. Tuttavia, le bande non possono contenere più di una finestra figlio.

`CReBar` Usa il [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) classe per fornire la relativa implementazione. È possibile accedere al controllo rebar attraverso [GetReBarCtrl](#getrebarctrl) possa sfruttare i vantaggi del controllo Opzioni di personalizzazione. Per altre informazioni sui controlli rebar, vedere `CReBarCtrl`. Per altre informazioni sull'uso dei controlli rebar, vedere [CReBarCtrl usando](../../mfc/using-crebarctrl.md).

> [!CAUTION]
>  Rebar e oggetti del controllo rebar non supportano MFC controllo barra di ancoraggio. Se `CRebar::EnableDocking` viene chiamato, l'applicazione verrà verificata.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CReBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="addbar"></a>  CReBar::AddBar

Chiamare questa funzione membro per aggiungere una fuori banda per il controllo rebar.

```
BOOL AddBar(
    CWnd* pBar,
    LPCTSTR pszText = NULL,
    CBitmap* pbmp = NULL,
    DWORD dwStyle = RBBS_GRIPPERALWAYS | RBBS_FIXEDBMP);

BOOL AddBar(
    CWnd* pBar,
    COLORREF clrFore,
    COLORREF clrBack,
    LPCTSTR pszText = NULL,
    DWORD dwStyle = RBBS_GRIPPERALWAYS);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
Un puntatore a un `CWnd` oggetto, ovvero la finestra figlio da inserire nel controllo rebar. L'oggetto di riferimento deve avere un WS_CHILD.

*lpszText*<br/>
Un puntatore a una stringa contenente il testo da visualizzare sul controllo rebar. NULL per impostazione predefinita. Il testo contenuto nel *lpszText* non fa parte della finestra figlio; si trova in sé, il controllo rebar.

*pbmp*<br/>
Un puntatore a un `CBitmap` oggetto da visualizzare sullo sfondo del controllo rebar. NULL per impostazione predefinita.

*dwStyle*<br/>
Un valore DWORD contenente lo stile da applicare al controllo rebar. Vedere le `fStyle` funzione di descrizione della struttura Win32 [REBARBANDINFO](/windows/desktop/api/commctrl/ns-commctrl-tagrebarbandinfoa) per un elenco completo degli stili fuori banda.

*clrFore*<br/>
Valore COLORREF che rappresenta il colore di primo piano del controllo rebar.

*clrBack*<br/>
Valore COLORREF che rappresenta il colore di sfondo del controllo rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#1](../../mfc/reference/codesnippet/cpp/crebar-class_1.cpp)]

##  <a name="create"></a>  CReBar::Create

Chiamare questa funzione membro per creare un controllo rebar.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = RBS_BANDBORDERS,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,
    UINT nID = AFX_IDW_REBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore al `CWnd` oggetto la cui finestra di Windows è l'elemento padre della barra di stato. In genere la finestra cornice.

*dwCtrlStyle*<br/>
Lo stile del controllo rebar. Per impostazione predefinita, RBS_BANDBORDERS, che consente di visualizzare righe narrow per separare le bande adiacenti all'interno del controllo rebar. Visualizzare [stili del controllo Rebar](/windows/desktop/Controls/rebar-control-styles) nel SDK di Windows per un elenco degli stili.

*dwStyle*<br/>
Gli stili di finestra del controllo rebar.

*nID*<br/>
ID finestra figlio del controllo rebar

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio relativo [CReBar::AddBar](#addbar).

##  <a name="getrebarctrl"></a>  CReBar::GetReBarCtrl

Questa funzione membro consente l'accesso diretto al controllo sottostante comune.

```
CReBarCtrl& GetReBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Un riferimento a un [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) oggetto.

### <a name="remarks"></a>Note

Chiamare questa funzione membro per sfruttare i vantaggi delle funzionalità del controllo comune rebar Windows la personalizzazione del controllo rebar. Quando si chiama `GetReBarCtrl`, restituisce un oggetto di riferimento per il `CReBarCtrl` quindi è possibile usare dei set di funzioni membro dell'oggetto.

Per altre informazioni sull'uso `CReBarCtrl` per personalizzare il controllo rebar, vedere [CReBarCtrl usando](../../mfc/using-crebarctrl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#2](../../mfc/reference/codesnippet/cpp/crebar-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFCIE di MFC](../../visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
