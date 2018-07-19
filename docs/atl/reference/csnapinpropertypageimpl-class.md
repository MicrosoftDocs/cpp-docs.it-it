---
title: Classe CSnapInPropertyPageImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- snap-ins, property pages
- snap-ins
- property pages, ATL
- CSnapInPropertyPageImpl class
ms.assetid: 75bdce5a-985e-4166-bd44-493132e023c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 56a57d3fe0eb1a016af9eee8539cd7f57a12ddf5
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37880560"
---
# <a name="csnapinpropertypageimpl-class"></a>Classe CSnapInPropertyPageImpl
Questa classe fornisce metodi per l'implementazione di un oggetto pagina delle proprietà di snap-in.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
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
|[CSnapInPropertyPageImpl::CancelToClose](#canceltoclose)|Modifica lo stato del **OK** e **Annulla** pulsanti.|  
|[CSnapInPropertyPageImpl::Create](#create)|Inizializza una nuova istanza creata `CSnapInPropertyPageImpl` oggetto.|  
|[CSnapInPropertyPageImpl::OnApply](#onapply)|Chiamato dal framework quando l'utente sceglie il **si applicano a questo punto** pulsante quando si usa una finestra delle proprietà associata alla procedura guidata.|  
|[CSnapInPropertyPageImpl::OnHelp](#onhelp)|Chiamato dal framework quando l'utente sceglie il **aiutare** pulsante quando si usa una finestra delle proprietà associata alla procedura guidata.|  
|[CSnapInPropertyPageImpl::OnKillActive](#onkillactive)|Chiamato dal framework quando la pagina corrente non è più attiva.|  
|[CSnapInPropertyPageImpl::OnQueryCancel](#onquerycancel)|Chiamato dal framework quando l'utente sceglie il **annullare** pulsante e prima dell'operazione di annullamento ha avuto luogo.|  
|[CSnapInPropertyPageImpl::OnReset](#onreset)|Chiamato dal framework quando l'utente sceglie il **reimpostare** pulsante quando si usa una finestra delle proprietà associata alla procedura guidata.|  
|[CSnapInPropertyPageImpl::OnSetActive](#onsetactive)|Chiamato dal framework quando la pagina corrente diventa attiva.|  
|[CSnapInPropertyPageImpl::OnWizardBack](#onwizardback)|Chiamato dal framework quando l'utente sceglie il **nuovamente** pulsante quando si usa una finestra delle proprietà associata alla procedura guidata.|  
|[CSnapInPropertyPageImpl::OnWizardFinish](#onwizardfinish)|Chiamato dal framework quando l'utente sceglie il **fine** pulsante quando si usa una finestra delle proprietà associata alla procedura guidata.|  
|[CSnapInPropertyPageImpl::OnWizardNext](#onwizardnext)|Chiamato dal framework quando l'utente sceglie il **successivo** pulsante quando si usa una finestra delle proprietà associata alla procedura guidata.|  
|[CSnapInPropertyPageImpl::QuerySiblings](#querysiblings)|Inoltra il messaggio corrente per tutte le pagine della finestra delle proprietà.|  
|[CSnapInPropertyPageImpl::SetModified](#setmodified)|Chiamata per attivare o disattivare la **si applicano a questo punto** pulsante.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::m_psp](#m_psp)|Il Windows `PROPSHEETPAGE` struttura usata dal `CSnapInPropertyPageImpl` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CSnapInPropertyPageImpl` fornisce un'implementazione di base per un oggetto pagina delle proprietà di snap-in. Funzionalità di base di una pagina delle proprietà di snap-in vengono implementate tramite diverse interfacce diverse e mapping dei tipi.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDialogImplBase`  
  
 `CSnapInPropertyPageImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsnap.h  
  
##  <a name="canceltoclose"></a>  CSnapInPropertyPageImpl::CancelToClose  
 Chiamare questa funzione dopo che è stata apportata una modifica non ripristinabile per i dati in una pagina di una finestra delle proprietà modale.  
  
```
void CancelToClose();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione verrà modificato il **OK** pulsante **Chiudi** e disabilitare il **Annulla** pulsante. Questa modifica non può essere annullata dall'utente che una modifica è definitiva e le modifiche degli avvisi.  
  
 Il `CancelToClose` funzione membro non esegue alcuna operazione in una finestra delle proprietà non modale, perché non dispone di una finestra delle proprietà non modale una **annullare** pulsante per impostazione predefinita.  
  
##  <a name="csnapinpropertypageimpl"></a>  CSnapInPropertyPageImpl::CSnapInPropertyPageImpl  
 Costruisce un oggetto `CSnapInPropertyPageImpl`.  
  
```
CSnapInPropertyPageImpl(LPCTSTR lpszTitle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszTitle*  
 [in] Il titolo della pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 Per inizializzare la struttura sottostante, chiamare [CSnapInPropertyPageImpl::Create](#create).  
  
##  <a name="create"></a>  CSnapInPropertyPageImpl::Create  
 Chiamare questa funzione per inizializzare la struttura sottostante della pagina delle proprietà.  
  
```
HPROPSHEETPAGE Create();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per un `PROPSHEETPAGE` struttura che contiene gli attributi della finestra delle proprietà appena creata.  
  
### <a name="remarks"></a>Note  
 È consigliabile chiamare innanzitutto [CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](#csnapinpropertypageimpl) prima di chiamare questa funzione.  
  
##  <a name="m_psp"></a>  CSnapInPropertyPageImpl::m_psp  
 `m_psp` è una struttura i cui membri memorizzare le caratteristiche di `PROPSHEETPAGE`.  
  
```
PROPSHEETPAGE m_psp;
```  
  
### <a name="remarks"></a>Note  
 Usare questa struttura per inizializzare l'aspetto di una pagina delle proprietà dopo la sua creazione.  
  
 Per altre informazioni su questa struttura, incluso un elenco dei relativi membri, vedere [PROPSHEETPAGE](http://msdn.microsoft.com/library/aa815151) nel SDK di Windows.  
  
##  <a name="onapply"></a>  CSnapInPropertyPageImpl::OnApply  
 Questa funzione membro viene chiamata quando l'utente sceglie il **OK** o il **si applicano a questo punto** pulsante.  
  
```
BOOL OnApply();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le modifiche vengono accettate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Prima di `OnApply` può essere chiamato dal framework, è necessario avere chiamato `SetModified` e impostare il parametro su TRUE. Questo attiverà la **si applicano a questo punto** pulsante, non appena l'utente apporta una modifica nella pagina delle proprietà.  
  
 Eseguire l'override di questa funzione membro per specificare le azioni che il programma accetta quando l'utente sceglie il **si applicano a questo punto** pulsante. Quando si esegue l'override, la funzione deve restituire TRUE per accettare le modifiche e FALSE per impedire che le modifiche hanno effetto.  
  
 L'implementazione predefinita di `OnApply` restituisce TRUE.  
  
##  <a name="onhelp"></a>  CSnapInPropertyPageImpl::OnHelp  
 Questa funzione membro viene chiamata quando l'utente sceglie il **aiutare** pulsante per la pagina delle proprietà.  
  
```
void OnHelp();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per visualizzare la Guida per la pagina delle proprietà.  
  
##  <a name="onkillactive"></a>  CSnapInPropertyPageImpl::OnKillActive  
 Questa funzione membro viene chiamata quando la pagina non è più la pagina attiva.  
  
```
BOOL OnKillActive();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i dati è stati aggiornati correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire attività di convalida di dati speciali.  
  
##  <a name="onquerycancel"></a>  CSnapInPropertyPageImpl::OnQueryCancel  
 Questa funzione membro viene chiamata quando l'utente sceglie il **annullare** pulsante e l'annullamento prima dell'azione è stata eseguita.  
  
```
BOOL OnQueryCancel();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per consentire l'operazione di annullamento; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione che il programma accetta quando l'utente sceglie il **annullare** pulsante.  
  
 L'implementazione predefinita di `OnQueryCancel` restituisce TRUE.  
  
##  <a name="onreset"></a>  CSnapInPropertyPageImpl::OnReset  
 Questa funzione membro viene chiamata quando l'utente sceglie il **annullare** pulsante.  
  
```
void OnReset();
```  
  
### <a name="remarks"></a>Note  
 Quando questa funzione viene chiamata, viene modificato in tutte le pagine delle proprietà apportate dall'utente facendo clic in precedenza il **si applicano a questo punto** pulsante vengono scartati, mentre la finestra delle proprietà mantiene lo stato attivo.  
  
 Eseguire l'override di questa funzione membro per specificare le azioni che il programma accetta quando l'utente sceglie il **annullare** pulsante.  
  
##  <a name="onsetactive"></a>  CSnapInPropertyPageImpl::OnSetActive  
 Questa funzione membro viene chiamata quando la pagina viene scelto dall'utente e diventa la pagina attiva.  
  
```
BOOL OnSetActive();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la pagina è stata impostata correttamente attiva. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire attività quando viene attivata una pagina. L'override di questa funzione membro deve chiamare la versione predefinita prima di eseguire qualsiasi altra elaborazione.  
  
 L'implementazione predefinita restituisce TRUE.  
  
##  <a name="onwizardback"></a>  CSnapInPropertyPageImpl::OnWizardBack  
 Questa funzione membro viene chiamata quando l'utente sceglie il **nuovamente** pulsante in una procedura guidata.  
  
```
BOOL OnWizardBack();
```  
  
### <a name="return-value"></a>Valore restituito  
  
-   0 per passare automaticamente alla pagina precedente.  
  
-   -1 per impedire la pagina di modifica.  
  
 Per passare a una pagina diverso da quello successivo, restituire l'identificatore della finestra di dialogo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione utente deve eseguire quando la **nuovamente** si fa clic sul pulsante.  
  
##  <a name="onwizardfinish"></a>  CSnapInPropertyPageImpl::OnWizardFinish  
 Questa funzione membro viene chiamata quando l'utente sceglie il **fine** pulsante in una procedura guidata.  
  
```
BOOL OnWizardFinish();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra delle proprietà viene eliminato definitivamente al termine della procedura guidata; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione utente deve eseguire quando la **fine** si fa clic sul pulsante.  
  
##  <a name="onwizardnext"></a>  CSnapInPropertyPageImpl::OnWizardNext  
 Questa funzione membro viene chiamata quando l'utente sceglie il **successivo** pulsante in una procedura guidata.  
  
```
BOOL OnWizardNext();
```  
  
### <a name="return-value"></a>Valore restituito  
  
-   0 per passare automaticamente alla pagina successiva.  
  
-   -1 per impedire la pagina di modifica.  
  
 Per passare a una pagina diverso da quello successivo, restituire l'identificatore della finestra di dialogo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione utente deve eseguire quando la **successivo** si fa clic sul pulsante.  
  
##  <a name="querysiblings"></a>  CSnapInPropertyPageImpl::QuerySiblings  
 Chiamare questa funzione membro per inoltrare un messaggio a ciascuna pagina nella finestra delle proprietà.  
  
```
LRESULT QuerySiblings(WPARAM wParam, LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 *wParam*  
 [in] Specifica informazioni aggiuntive dipendente dal messaggio.  
  
 *lParam*  
 [in] Specifica informazioni aggiuntive dipendente dal messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio non deve essere inoltrato alla pagina delle proprietà successiva; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Se una pagina restituisce un valore diverso da zero, la finestra delle proprietà non invia il messaggio per le pagine successive.  
  
##  <a name="setmodified"></a>  CSnapInPropertyPageImpl::SetModified  
 Chiamare questa funzione membro per abilitare o disabilitare il **si applicano a questo punto** pulsante, in base se le impostazioni nella pagina delle proprietà devono essere applicate all'oggetto external appropriato.  
  
```
void SetModified(BOOL bChanged = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bChanged*  
 [in] TRUE per indicare che le impostazioni della pagina proprietà sono state modificate dall'ultima volta che sono state applicate; FALSE per indicare che sono state applicate le impostazioni della pagina proprietà, oppure devono essere ignorate.  
  
### <a name="remarks"></a>Note  
 La finestra delle proprietà tiene traccia delle quali pagine sono "dirty", vale a dire, pagine delle proprietà per cui è stato chiamato `SetModified( TRUE )`. Il **si applicano a questo punto** pulsante verrà sempre abilitato se si chiama `SetModified( TRUE )` per una delle pagine. Il **si applicano a questo punto** pulsante sarà disabilitato quando si chiama `SetModified( FALSE )` per una delle pagine, ma solo se nessuna delle altre pagine è "dirty".  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
