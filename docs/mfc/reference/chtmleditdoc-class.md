---
description: 'Altre informazioni su: classe CHtmlEditDoc'
title: Classe CHtmlEditDoc
ms.date: 11/04/2016
f1_keywords:
- CHtmlEditDoc
- AFXHTML/CHtmlEditDoc
- AFXHTML/CHtmlEditDoc::CHtmlEditDoc
- AFXHTML/CHtmlEditDoc::GetView
- AFXHTML/CHtmlEditDoc::IsModified
- AFXHTML/CHtmlEditDoc::OpenURL
helpviewer_keywords:
- CHtmlEditDoc [MFC], CHtmlEditDoc
- CHtmlEditDoc [MFC], GetView
- CHtmlEditDoc [MFC], IsModified
- CHtmlEditDoc [MFC], OpenURL
ms.assetid: b2cca61f-e5d6-4099-b0d1-46bf85f0bd64
ms.openlocfilehash: 5fb8187ff7925efc5bdfa6a0079a8ec4b186ae63
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97115313"
---
# <a name="chtmleditdoc-class"></a>Classe CHtmlEditDoc

Con [CHtmlEditView](../../mfc/reference/chtmleditview-class.md), fornisce la funzionalità della piattaforma di modifica WebBrowser nel contesto dell'architettura documento/visualizzazione MFC.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CHtmlEditDoc : public CDocument
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CHtmlEditDoc:: CHtmlEditDoc](#chtmleditdoc)|Costruisce un oggetto `CHtmlEditDoc`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CHtmlEditDoc:: GetView](#getview)|Recupera l' `CHtmlEditView` oggetto associato al documento.|
|[CHtmlEditDoc:: modified](#ismodified)|Restituisce un valore che indica se il controllo WebBrowser della visualizzazione associata contiene un documento modificato dall'utente.|
|[CHtmlEditDoc:: OpenURL](#openurl)|Apre un URL.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

`CHtmlEditDoc`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxhtml.h

## <a name="chtmleditdocchtmleditdoc"></a><a name="chtmleditdoc"></a> CHtmlEditDoc:: CHtmlEditDoc

Costruisce un oggetto `CHtmlEditDoc`.

```
CHtmlEditDoc();
```

## <a name="chtmleditdocgetview"></a><a name="getview"></a> CHtmlEditDoc:: GetView

Recupera l'oggetto [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) associato al documento.

```
virtual CHtmlEditView* GetView() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'oggetto del documento `CHtmlEditView` .

## <a name="chtmleditdocismodified"></a><a name="ismodified"></a> CHtmlEditDoc:: modified

Restituisce un valore che indica se il controllo WebBrowser della visualizzazione associata contiene un documento modificato dall'utente.

```
virtual BOOL IsModified();
```

## <a name="chtmleditdocopenurl"></a><a name="openurl"></a> CHtmlEditDoc:: OpenURL

Apre un URL.

```
virtual BOOL OpenURL(LPCTSTR lpszURL);
```

### <a name="parameters"></a>Parametri

*lpszURL*<br/>
URL da aprire.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="see-also"></a>Vedi anche

[Esempio HTMLEdit](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
