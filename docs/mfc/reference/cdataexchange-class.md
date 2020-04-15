---
title: Classe CDataExchange
ms.date: 11/04/2016
f1_keywords:
- CDataExchange
- AFXWIN/CDataExchange
- AFXWIN/CDataExchange::CDataExchange
- AFXWIN/CDataExchange::Fail
- AFXWIN/CDataExchange::PrepareCtrl
- AFXWIN/CDataExchange::PrepareEditCtrl
- AFXWIN/CDataExchange::PrepareOleCtrl
- AFXWIN/CDataExchange::m_bSaveAndValidate
- AFXWIN/CDataExchange::m_pDlgWnd
helpviewer_keywords:
- CDataExchange [MFC], CDataExchange
- CDataExchange [MFC], Fail
- CDataExchange [MFC], PrepareCtrl
- CDataExchange [MFC], PrepareEditCtrl
- CDataExchange [MFC], PrepareOleCtrl
- CDataExchange [MFC], m_bSaveAndValidate
- CDataExchange [MFC], m_pDlgWnd
ms.assetid: 84ed6113-325d-493e-a75d-223f03a992b8
ms.openlocfilehash: 73319ad898bfebf4caf191954ebb3935bd4ebce9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321962"
---
# <a name="cdataexchange-class"></a>Classe CDataExchange

Supporta le routine DDX (Dialog Data Exchange) e DDV (Dialog Data Validation) usate da Microsoft Foundation Classes.

## <a name="syntax"></a>Sintassi

```
class CDataExchange
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDataExchange::CDataExchange](#cdataexchange)|Costruisce un oggetto `CDataExchange`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDataExchange::Fail](#fail)|Chiamato quando la convalida ha esito negativo. Reimposta lo stato attivo sul controllo precedente e genera un'eccezione.|
|[CDataExchange::PrepareCtrl](#preparectrl)|Prepara il controllo specificato per lo scambio o la convalida dei dati. Utilizzare per i controlli non di modifica.|
|[CDataExchange::PrepareEditCtrl](#prepareeditctrl)|Prepara il controllo di modifica specificato per lo scambio o la convalida dei dati.|
|[CDataExchange::PrepareOleCtrl](#prepareolectrl)|Prepara il controllo OLE specificato per lo scambio o la convalida dei dati. Utilizzare per i controlli non di modifica.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDataExchange::m_bSaveAndValidate](#m_bsaveandvalidate)|Flag per la direzione di DDX e DDV.|
|[CDataExchange::m_pDlgWnd](#m_pdlgwnd)|Finestra di dialogo o finestra in cui avviene lo scambio di dati.|

## <a name="remarks"></a>Osservazioni

`CDataExchange`non dispone di una classe base.

Utilizzare questa classe se si scrivono routine di scambio dati per tipi di dati o controlli personalizzati o se si scrivono routine di convalida dei dati personalizzate. Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md) and Dialog [Boxes](../../mfc/dialog-boxes.md).

Un `CDataExchange` oggetto fornisce le informazioni di contesto necessarie per DDX e DDV. Il flag *m_bSaveAndValidate* è FALSE quando DDX viene utilizzato per riempire i valori iniziali dei controlli finestra di dialogo dai membri dati. Il *flag m_bSaveAndValidate* è TRUE quando DDX viene utilizzato per impostare i valori correnti dei controlli finestra di dialogo nei membri dati e quando DDV viene utilizzato per convalidare i valori dei dati. Se la convalida DDV non riesce, la routine DDV visualizzerà una finestra di messaggio che spiega l'errore di input. La routine DDV `Fail` chiamerà quindi per reimpostare lo stato attivo sul controllo incriminato e genererà un'eccezione per arrestare il processo di convalida.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDataExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cdataexchangecdataexchange"></a><a name="cdataexchange"></a>CDataExchange::CDataExchange

Chiamare questa funzione membro `CDataExchange` per costruire un oggetto.

```
CDataExchange(
    CWnd* pDlgWnd,
    BOOL bSaveAndValidate);
