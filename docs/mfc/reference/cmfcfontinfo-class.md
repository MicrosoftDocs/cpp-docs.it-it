---
description: 'Altre informazioni su: classe CMFCFontInfo'
title: Classe CMFCFontInfo
ms.date: 11/04/2016
f1_keywords:
- CMFCFontInfo
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::GetFullName
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_nCharSet
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_nPitchAndFamily
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_nType
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_strName
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_strScript
helpviewer_keywords:
- CMFCFontInfo [MFC], GetFullName
- CMFCFontInfo [MFC], m_nCharSet
- CMFCFontInfo [MFC], m_nPitchAndFamily
- CMFCFontInfo [MFC], m_nType
- CMFCFontInfo [MFC], m_strName
- CMFCFontInfo [MFC], m_strScript
ms.assetid: f88329b2-d74e-4921-9441-a3bb6536a049
ms.openlocfilehash: 0922e07f268509cd4b5552a6123d8d3465a426bc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265415"
---
# <a name="cmfcfontinfo-class"></a>Classe CMFCFontInfo

La `CMFCFontInfo` classe descrive il nome e altri attributi di un tipo di carattere.

## <a name="syntax"></a>Sintassi

```
class CMFCFontInfo : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCFontInfo`|Costruisce un oggetto `CMFCFontInfo`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCFontInfo:: GetFullName](#getfullname)|Recupera i nomi concatenati di un tipo di carattere e del set di caratteri (script).|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCFontInfo:: m_nCharSet](#m_ncharset)|Valore che specifica il set di caratteri (script) associato al tipo di carattere.|
|[CMFCFontInfo:: m_nPitchAndFamily](#m_npitchandfamily)|Valore che specifica il passo e la famiglia del tipo di carattere.|
|[CMFCFontInfo:: m_nType](#m_ntype)|Valore che specifica il tipo del tipo di carattere.|
|[CMFCFontInfo:: m_strName](#m_strname)|Nome del tipo di carattere. ad esempio, **Arial**.|
|[CMFCFontInfo:: m_strScript](#m_strscript)|Nome di un set di caratteri (script) associato al tipo di carattere.|

## <a name="remarks"></a>Commenti

È possibile aggiungere un `CMFCFontInfo` oggetto a un elemento della classe della [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md) . Chiamare il metodo [CMFCToolBarFontComboBox:: GetFontDesc](../../mfc/reference/cmfctoolbarfontcombobox-class.md#getfontdesc) per recuperare un puntatore a un `CMFCFontInfo` oggetto.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare diversi membri della `CMFCFontInfo` classe. Nell'esempio viene illustrato come ottenere un `CMFCFontInfo` oggetto da un oggetto `CMFCRibbonFontComboBox` e come accedere alle variabili locali. Questo esempio fa parte dell' [esempio MSOffice 2007 demo](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#6](../../mfc/reference/codesnippet/cpp/cmfcfontinfo-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox. h

## <a name="cmfcfontinfocmfcfontinfo"></a><a name="cmfcfontinfo"></a> CMFCFontInfo:: CMFCFontInfo

Costruisce un oggetto `CMFCFontInfo`.

```
CMFCFontInfo(
    LPCTSTR lpszName,
    LPCTSTR lpszScript,
    BYTE nCharSet,
    BYTE nPitchAndFamily,
    int nType);

CMFCFontInfo(const CMFCFontInfo& src);
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
in Nome del tipo di carattere. Per ulteriori informazioni, vedere il `lfFaceName` membro della struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) .

*lpszScript*<br/>
in Nome dello script (set di caratteri) del tipo di carattere.

*nCharSet*<br/>
in Valore che specifica il set di caratteri (script) del tipo di carattere. Per ulteriori informazioni, vedere il `lfCharSet` membro della struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) .

*nPitchAndFamily*<br/>
in Valore che specifica il passo e la famiglia del tipo di carattere. Per ulteriori informazioni, vedere il `lfPitchAndFamily` membro della struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) .

*nType*<br/>
in Valore che specifica il tipo di carattere. Questo parametro può essere una combinazione bit per bit (o) di DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE.

*src*<br/>
in Oggetto esistente `CMFCFontInfo` i cui membri vengono utilizzati per costruire l' `CMFCFontInfo` oggetto.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Questa documentazione usa il *set di caratteri* dei termini e *lo script* in modo interscambiabile. Uno *script*, noto anche come sistema di scrittura, è una raccolta di caratteri e regole per la scrittura di tali caratteri in una o più lingue. La raccolta di caratteri include l'alfabeto e la punteggiatura utilizzati nello script. Ad esempio, lo script latino viene usato per la lingua inglese in quanto viene parlato nell'Stati Uniti e il relativo alfabeto include i caratteri da A A Z. Il `lfCharSet` membro della struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) specifica un set di caratteri. Il valore ANSI_CHARSET, ad esempio, specifica il set di caratteri ANSI, che include l'alfabeto dello script latino.

## <a name="cmfcfontinfogetfullname"></a><a name="getfullname"></a> CMFCFontInfo:: GetFullName

Recupera i nomi concatenati di un tipo di carattere e del set di caratteri (script).

```
CString GetFullName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa che contiene il nome del tipo di carattere e lo script.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per ottenere il nome completo del tipo di carattere. Ad esempio, se il nome del tipo di carattere è **Arial** e lo script del tipo di carattere è **cirillico**, questo metodo restituisce "Arial (alfabeto cirillico)".

## <a name="cmfcfontinfom_ncharset"></a><a name="m_ncharset"></a> CMFCFontInfo:: m_nCharSet

Valore che specifica il set di caratteri (script) associato al tipo di carattere.

```
const BYTE m_nCharSet;
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere il parametro *nCharSet* del costruttore [CMFCFontInfo:: CMFCFontInfo](#cmfcfontinfo) .

## <a name="cmfcfontinfom_npitchandfamily"></a><a name="m_npitchandfamily"></a> CMFCFontInfo:: m_nPitchAndFamily

Valore che specifica il passo (dimensione del punto) e la famiglia (ad esempio, Serif, sans-serif e monospace) del tipo di carattere.

```
const BYTE m_nPitchAndFamily;
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere il parametro *nPitchAndFamily* del costruttore [CMFCFontInfo:: CMFCFontInfo](#cmfcfontinfo) .

## <a name="cmfcfontinfom_ntype"></a><a name="m_ntype"></a> CMFCFontInfo:: m_nType

Valore che specifica il tipo del tipo di carattere.

```
const int m_nType;
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere il parametro *nType* del costruttore [CMFCFontInfo:: CMFCFontInfo](#cmfcfontinfo) .

## <a name="cmfcfontinfom_strname"></a><a name="m_strname"></a> CMFCFontInfo:: m_strName

Nome del tipo di carattere, ad esempio **Arial**.

```
const CString m_strName;
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere il parametro *lpszName* del costruttore [CMFCFontInfo:: CMFCFontInfo](#cmfcfontinfo) .

## <a name="cmfcfontinfom_strscript"></a><a name="m_strscript"></a> CMFCFontInfo:: m_strScript

Nome di un set di caratteri (script) associato al tipo di carattere.

```
const CString m_strScript;
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere il parametro *lpszScript* del costruttore [CMFCFontInfo:: CMFCFontInfo](#cmfcfontinfo) .

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)<br/>
[Classe CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)
