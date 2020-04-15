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
ms.openlocfilehash: 6e87971e2afefc9cf1574abe951920c254dcd2ae
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367488"
---
# <a name="cmfcfontinfo-class"></a>Classe CMFCFontInfo

La `CMFCFontInfo` classe descrive il nome e altri attributi di un tipo di carattere.

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
|[CMFCFontInfo::GetFullName](#getfullname)|Recupera i nomi concatenati di un tipo di carattere e il relativo set di caratteri (script).|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|----------|-----------------|
|[CMFCFontInfo::m_nCharSet](#m_ncharset)|Valore che specifica il set di caratteri (script) associato al tipo di carattere.|
|[CMFCFontInfo::m_nPitchAndFamily](#m_npitchandfamily)|Valore che specifica l'altezza e la famiglia del tipo di carattere.|
|[CMFCFontInfo::m_nType](#m_ntype)|Valore che specifica il tipo di carattere.|
|[CMFCFontInfo::m_strName](#m_strname)|Il nome del tipo di carattere; ad **esempio, Arial**.|
|[CMFCFontInfo::m_strScript](#m_strscript)|Nome di un set di caratteri (script) associato al tipo di carattere.|

## <a name="remarks"></a>Osservazioni

È possibile `CMFCFontInfo` associare un oggetto a un elemento della [classe CMFCToolBarFontComboBox classe.](../../mfc/reference/cmfctoolbarfontcombobox-class.md) Chiamare il [CMFCToolBarFontComboBox::GetFontDesc](../../mfc/reference/cmfctoolbarfontcombobox-class.md#getfontdesc) metodo per `CMFCFontInfo` recuperare un puntatore a un oggetto.

## <a name="example"></a>Esempio

Nell'esempio `CMFCFontInfo` seguente viene illustrato come utilizzare vari membri della classe. Nell'esempio viene illustrato `CMFCFontInfo` come `CMFCRibbonFontComboBox`ottenere un oggetto da un oggetto e come accedere alle relative variabili locali. Questo esempio fa parte dell'esempio Demo di [MSOffice 2007.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_MSOffice2007Demo#6](../../mfc/reference/codesnippet/cpp/cmfcfontinfo-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtoolbarfontcombobox.h

## <a name="cmfcfontinfocmfcfontinfo"></a><a name="cmfcfontinfo"></a>CMFCFontInfo::CMFCFontInfo

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
[in] Nome del tipo di carattere. Per ulteriori informazioni, `lfFaceName` vedere il membro della struttura [LOGFONT.](/windows/win32/api/wingdi/ns-wingdi-logfontw)

*lpszScript (informazioni in cui è stato necessario un'istruzione*<br/>
[in] Nome dello script (set di caratteri) del tipo di carattere.

*nCharSet (insieme)*<br/>
[in] Valore che specifica il set di caratteri (script) del tipo di carattere. Per ulteriori informazioni, `lfCharSet` vedere il membro della struttura [LOGFONT.](/windows/win32/api/wingdi/ns-wingdi-logfontw)

*nPitchAndFamily (informazioni in questo gruppo)*<br/>
[in] Valore che specifica l'altezza e la famiglia del tipo di carattere. Per ulteriori informazioni, `lfPitchAndFamily` vedere il membro della struttura [LOGFONT.](/windows/win32/api/wingdi/ns-wingdi-logfontw)

*nType*<br/>
[in] Valore che specifica il tipo di carattere. Questo parametro può essere una combinazione bit per bit (OR) di DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE.

*src*<br/>
[in] Oggetto `CMFCFontInfo` esistente i cui membri `CMFCFontInfo` vengono utilizzati per costruire questo oggetto.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

In questa documentazione vengono utilizzati i termini set di *caratteri* e *script* in modo intercambiabile. Uno *script,* noto anche come sistema di scrittura, è una raccolta di caratteri e regole per la scrittura di tali caratteri in una o più lingue. La raccolta di caratteri include l'alfabeto e la punteggiatura utilizzati nello script. Ad esempio, l'alfabeto latino viene utilizzato per l'inglese come viene pronunciato negli Stati Uniti e il relativo alfabeto include i caratteri dalla A alla z. Il `lfCharSet` membro della struttura [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) specifica un set di caratteri. Ad esempio, il valore ANSI_CHARSET specifica il set di caratteri ANSI, che include l'alfabeto dello script latino.

## <a name="cmfcfontinfogetfullname"></a><a name="getfullname"></a>CMFCFontInfo::GetFullName

Recupera i nomi concatenati di un tipo di carattere e il relativo set di caratteri (script).

```
CString GetFullName() const;
```

### <a name="return-value"></a>Valore restituito

Stringa contenente il nome del tipo di carattere e lo script.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per ottenere il nome completo del tipo di carattere. Ad esempio, se il nome del tipo di carattere è **Arial** e lo script del tipo di carattere è **Cirillico**, questo metodo restituisce "Arial (alfabeto cirillico)".

## <a name="cmfcfontinfom_ncharset"></a><a name="m_ncharset"></a>CMFCFontInfo::m_nCharSet

Valore che specifica il set di caratteri (script) associato al tipo di carattere.

```
const BYTE m_nCharSet;
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere il *nCharSet* parametro del [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

## <a name="cmfcfontinfom_npitchandfamily"></a><a name="m_npitchandfamily"></a>CMFCFontInfo::m_nPitchAndFamily

Valore che specifica l'altezza (dimensione in punti) e la famiglia (ad esempio serif, sans-serif e monospazio) del tipo di carattere.

```
const BYTE m_nPitchAndFamily;
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere il *nPitchAndFamily* parametro del [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

## <a name="cmfcfontinfom_ntype"></a><a name="m_ntype"></a>CMFCFontInfo::m_nType

Valore che specifica il tipo di carattere.

```
const int m_nType;
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere il *nType* parametro del [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

## <a name="cmfcfontinfom_strname"></a><a name="m_strname"></a>CMFCFontInfo::m_strName

Il nome del tipo di carattere: ad **esempio, Arial**.

```
const CString m_strName;
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere il *lpszName* parametro del [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

## <a name="cmfcfontinfom_strscript"></a><a name="m_strscript"></a>CMFCFontInfo::m_strScript

Nome di un set di caratteri (script) associato al tipo di carattere.

```
const CString m_strScript;
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere il *lpszScript* parametro del [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBarFontComboBox (classe)](../../mfc/reference/cmfctoolbarfontcombobox-class.md)<br/>
[CMFCToolBarFontSizeComboBox (classe)](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)
