---
description: 'Altre informazioni su: classe CWaitCursor'
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
ms.openlocfilehash: 5d2323e3be78154c6a9d3ded55ab9e1a951d78b7
ms.sourcegitcommit: 6183207b11575d7b44ebd7c18918e916a0d8c63d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/06/2021
ms.locfileid: "97951496"
---
# <a name="cwaitcursor-class"></a>Classe CWaitCursor

Fornisce un modo per mostrare in una riga un cursore di attesa, in genere visualizzato come una clessidra, mentre si sta eseguendo un'operazione di lunga durata.

## <a name="syntax"></a>Sintassi

```
class CWaitCursor
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWaitCursor:: CWaitCursor](#cwaitcursor)|Costruisce un `CWaitCursor` oggetto e visualizza il cursore di attesa.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWaitCursor:: Restore](#restore)|Ripristina il cursore di attesa dopo che è stato modificato.|

## <a name="remarks"></a>Commenti

`CWaitCursor` non dispone di una classe base.

Per le procedure di programmazione di Windows valide, è necessario visualizzare un cursore di attesa ogni volta che si esegue un'operazione che richiede una notevole quantità di tempo.

Per visualizzare un cursore di attesa, è sufficiente definire una `CWaitCursor` variabile prima del codice che esegue l'operazione di lunga durata. Il costruttore dell'oggetto causa automaticamente la visualizzazione del cursore di attesa.

Quando l'oggetto esce dall'ambito (alla fine del blocco in cui `CWaitCursor` viene dichiarato l'oggetto), il relativo distruttore imposta il cursore sul cursore precedente. In altre parole, l'oggetto esegue la pulizia necessaria automaticamente.

> [!NOTE]
> A causa del funzionamento dei costruttori e dei distruttori, `CWaitCursor` gli oggetti vengono sempre dichiarati come variabili locali, ma non vengono mai dichiarati come variabili globali né vengono allocati con **`new`** .

Se si esegue un'operazione che potrebbe causare la modifica del cursore, ad esempio la visualizzazione di una finestra di messaggio o di una finestra di dialogo, chiamare la funzione membro [Restore](#restore) per ripristinare il cursore di attesa. È possibile chiamare `Restore` anche quando un cursore di attesa è attualmente visualizzato.

Un altro modo per visualizzare un cursore di attesa consiste nell'usare la combinazione di [CCmdTarget:: BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget:: EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)ed eventualmente [CCmdTarget:: RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor). Tuttavia, `CWaitCursor` è più facile da utilizzare perché non è necessario impostare il cursore sul cursore precedente al termine dell'operazione di lunga durata.

> [!NOTE]
> MFC imposta e ripristina il cursore utilizzando la funzione virtuale [CWinApp::D owaitcursor](../../mfc/reference/cwinapp-class.md#dowaitcursor) . È possibile eseguire l'override di questa funzione per fornire un comportamento personalizzato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CWaitCursor`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#62](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_1.cpp)]

## <a name="cwaitcursorcwaitcursor"></a><a name="cwaitcursor"></a> CWaitCursor:: CWaitCursor

Per visualizzare un cursore di attesa, è sufficiente dichiarare un `CWaitCursor` oggetto prima del codice che esegue l'operazione di lunga durata.

```
CWaitCursor();
```

### <a name="remarks"></a>Commenti

Il costruttore causa automaticamente la visualizzazione del cursore di attesa.

Quando l'oggetto esce dall'ambito (alla fine del blocco in cui `CWaitCursor` viene dichiarato l'oggetto), il relativo distruttore imposta il cursore sul cursore precedente. In altre parole, l'oggetto esegue la pulizia necessaria automaticamente.

È possibile sfruttare il fatto che il distruttore viene chiamato alla fine del blocco (che potrebbe trovarsi prima della fine della funzione) per rendere il cursore di attesa attivo in una sola parte della funzione. Questa tecnica è illustrata nel secondo esempio riportato di seguito.

> [!NOTE]
> A causa del funzionamento dei costruttori e dei distruttori, `CWaitCursor` gli oggetti vengono sempre dichiarati come variabili locali, ma non vengono mai dichiarati come variabili globali, né vengono allocati con **`new`** .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#63](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_2.cpp)]

## <a name="cwaitcursorrestore"></a><a name="restore"></a> CWaitCursor:: Restore

Per ripristinare il cursore di attesa, chiamare questa funzione dopo l'esecuzione di un'operazione, ad esempio la visualizzazione di una finestra di messaggio o di una finestra di dialogo, che potrebbe modificare il cursore di attesa in un altro cursore.

```cpp
void Restore();
```

### <a name="remarks"></a>Commenti

È possibile chiamare `Restore` anche quando il cursore di attesa è attualmente visualizzato.

Se è necessario ripristinare il cursore di attesa in una funzione diversa da quella in cui `CWaitCursor` viene dichiarato l'oggetto, è possibile chiamare [CCmdTarget:: RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#64](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_3.cpp)]

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CCmdTarget:: BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor)<br/>
[CCmdTarget:: EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)<br/>
[CCmdTarget:: RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor)<br/>
[CWinApp::D oWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor)<br/>
[Modificare il puntatore del mouse per una finestra in MFC usando Visual C++](/troubleshoot/cpp/change-mouse-pointer-window-mfc)
