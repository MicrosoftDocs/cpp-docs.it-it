---
title: CSnapInPropertyPageImpl (classe)
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
ms.openlocfilehash: ae64c212520510a443fbb2b8adc99243e8f8843a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330694"
---
# <a name="csnapinpropertypageimpl-class"></a>CSnapInPropertyPageImpl (classe)

Questa classe fornisce metodi per l'implementazione di un oggetto pagina delle proprietà snap-in.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
CSnapInPropertyPageImpl : public CDialogImplBase
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](#csnapinpropertypageimpl)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSnapInPropertyPageImpl::CancelToClose](#canceltoclose)|Modifica lo stato dei pulsanti **OK** e **Annulla.**|
|[CSnapInPropertyPageImpl::Create](#create)|Inizializza un oggetto `CSnapInPropertyPageImpl` appena creato.|
|[CSnapInPropertyPageImpl::OnApply](#onapply)|Chiamato dal framework quando l'utente fa clic sul pulsante **Applica ora** durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CSnapInPropertyPageImpl::OnHelp](#onhelp)|Chiamato dal framework quando l'utente fa clic sul pulsante **?,** durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CSnapInPropertyPageImpl::OnKillActive](#onkillactive)|Chiamato dal framework quando la pagina corrente non è più attiva.|
|[CSnapInPropertyPageImpl::OnQueryCancel](#onquerycancel)|Chiamato dal framework quando l'utente fa clic sul pulsante **Annulla** e prima che venga eseguito l'annullamento.|
|[CSnapInPropertyPageImpl::OnReset](#onreset)|Chiamato dal framework quando l'utente fa clic sul pulsante **Reimposta** durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CSnapInPropertyPageImpl::OnSetActive](#onsetactive)|Chiamato dal framework quando la pagina corrente diventa attiva.|
|[CSnapInPropertyPageImpl::OnWizardBack](#onwizardback)|Chiamato dal framework quando l'utente fa clic sul pulsante **Indietro** durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CSnapInPropertyPageImpl::OnWizardFinish](#onwizardfinish)|Chiamato dal framework quando l'utente fa clic sul pulsante **Fine** durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CSnapInPropertyPageImpl::OnWizardNext](#onwizardnext)|Chiamato dal framework quando l'utente fa clic sul pulsante **Avanti** durante l'utilizzo di una finestra delle proprietà di tipo procedura guidata.|
|[CSnapInPropertyPageImpl::QuerySiblings](#querysiblings)|Inoltra il messaggio corrente a tutte le pagine della finestra delle proprietà.|
|[CSnapInPropertyPageImpl::SetModified](#setmodified)|Chiamata per attivare o disattivare il pulsante **Applica ora.**|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSnapInPropertyPageImpl::m_psp](#m_psp)|Struttura `PROPSHEETPAGE` Windows utilizzata `CSnapInPropertyPageImpl` dall'oggetto.|

## <a name="remarks"></a>Osservazioni

`CSnapInPropertyPageImpl`fornisce un'implementazione di base per un oggetto pagina delle proprietà snap-in. Le funzionalità di base di una pagina delle proprietà dello snap-in vengono implementate utilizzando diverse interfacce e tipi di mappa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDialogImplBase`

`CSnapInPropertyPageImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsnap.h

## <a name="csnapinpropertypageimplcanceltoclose"></a><a name="canceltoclose"></a>CSnapInPropertyPageImpl::CancelToClose

Chiamare questa funzione dopo che è stata apportata una modifica irreversibile ai dati in una pagina di una finestra delle proprietà modale.

```
void CancelToClose();
```

### <a name="remarks"></a>Osservazioni

Questa funzione cambierà il pulsante **OK** in **Chiudi** e disattiverà il pulsante **Annulla.** Questa modifica avvisa l'utente che una modifica è permanente e le modifiche non possono essere annullate.

La `CancelToClose` funzione membro non esegue alcuna operazione in una finestra delle proprietà non modale, perché una finestra delle proprietà non modale non dispone di un pulsante **Annulla** per impostazione predefinita.

## <a name="csnapinpropertypageimplcsnapinpropertypageimpl"></a><a name="csnapinpropertypageimpl"></a>CSnapInPropertyPageImpl::CSnapInPropertyPageImpl

Costruisce un oggetto `CSnapInPropertyPageImpl`.

```
CSnapInPropertyPageImpl(LPCTSTR lpszTitle = NULL);
```

### <a name="parameters"></a>Parametri

*LpszTitle (Titolo)*<br/>
[in] Titolo della pagina delle proprietà.

### <a name="remarks"></a>Osservazioni

Per inizializzare la struttura sottostante, chiamare [CSnapInPropertyPageImpl::Create](#create).

## <a name="csnapinpropertypageimplcreate"></a><a name="create"></a>CSnapInPropertyPageImpl::Create

Chiamare questa funzione per inizializzare la struttura sottostante della pagina delle proprietà.

```
HPROPSHEETPAGE Create();
```

### <a name="return-value"></a>Valore restituito

Handle per `PROPSHEETPAGE` una struttura contenente gli attributi della finestra delle proprietà appena creata.

### <a name="remarks"></a>Osservazioni

È necessario chiamare [CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](#csnapinpropertypageimpl) prima di chiamare questa funzione.

## <a name="csnapinpropertypageimplm_psp"></a><a name="m_psp"></a>CSnapInPropertyPageImpl::m_psp

`m_psp`è una struttura i cui `PROPSHEETPAGE`membri memorizzano le caratteristiche di .

```
PROPSHEETPAGE m_psp;
```

### <a name="remarks"></a>Osservazioni

Utilizzare questa struttura per inizializzare l'aspetto di una pagina delle proprietà dopo la costruzione.

Per ulteriori informazioni su questa struttura, incluso un elenco dei relativi membri, vedere [PROPSHEETPAGE](/windows/win32/api/prsht/ns-prsht-propsheetpagea_v3) in Windows SDK.

## <a name="csnapinpropertypageimplonapply"></a><a name="onapply"></a>CSnapInPropertyPageImpl::OnApply

Questa funzione membro viene chiamata quando l'utente fa clic su **OK** o il pulsante **Applica ora** .

```
BOOL OnApply();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se le modifiche vengono accettate; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Prima `OnApply` di poter essere chiamato dal `SetModified` framework, è necessario aver chiamato e impostato il relativo parametro su TRUE. Questo attiverà il pulsante **Applica ora** non appena l'utente apporta una modifica nella pagina delle proprietà.

Eseguire l'override di questa funzione membro per specificare l'azione eseguita dal programma quando l'utente fa clic sul pulsante **Applica ora.** Quando si esegue l'override, la funzione deve restituire TRUE per accettare le modifiche e FALSE per impedire che le modifiche abbiano effetto.

L'implementazione `OnApply` predefinita di restituisce TRUE.

## <a name="csnapinpropertypageimplonhelp"></a><a name="onhelp"></a>CSnapInPropertyPageImpl::OnHelp

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **?per** la pagina delle proprietà.

```
void OnHelp();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per visualizzare la Guida per la pagina delle proprietà.

## <a name="csnapinpropertypageimplonkillactive"></a><a name="onkillactive"></a>CSnapInPropertyPageImpl::OnKillActive

Questa funzione membro viene chiamata quando la pagina non è più la pagina attiva.

```
BOOL OnKillActive();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se i dati sono stati aggiornati correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per eseguire attività speciali di convalida dei dati.

## <a name="csnapinpropertypageimplonquerycancel"></a><a name="onquerycancel"></a>CSnapInPropertyPageImpl::OnQueryCancel

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **Annulla** e prima che venga eseguita l'azione di annullamento.

```
BOOL OnQueryCancel();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero per consentire l'operazione di annullamento; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione eseguita dal programma quando l'utente fa clic sul pulsante **Annulla.**

L'implementazione `OnQueryCancel` predefinita di restituisce TRUE.

## <a name="csnapinpropertypageimplonreset"></a><a name="onreset"></a>CSnapInPropertyPageImpl::OnReset

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **Annulla.This** member function is called when the user clicks the Cancel button.

```
void OnReset();
```

### <a name="remarks"></a>Osservazioni

Quando questa funzione viene chiamata, le modifiche a tutte le pagine delle proprietà apportate dall'utente che in precedenza faceva **moigli** fanno clic sul pulsante Applica ora vengono eliminate e la finestra delle proprietà mantiene lo stato attivo.

Eseguire l'override di questa funzione membro per specificare l'azione eseguita dal programma quando l'utente fa clic sul pulsante **Annulla.**

## <a name="csnapinpropertypageimplonsetactive"></a><a name="onsetactive"></a>CSnapInPropertyPageImpl::OnSetActive

Questa funzione membro viene chiamata quando la pagina viene scelta dall'utente e diventa la pagina attiva.

```
BOOL OnSetActive();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la pagina è stata impostata come attiva; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per eseguire attività quando viene attivata una pagina. L'override di questa funzione membro deve chiamare la versione predefinita prima di qualsiasi altra elaborazione viene eseguita.

L'implementazione predefinita restituisce TRUE.

## <a name="csnapinpropertypageimplonwizardback"></a><a name="onwizardback"></a>CSnapInPropertyPageImpl::OnWizardBack

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **Indietro** in una procedura guidata.

```
BOOL OnWizardBack();
```

### <a name="return-value"></a>Valore restituito

- 0 per passare automaticamente alla pagina precedente.

- -1 per impedire la modifica della pagina.

Per passare a una pagina diversa da quella successiva, restituire l'identificatore della finestra di dialogo da visualizzare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando si fa clic sul pulsante **Indietro.**

## <a name="csnapinpropertypageimplonwizardfinish"></a><a name="onwizardfinish"></a>CSnapInPropertyPageImpl::OnWizardFinish

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **Fine** in una procedura guidata.

```
BOOL OnWizardFinish();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la finestra delle proprietà viene eliminata al termine della procedura guidata; in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando si fa clic sul pulsante **Fine.**

## <a name="csnapinpropertypageimplonwizardnext"></a><a name="onwizardnext"></a>CSnapInPropertyPageImpl::OnWizardNext

Questa funzione membro viene chiamata quando l'utente fa clic sul pulsante **Avanti** in una procedura guidata.

```
BOOL OnWizardNext();
```

### <a name="return-value"></a>Valore restituito

- 0 per passare automaticamente alla pagina successiva.

- -1 per impedire la modifica della pagina.

Per passare a una pagina diversa da quella successiva, restituire l'identificatore della finestra di dialogo da visualizzare.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando si fa clic sul pulsante **Avanti.**

## <a name="csnapinpropertypageimplquerysiblings"></a><a name="querysiblings"></a>CSnapInPropertyPageImpl::QuerySiblings

Chiamare questa funzione membro per inoltrare un messaggio a ogni pagina nella finestra delle proprietà.

```
LRESULT QuerySiblings(WPARAM wParam, LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*wParam*<br/>
[in] Specifica informazioni aggiuntive dipendenti dal messaggio.

*lParam*<br/>
[in] Specifica informazioni aggiuntive dipendenti dal messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio non deve essere inoltrato alla pagina delle proprietà successiva; in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Se una pagina restituisce un valore diverso da zero, la finestra delle proprietà non invia il messaggio alle pagine successive.

## <a name="csnapinpropertypageimplsetmodified"></a><a name="setmodified"></a>CSnapInPropertyPageImpl::SetModified

Chiamare questa funzione membro per abilitare o disabilitare il pulsante **Applica ora,** a seconda che le impostazioni nella pagina delle proprietà devono essere applicate all'oggetto esterno appropriato.

```
void SetModified(BOOL bChanged = TRUE);
```

### <a name="parameters"></a>Parametri

*bCambiato*<br/>
[in] TRUE per indicare che le impostazioni della pagina delle proprietà sono state modificate dall'ultima volta che sono state applicate; FALSE per indicare che le impostazioni della pagina delle proprietà sono state applicate o devono essere ignorate.

### <a name="remarks"></a>Osservazioni

La finestra delle proprietà tiene traccia di quali pagine sono "sporche", ovvero le pagine delle proprietà per le quali sono state chiamate `SetModified( TRUE )`. Il pulsante **Applica ora** sarà `SetModified( TRUE )` sempre abilitato se si chiama per una delle pagine. Il pulsante **Applica ora** verrà `SetModified( FALSE )` disabilitato quando si chiama per una delle pagine, ma solo se nessuna delle altre pagine è "sporca".

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
