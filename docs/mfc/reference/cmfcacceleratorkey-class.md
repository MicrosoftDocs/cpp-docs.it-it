---
description: 'Altre informazioni su: classe CMFCAcceleratorKey'
title: Classe CMFCAcceleratorKey
ms.date: 11/04/2016
f1_keywords:
- CMFCAcceleratorKey
- AFXACCELERATORKEY/CMFCAcceleratorKey
- AFXACCELERATORKEY/CMFCAcceleratorKey::CMFCAcceleratorKey
- AFXACCELERATORKEY/CMFCAcceleratorKey::Format
- AFXACCELERATORKEY/CMFCAcceleratorKey::SetAccelerator
helpviewer_keywords:
- CMFCAcceleratorKey [MFC], CMFCAcceleratorKey
- CMFCAcceleratorKey [MFC], Format
- CMFCAcceleratorKey [MFC], SetAccelerator
ms.assetid: d140fbf7-23db-45ea-a63e-414a5ec7b3d5
ms.openlocfilehash: cb7fc24c4cb4d092c5f109ad892b3778d74a906f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336616"
---
# <a name="cmfcacceleratorkey-class"></a>Classe CMFCAcceleratorKey

Classe helper che implementa il mapping e la formattazione della chiave virtuale.

## <a name="syntax"></a>Sintassi

```
class CMFCAcceleratorKey : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCAcceleratorKey:: CMFCAcceleratorKey](#cmfcacceleratorkey)|Costruisce un oggetto `CMFCAcceleratorKey`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCAcceleratorKey:: Format](#format)|Converte la struttura ACCEL nella relativa rappresentazione visiva.|
|[CMFCAcceleratorKey:: seaccelerator](#setaccelerator)|Imposta il tasto di scelta rapida per l' `CMFCAcceleratorKey` oggetto.|

## <a name="remarks"></a>Commenti

I tasti di scelta rapida sono noti anche come tasti di scelta rapida. Se si desidera visualizzare i tasti di scelta rapida immessi da un utente, la [classe CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) esegue il mapping dei tasti di scelta rapida, ad esempio ALT + MAIUSC + S, a un formato di testo personalizzato, ad esempio "ALT + MAIUSC + S". Ogni `CMFCAcceleratorKey` oggetto esegue il mapping di un singolo tasto di scelta rapida a un formato di testo.

Per altre informazioni su come usare i tasti di scelta rapida e le tabelle di tasti di scelta rapida, vedere [classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un `CMFCAcceleratorKey` oggetto e come utilizzare il relativo `Format` metodo.

[!code-cpp[NVC_MFC_RibbonApp#30](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkey-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMFCAcceleratorKey`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxacceleratorkey. h

## <a name="cmfcacceleratorkeycmfcacceleratorkey"></a><a name="cmfcacceleratorkey"></a> CMFCAcceleratorKey:: CMFCAcceleratorKey

Costruisce un oggetto [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) .

```
CMFCAcceleratorKey();
CMFCAcceleratorKey(LPACCEL lpAccel);
```

### <a name="parameters"></a>Parametri

*lpAccel*<br/>
in Puntatore a un tasto di scelta rapida.

### <a name="remarks"></a>Commenti

Se non si specifica un tasto di scelta rapida quando si crea un `CMFCAccleratorKey` oggetto, usare il metodo [CMFCAcceleratorKey:: seaccelerator](#setaccelerator) per associare un tasto di scelta rapida all' `CMFCAcceleratorKey` oggetto.

## <a name="cmfcacceleratorkeyformat"></a><a name="format"></a> CMFCAcceleratorKey:: Format

Converte la struttura ACCEL nel valore stringa associato.

```cpp
void Format(CString& str) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
out Riferimento a un `CString` oggetto in cui il metodo scrive il tasto di scelta rapida tradotto.

### <a name="remarks"></a>Commenti

Questo metodo recupera il formato stringa del tasto di scelta rapida associato. È possibile impostare il formato di stringa di un oggetto [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) usando il costruttore o il metodo [CMFCAcceleratorKey:: seaccelerator](#setaccelerator).

## <a name="cmfcacceleratorkeysetaccelerator"></a><a name="setaccelerator"></a> CMFCAcceleratorKey:: seaccelerator

Imposta il tasto di scelta rapida per l'oggetto [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) .

```cpp
void SetAccelerator(LPACCEL lpAccel);
```

### <a name="parameters"></a>Parametri

*lpAccel*<br/>
in Puntatore a un tasto di scelta rapida.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per impostare il tasto di scelta rapida per un `CMFCAcceleratorKey` se non è stato fornito un tasto di scelta rapida quando è stato creato `CMFCAcceleratorKey` .

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)
