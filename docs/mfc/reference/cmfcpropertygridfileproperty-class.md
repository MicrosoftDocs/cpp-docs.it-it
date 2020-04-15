---
title: CMFCPropertyGridFileProperty (classe)
ms.date: 11/04/2016
f1_keywords:
- CMFCPropertyGridFileProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFileProperty
- AFXPROPERTYGRIDCTRL/CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty
helpviewer_keywords:
- CMFCPropertyGridFileProperty [MFC], CMFCPropertyGridFileProperty
ms.assetid: 2bb8b8b4-47fc-4798-bd5e-dc8ea0b4cd9d
ms.openlocfilehash: 0ce3321968f0c29ce3b946f6127e4435b531c422
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360573"
---
# <a name="cmfcpropertygridfileproperty-class"></a>CMFCPropertyGridFileProperty (classe)

La `CMFCPropertyGridFileProperty` classe supporta un elemento del controllo elenco proprietà che apre una finestra di dialogo di selezione file.

## <a name="syntax"></a>Sintassi

```
class CMFCPropertyGridFileProperty : public CMFCPropertyGridProperty
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty](#cmfcpropertygridfileproperty)|Costruisce un oggetto `CMFCPropertyGridFileProperty`.|
|`CMFCPropertyGridFileProperty::~CMFCPropertyGridFileProperty`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCPropertyGridFileProperty::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|
|`CMFCPropertyGridFileProperty::OnClickButton`|(Esegue l'override [di CMFCPropertyGridProperty::OnClickButton.)](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton)|

### <a name="remarks"></a>Osservazioni

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)

[CMFCPropertyGridFileProperty](../../mfc/reference/cmfcpropertygridfileproperty-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxpropertygridctrl.h

## <a name="cmfcpropertygridfilepropertycmfcpropertygridfileproperty"></a><a name="cmfcpropertygridfileproperty"></a>CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty

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
[in] TRUE per aprire una finestra di dialogo **Apri file.** FALSE per aprire una finestra di dialogo **Salva file.**

*strFileName (nome file str)*<br/>
[in] Nome del file iniziale.

*lpszDefExt (informazioni in netto*<br/>
[in] Stringa di una o più estensioni di file. Il valore predefinito è NULL.

*dwFlags*<br/>
[in] Flag della finestra di dialogo. Il valore predefinito è una combinazione bit per bit (OR) di OFN_HIDEREADONLY e OFN_OVERWRITEPROMPT.

*Filtro di lpsz*<br/>
[in] Stringa di uno o più filtri di file. Il valore predefinito è NULL.

*lpszDescr*<br/>
[in] Descrizione dell'elemento proprietà. Il valore predefinito è NULL.

*dwData (dati)*<br/>
[in] Dati specifici dell'applicazione associati all'elemento proprietà. Ad esempio, un numero intero a 32 bit o un puntatore a altri dati. Il valore predefinito è 0.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Osservazioni

Per un elenco completo dei flag disponibili, vedere [Struttura OPENFILENAME](/windows/win32/api/commdlg/ns-commdlg-openfilenamew).

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come creare un oggetto mediante il costruttore della classe `CMFCPropertyGridFileProperty`. Questo esempio fa parte dell'esempio Demo di [Visual Studio.](../../overview/visual-cpp-samples.md)

[!code-cpp[NVC_MFC_VisualStudioDemo#22](../../mfc/codesnippet/cpp/cmfcpropertygridfileproperty-class_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md)<br/>
[CMFCPropertyGridProperty (classe)](../../mfc/reference/cmfcpropertygridproperty-class.md)
