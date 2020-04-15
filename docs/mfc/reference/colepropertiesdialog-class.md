---
title: Classe COlePropertiesDialog
ms.date: 11/04/2016
f1_keywords:
- COlePropertiesDialog
- AFXODLGS/COlePropertiesDialog
- AFXODLGS/COlePropertiesDialog::COlePropertiesDialog
- AFXODLGS/COlePropertiesDialog::DoModal
- AFXODLGS/COlePropertiesDialog::OnApplyScale
- AFXODLGS/COlePropertiesDialog::m_gp
- AFXODLGS/COlePropertiesDialog::m_lp
- AFXODLGS/COlePropertiesDialog::m_op
- AFXODLGS/COlePropertiesDialog::m_psh
- AFXODLGS/COlePropertiesDialog::m_vp
helpviewer_keywords:
- COlePropertiesDialog [MFC], COlePropertiesDialog
- COlePropertiesDialog [MFC], DoModal
- COlePropertiesDialog [MFC], OnApplyScale
- COlePropertiesDialog [MFC], m_gp
- COlePropertiesDialog [MFC], m_lp
- COlePropertiesDialog [MFC], m_op
- COlePropertiesDialog [MFC], m_psh
- COlePropertiesDialog [MFC], m_vp
ms.assetid: a54dbc89-1447-4329-bd01-00e98ec9e935
ms.openlocfilehash: f065894ff49af755ab4020f71b0213b19db49054
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374888"
---
# <a name="colepropertiesdialog-class"></a>Classe COlePropertiesDialog

Incapsula la finestra di dialogo delle proprietà dell'oggetto OLE comune di Windows.

## <a name="syntax"></a>Sintassi

