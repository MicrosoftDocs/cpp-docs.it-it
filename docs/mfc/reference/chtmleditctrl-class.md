---
description: 'Altre informazioni su: classe CHtmlEditCtrl'
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
ms.openlocfilehash: d395f0f9f3e8b5ae10ad0ce35b2b1e410633e8d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97183997"
---
# <a name="chtmleditctrl-class"></a>Classe CHtmlEditCtrl

Fornisce la funzionalità del controllo ActiveX WebBrowser in una finestra MFC.

## <a name="syntax"></a>Sintassi

```
class CHtmlEditCtrl: public CWnd,
    public CHtmlEditCtrlBase<CHtmlEditCtrl>
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHtmlEditCtrl:: CHtmlEditCtrl](#chtmleditctrl)|Costruisce un oggetto `CHtmlEditCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CHtmlEditCtrl:: create](#create)|Crea un controllo ActiveX WebBrowser e lo collega all' `CHtmlEditCtrl` oggetto. Questa funzione inserisce automaticamente il controllo ActiveX WebBrowser in modalità di modifica.|
|[CHtmlEditCtrl:: GetDHtmlDocument](#getdhtmldocument)|Recupera l'interfaccia [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) sul documento attualmente caricato nel controllo WebBrowser contenuto.|
|[CHtmlEditCtrl:: GetStartDocument](#getstartdocument)|Recupera l'URL di un documento predefinito da caricare nel controllo WebBrowser contenuto.|

## <a name="remarks"></a>Commenti

Il controllo WebBrowser ospitato viene automaticamente messo in modalità di modifica dopo la creazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHtmlEditCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxhtml.h

## <a name="chtmleditctrlchtmleditctrl"></a><a name="chtmleditctrl"></a> CHtmlEditCtrl:: CHtmlEditCtrl

Costruisce un oggetto `CHtmlEditCtrl`.

```
CHtmlEditCtrl();
```

## <a name="chtmleditctrlcreate"></a><a name="create"></a> CHtmlEditCtrl:: create

Crea un controllo ActiveX WebBrowser e lo collega all' `CHtmlEditCtrl` oggetto. Il controllo ActiveX WebBrowser passa automaticamente a un documento predefinito e quindi viene inserito in modalità di modifica da questa funzione.

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

*lpszWindowName*<br/>
Questo parametro è inutilizzato.

*dwStyle*<br/>
Questo parametro è inutilizzato.

*Rect*<br/>
Specifica la posizione e le dimensioni del controllo.

*pParentWnd*<br/>
Specifica la finestra padre del controllo. Non deve essere NULL.

*nID*<br/>
Specifica l'ID del controllo.

*pContext*<br/>
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="chtmleditctrlgetdhtmldocument"></a><a name="getdhtmldocument"></a> CHtmlEditCtrl:: GetDHtmlDocument

Recupera l'interfaccia [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) sul documento attualmente caricato nel controllo WebBrowser contenuto

```
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;
```

### <a name="parameters"></a>Parametri

*ppDocument*<br/>
Interfaccia del documento.

## <a name="chtmleditctrlgetstartdocument"></a><a name="getstartdocument"></a> CHtmlEditCtrl:: GetStartDocument

Recupera l'URL di un documento predefinito da caricare nel controllo WebBrowser contenuto.

```
virtual LPCTSTR GetStartDocument();
```

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
