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
ms.openlocfilehash: 6a99ad00a43ac7912320ee469d542b6bf9cca3de
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57292263"
---
# <a name="cmfcacceleratorkey-class"></a>Classe CMFCAcceleratorKey

Una classe helper che implementa virtuale mapping delle chiavi e la formattazione.

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
|[CMFCAcceleratorKey::Format](#format)|Converte la struttura di accelerazione alla relativa rappresentazione visiva.|
|[CMFCAcceleratorKey::SetAccelerator](#setaccelerator)|Imposta il tasto di scelta rapida per il `CMFCAcceleratorKey` oggetto.|

## <a name="remarks"></a>Note

Tasti di scelta rapida sono noti anche come tasti di scelta rapida. Se si desidera visualizzare tasti di scelta rapida che un utente immette, il [classe CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) mappe tasti di scelta rapida, ad esempio Alt + Maiusc + S, in un formato di testo personalizzato, ad esempio "Alt + Maiusc + S". Ogni `CMFCAcceleratorKey` oggetto esegue il mapping di un tasto di scelta rapida singolo in un formato di testo.

Per altre informazioni su come usare i tasti di scelta rapida e tasti di scelta rapida, vedere [classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md).

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire una `CMFCAcceleratorKey` oggetto e come usare relativo `Format` (metodo).

[!code-cpp[NVC_MFC_RibbonApp#30](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkey-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMFCAcceleratorKey`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxacceleratorkey.h

##  <a name="cmfcacceleratorkey"></a>  CMFCAcceleratorKey::CMFCAcceleratorKey

Costruisce un [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) oggetto.

```
CMFCAcceleratorKey();
CMFCAcceleratorKey(LPACCEL lpAccel);
```

### <a name="parameters"></a>Parametri

*lpAccel*<br/>
[in] Puntatore a un tasto di scelta rapida.

### <a name="remarks"></a>Note

Se non si specifica un tasto di scelta rapida quando si crea una `CMFCAccleratorKey`, usare il [CMFCAcceleratorKey::SetAccelerator](#setaccelerator) metodo per associare un tasto di scelta rapida con i `CMFCAcceleratorKey` oggetto.

##  <a name="format"></a>  CMFCAcceleratorKey::Format

Converte la struttura di accelerazione per il valore di stringa associata.

```
void Format(CString& str) const;
```

### <a name="parameters"></a>Parametri

*str*<br/>
[out] Un riferimento a un `CString` oggetto in cui il metodo scrive il tasto di scelta rapida tradotti.

### <a name="remarks"></a>Note

Questo metodo recupera il formato della stringa del tasto di scelta rapida associato. È possibile impostare il formato della stringa di un [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) dell'oggetto utilizzando il costruttore o il metodo [CMFCAcceleratorKey::SetAccelerator](#setaccelerator).

##  <a name="setaccelerator"></a>  CMFCAcceleratorKey::SetAccelerator

Imposta il tasto di scelta rapida per il [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md) oggetto.

```
void SetAccelerator(LPACCEL lpAccel);
```

### <a name="parameters"></a>Parametri

*lpAccel*<br/>
[in] Puntatore a un tasto di scelta rapida.

### <a name="remarks"></a>Note

Utilizzare questo metodo per impostare il tasto di scelta rapida per un `CMFCAcceleratorKey` se non è stato specificato un tasto di scelta rapida quando è stato creato il `CMFCAcceleratorKey`.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)
