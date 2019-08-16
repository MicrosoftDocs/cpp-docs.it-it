---
title: Classe CSnapInPropertyPageImpl
ms.date: 11/04/2016
f1_keywords:
- CSnapInPropertyPageImpl
- ATLSNAP/ATL::CSnapInPropertyPageImpl
- ATLSNAP/ATL::CSnapInPropertyPageImpl::CSnapInPropertyPageImpl
- ATLSNAP/ATL::CSnapInPropertyPageImpl::CancelToClose
- ATLSNAP/ATL::CSnapInPropertyPageImpl::Create
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnApply
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnHelp
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnKillActive
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnQueryCancel
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnReset
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnSetActive
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnWizardBack
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnWizardFinish
- ATLSNAP/ATL::CSnapInPropertyPageImpl::OnWizardNext
- ATLSNAP/ATL::CSnapInPropertyPageImpl::QuerySiblings
- ATLSNAP/ATL::CSnapInPropertyPageImpl::SetModified
- ATLSNAP/ATL::CSnapInPropertyPageImpl::m_psp
helpviewer_keywords:
- snap-ins, property pages
- snap-ins
- property pages, ATL
- CSnapInPropertyPageImpl class
ms.assetid: 75bdce5a-985e-4166-bd44-493132e023c4
ms.openlocfilehash: abf4cf5804f6ef7335192feb298f1a4a06f841e4
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496402"
---
# <a name="csnapinpropertypageimpl-class"></a>Classe CSnapInPropertyPageImpl

