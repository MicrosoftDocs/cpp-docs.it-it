---
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
ms.openlocfilehash: 606d70176e93de6f5526c30f182cee6f8c05499f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50522369"
---
# <a name="cmfcfontinfo-class"></a>Classe CMFCFontInfo

Il `CMFCFontInfo` classe descrive il nome e altri attributi di un tipo di carattere.

## <a name="syntax"></a>Sintassi

```
class CMFCFontInfo : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCFontInfo`|Costruisce un oggetto `CMFCFontInfo`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFontInfo::GetFullName](#getfullname)|Recupera i nomi concatenati di un tipo di carattere e il relativo carattere set (script).|

### <a name="data-members"></a>Membri di dati

|nome|Descrizione|
|----------|-----------------|
|[CMFCFontInfo::m_nCharSet](#m_ncharset)|Un valore che specifica il set di caratteri (script) associato con il tipo di carattere.|
|[CMFCFontInfo::m_nPitchAndFamily](#m_npitchandfamily)|Un valore che specifica passo e famiglia del tipo di carattere.|
|[CMFCFontInfo::m_nType](#m_ntype)|Un valore che specifica il tipo del tipo di carattere.|
|[CMFCFontInfo::m_strName](#m_strname)|Il nome del tipo di carattere; ad esempio, **Arial**.|
|[CMFCFontInfo::m_strScript](#m_strscript)|Il nome di un set di caratteri (script) associato con il tipo di carattere.|

## <a name="remarks"></a>Note

È possibile collegare un `CMFCFontInfo` a un elemento dell'oggetto di [classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md) classe. Chiamare il [CMFCToolBarFontComboBox::GetFontDesc](../../mfc/reference/cmfctoolbarfontcombobox-class.md#getfontdesc) metodo per recuperare un puntatore a un `CMFCFontInfo` oggetto.

## <a name="example"></a>Esempio

L'esempio seguente illustra come usare diversi membri del `CMFCFontInfo` classe. Nell'esempio viene illustrato come ottenere un `CMFCFontInfo` dell'oggetto da un `CMFCRibbonFontComboBox`e come accedere alle relative variabili locali. In questo esempio fa parte di [esempio dimostrativo di Office 2007](../../visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#6](../../mfc/reference/codesnippet/cpp/cmfcfontinfo-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox.h

##  <a name="cmfcfontinfo"></a>  CMFCFontInfo::CMFCFontInfo

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
[in] Il nome del tipo di carattere. Per altre informazioni, vedere la `lfFaceName` membro della [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura.

*lpszScript*<br/>
[in] Il nome dello script (set di caratteri) del tipo di carattere.

*nCharSet*<br/>
[in] Un valore che specifica il set di caratteri (script) del tipo di carattere. Per altre informazioni, vedere la `lfCharSet` membro della [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura.

*nPitchAndFamily*<br/>
[in] Un valore che specifica passo e famiglia del tipo di carattere. Per altre informazioni, vedere la `lfPitchAndFamily` membro della [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura.

*NLE*<br/>
[in] Un valore che specifica il tipo di carattere. Questo parametro può essere una combinazione bit per bit (OR) di DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE.

*src*<br/>
[in] Un oggetto esistente `CMFCFontInfo` i cui membri vengono usati per costruire l'oggetto `CMFCFontInfo` oggetto.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Questa documentazione Usa i termini *set di caratteri* e *script* in modo intercambiabile. Oggetto *script*, che è noto anche come un sistema di scrittura, è una raccolta di caratteri e le regole per la scrittura di tali caratteri in una o più lingue. La raccolta di caratteri include l'alfabeto e punteggiatura usato in tale script. Alfabeto latino, ad esempio, viene utilizzato per la lingua inglese quando si è parlato negli Stati Uniti e sul relativo alfabeto include i caratteri dalla alla Z. Il `lfCharSet` membro della [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura specifica un set di caratteri. Ad esempio, il valore ANSI_CHARSET specifica il set di caratteri ANSI, che include la lettera dell'alfabeto latino.

##  <a name="getfullname"></a>  CMFCFontInfo::GetFullName

Recupera i nomi concatenati di un tipo di carattere e il relativo carattere set (script).

```
CString GetFullName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa che contiene il nome del tipo di carattere e lo script.

### <a name="remarks"></a>Note

Usare questo metodo per ottenere il nome completo del tipo di carattere. Ad esempio, se il nome del tipo di carattere **Arial** ed è lo script del tipo di carattere **cirillico**, questo metodo restituisce "Arial (alfabeto cirillico)".

##  <a name="m_ncharset"></a>  CMFCFontInfo::m_nCharSet

Un valore che specifica il set di caratteri (script) associato con il tipo di carattere.

```
const BYTE m_nCharSet;
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere la *nCharSet* parametro delle [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

##  <a name="m_npitchandfamily"></a>  CMFCFontInfo::m_nPitchAndFamily

Un valore che specifica il tono (punto di dimensione) e la famiglia (ad esempio, serif, sans-serif e a spaziatura fissa) del tipo di carattere.

```
const BYTE m_nPitchAndFamily;
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere la *nPitchAndFamily* parametro delle [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

##  <a name="m_ntype"></a>  CMFCFontInfo::m_nType

Un valore che specifica il tipo del tipo di carattere.

```
const int m_nType;
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere la *NLE* parametro delle [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

##  <a name="m_strname"></a>  CMFCFontInfo::m_strName

Il nome del tipo di carattere: ad esempio, **Arial**.

```
const CString m_strName;
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere la *lpszName* parametro delle [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

##  <a name="m_strscript"></a>  CMFCFontInfo::m_strScript

Il nome di un set di caratteri (script) associato con il tipo di carattere.

```
const CString m_strScript;
```

### <a name="remarks"></a>Note

Per altre informazioni, vedere la *lpszScript* parametro delle [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)<br/>
[Classe CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)
