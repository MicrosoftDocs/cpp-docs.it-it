---
title: Classe CWaitCursor
ms.date: 11/04/2016
f1_keywords:
- CWaitCursor
- AFXWIN/CWaitCursor
- AFXWIN/CWaitCursor::CWaitCursor
- AFXWIN/CWaitCursor::Restore
helpviewer_keywords:
- CWaitCursor [MFC], CWaitCursor
- CWaitCursor [MFC], Restore
ms.assetid: 5dfae2ff-d7b6-4383-b0ad-91e0868c67b3
ms.openlocfilehash: aaa60e26d0a9bf99076f29124097b0629ce6f5d0
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754324"
---
# <a name="cwaitcursor-class"></a>Classe CWaitCursor

Fornisce un modo per mostrare in una riga un cursore di attesa, in genere visualizzato come una clessidra, mentre si sta eseguendo un'operazione di lunga durata.

## <a name="syntax"></a>Sintassi

```
class CWaitCursor
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWaitCursor::CWaitCursor](#cwaitcursor)|Costruisce un `CWaitCursor` oggetto e visualizza il cursore di attesa.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWaitCursor::Ripristina](#restore)|Ripristina il cursore di attesa dopo che è stato modificato.|

## <a name="remarks"></a>Osservazioni

`CWaitCursor`non dispone di una classe base.

Le procedure di programmazione di Windows richiedono la visualizzazione di un cursore di attesa ogni volta che si esegue un'operazione che richiede una notevole quantità di tempo.

Per visualizzare un cursore `CWaitCursor` di attesa, è sufficiente definire una variabile prima del codice che esegue l'operazione lunga. Il costruttore dell'oggetto determina automaticamente la visualizzazione del cursore di attesa.

Quando l'oggetto esce dall'ambito (alla fine `CWaitCursor` del blocco in cui viene dichiarato l'oggetto), il relativo distruttore imposta il cursore sul cursore precedente. In altre parole, l'oggetto esegue automaticamente la pulizia necessaria.

> [!NOTE]
> A causa del funzionamento dei costruttori `CWaitCursor` e dei distruttori, gli oggetti vengono sempre dichiarati come variabili locali, non vengono mai dichiarati come variabili globali né allocati con **new**.

Se si esegue un'operazione che potrebbe causare la modifica del cursore, ad esempio la visualizzazione di una finestra di messaggio o una finestra di dialogo, chiamare il [Ripristina](#restore) funzione membro per ripristinare il cursore di attesa. È possibile chiamare `Restore` anche quando è attualmente visualizzato un cursore di attesa.

Un altro modo per visualizzare un cursore di attesa consiste nell'utilizzare la combinazione di [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)ed forse [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor). Tuttavia, `CWaitCursor` è più facile da usare perché non è necessario impostare il cursore sul cursore precedente quando si è fatto con l'operazione lunga.

> [!NOTE]
> MFC imposta e ripristina il cursore utilizzando la funzione virtuale [CWinApp::DoWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor) . È possibile eseguire l'override di questa funzione per fornire un comportamento personalizzato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CWaitCursor`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#62](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_1.cpp)]

## <a name="cwaitcursorcwaitcursor"></a><a name="cwaitcursor"></a>CWaitCursor::CWaitCursor

Per visualizzare un cursore `CWaitCursor` di attesa, è sufficiente dichiarare un oggetto prima del codice che esegue l'operazione lunga.

```
CWaitCursor();
```

### <a name="remarks"></a>Osservazioni

Il costruttore determina automaticamente la visualizzazione del cursore di attesa.

Quando l'oggetto esce dall'ambito (alla fine `CWaitCursor` del blocco in cui viene dichiarato l'oggetto), il relativo distruttore imposta il cursore sul cursore precedente. In altre parole, l'oggetto esegue automaticamente la pulizia necessaria.

È possibile sfruttare il fatto che il distruttore viene chiamato alla fine del blocco (che potrebbe essere prima della fine della funzione) per rendere attivo il cursore di attesa solo in una parte della funzione. Questa tecnica è illustrata nel secondo esempio riportato di seguito.

> [!NOTE]
> A causa del funzionamento dei costruttori `CWaitCursor` e dei distruttori, gli oggetti vengono sempre dichiarati come variabili locali, ovvero non vengono mai dichiarati come variabili globali, né allocati con **new**.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#63](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_2.cpp)]

## <a name="cwaitcursorrestore"></a><a name="restore"></a>CWaitCursor::Ripristina

Per ripristinare il cursore di attesa, chiamare questa funzione dopo aver eseguito un'operazione, ad esempio la visualizzazione di una finestra di messaggio o una finestra di dialogo, che potrebbe modificare il cursore di attesa in un altro cursore.

```cpp
void Restore();
```

### <a name="remarks"></a>Osservazioni

È possibile chiamare `Restore` anche quando il cursore di attesa è attualmente visualizzato.

Se è necessario ripristinare il cursore di attesa in `CWaitCursor` una funzione diversa da quella in cui viene dichiarato l'oggetto , è possibile chiamare [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#64](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor)<br/>
[CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)<br/>
[CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor)<br/>
[CWinApp::DOWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor)<br/>
[Procedura: modificare il cursore del mouse in un'applicazione Microsoft Foundation Class](https://go.microsoft.com/fwlink/p/?linkid=128044)
