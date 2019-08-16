---
title: Classe CReBar
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
ms.openlocfilehash: 434232e8f99bf914b00379db53d4b4a37d24fe36
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69502788"
---
# <a name="crebar-class"></a>Classe CReBar

Barra di controllo che fornisce le informazioni su layout, persistenza e stato per i controlli Rebar.

## <a name="syntax"></a>Sintassi

```
class CReBar : public CControlBar
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReBar::AddBar](#addbar)|Aggiunge una banda a un controllo Rebar.|
|[CReBar:: create](#create)|Crea il controllo Rebar e lo collega all' `CReBar` oggetto.|
|[CReBar::GetReBarCtrl](#getrebarctrl)|Consente l'accesso diretto al controllo comune sottostante.|

## <a name="remarks"></a>Note

Un oggetto rebar può contenere diverse finestre figlio, in genere altri controlli, incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. Un oggetto rebar può visualizzare le finestre figlio proprie su una bitmap specificata. L'applicazione può ridimensionare automaticamente il controllo Rebar oppure l'utente può ridimensionare manualmente il controllo Rebar facendo clic o trascinando la barra del controllo.

![Esempio di RebarMenu](../../mfc/reference/media/vc4sc61.gif "Esempio di RebarMenu")

## <a name="rebar-control"></a>Controllo Rebar

Un oggetto Rebar si comporta in modo analogo a un oggetto della barra degli strumenti. Un controllo Rebar usa il meccanismo di clic e di trascinamento per ridimensionare le bande. Un controllo Rebar può contenere una o più bande, con ciascuna banda che contiene una combinazione qualsiasi di una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio. Tuttavia, le bande non possono contenere più di una finestra figlio.

`CReBar`Usa la classe [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) per fornire la relativa implementazione. È possibile accedere al controllo Rebar tramite [GetReBarCtrl](#getrebarctrl) per sfruttare le opzioni di personalizzazione del controllo. Per ulteriori informazioni sui controlli Rebar, vedere `CReBarCtrl`. Per ulteriori informazioni sull'utilizzo dei controlli Rebar, vedere [using CReBarCtrl](../../mfc/using-crebarctrl.md).

> [!CAUTION]
>  Gli oggetti controllo Rebar e Rebar non supportano l'ancoraggio della barra di controllo MFC. Se `CRebar::EnableDocking` viene chiamato, l'applicazione verrà asserita.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CControlBar](../../mfc/reference/ccontrolbar-class.md)

`CReBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXEXT. h

##  <a name="addbar"></a>CReBar:: AddBar

Chiamare questa funzione membro per aggiungere una banda al controllo Rebar.

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
Puntatore a un `CWnd` oggetto che rappresenta la finestra figlio da inserire nel controllo Rebar. L'oggetto a cui si fa riferimento deve avere un WS_CHILD.

*lpszText*<br/>
Puntatore a una stringa contenente il testo da visualizzare nel controllo Rebar. NULL per impostazione predefinita. Il testo contenuto in *lpszText* non fa parte della finestra figlio; si trova sul controllo Rebar.

*pbmp*<br/>
Puntatore a un `CBitmap` oggetto da visualizzare sullo sfondo del controllo Rebar. NULL per impostazione predefinita.

*dwStyle*<br/>
Valore DWORD contenente lo stile da applicare al controllo Rebar. Per un `fStyle` elenco completo degli stili della banda, vedere la descrizione della funzione nella struttura Win32 [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) .

*clrFore*<br/>
Valore COLORREF che rappresenta il colore di primo piano del controllo Rebar.

*clrBack*<br/>
Valore COLORREF che rappresenta il colore di sfondo del controllo Rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#1](../../mfc/reference/codesnippet/cpp/crebar-class_1.cpp)]

##  <a name="create"></a>CReBar:: create

Chiamare questa funzione membro per creare un controllo Rebar.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = RBS_BANDBORDERS,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,
    UINT nID = AFX_IDW_REBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd*<br/>
Puntatore all' `CWnd` oggetto la cui finestra di Windows è l'elemento padre della barra di stato. In genere la finestra cornice.

*dwCtrlStyle*<br/>
Stile del controllo Rebar. Per impostazione predefinita, RBS_BANDBORDERS, che visualizza le linee strette per separare le bande adiacenti all'interno del controllo Rebar. Per un elenco di stili, vedere [stili del controllo Rebar](/windows/win32/Controls/rebar-control-styles) nel Windows SDK.

*dwStyle*<br/>
Stili della finestra Rebar.

*nID*<br/>
ID della finestra figlio del controllo Rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CReBar:: AddBar](#addbar).

##  <a name="getrebarctrl"></a>CReBar:: GetReBarCtrl

Questa funzione membro consente l'accesso diretto al controllo comune sottostante.

```
CReBarCtrl& GetReBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) .

### <a name="remarks"></a>Note

Chiamare questa funzione membro per sfruttare la funzionalità del controllo comune del rebar di Windows nella personalizzazione del controllo Rebar. Quando si chiama `GetReBarCtrl`, restituisce un oggetto `CReBarCtrl` di riferimento all'oggetto, in modo che sia possibile utilizzare un set di funzioni membro.

Per ulteriori informazioni sull'utilizzo `CReBarCtrl` di per personalizzare il controllo Rebar, vedere [using CReBarCtrl](../../mfc/using-crebarctrl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#2](../../mfc/reference/codesnippet/cpp/crebar-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[MFCIE di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CControlBar](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