Questa classe fornisce metodi per l'implementazione di un oggetto pagina delle proprietà dello snap-in.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
CSnapInPropertyPageImpl : public CDialogImplBase
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](#csnapinpropertypageimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CSnapInPropertyPageImpl::CancelToClose](#canceltoclose)|Modifica lo stato dei pulsanti **OK** e **Annulla** .|
|[CSnapInPropertyPageImpl::Create](#create)|Inizializza un oggetto appena `CSnapInPropertyPageImpl` creato.|
|[CSnapInPropertyPageImpl::OnApply](#onapply)|Chiamata eseguita dal framework quando l'utente fa clic sul pulsante **Applica ora quando si** utilizza una finestra delle proprietà di tipo procedura guidata.|
|[CSnapInPropertyPageImpl::OnHelp](#onhelp)|Chiamata eseguita dal framework quando l'utente fa clic sul pulsante? quando si utilizza una finestra delle proprietà del tipo di procedura guidata.|
|[CSnapInPropertyPageImpl::OnKillActive](#onkillactive)|Chiamata eseguita dal framework quando la pagina corrente non è più attiva.|
|[CSnapInPropertyPageImpl::OnQueryCancel](#onquerycancel)|Chiamato dal framework quando l'utente fa clic sul pulsante **Annulla** e prima che venga eseguita l'annullamento.|
|[CSnapInPropertyPageImpl::OnReset](#onreset)|Chiamata eseguita dal framework quando l'utente fa clic sul pulsante **Reimposta** quando si utilizza una finestra delle proprietà del tipo di procedura guidata.|
|[CSnapInPropertyPageImpl::OnSetActive](#onsetactive)|Chiamata eseguita dal framework quando la pagina corrente diventa attiva.|
|[CSnapInPropertyPageImpl::OnWizardBack](#onwizardback)|Chiamata eseguita dal framework quando l'utente fa clic sul pulsante **indietro** quando si utilizza una finestra delle proprietà del tipo di procedura guidata.|
|[CSnapInPropertyPageImpl::OnWizardFinish](#onwizardfinish)|Chiamata eseguita dal framework quando l'utente fa clic sul pulsante **fine** durante l'utilizzo di una finestra delle proprietà del tipo di procedura guidata.|
|[CSnapInPropertyPageImpl::OnWizardNext](#onwizardnext)|Chiamata eseguita dal framework quando l'utente fa clic sul pulsante **Avanti** quando si utilizza una finestra delle proprietà del tipo di procedura guidata.|
|[CSnapInPropertyPageImpl::QuerySiblings](#querysiblings)|Invia il messaggio corrente a tutte le pagine della finestra delle proprietà.|
|[CSnapInPropertyPageImpl::SetModified](#setmodified)|Chiamare per attivare o disattivare il pulsante **Applica ora** .|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CSnapInPropertyPageImpl::m_psp](#m_psp)|`PROPSHEETPAGE` Struttura`CSnapInPropertyPageImpl` di Windows utilizzata dall'oggetto.|

## <a name="remarks"></a>Note

`CSnapInPropertyPageImpl`fornisce un'implementazione di base per un oggetto della pagina delle proprietà dello snap-in. Le funzionalità di base di una pagina delle proprietà di snap-in vengono implementate usando diverse interfacce e tipi di mappa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDialogImplBase`

`CSnapInPropertyPageImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsnap. h

##  <a name="canceltoclose"></a>  CSnapInPropertyPageImpl::CancelToClose

Chiamare questa funzione dopo che è stata apportata una modifica irreversibile ai dati in una pagina di una finestra delle proprietà modale.

```
void CancelToClose();
```

### <a name="remarks"></a>Note

Questa funzione modificherà il pulsante **OK** per **chiudere** e disabilitare il pulsante **Annulla** . Questa modifica avvisa l'utente che una modifica è permanente e le modifiche non possono essere annullate.

La `CancelToClose` funzione membro non esegue alcuna operazione in una finestra delle proprietà non modale, perché per impostazione predefinita per una finestra delle proprietà non modale non è presente un pulsante **Annulla** .

##  <a name="csnapinpropertypageimpl"></a>  CSnapInPropertyPageImpl::CSnapInPropertyPageImpl

Costruisce un oggetto `CSnapInPropertyPageImpl`.

```
CSnapInPropertyPageImpl(LPCTSTR lpszTitle = NULL);
```

### <a name="parameters"></a>Parametri

*lpszTitle*<br/>
in Titolo della pagina delle proprietà.

### <a name="remarks"></a>Note

Per inizializzare la struttura sottostante, chiamare [CSnapInPropertyPageImpl:: create](#create).

##  <a name="create"></a>  CSnapInPropertyPageImpl::Create

Chiamare questa funzione per inizializzare la struttura sottostante della pagina delle proprietà.

```
HPROPSHEETPAGE Create();
```

### <a name="return-value"></a>Valore restituito

Handle per una `PROPSHEETPAGE` struttura che contiene gli attributi della finestra delle proprietà appena creata.

### <a name="remarks"></a>Note

Prima di chiamare questa funzione, è necessario chiamare [CSnapInPropertyPageImpl:: CSnapInPropertyPageImpl](#csnapinpropertypageimpl) .

##  <a name="m_psp"></a>  CSnapInPropertyPageImpl::m_psp

`m_psp`è una struttura i cui membri archiviano le `PROPSHEETPAGE`caratteristiche di.

```
PROPSHEETPAGE m_psp;
```

### <a name="remarks"></a>Note

Usare questa struttura per inizializzare l'aspetto di una pagina delle proprietà dopo che è stata costruita.

Per ulteriori informazioni su questa struttura, incluso un elenco dei relativi membri, vedere [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v3) nel Windows SDK.

##  <a name="onapply"></a>  CSnapInPropertyPageImpl::OnApply

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **OK** o **Applica ora** .

```
BOOL OnApply();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le modifiche vengono accettate; in caso contrario, 0.

### <a name="remarks"></a>Note

Prima `OnApply` che possa essere chiamato dal Framework, è necessario avere chiamato `SetModified` e impostare il relativo parametro su true. Verrà attivato il pulsante **Applica ora** non appena l'utente apporta una modifica nella pagina delle proprietà.

Eseguire l'override di questa funzione membro per specificare l'azione eseguita dal programma quando l'utente fa clic sul pulsante **Applica ora** . Quando si esegue l'override di, la funzione deve restituire TRUE per accettare le modifiche e FALSE per impedire che le modifiche abbiano effetto.

L'implementazione predefinita di `OnApply` restituisce true.

##  <a name="onhelp"></a>  CSnapInPropertyPageImpl::OnHelp

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante della **Guida** per la pagina delle proprietà.

```
void OnHelp();
```

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione membro per visualizzare la guida per la pagina delle proprietà.

##  <a name="onkillactive"></a>  CSnapInPropertyPageImpl::OnKillActive

Questa funzione membro viene chiamata quando la pagina non è più la pagina attiva.

```
BOOL OnKillActive();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se i dati sono stati aggiornati correttamente; in caso contrario, 0.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione membro per eseguire attività speciali di convalida dei dati.

##  <a name="onquerycancel"></a>  CSnapInPropertyPageImpl::OnQueryCancel

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **Annulla** e prima che venga eseguita l'azione di annullamento.

```
BOOL OnQueryCancel();
```

### <a name="return-value"></a>Valore restituito

Valore diverso da zero per consentire l'operazione di annullamento. in caso contrario, 0.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione membro per specificare un'azione eseguita dal programma quando l'utente fa clic sul pulsante **Annulla** .

L'implementazione predefinita di `OnQueryCancel` restituisce true.

##  <a name="onreset"></a>  CSnapInPropertyPageImpl::OnReset

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **Annulla** .

```
void OnReset();
```

### <a name="remarks"></a>Note

Quando questa funzione viene chiamata, le modifiche apportate a tutte le pagine delle proprietà effettuate dall'utente in precedenza facendo clic sul pulsante **Applica ora** vengono ignorate e la finestra delle proprietà mantiene lo stato attivo.

Eseguire l'override di questa funzione membro per specificare l'azione eseguita dal programma quando l'utente fa clic sul pulsante **Annulla** .

##  <a name="onsetactive"></a>  CSnapInPropertyPageImpl::OnSetActive

Questa funzione membro viene chiamata quando la pagina viene scelta dall'utente e diventa la pagina attiva.

```
BOOL OnSetActive();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la pagina è stata impostata correttamente come attiva; in caso contrario, 0.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione membro per eseguire attività quando viene attivata una pagina. L'override di questa funzione membro deve chiamare la versione predefinita prima che venga eseguita qualsiasi altra elaborazione.

L'implementazione predefinita restituisce TRUE.

##  <a name="onwizardback"></a>  CSnapInPropertyPageImpl::OnWizardBack

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **indietro** in una procedura guidata.

```
BOOL OnWizardBack();
```

### <a name="return-value"></a>Valore restituito

- 0 per passare automaticamente alla pagina precedente.

- -1 per impedire la modifica della pagina.

Per passare a una pagina diversa da quella successiva, restituire l'identificatore della finestra di dialogo da visualizzare.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando si fa clic sul pulsante **indietro** .

##  <a name="onwizardfinish"></a>  CSnapInPropertyPageImpl::OnWizardFinish

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **fine** in una procedura guidata.

```
BOOL OnWizardFinish();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene distrutta al termine della procedura guidata. in caso contrario, zero.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando si fa clic sul pulsante **fine** .

##  <a name="onwizardnext"></a>  CSnapInPropertyPageImpl::OnWizardNext

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **Avanti** in una procedura guidata.

```
BOOL OnWizardNext();
```

### <a name="return-value"></a>Valore restituito

- 0 per passare automaticamente alla pagina successiva.

- -1 per impedire la modifica della pagina.

Per passare a una pagina diversa da quella successiva, restituire l'identificatore della finestra di dialogo da visualizzare.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando si fa clic sul pulsante **Avanti** .

##  <a name="querysiblings"></a>  CSnapInPropertyPageImpl::QuerySiblings

Chiamare questa funzione membro per inviare un messaggio a ogni pagina nella finestra delle proprietà.

```
LRESULT QuerySiblings(WPARAM wParam, LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*wParam*<br/>
in Specifica informazioni aggiuntive dipendenti dal messaggio.

*lParam*<br/>
in Specifica informazioni aggiuntive dipendenti dal messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio non deve essere inviato alla pagina delle proprietà successiva. in caso contrario, zero.

### <a name="remarks"></a>Note

Se una pagina restituisce un valore diverso da zero, la finestra delle proprietà non invia il messaggio alle pagine successive.

##  <a name="setmodified"></a>  CSnapInPropertyPageImpl::SetModified

Chiamare questa funzione membro per abilitare o disabilitare il pulsante **Applica ora** , a seconda che le impostazioni nella pagina delle proprietà debbano essere applicate all'oggetto esterno appropriato.

```
void SetModified(BOOL bChanged = TRUE);
```

### <a name="parameters"></a>Parametri

*bChanged*<br/>
in TRUE per indicare che le impostazioni della pagina delle proprietà sono state modificate dopo l'ultima applicazione. FALSE per indicare che le impostazioni della pagina delle proprietà sono state applicate o che devono essere ignorate.

### <a name="remarks"></a>Note

La finestra delle proprietà tiene traccia delle pagine che sono "Dirty", ovvero le pagine delle proprietà per cui è stato `SetModified( TRUE )`chiamato. Il pulsante **Applica ora** sarà sempre abilitato se si chiama `SetModified( TRUE )` per una delle pagine. Il pulsante **Applica ora** verrà disabilitato quando si chiama `SetModified( FALSE )` per una delle pagine, ma solo se nessuna delle altre pagine è "Dirty".

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
