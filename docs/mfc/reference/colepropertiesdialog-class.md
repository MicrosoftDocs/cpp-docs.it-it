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
ms.openlocfilehash: b819bc430868717a2df01a086b482dfe6d56cc0f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69504172"
---
# <a name="colepropertiesdialog-class"></a>Classe COlePropertiesDialog

Incapsula la finestra di dialogo delle proprietà dell'oggetto OLE comune di Windows.

## <a name="syntax"></a>Sintassi

```
class COlePropertiesDialog : public COleDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePropertiesDialog:: COlePropertiesDialog](#colepropertiesdialog)|Costruisce un oggetto `COlePropertiesDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COlePropertiesDialog::D oModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[COlePropertiesDialog::OnApplyScale](#onapplyscale)|Chiamata eseguita dal framework quando il ridimensionamento dell'elemento del documento è stato modificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[COlePropertiesDialog:: m_gp](#m_gp)|Struttura utilizzata per inizializzare la pagina "generale" di un `COlePropertiesDialog` oggetto.|
|[COlePropertiesDialog::m_lp](#m_lp)|Struttura utilizzata per inizializzare la pagina "collegamento" di un `COlePropertiesDialog` oggetto.|
|[COlePropertiesDialog::m_op](#m_op)|Struttura utilizzata per inizializzare l' `COlePropertiesDialog` oggetto.|
|[COlePropertiesDialog:: m_psh](#m_psh)|Struttura utilizzata per aggiungere ulteriori pagine di proprietà personalizzate.|
|[COlePropertiesDialog:: m_vp](#m_vp)|Struttura utilizzata per personalizzare la pagina "View" di un `COlePropertiesDialog` oggetto.|

## <a name="remarks"></a>Note

Le finestre di dialogo Proprietà oggetto OLE comuni forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows. Queste proprietà includono, tra le altre, le informazioni sul file rappresentato dall'elemento del documento, le opzioni per la visualizzazione dell'icona e il ridimensionamento dell'immagine e informazioni sul collegamento dell'elemento (se l'elemento è collegato).

Per utilizzare un `COlePropertiesDialog` oggetto, creare innanzitutto l'oggetto utilizzando il `COlePropertiesDialog` costruttore. Una volta creata la finestra di dialogo, chiamare la `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di modificare le proprietà dell'elemento. `DoModal`Restituisce un valore che indica se l'utente ha selezionato il pulsante OK (IDOK) o Annulla (IDCANCEL). Oltre ai pulsanti OK e Annulla, è disponibile un pulsante Applica. Quando l'utente seleziona Applica, tutte le modifiche apportate alle proprietà dell'elemento del documento vengono applicate all'elemento e la relativa immagine viene aggiornata automaticamente, ma rimane attiva.

Il membro dati [m_psh](#m_psh) è un puntatore a una `PROPSHEETHEADER` struttura e nella maggior parte dei casi non sarà necessario accedervi in modo esplicito. Un'eccezione è rappresentata dal caso in cui siano necessarie pagine di proprietà aggiuntive oltre alle pagine generali, di visualizzazione e di collegamento predefinite. In questo caso, è possibile modificare il `m_psh` membro dati per includere le pagine personalizzate prima di chiamare `DoModal` la funzione membro.

Per ulteriori informazioni sulle finestre di dialogo OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

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

##  <a name="colepropertiesdialog"></a>COlePropertiesDialog:: COlePropertiesDialog

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
Puntatore all'elemento del documento di cui viene eseguito l'accesso alle proprietà.

*nScaleMin*<br/>
Percentuale di ridimensionamento minima per l'immagine dell'elemento del documento.

*nScaleMax*<br/>
Percentuale di ridimensionamento massima per l'immagine dell'elemento del documento.

*pParentWnd*<br/>
Puntatore al padre o al proprietario della finestra di dialogo.

### <a name="remarks"></a>Note

Derivare la classe della finestra di dialogo proprietà `COlePropertiesDialog` oggetto OLE comune da per implementare il ridimensionamento per gli elementi del documento. Tutte le finestre di dialogo implementate da un'istanza di questa classe non supporteranno il ridimensionamento dell'elemento del documento.

Per impostazione predefinita, nella finestra di dialogo Proprietà oggetto OLE comune sono presenti tre pagine predefinite:

- Generale

   Questa pagina contiene le informazioni di sistema per il file rappresentato dall'elemento del documento selezionato. Da questa pagina, l'utente può convertire l'elemento selezionato in un altro tipo.

- Visualizza

   Questa pagina contiene le opzioni per la visualizzazione dell'elemento, la modifica dell'icona e la modifica del ridimensionamento dell'immagine.

- Collegamento

   Questa pagina contiene le opzioni per modificare il percorso dell'elemento collegato e aggiornare l'elemento collegato. Da questa pagina, l'utente può interrompere il collegamento dell'elemento selezionato.

Per aggiungere pagine oltre a quelle fornite per impostazione predefinita, modificare la variabile membro [m_psh](#m_psh) prima di uscire dal costruttore `COlePropertiesDialog`della classe derivata da. Si tratta di un'implementazione avanzata del `COlePropertiesDialog` costruttore.

##  <a name="domodal"></a>COlePropertiesDialog::D oModal

Chiamare questa funzione membro per visualizzare la finestra di dialogo Proprietà oggetto OLE comune di Windows e consentire all'utente di visualizzare e/o modificare le varie proprietà dell'elemento del documento.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL in caso di esito positivo; in caso contrario, 0. IDOK e IDCANCEL sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

Se viene restituito IDCANCEL, è possibile chiamare la funzione [CommDlgExtendedError](/windows/win32/api/commdlg/nf-commdlg-commdlgextendederror) di Windows per determinare se si è verificato un errore.

##  <a name="m_gp"></a>COlePropertiesDialog:: m_gp

Struttura di tipo [OLEUIGNRLPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuignrlpropsw), utilizzata per inizializzare la pagina generale della finestra di dialogo Proprietà oggetto OLE.

```
OLEUIGNRLPROPS m_gp;
```

### <a name="remarks"></a>Note

Questa pagina mostra il tipo e le dimensioni di un incorporamento e consente all'utente di accedere alla finestra di dialogo Convert. Questa pagina mostra anche la destinazione del collegamento se l'oggetto è un collegamento.

Per ulteriori informazioni sulla `OLEUIGNRLPROPS` struttura, vedere la Windows SDK.

##  <a name="m_lp"></a>COlePropertiesDialog:: m_lp

Struttura di tipo [OLEUILINKPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuilinkpropsw), utilizzata per inizializzare la pagina di collegamento della finestra di dialogo Proprietà oggetto OLE.

```
OLEUILINKPROPS m_lp;
```

### <a name="remarks"></a>Note

Questa pagina mostra il percorso dell'elemento collegato e consente all'utente di aggiornare, o interrompere, il collegamento all'elemento.

Per ulteriori informazioni sulla `OLEUILINKPROPS` struttura, vedere la Windows SDK.

##  <a name="m_op"></a>COlePropertiesDialog:: m_Op

Struttura di tipo [OLEUIOBJECTPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuiobjectpropsw), utilizzata per inizializzare la finestra di dialogo Proprietà oggetto OLE comune.

```
OLEUIOBJECTPROPS m_op;
```

### <a name="remarks"></a>Note

Questa struttura contiene membri utilizzati per inizializzare le pagine generale, collegamento e visualizzazione.

Per ulteriori informazioni, vedere le strutture OLEUIOBJECTPROPS e [OLEUILINKPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuilinkpropsw) nel Windows SDK.

##  <a name="m_psh"></a>COlePropertiesDialog:: m_psh

Struttura di tipo [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2), i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.

```
PROPSHEETHEADER m_psh;
```

### <a name="remarks"></a>Note

Dopo la costruzione di `COlePropertiesDialog` un oggetto, è possibile `m_psh` utilizzare per impostare vari aspetti della finestra di dialogo prima di `DoModal` chiamare la funzione membro.

Se si modifica direttamente `m_psh` il membro dati, si eseguirà l'override di qualsiasi comportamento predefinito.

Per ulteriori informazioni sulla `PROPSHEETHEADER` struttura, vedere la Windows SDK.

##  <a name="m_vp"></a>COlePropertiesDialog:: m_vp

Struttura di tipo [OLEUIVIEWPROPS](/windows/win32/api/oledlg/ns-oledlg-oleuiviewpropsw), utilizzata per inizializzare la pagina di visualizzazione della finestra di dialogo Proprietà oggetto OLE.

```
OLEUIVIEWPROPS m_vp;
```

### <a name="remarks"></a>Note

Questa pagina consente all'utente di passare tra le visualizzazioni "contenuto" e "iconica" dell'oggetto e di modificarne la scalabilità all'interno del contenitore. Consente inoltre all'utente di accedere alla finestra di dialogo Cambia icona quando l'oggetto viene visualizzato come icona.

Per ulteriori informazioni sulla `OLEUIVIEWPROPS` struttura, vedere la Windows SDK.

##  <a name="onapplyscale"></a>  COlePropertiesDialog::OnApplyScale

Chiamata eseguita dal framework quando è stato modificato il valore di ridimensionamento ed è stata selezionata l'opzione OK o applica.

```
virtual BOOL OnApplyScale(
    COleClientItem* pItem,
    int nCurrentScale,
    BOOL bRelativeToOrig);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore all'elemento del documento di cui viene eseguito l'accesso alle proprietà.

*nCurrentScale*<br/>
Valore numerico della scala della finestra di dialogo.

*bRelativeToOrig*<br/>
Indica se la scalabilità si applica alle dimensioni originali dell'elemento del documento.

### <a name="return-value"></a>Valore restituito

Diverso da zero se gestito; in caso contrario, 0.

### <a name="remarks"></a>Note

L'implementazione predefinita non esegue alcuna operazione. È necessario eseguire l'override di questa funzione per abilitare i controlli di ridimensionamento.

> [!NOTE]
>  Prima che venga visualizzata la finestra di dialogo Proprietà oggetto OLE comune, il Framework chiama questa funzione con un valore NULL per *pItem* e 1 per *nCurrentScale*. Questa operazione viene eseguita per determinare se i controlli di ridimensionamento devono essere abilitati.

## <a name="see-also"></a>Vedere anche

[CIRC di esempio MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Classe CPropertyPage](../../mfc/reference/cpropertypage-class.md)
