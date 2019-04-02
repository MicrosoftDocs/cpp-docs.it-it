---
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
ms.openlocfilehash: c2a00b2501647f6101fed8ed1d4cd23dad7ab209
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767067"
---
# <a name="chtmleditdoc-class"></a>Classe CHtmlEditDoc

Con [CHtmlEditView](../../mfc/reference/chtmleditview-class.md), fornisce la funzionalità della piattaforma di modifica WebBrowser nel contesto dell'architettura documento / visualizzazione MFC.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CHtmlEditDoc : public CDocument
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHtmlEditDoc::CHtmlEditDoc](#chtmleditdoc)|Costruisce un oggetto `CHtmlEditDoc`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CHtmlEditDoc::GetView](#getview)|Recupera il `CHtmlEditView` oggetto associato a questo documento.|
|[CHtmlEditDoc::IsModified](#ismodified)|Restituisce se controllo WebBrowser della visualizzazione associata contiene un documento che è stato modificato dall'utente.|
|[CHtmlEditDoc::OpenURL](#openurl)|Apre un URL.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

`CHtmlEditDoc`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxhtml.h

##  <a name="chtmleditdoc"></a>  CHtmlEditDoc::CHtmlEditDoc

Costruisce un oggetto `CHtmlEditDoc`.

```
CHtmlEditDoc();
```

##  <a name="getview"></a>  CHtmlEditDoc::GetView

Recupera le [CHtmlEditView](../../mfc/reference/chtmleditview-class.md) oggetto associato a questo documento.

```
virtual CHtmlEditView* GetView() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al documento `CHtmlEditView` oggetto.

##  <a name="ismodified"></a>  CHtmlEditDoc::IsModified

Restituisce se controllo WebBrowser della visualizzazione associata contiene un documento che è stato modificato dall'utente.

```
virtual BOOL IsModified();
```

##  <a name="openurl"></a>  CHtmlEditDoc::OpenURL

Apre un URL.

```
virtual BOOL OpenURL(LPCTSTR lpszURL);
```

### <a name="parameters"></a>Parametri

*lpszURL*<br/>
URL da aprire.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

## <a name="see-also"></a>Vedere anche

[Esempio HTMLEdit](../../overview/visual-cpp-samples.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