```

### <a name="parameters"></a>Parametri

*pDlgWnd (in questo stato instato)*<br/>
Puntatore alla finestra padre che contiene il controllo. In genere si tratta di un [CDialog-oggetto](../../mfc/reference/cdialog-class.md)derivato.

*bSaveAndValidate*<br/>
Se TRUE, questo oggetto convalida i dati, quindi scrive i dati dai controlli ai membri. Se FALSE, questo oggetto sposterà i dati dai membri ai controlli.

### <a name="remarks"></a>Osservazioni

Costruire `CDataExchange` un oggetto manualmente per archiviare informazioni aggiuntive nell'oggetto di scambio dati da passare alla funzione membro [CWnd::DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) della finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#70](../../mfc/codesnippet/cpp/cdataexchange-class_1.cpp)]

## <a name="cdataexchangefail"></a><a name="fail"></a>CDataExchange::Fail

Il framework chiama questa funzione membro quando un'operazione di convalida dei dati della finestra di dialogo (DDV) ha esito negativo.

```
void Fail();
```

### <a name="remarks"></a>Osservazioni

`Fail`ripristina lo stato attivo e la selezione sul controllo di cui la convalida non è riuscita (se è presente un controllo da ripristinare). `Fail`quindi genera un'eccezione di tipo [CUserException](../../mfc/reference/cuserexception-class.md) per arrestare il processo di convalida. L'eccezione causa la visualizzazione di una finestra di messaggio che spiega l'errore. Dopo la convalida DDV non riesce, l'utente può immettere nuovamente i dati nel controllo che causa l'errore.

Gli implementatori di routine DDV `Fail` personalizzate possono chiamare dalle routine quando una convalida non riesce.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [Scambio di dati](../../mfc/dialog-data-exchange-and-validation.md) e convalida delle finestre di dialogo e argomenti relativi alle finestre di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangem_bsaveandvalidate"></a><a name="m_bsaveandvalidate"></a>CDataExchange::m_bSaveAndValidate

Questo flag indica la direzione di un'operazione DDX (Dialog Data Exchange).

```
BOOL m_bSaveAndValidate;
```

### <a name="remarks"></a>Osservazioni

Il flag è diverso `CDataExchange` da zero se l'oggetto viene utilizzato per spostare i dati dai controlli della finestra di dialogo ai membri dati della classe finestra di dialogo dopo che l'utente modifica i controlli. Il flag è zero se l'oggetto viene utilizzato per inizializzare i controlli della finestra di dialogo dai membri dati della classe di finestre di dialogo.

Il flag è diverso da zero anche durante la convalida dei dati della finestra di dialogo (DDV).

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [Scambio di dati](../../mfc/dialog-data-exchange-and-validation.md) e convalida delle finestre di dialogo e argomenti relativi alle finestre di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangem_pdlgwnd"></a><a name="m_pdlgwnd"></a>CDataExchange::m_pDlgWnd

Contiene un puntatore all'oggetto [CWnd](../../mfc/reference/cwnd-class.md) per il quale è in corso la convalida DDX (Dialog Data Exchange) o DDV .

```
CWnd* m_pDlgWnd;
```

### <a name="remarks"></a>Osservazioni

Questo oggetto è in genere un [CDialog](../../mfc/reference/cdialog-class.md) oggetto. Gli implementatori di routine DDX o DDV personalizzate possono utilizzare questo puntatore per ottenere l'accesso alla finestra di dialogo che contiene i controlli su cui operano.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [Scambio di dati](../../mfc/dialog-data-exchange-and-validation.md) e convalida delle finestre di dialogo e argomenti relativi alle finestre di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangepreparectrl"></a><a name="preparectrl"></a>CDataExchange::PrepareCtrl

Il framework chiama questa funzione membro per preparare il controllo specificato per la convalida (DDX) e dDX (Dialog Data Exchange).

```
HWND PrepareCtrl(int nIDC);
```

### <a name="parameters"></a>Parametri

*nIDC*<br/>
ID del controllo da preparare per DDX o DDV.

### <a name="return-value"></a>Valore restituito

HWND del controllo preparato per DDX o DDV.

### <a name="remarks"></a>Osservazioni

Utilizzare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica; utilizzare questa funzione membro per tutti gli altri controlli.

La preparazione consiste nell'archiviare HWND del controllo nella `CDataExchange` classe. Il framework utilizza questo handle per ripristinare lo stato attivo sul controllo precedentemente attivo in caso di errore DDX o DDV.

Gli implementatori di routine DDX o DDV personalizzate devono richiedere `PrepareCtrl` tutti i controlli non di modifica per i quali si scambiano dati tramite DDX o convalidano i dati tramite DDV.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [Scambio di dati](../../mfc/dialog-data-exchange-and-validation.md) e convalida delle finestre di dialogo e argomenti relativi alle finestre di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangeprepareeditctrl"></a><a name="prepareeditctrl"></a>CDataExchange::PrepareEditCtrl

Il framework chiama questa funzione membro per preparare il controllo di modifica specificato per la convalida (DDX) e dDX (Dialog Data Exchange).

```
HWND PrepareEditCtrl(int nIDC);
```

### <a name="parameters"></a>Parametri

*nIDC*<br/>
ID del controllo di modifica da preparare per DDX o DDV.

### <a name="return-value"></a>Valore restituito

HWND del controllo di modifica preparato per DDX o DDV.

### <a name="remarks"></a>Osservazioni

Utilizzare [Invece PrepareCtrl](#preparectrl) per tutti i controlli non di modifica.

La preparazione è costituita da due cose. In `PrepareEditCtrl` primo luogo, archivia HWND del controllo nella `CDataExchange` classe. Il framework utilizza questo handle per ripristinare lo stato attivo sul controllo precedentemente attivo in caso di errore DDX o DDV. In `PrepareEditCtrl` secondo luogo, `CDataExchange` imposta un flag nella classe per indicare che il controllo i cui dati vengono scambiati o convalidati è un controllo di modifica.

Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareEditCtrl` tutti i controlli di modifica per i quali si scambiano dati tramite DDX o convalidando i dati tramite DDV.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [Scambio di dati](../../mfc/dialog-data-exchange-and-validation.md) e convalida delle finestre di dialogo e argomenti relativi alle finestre di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangeprepareolectrl"></a><a name="prepareolectrl"></a>CDataExchange::PrepareOleCtrl

Il framework chiama questa funzione membro per preparare il controllo OLE specificato per lo scambio di dati della finestra di dialogo (DDX) e la convalida (DDV).

```
COleControlSite* PrepareOleCtrl(int nIDC);
```

### <a name="parameters"></a>Parametri

*nIDC*<br/>
ID del controllo OLE da preparare per DDX o DDV.

### <a name="return-value"></a>Valore restituito

Puntatore al sito del controllo OLE.

### <a name="remarks"></a>Osservazioni

Utilizzare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica o [PrepareCtrl](#preparectrl) per tutti gli altri controlli non OLE.

Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareOleCtrl` tutti i controlli OLE per i quali si scambiano dati tramite DDX o convalidando i dati tramite DDV.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere [Scambio di dati](../../mfc/dialog-data-exchange-and-validation.md) e convalida delle finestre di dialogo e argomenti relativi alle finestre di [dialogo](../../mfc/dialog-boxes.md).

## <a name="see-also"></a>Vedere anche

[Esempio MFC VIEWEX](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange)<br/>
[CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata)
