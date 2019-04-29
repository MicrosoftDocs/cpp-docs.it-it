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
ms.openlocfilehash: 6f5c465a8ec9c8f54af5545e66fb849a08d241af
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62389411"
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
|[CHtmlEditCtrl::Create](#create)|Crea un controllo WebBrowser ActiveX e lo collega al `CHtmlEditCtrl` oggetto. Questa funzione inserisce automaticamente il controllo WebBrowser ActiveX in modalità di modifica.|
|[CHtmlEditCtrl::GetDHtmlDocument](#getdhtmldocument)|Recupera le [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) interfaccia nel documento attualmente caricato nel controllo WebBrowser indipendente.|
|[CHtmlEditCtrl::GetStartDocument](#getstartdocument)|Recupera l'URL a un documento predefinito da caricare nel controllo WebBrowser indipendente.|

## <a name="remarks"></a>Note

Modalità di modifica WebBrowser ospitato controllo viene automaticamente inserito dopo averlo creato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHtmlEditCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxhtml.h

##  <a name="chtmleditctrl"></a>  CHtmlEditCtrl::CHtmlEditCtrl

Costruisce un oggetto `CHtmlEditCtrl`.

```
CHtmlEditCtrl();
```

##  <a name="create"></a>  CHtmlEditCtrl::Create

Crea un controllo WebBrowser ActiveX e lo collega al `CHtmlEditCtrl` oggetto. Il WebBrowser ActiveX controllo passa automaticamente a un documento predefinito e quindi viene inserito nella modalità di modifica da questa funzione.

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

*rect*<br/>
Specifica le dimensioni e la posizione del controllo.

*pParentWnd*<br/>
Specifica la finestra del controllo padre. Non deve essere NULL.

*nID*<br/>
Specifica l'ID. del controllo

*pContext*<br/>
Questo parametro è inutilizzato.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

##  <a name="getdhtmldocument"></a>  CHtmlEditCtrl::GetDHtmlDocument

Recupera le [IHTMLDocument2](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa752574\(v=vs.85\)) interfaccia nel documento attualmente caricato nel controllo WebBrowser indipendente

```
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;
```

### <a name="parameters"></a>Parametri

*ppDocument*<br/>
L'interfaccia a documenti.

##  <a name="getstartdocument"></a>  CHtmlEditCtrl::GetStartDocument

Recupera l'URL a un documento predefinito da caricare nel controllo WebBrowser indipendente.

```
virtual LPCTSTR GetStartDocument();
```

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
