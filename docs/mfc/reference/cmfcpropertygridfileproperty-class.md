---
description: 'Altre informazioni su: classe CMFCPropertyGridFileProperty'
title: Classe CMFCPropertyGridFileProperty
ms.date: 11/04/2016
f1_keywords:
- CMFCPropertyGridFileProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFileProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty
helpviewer_keywords:
- CMFCPropertyGridFileProperty [MFC], CMFCPropertyGridFileProperty
ms.assetid: 2bb8b8b4-47fc-4798-bd5e-dc8ea0b4cd9d
ms.openlocfilehash: c18345876eb49ee2e71d3eb02776212918e5c2c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97289946"
---
# <a name="cmfcpropertygridfileproperty-class"></a>Classe CMFCPropertyGridFileProperty

La `CMFCPropertyGridFileProperty` classe supporta un elemento controllo elenco di proprietà che apre una finestra di dialogo di selezione file.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyGridFileProperty : public CMFCPropertyGridProperty
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCPropertyGridFileProperty:: CMFCPropertyGridFileProperty](#cmfcpropertygridfileproperty)|Costruisce un oggetto `CMFCPropertyGridFileProperty`.|
|`CMFCPropertyGridFileProperty::~CMFCPropertyGridFileProperty`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCPropertyGridFileProperty::GetThisClass`|Utilizzato dal Framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|`CMFCPropertyGridFileProperty::OnClickButton`|Esegue l'override di [CMFCPropertyGridProperty:: OnclickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).|

### <a name="remarks"></a>Commenti

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

[CMFCPropertyGridFileProperty](../../mfc/reference/cmfcpropertygridfileproperty-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridctrl. h

## <a name="cmfcpropertygridfilepropertycmfcpropertygridfileproperty"></a><a name="cmfcpropertygridfileproperty"></a> CMFCPropertyGridFileProperty:: CMFCPropertyGridFileProperty

Costruisce un oggetto `CMFCPropertyGridFileProperty`.

```
CMFCPropertyGridFileProperty(
    const CString& strName,
    BOOL bOpenFileDialog,
    const CString& strFileName,
    LPCTSTR lpszDefExt=NULL,
    DWORD dwFlags=OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,
    LPCTSTR lpszFilter=NULL,
    LPCTSTR lpszDescr=NULL,
    DWORD_PTR dwData=0);
```

### <a name="parameters"></a>Parametri

*strName*<br/>
[in] Nome della proprietà.

*bOpenFileDialog*<br/>
in TRUE per aprire una finestra di dialogo **Apri file** ; FALSE per aprire una finestra di dialogo **Salva file** .

*strFileName*<br/>
in Nome del file iniziale.

*lpszDefExt*<br/>
in Stringa di una o più estensioni di file. Il valore predefinito è NULL.

*dwFlags*<br/>
in Flag della finestra di dialogo. Il valore predefinito è una combinazione bit per bit (OR) di OFN_HIDEREADONLY e OFN_OVERWRITEPROMPT.

*lpszFilter*<br/>
in Stringa di uno o più filtri di file. Il valore predefinito è NULL.

*lpszDescr*<br/>
in Descrizione dell'elemento della proprietà. Il valore predefinito è NULL.

*dwData*<br/>
in Dati specifici dell'applicazione associati all'elemento della proprietà. Ad esempio, un numero intero a 32 bit o un puntatore a altri dati. Il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Per un elenco completo dei flag disponibili, vedere [struttura OPENFILENAME](/windows/win32/api/commdlg/ns-commdlg-openfilenamew).

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come creare un oggetto mediante il costruttore della classe `CMFCPropertyGridFileProperty`. Questo esempio fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#22](../../mfc/codesnippet/cpp/cmfcpropertygridfileproperty-class_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)<br/>
[Classe CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)
