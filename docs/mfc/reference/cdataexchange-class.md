---
description: 'Altre informazioni su: classe CDataExchange'
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
ms.openlocfilehash: 36d11dc2b74142bd869b0e7b459d8bdb888b2cef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97222177"
---
# <a name="cdataexchange-class"></a>Classe CDataExchange

Supporta le routine DDX (Dialog Data Exchange) e DDV (Dialog Data Validation) usate da Microsoft Foundation Classes.

## <a name="syntax"></a>Sintassi

```
class CDataExchange
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDataExchange:: CDataExchange](#cdataexchange)|Costruisce un oggetto `CDataExchange`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDataExchange:: Fail](#fail)|Chiamato quando la convalida ha esito negativo. Reimposta lo stato attivo sul controllo precedente e genera un'eccezione.|
|[CDataExchange::P repareCtrl](#preparectrl)|Prepara il controllo specificato per lo scambio o la convalida dei dati. Usare per i controlli non di modifica.|
|[CDataExchange::P repareEditCtrl](#prepareeditctrl)|Prepara il controllo di modifica specificato per lo scambio o la convalida dei dati.|
|[CDataExchange::P repareOleCtrl](#prepareolectrl)|Prepara il controllo OLE specificato per lo scambio o la convalida dei dati. Usare per i controlli non di modifica.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDataExchange:: m_bSaveAndValidate](#m_bsaveandvalidate)|Flag per la direzione di DDX e DDV.|
|[CDataExchange:: m_pDlgWnd](#m_pdlgwnd)|La finestra di dialogo o la finestra in cui si verifica lo scambio di dati.|

## <a name="remarks"></a>Commenti

`CDataExchange` non dispone di una classe base.

Usare questa classe se si scrivono routine di scambio di dati per i tipi di dati o i controlli personalizzati o se si scrivono routine di convalida dei dati personalizzate. Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere finestra di dialogo [scambio di dati e convalida](../../mfc/dialog-data-exchange-and-validation.md) e finestre di [dialogo](../../mfc/dialog-boxes.md).

Un `CDataExchange` oggetto fornisce le informazioni sul contesto necessarie affinché DDX e DDV avvengano. Il flag *m_bSaveAndValidate* è false quando DDX viene utilizzato per inserire i valori iniziali dei controlli della finestra di dialogo dai membri dati. Il flag *m_bSaveAndValidate* è true quando DDX viene usato per impostare i valori correnti dei controlli della finestra di dialogo in membri dati e quando DDV viene usato per convalidare i valori dei dati. Se la convalida di DDV ha esito negativo, nella procedura DDV verrà visualizzata una finestra di messaggio che descrive l'errore di input. La procedura di DDV chiamerà quindi `Fail` per reimpostare lo stato attivo sul controllo che causa l'errore e genererà un'eccezione per arrestare il processo di convalida.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDataExchange`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cdataexchangecdataexchange"></a><a name="cdataexchange"></a> CDataExchange:: CDataExchange

Chiamare questa funzione membro per costruire un `CDataExchange` oggetto.

```
CDataExchange(
    CWnd* pDlgWnd,
    BOOL bSaveAndValidate);
```

### <a name="parameters"></a>Parametri

*pDlgWnd*<br/>
Puntatore alla finestra padre che contiene il controllo. Si tratta in genere di un oggetto derivato da [CDialog](../../mfc/reference/cdialog-class.md).

*bSaveAndValidate*<br/>
Se TRUE, questo oggetto convalida i dati, quindi scrive i dati dai controlli nei membri. Se FALSE, questo oggetto sposterà i dati dai membri ai controlli.

### <a name="remarks"></a>Commenti

Costruire un `CDataExchange` oggetto manualmente per archiviare informazioni aggiuntive nell'oggetto scambio di dati da passare alla funzione membro [CWnd::D odataexchange](../../mfc/reference/cwnd-class.md#dodataexchange) della finestra.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCControlLadenDialog#70](../../mfc/codesnippet/cpp/cdataexchange-class_1.cpp)]

## <a name="cdataexchangefail"></a><a name="fail"></a> CDataExchange:: Fail

Il Framework chiama questa funzione membro quando un'operazione di convalida dei dati della finestra di dialogo (DDV) ha esito negativo.

```cpp
void Fail();
```

### <a name="remarks"></a>Commenti

`Fail` Ripristina lo stato attivo e la selezione nel controllo la cui convalida ha avuto esito negativo, se è presente un controllo da ripristinare. `Fail` genera quindi un'eccezione di tipo [CUserException](../../mfc/reference/cuserexception-class.md) per arrestare il processo di convalida. L'eccezione genera una finestra di messaggio che descrive l'errore da visualizzare. Quando la convalida di DDV non riesce, l'utente può immettere nuovamente i dati nel controllo che ha causato l'errore.

Gli implementatori di routine DDV personalizzate possono chiamare `Fail` dalle routine quando una convalida ha esito negativo.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere la pagina relativa agli argomenti [relativi a scambio di dati e convalida](../../mfc/dialog-data-exchange-and-validation.md) e finestra di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangem_bsaveandvalidate"></a><a name="m_bsaveandvalidate"></a> CDataExchange:: m_bSaveAndValidate

Questo flag indica la direzione di un'operazione DDX (Dialog Data Exchange).

```
BOOL m_bSaveAndValidate;
```

### <a name="remarks"></a>Commenti

Il flag è diverso da zero se l' `CDataExchange` oggetto viene usato per spostare i dati dai controlli della finestra di dialogo ai membri dati della classe di finestre di dialogo dopo che l'utente ha modificato i controlli. Il flag è zero se l'oggetto viene utilizzato per inizializzare i controlli della finestra di dialogo dai membri dati della classe di finestra di dialogo.

