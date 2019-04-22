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
ms.openlocfilehash: e574f535609ec9401bd76badf11fa7e05cc0c619
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58781861"
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
|[COlePropertiesDialog::m_gp](#m_gp)|Una struttura utilizzata per inizializzare la pagina "Generale" di un `COlePropertiesDialog` oggetto.|
|[COlePropertiesDialog::m_lp](#m_lp)|Una struttura utilizzata per inizializzare la pagina "Link" di un `COlePropertiesDialog` oggetto.|
|[COlePropertiesDialog::m_op](#m_op)|Una struttura utilizzata per inizializzare il `COlePropertiesDialog` oggetto.|
|[COlePropertiesDialog::m_psh](#m_psh)|Struttura utilizzata per aggiungere pagine delle proprietà personalizzate aggiuntive.|
|[COlePropertiesDialog::m_vp](#m_vp)|Una struttura utilizzata per personalizzare la pagina "Visualizzazione" di un `COlePropertiesDialog` oggetto.|

## <a name="remarks"></a>Note

Finestre di dialogo proprietà dell'oggetto OLE comune forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento documento OLE in modo coerente con gli standard di Windows. Queste proprietà includono, ad esempio, le informazioni sul file rappresentato dall'elemento del documento, le opzioni per visualizzare l'icona e il ridimensionamento delle immagini e informazioni sul collegamento dell'elemento (se l'elemento è collegato).

Usare un `COlePropertiesDialog` dell'oggetto, creare prima l'oggetto usando il `COlePropertiesDialog` costruttore. Dopo che è stata costruita la finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di modificare le proprietà dell'elemento. `DoModal` Restituisce se l'utente ha selezionato il OK (IDOK) o con il pulsante Annulla (IDCANCEL). Oltre i pulsanti OK e Annulla, è disponibile un pulsante Applica. Quando l'utente seleziona applica, tutte le modifiche apportate alle proprietà dell'elemento del documento vengono applicate all'elemento e la sua immagine viene aggiornata automaticamente, ma rimane attiva.

Il [m_psh](#m_psh) membro dati è un puntatore a un `PROPSHEETHEADER` struttura e nella maggior parte dei casi non è necessario accedervi in modo esplicito. Un'unica eccezione è quando occorre pagine delle proprietà aggiuntive oltre le pagine generale, la visualizzazione e collegamento predefinito. In questo caso, è possibile modificare il `m_psh` membro dati da includere le pagine personalizzate prima di chiamare il `DoModal` funzione membro.

Per altre informazioni sulle finestre di dialogo OLE, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COlePropertiesDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

##  <a name="colepropertiesdialog"></a>  COlePropertiesDialog::COlePropertiesDialog

Crea un oggetto `COlePropertiesDialog`.

```
COlePropertiesDialog(
    COleClientItem* pItem,
    UINT nScaleMin = 10,
    UINT nScaleMax = 500,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore all'elemento documento la cui proprietà accessibili.

*nScaleMin*<br/>
Percentuale minima di adattamento per l'immagine di elemento del documento.

*nScaleMax*<br/>
Massima scalabilità percentuale per l'immagine di elemento del documento.

*pParentWnd*<br/>
Puntatore all'elemento padre o il proprietario della finestra di dialogo.

### <a name="remarks"></a>Note

Derivare la classe di finestra di dialogo comune di proprietà dell'oggetto OLE da `COlePropertiesDialog` per implementare la scalabilità per gli elementi del documento. Le finestre di dialogo implementate da un'istanza di questa classe non supporta il ridimensionamento dell'elemento del documento.

Per impostazione predefinita, la finestra di dialogo proprietà dell'oggetto OLE comune include tre pagine predefinita:

- Generale

   Questa pagina contiene informazioni sul sistema per il file rappresentato dall'elemento documento selezionato. In questa pagina, l'utente può convertire l'elemento selezionato in un altro tipo.

- Visualizza

   Questa pagina contiene le opzioni per la visualizzazione dell'elemento, l'icona di modifica e modifica della scalabilità dell'immagine.

- Collegamento

   Questa pagina contiene le opzioni per la modifica della posizione dell'elemento collegato e aggiornare l'elemento collegato. In questa pagina, l'utente può interrompere il collegamento dell'elemento selezionato.

Per aggiungere pagine oltre a quelli forniti per impostazione predefinita, modificare il [m_psh](#m_psh) variabile membro prima di disattivare il costruttore del `COlePropertiesDialog`-classe derivata. Si tratta di un'implementazione avanzata del `COlePropertiesDialog` costruttore.

##  <a name="domodal"></a>  COlePropertiesDialog::DoModal

Chiamare questa funzione membro per visualizzare la finestra di dialogo proprietà dell'oggetto OLE comune Windows e consentire all'utente di visualizzare e/o modificare le varie proprietà dell'elemento del documento.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL se ha esito positivo. in caso contrario 0. IDOK e IDCANCEL sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

Se viene restituito IDCANCEL, è possibile chiamare il Windows [CommDlgExtendedError](/windows/desktop/api/commdlg/nf-commdlg-commdlgextendederror) funzione per determinare se si è verificato un errore.

##  <a name="m_gp"></a>  COlePropertiesDialog::m_gp

Una struttura di tipo [OLEUIGNRLPROPS](/windows/desktop/api/oledlg/ns-oledlg-tagoleuignrlpropsa), usato per inizializzare la pagina Generale della finestra di dialogo proprietà dell'oggetto OLE.

```
OLEUIGNRLPROPS m_gp;
```

### <a name="remarks"></a>Note

Questa pagina Mostra il tipo e le dimensioni di un incorporamento e consente all'utente l'accesso alla finestra di dialogo Converti. Questa pagina mostra anche la destinazione del collegamento se l'oggetto è un collegamento.

Per altre informazioni sul `OLEUIGNRLPROPS` struttura, vedere il SDK di Windows.

##  <a name="m_lp"></a>  COlePropertiesDialog::m_lp

Una struttura di tipo [OLEUILINKPROPS](/windows/desktop/api/oledlg/ns-oledlg-tagoleuilinkpropsa), usato per inizializzare la pagina di collegamento della finestra di dialogo proprietà dell'oggetto OLE.

```
OLEUILINKPROPS m_lp;
```

### <a name="remarks"></a>Note

Questa pagina Mostra la posizione dell'elemento collegato e consente all'utente di aggiornare o interrompere, il collegamento all'elemento.

Per altre informazioni sul `OLEUILINKPROPS` struttura, vedere il SDK di Windows.

##  <a name="m_op"></a>  COlePropertiesDialog::m_op

Una struttura di tipo [OLEUIOBJECTPROPS](/windows/desktop/api/oledlg/ns-oledlg-tagoleuiobjectpropsa), usato per inizializzare la finestra di dialogo proprietà dell'oggetto OLE comune.

```
OLEUIOBJECTPROPS m_op;
```

### <a name="remarks"></a>Note

Questa struttura contiene i membri utilizzati per inizializzare le pagine generale, collegamento e visualizzazione.

Per altre informazioni, vedere il OLEUIOBJECTPROPS e [OLEUILINKPROPS](/windows/desktop/api/oledlg/ns-oledlg-tagoleuilinkpropsa) strutture nel SDK di Windows.

##  <a name="m_psh"></a>  COlePropertiesDialog::m_psh

Una struttura di tipo [PROPSHEETHEADER](/windows/desktop/api/prsht/ns-prsht-_propsheetheadera_v2), i cui membri memorizzare le caratteristiche dell'oggetto finestra di dialogo.

```
PROPSHEETHEADER m_psh;
```

### <a name="remarks"></a>Note

Dopo la costruzione di un `COlePropertiesDialog` dell'oggetto, è possibile usare `m_psh` per impostare i vari aspetti della finestra di dialogo prima di chiamare il `DoModal` funzione membro.

Se si modifica il `m_psh` membro dati direttamente, si eseguirà l'override di qualsiasi comportamento predefinito.

Per altre informazioni sul `PROPSHEETHEADER` struttura, vedere il SDK di Windows.

##  <a name="m_vp"></a>  COlePropertiesDialog::m_vp

Una struttura di tipo [OLEUIVIEWPROPS](/windows/desktop/api/oledlg/ns-oledlg-tagoleuiviewpropsa), usato per inizializzare la pagina di visualizzazione della finestra di dialogo proprietà dell'oggetto OLE.

```
OLEUIVIEWPROPS m_vp;
```

### <a name="remarks"></a>Note

Questa pagina consente all'utente di alternare "content" e "originalissima" viste dell'oggetto e modificare la scalabilità all'interno del contenitore. Consente inoltre all'utente l'accesso alla finestra di dialogo Cambia icona quando l'oggetto viene visualizzato come icona.

Per altre informazioni sul `OLEUIVIEWPROPS` struttura, vedere il SDK di Windows.

##  <a name="onapplyscale"></a>  COlePropertiesDialog::OnApplyScale

Chiamato dal framework quando è stato modificato il valore della scala e OK o applica è stato selezionato.

```
virtual BOOL OnApplyScale(
    COleClientItem* pItem,
    int nCurrentScale,
    BOOL bRelativeToOrig);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore all'elemento documento la cui proprietà accessibili.

*nCurrentScale*<br/>
Valore numerico della scala della finestra.

*bRelativeToOrig*<br/>
Indica se la scalabilità viene applicato alle dimensioni originali dell'elemento del documento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stato gestito; in caso contrario 0.

### <a name="remarks"></a>Note

L'implementazione predefinita non esegue alcuna operazione. È necessario eseguire l'override di questa funzione per abilitare i controlli di ridimensionamento.

> [!NOTE]
>  Prima che venga visualizzata la finestra di dialogo proprietà dell'oggetto OLE comune, il framework chiama questa funzione con un valore NULL per *pItem* e a - 1 per *nCurrentScale*. Questa operazione viene eseguita per determinare se i controlli di ridimensionamento devono essere abilitati.

## <a name="see-also"></a>Vedere anche

[Esempio MFC CIRC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Classe CPropertyPage](../../mfc/reference/cpropertypage-class.md)
