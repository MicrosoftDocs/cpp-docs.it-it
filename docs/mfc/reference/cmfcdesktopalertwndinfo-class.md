---
description: 'Altre informazioni su: classe CMFCDesktopAlertWndInfo'
title: Classe CMFCDesktopAlertWndInfo
ms.date: 10/18/2018
f1_keywords:
- CMFCDesktopAlertWndInfo
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_hIcon
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_nURLCmdID
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_strText
- AFXDESKTOPALERTDIALOG/CMFCDesktopAlertWndInfo::m_strURL
helpviewer_keywords:
- CMFCDesktopAlertWndInfo [MFC], m_hIcon
- CMFCDesktopAlertWndInfo [MFC], m_nURLCmdID
- CMFCDesktopAlertWndInfo [MFC], m_strText
- CMFCDesktopAlertWndInfo [MFC], m_strURL
ms.assetid: 5c9bb84e-6c96-4748-8e74-6951b6ae8e84
ms.openlocfilehash: 1c23e5b890e892df9bccce51542f2d36b3d6f7d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250686"
---
# <a name="cmfcdesktopalertwndinfo-class"></a>Classe CMFCDesktopAlertWndInfo

La `CMFCDesktopAlertWndInfo` classe viene utilizzata con la [classe CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md). Specifica i controlli visualizzati se viene visualizzata la finestra di avviso.

## <a name="syntax"></a>Sintassi

```
class CMFCDesktopAlertWndInfo
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCDesktopAlertWndInfo::~CMFCDesktopAlertWndInfo`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCDesktopAlertWndInfo:: operator =](#operator_eq)||

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[CMFCDesktopAlertWndInfo:: m_hIcon](#m_hicon)|Handle per l'icona visualizzata.|
|[CMFCDesktopAlertWndInfo:: m_nURLCmdID](#m_nurlcmdid)|ID di comando associato a un collegamento nella finestra di avviso del desktop.|
|[CMFCDesktopAlertWndInfo:: m_strText](#m_strtext)|Testo visualizzato nella finestra di avviso del desktop.|
|[CMFCDesktopAlertWndInfo:: m_strURL](#m_strurl)|Collegamento visualizzato nella finestra di avviso del desktop.|

## <a name="remarks"></a>Commenti

La `CMFCDesktopAlertWndInfo` classe viene passata al metodo [CMFCDesktopAlertWnd:: create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) per specificare gli elementi visualizzati nella finestra di dialogo predefinita della finestra di avviso del desktop. La finestra di dialogo predefinita può contenere tre elementi:

- Icona impostata chiamando [CMFCDesktopAlertWndInfo:: m_hIcon](#m_hicon).

- Un'etichetta o un messaggio di testo, che viene impostato chiamando [CMFCDesktopAlertWndInfo:: m_strText](#m_strtext).

- Un collegamento, che viene impostato chiamando [CMFCDesktopAlertWndInfo:: m_strURL](#m_strurl). Per impostare il comando che viene eseguito quando si fa clic sul collegamento, chiamare [CMFCDesktopAlertWndInfo:: m_nURLCmdID](#m_nurlcmdid).

Se la finestra di dialogo predefinita non è sufficiente, è possibile creare una finestra di dialogo personalizzata e passarla al metodo [CMFCDesktopAlertWnd:: create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) anziché usare questa classe. Per ulteriori informazioni, vedere la [classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare diversi membri della `CMFCDesktopAlertWndInfo` classe. Nell'esempio viene illustrato come impostare l'handle per l'icona visualizzata, il testo visualizzato nella finestra di avviso del desktop, il collegamento visualizzato nella finestra di avviso del desktop e l'ID di comando associato a un collegamento nella finestra di avviso del desktop. Questo esempio fa parte dell' [esempio di demo sugli avvisi desktop](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DesktopAlertDemo#3](../../mfc/reference/codesnippet/cpp/cmfcdesktopalertwndinfo-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CMFCDesktopAlertWndInfo](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxDesktopAlertDialog. h

## <a name="cmfcdesktopalertwndinfooperator"></a><a name="operator_eq"></a> CMFCDesktopAlertWndInfo:: operator =

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
CMFCDesktopAlertWndInfo& operator=(CMFCDesktopAlertWndInfo& src);
```

### <a name="parameters"></a>Parametri

in *src*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcdesktopalertwndinfom_hicon"></a><a name="m_hicon"></a> CMFCDesktopAlertWndInfo:: m_hIcon

Handle per l'icona visualizzata.

```
HICON m_hIcon;
```

### <a name="remarks"></a>Commenti

## <a name="cmfcdesktopalertwndinfom_nurlcmdid"></a><a name="m_nurlcmdid"></a> CMFCDesktopAlertWndInfo:: m_nURLCmdID

ID di comando associato a un collegamento nella finestra di avviso del desktop.

```
UINT m_nURLCmdID;
```

### <a name="remarks"></a>Commenti

L'ID comando viene inviato al proprietario della finestra popup quando l'utente fa clic sul collegamento specificato da [CMFCDesktopAlertWndInfo:: m_strURL](#m_strurl).

## <a name="cmfcdesktopalertwndinfom_strtext"></a><a name="m_strtext"></a> CMFCDesktopAlertWndInfo:: m_strText

Testo visualizzato nella finestra di avviso del desktop.

```
CString m_strText;
```

### <a name="remarks"></a>Commenti

## <a name="cmfcdesktopalertwndinfom_strurl"></a><a name="m_strurl"></a> CMFCDesktopAlertWndInfo:: m_strURL

Collegamento visualizzato nella finestra di avviso del desktop.

```
CString m_strURL;
```

### <a name="remarks"></a>Commenti

Quando l'utente fa clic sul collegamento, il comando con l'ID di comando [CMFCDesktopAlertWndInfo:: m_nURLCmdID](#m_nurlcmdid) verrà inviato al proprietario della finestra popup.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCDesktopAlertWnd](../../mfc/reference/cmfcdesktopalertwnd-class.md)<br/>
[CMFCDesktopAlertWnd:: create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create)<br/>
[Classe CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)