Il flag è anche diverso da zero durante la convalida dei dati della finestra di dialogo (DDV).

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere la pagina relativa agli argomenti [relativi a scambio di dati e convalida](../../mfc/dialog-data-exchange-and-validation.md) e finestra di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangem_pdlgwnd"></a><a name="m_pdlgwnd"></a> CDataExchange:: m_pDlgWnd

Contiene un puntatore all'oggetto [CWnd](../../mfc/reference/cwnd-class.md) per il quale si sta VERIFICAndo DDX (Dialog Data Exchange) o la convalida (DDV).

```
CWnd* m_pDlgWnd;
```

### <a name="remarks"></a>Commenti

Questo oggetto è in genere un oggetto [CDialog](../../mfc/reference/cdialog-class.md) . Gli implementatori di routine DDX o DDV personalizzate possono utilizzare questo puntatore per ottenere l'accesso alla finestra di dialogo che contiene i controlli su cui stanno operando.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere la pagina relativa agli argomenti [relativi a scambio di dati e convalida](../../mfc/dialog-data-exchange-and-validation.md) e finestra di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangepreparectrl"></a><a name="preparectrl"></a> CDataExchange::P repareCtrl

Il Framework chiama questa funzione membro per preparare il controllo specificato per il DDX (Dialog Data Exchange) e la convalida (DDV).

```
HWND PrepareCtrl(int nIDC);
```

### <a name="parameters"></a>Parametri

*nIDC*<br/>
ID del controllo da preparare per DDX o DDV.

### <a name="return-value"></a>Valore restituito

HWND del controllo preparato per DDX o DDV.

### <a name="remarks"></a>Commenti

Usare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica; usare questa funzione membro per tutti gli altri controlli.

La preparazione consiste nell'archiviare l'elemento HWND del controllo nella `CDataExchange` classe. Il Framework utilizza questo handle per ripristinare lo stato attivo al controllo precedentemente incentrato nel caso di un errore DDX o DDV.

Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareCtrl` per tutti i controlli non di modifica per i quali scambiano dati tramite DDX o la convalida dei dati tramite DDV.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere la pagina relativa agli argomenti [relativi a scambio di dati e convalida](../../mfc/dialog-data-exchange-and-validation.md) e finestra di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangeprepareeditctrl"></a><a name="prepareeditctrl"></a> CDataExchange::P repareEditCtrl

Il Framework chiama questa funzione membro per preparare il controllo di modifica specificato per il DDX (Dialog Data Exchange) e la convalida (DDV).

```
HWND PrepareEditCtrl(int nIDC);
```

### <a name="parameters"></a>Parametri

*nIDC*<br/>
ID del controllo di modifica da preparare per DDX o DDV.

### <a name="return-value"></a>Valore restituito

HWND del controllo di modifica preparato per DDX o DDV.

### <a name="remarks"></a>Commenti

Usare invece [PrepareCtrl](#preparectrl) per tutti i controlli non di modifica.

La preparazione è costituita da due operazioni. In primo luogo, `PrepareEditCtrl` archivia l'HWND del controllo nella `CDataExchange` classe. Il Framework utilizza questo handle per ripristinare lo stato attivo al controllo precedentemente incentrato nel caso di un errore DDX o DDV. In secondo luogo, `PrepareEditCtrl` imposta un flag nella `CDataExchange` classe per indicare che il controllo i cui dati vengono scambiati o convalidati è un controllo di modifica.

Gli implementatori delle routine DDX o DDV personalizzate devono chiamare `PrepareEditCtrl` per tutti i controlli di modifica per i quali scambiano dati tramite DDX o la convalida dei dati tramite DDV.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere la pagina relativa agli argomenti [relativi a scambio di dati e convalida](../../mfc/dialog-data-exchange-and-validation.md) e finestra di [dialogo](../../mfc/dialog-boxes.md).

## <a name="cdataexchangeprepareolectrl"></a><a name="prepareolectrl"></a> CDataExchange::P repareOleCtrl

Il Framework chiama questa funzione membro per preparare il controllo OLE specificato per il DDX (Dialog Data Exchange) e la convalida (DDV).

```
COleControlSite* PrepareOleCtrl(int nIDC);
```

### <a name="parameters"></a>Parametri

*nIDC*<br/>
ID del controllo OLE da preparare per DDX o DDV.

### <a name="return-value"></a>Valore restituito

Puntatore al sito del controllo OLE.

### <a name="remarks"></a>Commenti

Utilizzare [PrepareEditCtrl](#prepareeditctrl) invece per i controlli di modifica o [PrepareCtrl](#preparectrl) per tutti gli altri controlli non OLE.

Gli implementatori di routine DDX o DDV personalizzate devono chiamare `PrepareOleCtrl` per tutti i controlli OLE per i quali scambiano dati tramite DDX o la convalida dei dati tramite DDV.

Per ulteriori informazioni sulla scrittura di routine DDX e DDV personalizzate, vedere la [Nota tecnica 26](../../mfc/tn026-ddx-and-ddv-routines.md). Per una panoramica di DDX e DDV, vedere la pagina relativa agli argomenti [relativi a scambio di dati e convalida](../../mfc/dialog-data-exchange-and-validation.md) e finestra di [dialogo](../../mfc/dialog-boxes.md).

## <a name="see-also"></a>Vedi anche

[SAMPLE di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[CWnd:: DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange)<br/>
[CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata)