```
class COlePropertiesDialog : public COleDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePropertiesDialog::COlePropertiesDialog](#colepropertiesdialog)|Costruisce un oggetto `COlePropertiesDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePropertiesDialog::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[COlePropertiesDialog::OnApplyScale](#onapplyscale)|Chiamato dal framework quando il ridimensionamento dell'elemento del documento è stato modificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePropertiesDialog::m_gp](#m_gp)|Struttura utilizzata per inizializzare la pagina `COlePropertiesDialog` "Generale" di un oggetto.|
|[COlePropertiesDialog::m_lp](#m_lp)|Struttura utilizzata per inizializzare la pagina `COlePropertiesDialog` "Link" di un oggetto.|
|[COlePropertiesDialog::m_op](#m_op)|Struttura utilizzata per `COlePropertiesDialog` inizializzare l'oggetto.|
|[COlePropertiesDialog::m_psh](#m_psh)|Struttura utilizzata per aggiungere altre pagine delle proprietà personalizzate.|
|[COlePropertiesDialog::m_vp](#m_vp)|Struttura utilizzata per personalizzare la pagina `COlePropertiesDialog` "Visualizza" di un oggetto.|

## <a name="remarks"></a>Osservazioni

Le finestre di dialogo Comuni Proprietà oggetto OLE forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows. Queste proprietà includono, tra le altre, informazioni sul file rappresentato dall'elemento del documento, opzioni per la visualizzazione dell'icona e del ridimensionamento dell'immagine e informazioni sul collegamento dell'elemento (se l'elemento è collegato).

Per utilizzare `COlePropertiesDialog` un oggetto, creare `COlePropertiesDialog` innanzitutto l'oggetto utilizzando il costruttore . Dopo aver costruito la finestra `DoModal` di dialogo, chiamare la funzione membro per visualizzare la finestra di dialogo e consentire all'utente di modificare le proprietà dell'elemento. `DoModal`indica se l'utente ha selezionato il pulsante OK (IDOK) o Annulla (IDCANCEL). Oltre ai pulsanti OK e Annulla, è disponibile un pulsante Applica. Quando l'utente seleziona Applica, tutte le modifiche apportate alle proprietà dell'elemento del documento vengono applicate all'elemento e la relativa immagine viene aggiornata automaticamente, ma rimane attiva.

Il membro dati [m_psh](#m_psh) è `PROPSHEETHEADER` un puntatore a una struttura e nella maggior parte dei casi non sarà necessario accedervi in modo esplicito. Un'eccezione si verifica quando sono necessarie pagine delle proprietà aggiuntive oltre alle pagine Generale, Visualizza e Collegamento predefinite. In questo caso, è `m_psh` possibile modificare il membro dati `DoModal` per includere le pagine personalizzate prima di chiamare la funzione membro.

Per ulteriori informazioni sulle finestre di dialogo OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COlePropertiesDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="colepropertiesdialogcolepropertiesdialog"></a><a name="colepropertiesdialog"></a>COlePropertiesDialog::COlePropertiesDialog

Crea un oggetto `COlePropertiesDialog`.

```
COlePropertiesDialog(
    COleClientItem* pItem,
    UINT nScaleMin = 10,
    UINT nScaleMax = 500,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Puntatore all'elemento del documento le cui proprietà sono accessibili.

*nScaleMin (informazioni in base al fatto di*<br/>
Percentuale di ridimensionamento minima per l'immagine dell'elemento del documento.

*NScaleMax (in grado di essere in formato n*<br/>
Percentuale di ridimensionamento massima per l'immagine dell'elemento del documento.

*pParentWnd (informazioni in due)*<br/>
Puntatore all'elemento padre o al proprietario della finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Derivare la classe di finestra `COlePropertiesDialog` di dialogo Proprietà oggetto OLE comune da per implementare il ridimensionamento per gli elementi del documento. Le finestre di dialogo implementate da un'istanza di questa classe non supportano il ridimensionamento dell'elemento del documento.

Per impostazione predefinita, la finestra di dialogo Proprietà oggetto OLE comune dispone di tre pagine predefinite:

- Generale

   Questa pagina contiene informazioni di sistema per il file rappresentato dall'elemento del documento selezionato. Da questa pagina, l'utente può convertire l'elemento selezionato in un altro tipo.

- Visualizzazione

   Questa pagina contiene le opzioni per la visualizzazione dell'elemento, la modifica dell'icona e la modifica del ridimensionamento dell'immagine.

- Collegamento

   Questa pagina contiene le opzioni per modificare la posizione dell'elemento collegato e aggiornare l'elemento collegato. Da questa pagina, l'utente può interrompere il collegamento dell'elemento selezionato.

Per aggiungere pagine oltre a quelle [m_psh](#m_psh) fornite per impostazione predefinita, `COlePropertiesDialog`modificare la variabile membro m_psh prima di uscire dal costruttore della classe derivata. Si tratta di un'implementazione avanzata del `COlePropertiesDialog` costruttore.

## <a name="colepropertiesdialogdomodal"></a><a name="domodal"></a>COlePropertiesDialog::DoModal

Chiamare questa funzione membro per visualizzare la finestra di dialogo Proprietà oggetto OLE comuni di Windows e consentire all'utente di visualizzare e/o modificare le varie proprietà dell'elemento del documento.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL se ha esito positivo; in caso contrario 0. IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

Se viene restituito IDCANCEL, è possibile chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

## <a name="colepropertiesdialogm_gp"></a><a name="m_gp"></a>COlePropertiesDialog::m_gp

Struttura di tipo [OLEUIGNRLPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuignrlpropsw), utilizzata per inizializzare la pagina Generale della finestra di dialogo Proprietà oggetto OLE .

```
OLEUIGNRLPROPS m_gp;
```

### <a name="remarks"></a>Osservazioni

Questa pagina mostra il tipo e le dimensioni di un incorporamento e consente all'utente di accedere alla finestra di dialogo Converti. Questa pagina mostra anche la destinazione del collegamento se l'oggetto è un collegamento.

Per ulteriori informazioni `OLEUIGNRLPROPS` sulla struttura, vedere Windows SDK.

## <a name="colepropertiesdialogm_lp"></a><a name="m_lp"></a>COlePropertiesDialog::m_lp

Struttura di tipo [OLEUILINKPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuilinkpropsw), utilizzata per inizializzare la pagina Collegamento della finestra di dialogo Proprietà oggetto OLE .

```
OLEUILINKPROPS m_lp;
```

### <a name="remarks"></a>Osservazioni

Questa pagina mostra la posizione dell'elemento collegato e consente all'utente di aggiornare o interrompere il collegamento all'elemento.

Per ulteriori informazioni `OLEUILINKPROPS` sulla struttura, vedere Windows SDK.

## <a name="colepropertiesdialogm_op"></a><a name="m_op"></a>COlePropertiesDialog::m_op

Struttura di tipo [OLEUIOBJECTPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuiobjectpropsw), utilizzata per inizializzare la finestra di dialogo Proprietà oggetto OLE comune.

```
OLEUIOBJECTPROPS m_op;
```

### <a name="remarks"></a>Osservazioni

Questa struttura contiene i membri utilizzati per inizializzare le pagine Generale, Collegamento e Visualizza.

Per ulteriori informazioni, vedere le strutture OLEUIOBJECTPROPS e [OLEUILINKPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuilinkpropsw) in Windows SDK.

## <a name="colepropertiesdialogm_psh"></a><a name="m_psh"></a>COlePropertiesDialog::m_psh

Struttura di tipo [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2), i cui membri memorizzano le caratteristiche dell'oggetto finestra di dialogo.

```
PROPSHEETHEADER m_psh;
```

### <a name="remarks"></a>Osservazioni

Dopo aver `COlePropertiesDialog` creato un oggetto, è possibile utilizzare `m_psh` per impostare `DoModal` vari aspetti della finestra di dialogo prima di chiamare la funzione membro.

Se si `m_psh` modifica direttamente il membro dati, si eseguirà l'override di qualsiasi comportamento predefinito.

Per ulteriori informazioni `PROPSHEETHEADER` sulla struttura, vedere Windows SDK.

## <a name="colepropertiesdialogm_vp"></a><a name="m_vp"></a>COlePropertiesDialog::m_vp

Struttura di tipo [OLEUIVIEWPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuiviewpropsw), utilizzata per inizializzare la pagina Visualizza della finestra di dialogo Proprietà oggetto OLE .

```
OLEUIVIEWPROPS m_vp;
```

### <a name="remarks"></a>Osservazioni

Questa pagina consente all'utente di alternare tra le visualizzazioni "contenuto" e "iconico" dell'oggetto e di modificarne il ridimensionamento all'interno del contenitore. Consente inoltre all'utente di accedere alla finestra di dialogo Cambia icona quando l'oggetto viene visualizzato come icona.

Per ulteriori informazioni `OLEUIVIEWPROPS` sulla struttura, vedere Windows SDK.

## <a name="colepropertiesdialogonapplyscale"></a><a name="onapplyscale"></a>COlePropertiesDialog::OnApplyScale

Chiamato dal framework quando il valore di scala è stato modificato e sia stato selezionato OK o Applica.

```
virtual BOOL OnApplyScale(
    COleClientItem* pItem,
    int nCurrentScale,
    BOOL bRelativeToOrig);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Puntatore all'elemento del documento le cui proprietà sono accessibili.

*nScala di corrente*<br/>
Valore numerico della scala della finestra di dialogo.

*bRelativeToOrig*<br/>
Indica se il ridimensionamento si applica alle dimensioni originali dell'elemento del documento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se gestito; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita non esegue alcuna operazione. È necessario eseguire l'override di questa funzione per abilitare i controlli di ridimensionamento.

> [!NOTE]
> Prima che venga visualizzata la finestra di dialogo Proprietà oggetto OLE comune, il framework chiama questa funzione con un valore NULL per *pItem* e a - 1 per *nCurrentScale*. Questa operazione viene eseguita per determinare se i controlli di ridimensionamento devono essere abilitati.

## <a name="see-also"></a>Vedere anche

[CIRC di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Classe CPropertyPage](../../mfc/reference/cpropertypage-class.md)
