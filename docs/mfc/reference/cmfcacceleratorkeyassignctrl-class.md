---
description: 'Altre informazioni su: classe CMFCAcceleratorKeyAssignCtrl'
title: Classe CMFCAcceleratorKeyAssignCtrl
ms.date: 10/18/2018
f1_keywords:
- CMFCAcceleratorKeyAssignCtrl
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::GetAccel
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::IsFocused
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::IsKeyDefined
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage
- AFXACCELERATORKEYASSIGNCTRL/CMFCAcceleratorKeyAssignCtrl::ResetKey
helpviewer_keywords:
- CMFCAcceleratorKeyAssignCtrl [MFC], CMFCAcceleratorKeyAssignCtrl
- CMFCAcceleratorKeyAssignCtrl [MFC], GetAccel
- CMFCAcceleratorKeyAssignCtrl [MFC], IsFocused
- CMFCAcceleratorKeyAssignCtrl [MFC], IsKeyDefined
- CMFCAcceleratorKeyAssignCtrl [MFC], PreTranslateMessage
- CMFCAcceleratorKeyAssignCtrl [MFC], ResetKey
ms.assetid: 89fb8e62-596e-4e71-8c9a-32740347aaab
ms.openlocfilehash: 0f5584dfa521f45841691bff3775d9cd98808b9a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336585"
---
# <a name="cmfcacceleratorkeyassignctrl-class"></a>Classe CMFCAcceleratorKeyAssignCtrl

La `CMFCAcceleratorKeyAssignCtrl` classe estende la [classe CEdit](../../mfc/reference/cedit-class.md) per supportare pulsanti di sistema aggiuntivi, ad esempio ALT, CTRL e MAIUSC.

## <a name="syntax"></a>Sintassi

```
class CMFCAcceleratorKeyAssignCtrl : public CEdit
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCAcceleratorKeyAssignCtrl::CMFCAcceleratorKeyAssignCtrl](#cmfcacceleratorkeyassignctrl)|Costruisce un oggetto `CMFCAcceleratorKeyAssignCtrl`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCAcceleratorKeyAssignCtrl::GetAccel](#getaccel)|Richiama la `ACCEL` struttura per una combinazione di testi premuta nell'oggetto `CMFCAcceleratorKeyAssignCtrl`.|
|[CMFCAcceleratorKeyAssignCtrl::IsFocused](#isfocused)||
|[CMFCAcceleratorKeyAssignCtrl::IsKeyDefined](#iskeydefined)|Determina se è stato definita una combinazione di tasti.|
|[CMFCAcceleratorKeyAssignCtrl::PreTranslateMessage](#pretranslatemessage)|Usato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per tradurre i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCAcceleratorKeyAssignCtrl::ResetKey](#resetkey)|Reimposta la combinazione di tasti.|

## <a name="remarks"></a>Commenti

Questa classe estende la funzionalità della classe `CEdit` grazie al supporto delle combinazioni di tasti, note anche come tasti di scelta rapida. La `CMFCAcceleratorKeyAssignCtrl` classe funge da [classe CEdit](../../mfc/reference/cedit-class.md) e può anche riconoscere i pulsanti di sistema.

Questa classe esegue il mapping delle combinazioni di tasti per i valori stringa. Ad esempio, si presupponga che viene eseguito il mapping della combinazione di tasti ALT + B alla stringa "Alt + B". Quando l'utente preme questa combinazione di tasti in un oggetto `CMFCAcceleratorKeyAssignCtrl`, "Alt + B" viene visualizzato all'utente. Per ulteriori informazioni sul mapping tra i tasti di scelta rapida e un formato stringa, vedere [classe CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md).

## <a name="example"></a>Esempio

L'esempio seguente illustra come costruire un oggetto `CMFCAcceleratorKeyAssignCtrl` e usare il relativo metodo `ResetKey` per reimpostare la combinazione di tasti.

[!code-cpp[NVC_MFC_RibbonApp#31](../../mfc/reference/codesnippet/cpp/cmfcacceleratorkeyassignctrl-class_1.cpp)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

`CMFCAcceleratorKeyAssignCtrl`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxacceleratorkeyassignctrl. h

## <a name="cmfcacceleratorkeyassignctrlcmfcacceleratorkeyassignctrl"></a><a name="cmfcacceleratorkeyassignctrl"></a> CMFCAcceleratorKeyAssignCtrl:: CMFCAcceleratorKeyAssignCtrl

Costruisce un oggetto [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) .

```
CMFCAcceleratorKeyAssignCtrl();
```

## <a name="cmfcacceleratorkeyassignctrlgetaccel"></a><a name="getaccel"></a> CMFCAcceleratorKeyAssignCtrl:: GetAccel

Recupera la `ACCEL` struttura per un tasto di scelta rapida premuto nell'oggetto [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) .

```
ACCEL const* GetAccel() const;
```

### <a name="return-value"></a>Valore restituito

`ACCEL`Struttura che descrive il tasto di scelta rapida.

### <a name="remarks"></a>Commenti

Usare questa funzione per recuperare la `ACCEL` struttura per un tasto di scelta rapida immesso dall'utente nell' `CMFCAcceleratorKeyAssignCtrl` oggetto.

## <a name="cmfcacceleratorkeyassignctrlisfocused"></a><a name="isfocused"></a> CMFCAcceleratorKeyAssignCtrl:: con stato attivo

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
BOOL IsFocused() const;
```

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcacceleratorkeyassignctrliskeydefined"></a><a name="iskeydefined"></a> CMFCAcceleratorKeyAssignCtrl:: IsKeyDefined

Determina se un tasto di scelta rapida è stato definito nell'oggetto [CMFCAcceleratorKeyAssignCtrl](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) .

```
BOOL IsKeyDefined() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'utente ha già premuto una combinazione valida di chiavi che definiscono un tasto di scelta rapida; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Usare questa funzione per determinare se l'utente ha immesso un tasto di scelta rapida valido nell' `CMFCAcceleratorKeyAssignCtrl` oggetto. Se è presente un tasto di scelta rapida, è possibile usare il metodo [CMFCAcceleratorKeyAssignCtrl:: GetAccel](#getaccel) per ottenere la `ACCEL` struttura associata a questo tasto di scelta rapida.

## <a name="cmfcacceleratorkeyassignctrlpretranslatemessage"></a><a name="pretranslatemessage"></a> CMFCAcceleratorKeyAssignCtrl::P reTranslateMessage

Per informazioni dettagliate, vedere il codice sorgente disponibile nella **cartella \\ \\ \\ MFC atlmfc src di VC** per l'installazione di Visual Studio.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

[in] *pMsg*<br/>

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

## <a name="cmfcacceleratorkeyassignctrlresetkey"></a><a name="resetkey"></a> CMFCAcceleratorKeyAssignCtrl:: ResetKey

Reimposta la combinazione di tasti.

```cpp
void ResetKey();
```

### <a name="remarks"></a>Commenti

La funzione Cancella il testo del controllo di modifica. Sono inclusi i tasti di scelta rapida che l'utente ha premuto.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md)
