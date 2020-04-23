---
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
ms.openlocfilehash: a814618d3bda27d5b4ace12209dd93343ef2eef9
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751773"
---
# <a name="cmfcacceleratorkey-class"></a>Classe CMFCAcceleratorKey

Classe helper che implementa la formattazione e il mapping dei tasti virtuali.

## <a name="syntax"></a>Sintassi

```
class CMFCAcceleratorKey : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCAcceleratorKey::CMFCAcceleratorKey](#cmfcacceleratorkey)|Costruisce un oggetto `CMFCAcceleratorKey`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCAcceleratorKey::Formato](#format)|Converte la struttura ACCEL nella relativa rappresentazione visiva.|
|[CMFCAcceleratorKey::SetAccelerator](#setaccelerator)|Imposta il tasto `CMFCAcceleratorKey` di scelta rapida per l'oggetto.|

## <a name="remarks"></a>Osservazioni

I tasti di scelta rapida sono noti anche come tasti di scelta rapida. Se si desidera visualizzare i tasti di scelta rapida immessi da un utente, la [classe CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) esegue il mapping dei tasti di scelta rapida, ad esempio ALT , MAIUSC e S, a un formato di testo personalizzato, ad esempio "ALT s Z- MAIUSC . Ogni `CMFCAcceleratorKey` oggetto esegue il mapping di un singolo tasto di scelta rapida a un formato di testo.

Per ulteriori informazioni sull'utilizzo dei tasti di scelta rapida e delle tabelle dei tasti di scelta rapida, vedere [Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene `CMFCAcceleratorKey` illustrato come costruire `Format` un oggetto e come utilizzare il relativo metodo.

[!code-cpp[NVC_MFC_RibbonApp#30](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkey-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMFCAcceleratorKey`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxacceleratorkey.h

## <a name="cmfcacceleratorkeycmfcacceleratorkey"></a><a name="cmfcacceleratorkey"></a>CMFCAcceleratorKey::CMFCAcceleratorKey

Costruisce un [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) oggetto.

```
CMFCAcceleratorKey();
CMFCAcceleratorKey(LPACCEL lpAccel);
```

### <a name="parameters"></a>Parametri

*lpAccel*<br/>
[in] Puntatore a un tasto di scelta rapida.

### <a name="remarks"></a>Osservazioni

Se non si fornisce un tasto `CMFCAccleratorKey`di scelta rapida quando si crea un , utilizzare il `CMFCAcceleratorKey` [CMFCAcceleratorKey::SetAccelerator](#setaccelerator) metodo per associare un tasto di scelta rapida all'oggetto.

## <a name="cmfcacceleratorkeyformat"></a><a name="format"></a>CMFCAcceleratorKey::Formato

Converte la struttura ACCEL nel valore stringa associato.

```cpp
void Format(CString& str) const;
```

### <a name="parameters"></a>Parametri

*Str*<br/>
[fuori] Un riferimento `CString` a un oggetto in cui il metodo scrive il tasto di scelta rapida convertito.

### <a name="remarks"></a>Osservazioni

Questo metodo recupera il formato di stringa del tasto di scelta rapida associato. È possibile impostare il formato della stringa di un [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) oggetto utilizzando il costruttore o il metodo [CMFCAcceleratorKey::SetAccelerator](#setaccelerator).

## <a name="cmfcacceleratorkeysetaccelerator"></a><a name="setaccelerator"></a>CMFCAcceleratorKey::SetAccelerator

Imposta il tasto di scelta rapida per il [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) oggetto.

```cpp
void SetAccelerator(LPACCEL lpAccel);
```

### <a name="parameters"></a>Parametri

*lpAccel*<br/>
[in] Puntatore a un tasto di scelta rapida.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per impostare `CMFCAcceleratorKey` il tasto di scelta rapida per `CMFCAcceleratorKey`un se non è stato fornito un tasto di scelta rapida al momento della creazione dell'oggetto .

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)
