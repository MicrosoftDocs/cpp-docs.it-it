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
ms.openlocfilehash: c1379d1ef8effea0df564da1b43769bb9a11435d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363936"
---
# <a name="crebar-class"></a>Classe CReBar

Barra di controllo che fornisce le informazioni su layout, persistenza e stato per i controlli Rebar.

## <a name="syntax"></a>Sintassi

```
class CReBar : public CControlBar
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReBar::AddBar](#addbar)|Aggiunge una banda a un'armatura.|
|[CReBar::Creare](#create)|Crea il controllo Rebar e lo `CReBar` associa all'oggetto.|
|[CReBar::GetReBarCtrl](#getrebarctrl)|Consente l'accesso diretto al controllo comune sottostante.|

## <a name="remarks"></a>Osservazioni

Un oggetto rebar può contenere diverse finestre figlio, in genere altri controlli, incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. Un oggetto rebar può visualizzare le finestre figlio proprie su una bitmap specificata. L'applicazione può ridimensionare automaticamente l'armatura oppure l'utente può ridimensionare manualmente l'armatura facendo clic o trascinando la barra gripper.

![Esempio di RebarMenu](../../mfc/reference/media/vc4sc61.gif "Esempio di RebarMenu")

## <a name="rebar-control"></a>Controllo armatura

Un oggetto Rebar si comporta in modo simile a un oggetto barra degli strumenti. Un'armatura utilizza il meccanismo di selezione e trascinamento per ridimensionarne le bande. Un controllo Rebar può contenere una o più bande, con ciascuna banda che contiene una combinazione qualsiasi di una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio. Tuttavia, le bande non possono contenere più di una finestra figlio.

`CReBar`utilizza la [classe CReBarCtrl](../../mfc/reference/crebarctrl-class.md) per fornire la relativa implementazione. È possibile accedere al controllo Rebar tramite [GetReBarCtrl](#getrebarctrl) per sfruttare le opzioni di personalizzazione del controllo. Per ulteriori informazioni sui controlli `CReBarCtrl`dell'armatura, vedere . Per ulteriori informazioni sull'utilizzo dei controlli Rebar, vedere [Utilizzo di CReBarCtrl](../../mfc/using-crebarctrl.md).

> [!CAUTION]
> Gli oggetti controllo dell'armatura e dell'armatura non supportano l'ancoraggio della barra di controllo MFC. Se `CRebar::EnableDocking` viene chiamato, l'applicazione asserirà.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[Ccontrolbar](../../mfc/reference/ccontrolbar-class.md)

`CReBar`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxext.h

## <a name="crebaraddbar"></a><a name="addbar"></a>CReBar::AddBar

Chiamare questa funzione membro per aggiungere una banda all'armatura.

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

*pBar (Barra)*<br/>
Puntatore a `CWnd` un oggetto che è la finestra figlio da inserire nell'armatura. L'oggetto a cui si fa riferimento deve avere un WS_CHILD.

*lpszText*<br/>
Puntatore a una stringa contenente il testo da visualizzare sull'armatura. NULL per impostazione predefinita. Il testo contenuto in *lpszText* non fa parte della finestra figlio; si trova sull'armatura stessa.

*pbmp*<br/>
Puntatore a `CBitmap` un oggetto da visualizzare sullo sfondo dell'armatura. NULL per impostazione predefinita.

*DwStyle (in stile dwStyle)*<br/>
DWORD contenente lo stile da applicare all'armatura. Vedere `fStyle` la descrizione della funzione nella struttura Win32 [REBARBANDINFO](/windows/win32/api/commctrl/ns-commctrl-rebarbandinfow) per un elenco completo degli stili di finca.

*ClrFore*<br/>
Valore COLORREF che rappresenta il colore di primo piano dell'armatura.

*ClrIndietro*<br/>
Valore COLORREF che rappresenta il colore di sfondo dell'armatura.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#1](../../mfc/reference/codesnippet/cpp/crebar-class_1.cpp)]

## <a name="crebarcreate"></a><a name="create"></a>CReBar::Creare

Chiamare questa funzione membro per creare un'armatura.

```
virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = RBS_BANDBORDERS,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,
    UINT nID = AFX_IDW_REBAR);
```

### <a name="parameters"></a>Parametri

*pParentWnd (informazioni in due)*<br/>
Puntatore `CWnd` all'oggetto la cui finestra di Windows è l'elemento padre della barra di stato. Normalmente la finestra cornice.

*dwCtrlStyle*<br/>
Stile del controllo dell'armatura. Per impostazione predefinita, RBS_BANDBORDERS, che visualizza linee strette per separare le bande adiacenti all'interno del controllo Rebar. Per un elenco degli stili, vedere [Stili di controllo dell'armatura](/windows/win32/Controls/rebar-control-styles) in Windows SDK.

*DwStyle (in stile dwStyle)*<br/>
Stili della finestra dell'armatura.

*nID*<br/>
ID della finestra figlio di Rebar.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CReBar::AddBar](#addbar).

## <a name="crebargetrebarctrl"></a><a name="getrebarctrl"></a>CReBar::GetReBarCtrl

Questa funzione membro consente l'accesso diretto al controllo comune sottostante.

```
CReBarCtrl& GetReBarCtrl() const;
```

### <a name="return-value"></a>Valore restituito

Riferimento a un oggetto [CReBarCtrl.](../../mfc/reference/crebarctrl-class.md)

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione membro per sfruttare le funzionalità del controllo comune dell'armatura di Windows nella personalizzazione dell'armatura. Quando si `GetReBarCtrl`chiama , restituisce `CReBarCtrl` un oggetto di riferimento all'oggetto in modo da poter utilizzare entrambi i set di funzioni membro.

Per ulteriori informazioni `CReBarCtrl` sull'utilizzo dell'armatura, vedere [Utilizzo di CReBarCtrl](../../mfc/using-crebarctrl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CReBarCtrl#2](../../mfc/reference/codesnippet/cpp/crebar-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFCIE di MFC](../../overview/visual-cpp-samples.md)<br/>
[CControlBar Class](../../mfc/reference/ccontrolbar-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
