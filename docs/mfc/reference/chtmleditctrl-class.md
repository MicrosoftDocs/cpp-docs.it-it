---
title: Classe CHtmlEditCtrl
ms.date: 11/04/2016
f1_keywords:
- CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl::CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl::Create
- AFXHTML/CHtmlEditCtrl::GetDHtmlDocument
- AFXHTML/CHtmlEditCtrl::GetStartDocument
helpviewer_keywords:
- CHtmlEditCtrl [MFC], CHtmlEditCtrl
- CHtmlEditCtrl [MFC], Create
- CHtmlEditCtrl [MFC], GetDHtmlDocument
- CHtmlEditCtrl [MFC], GetStartDocument
ms.assetid: 0fc4a238-b05f-4874-9edc-6a6701f064d9
ms.openlocfilehash: 05063c62e9f7a5d88d3fecde842f979725200f98
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366848"
---
# <a name="chtmleditctrl-class"></a>Classe CHtmlEditCtrl

Fornisce la funzionalità del controllo ActiveX WebBrowser in una finestra MFC.

## <a name="syntax"></a>Sintassi

```
class CHtmlEditCtrl: public CWnd,
    public CHtmlEditCtrlBase<CHtmlEditCtrl>
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHtmlEditCtrl::CHtmlEditCtrl](#chtmleditctrl)|Costruisce un oggetto `CHtmlEditCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHtmlEditCtrl::Crea](#create)|Crea un controllo ActiveX WebBrowser e `CHtmlEditCtrl` lo associa all'oggetto. Questa funzione attiva la modalità di modifica del controllo ActiveX WebBrowser.|
|[CHtmlEditCtrl::GetDHtmlDocument](#getdhtmldocument)|Recupera l'interfaccia [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) sul documento attualmente caricato nel controllo WebBrowser contenuto.|
|[CHtmlEditCtrl::GetStartDocument](#getstartdocument)|Recupera l'URL di un documento predefinito da caricare nel controllo WebBrowser contenuto.|

## <a name="remarks"></a>Osservazioni

Il controllo WebBrowser ospitato viene automaticamente messo in modalità di modifica dopo la creazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHtmlEditCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxhtml.h

## <a name="chtmleditctrlchtmleditctrl"></a><a name="chtmleditctrl"></a>CHtmlEditCtrl::CHtmlEditCtrl

Costruisce un oggetto `CHtmlEditCtrl`.

```
CHtmlEditCtrl();
```

## <a name="chtmleditctrlcreate"></a><a name="create"></a>CHtmlEditCtrl::Crea

Crea un controllo ActiveX WebBrowser e `CHtmlEditCtrl` lo associa all'oggetto. Il controllo ActiveX WebBrowser passa automaticamente a un documento predefinito e quindi viene inserito in modalità di modifica da questa funzione.

```
virtual BOOL Create(
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    int nID,
    CCreateContext* pContext = NULL);
```

### <a name="parameters"></a>Parametri

*lpszNomefinestraNome*<br/>
Questo parametro è inutilizzato.

*DwStyle (in stile dwStyle)*<br/>
Questo parametro è inutilizzato.

*Rect*<br/>
Specifica le dimensioni e la posizione del controllo.

*pParentWnd (informazioni in due)*<br/>
Specifica la finestra padre del controllo. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo.

*pContext*<br/>
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="chtmleditctrlgetdhtmldocument"></a><a name="getdhtmldocument"></a>CHtmlEditCtrl::GetDHtmlDocument

Recupera l'interfaccia [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) sul documento attualmente caricato nel controllo WebBrowser contenuto

```
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;
```

### <a name="parameters"></a>Parametri

*PpDocument (documento pp)*<br/>
Interfaccia del documento.

## <a name="chtmleditctrlgetstartdocument"></a><a name="getstartdocument"></a>CHtmlEditCtrl::GetStartDocument

Recupera l'URL di un documento predefinito da caricare nel controllo WebBrowser contenuto.

```
virtual LPCTSTR GetStartDocument();
```

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
