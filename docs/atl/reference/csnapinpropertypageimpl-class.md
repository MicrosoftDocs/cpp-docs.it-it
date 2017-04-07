---
title: Classe CSnapInPropertyPageImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 57f43a1ab82c2441d271ac88ef712309bb1315dd
ms.lasthandoff: 04/01/2017

---
# <a name="csnapinpropertypageimpl-class"></a>Classe CSnapInPropertyPageImpl
Questa classe fornisce metodi per l'implementazione di un oggetto della pagina proprietà snap-in.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
|[CSnapInPropertyPageImpl::OnApply](#onapply)|Chiamato dal framework quando l'utente sceglie il **applica** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnHelp](#onhelp)|Chiamato dal framework quando l'utente sceglie il **Guida** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnKillActive](#onkillactive)|Chiamato dal framework quando la pagina corrente non è più attiva.|  
|[CSnapInPropertyPageImpl::OnQueryCancel](#onquerycancel)|Chiamato dal framework quando l'utente sceglie il **Annulla** pulsante e prima che l'annullamento ha avuto luogo.|  
|[CSnapInPropertyPageImpl::OnReset](#onreset)|Chiamato dal framework quando l'utente sceglie il **reimpostare** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnSetActive](#onsetactive)|Chiamato dal framework quando la pagina corrente diventa attiva.|  
|[CSnapInPropertyPageImpl::OnWizardBack](#onwizardback)|Chiamato dal framework quando l'utente sceglie il **nuovamente** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnWizardFinish](#onwizardfinish)|Chiamato dal framework quando l'utente sceglie il **fine** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnWizardNext](#onwizardnext)|Chiamato dal framework quando l'utente sceglie il `Next` pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::QuerySiblings](#querysiblings)|Inoltra il messaggio corrente a tutte le pagine della finestra delle proprietà.|  
|[CSnapInPropertyPageImpl::SetModified](#setmodified)|Chiamata per attivare o disattivare il **applica** pulsante.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::m_psp](#m_psp)|Le finestre **PROPSHEETPAGE** struttura utilizzata per il `CSnapInPropertyPageImpl` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CSnapInPropertyPageImpl`fornisce un'implementazione di base per un oggetto della pagina proprietà snap-in. Funzionalità di base di una pagina delle proprietà snap-in vengono implementate tramite diverse interfacce diverse e mapping di tipi.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDialogImplBase`  
  
 `CSnapInPropertyPageImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsnap.h  
  
##  <a name="canceltoclose"></a>CSnapInPropertyPageImpl::CancelToClose  
 Chiamare questa funzione dopo un'errore irreversibile modifica apportata ai dati in una pagina di una finestra delle proprietà modale.  
  
```
void CancelToClose();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione verrà modificato il **OK** pulsante **Chiudi** e disabilitare il **Annulla** pulsante. Questa modifica avvisi l'utente che è una modifica permanente e le modifiche non può essere annullato.  
  
 Il `CancelToClose` funzione membro non esegue alcuna operazione in una finestra delle proprietà non modale, perché non dispone di una finestra delle proprietà non modale un **Annulla** per impostazione predefinita.  
  
##  <a name="csnapinpropertypageimpl"></a>CSnapInPropertyPageImpl::CSnapInPropertyPageImpl  
 Costruisce un oggetto `CSnapInPropertyPageImpl`.  
  
```
CSnapInPropertyPageImpl(LPCTSTR lpszTitle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTitle`  
 [in] Il titolo della pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 Per inizializzare la struttura sottostante, chiamare [CSnapInPropertyPageImpl::Create](#create).  
  
##  <a name="create"></a>CSnapInPropertyPageImpl::Create  
 Chiamare questa funzione per inizializzare la struttura sottostante della pagina delle proprietà.  
  
```
HPROPSHEETPAGE Create();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle a un **PROPSHEETPAGE** struttura che contiene gli attributi della finestra delle proprietà appena creato.  
  
### <a name="remarks"></a>Note  
 È opportuno chiamare dapprima [CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](#csnapinpropertypageimpl) prima di chiamare questa funzione.  
  
##  <a name="m_psp"></a>CSnapInPropertyPageImpl::m_psp  
 `m_psp`è una struttura i cui membri archiviano le caratteristiche di **PROPSHEETPAGE**.  
  
```
PROPSHEETPAGE m_psp;
```  
  
### <a name="remarks"></a>Note  
 Utilizzare questa struttura per inizializzare l'aspetto di una pagina delle proprietà dopo la sua creazione.  
  
 Per ulteriori informazioni su tale struttura, compreso un elenco dei relativi membri, vedere [PROPSHEETPAGE](http://msdn.microsoft.com/library/aa815151) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="onapply"></a>CSnapInPropertyPageImpl::OnApply  
 Questa funzione membro viene chiamata quando l'utente sceglie il **OK** o **applica** pulsante.  
  
```
BOOL OnApply();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le modifiche vengono accettate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Prima di `OnApply` può essere chiamato dal framework, è necessario chiamare `SetModified` e impostarne il parametro su **TRUE**. L'opzione attiva il **applica** pulsante non appena l'utente effettua una modifica nella pagina delle proprietà.  
  
 Eseguire l'override di questa funzione membro per specificare l'azione che il programma accetta quando l'utente sceglie il **applica** pulsante. Quando si esegue l'override, la funzione deve restituire **TRUE** di accettare le modifiche e **FALSE** per evitare che le modifiche diventino effettive.  
  
 L'implementazione predefinita di `OnApply` restituisce **TRUE**.  
  
##  <a name="onhelp"></a>CSnapInPropertyPageImpl::OnHelp  
 Questa funzione membro viene chiamata quando l'utente sceglie il **Guida** pulsante per la pagina delle proprietà.  
  
```
void OnHelp();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per visualizzare la Guida per la pagina delle proprietà.  
  
##  <a name="onkillactive"></a>CSnapInPropertyPageImpl::OnKillActive  
 Questa funzione membro viene chiamata quando la pagina non è più la pagina attiva.  
  
```
BOOL OnKillActive();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i dati sono stati aggiornati correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire attività di convalida di dati speciali.  
  
##  <a name="onquerycancel"></a>CSnapInPropertyPageImpl::OnQueryCancel  
 Questa funzione membro viene chiamata quando l'utente sceglie il **Annulla** pulsante e l'annullamento prima dell'azione è stata eseguita.  
  
```
BOOL OnQueryCancel();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per consentire l'operazione di annullamento. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione, il programma accetta quando l'utente sceglie il **Annulla** pulsante.  
  
 L'implementazione predefinita di `OnQueryCancel` restituisce **TRUE**.  
  
##  <a name="onreset"></a>CSnapInPropertyPageImpl::OnReset  
 Questa funzione membro viene chiamata quando l'utente sceglie il **Annulla** pulsante.  
  
```
void OnReset();
```  
  
### <a name="remarks"></a>Note  
 Quando questa funzione viene chiamata, viene modificato in tutte le pagine di proprietà che sono state apportate dall'utente facendo clic in precedenza il **applica** pulsante vengono ignorati e la finestra delle proprietà mantiene lo stato attivo.  
  
 Eseguire l'override di questa funzione membro per specificare l'azione che il programma accetta quando l'utente sceglie il **Annulla** pulsante.  
  
##  <a name="onsetactive"></a>CSnapInPropertyPageImpl::OnSetActive  
 Questa funzione membro viene chiamata quando la pagina viene scelto dall'utente e diventa la pagina attiva.  
  
```
BOOL OnSetActive();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la pagina è stata impostata come attiva. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire attività quando si attiva una pagina. L'override di questa funzione membro deve chiamare la versione predefinita prima che venga eseguita qualsiasi altra elaborazione.  
  
 L'implementazione predefinita restituisce **TRUE**.  
  
##  <a name="onwizardback"></a>CSnapInPropertyPageImpl::OnWizardBack  
 Questa funzione membro viene chiamata quando l'utente sceglie il **nuovamente** pulsante in una procedura guidata.  
  
```
BOOL OnWizardBack();
```  
  
### <a name="return-value"></a>Valore restituito  
  
-   0 per passa automaticamente alla pagina precedente.  
  
-   -1 per impedire la pagina di modifica.  
  
 Per passare a una pagina diversa da quella successiva, restituire l'ID della finestra di dialogo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando il **nuovamente** si fa clic sul pulsante.  
  
##  <a name="onwizardfinish"></a>CSnapInPropertyPageImpl::OnWizardFinish  
 Questa funzione membro viene chiamata quando l'utente sceglie il **fine** pulsante in una procedura guidata.  
  
```
BOOL OnWizardFinish();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra delle proprietà viene eliminato definitivamente al termine della procedura guidata; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando il **fine** si fa clic sul pulsante.  
  
##  <a name="onwizardnext"></a>CSnapInPropertyPageImpl::OnWizardNext  
 Questa funzione membro viene chiamata quando l'utente sceglie il `Next` pulsante in una procedura guidata.  
  
```
BOOL OnWizardNext();
```  
  
### <a name="return-value"></a>Valore restituito  
  
-   0 per passa automaticamente alla pagina successiva.  
  
-   -1 per impedire la pagina di modifica.  
  
 Per passare a una pagina diversa da quella successiva, restituire l'ID della finestra di dialogo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando il `Next` si fa clic sul pulsante.  
  
##  <a name="querysiblings"></a>CSnapInPropertyPageImpl::QuerySiblings  
 Chiamare questa funzione membro per inoltrare un messaggio a ogni pagina nella finestra delle proprietà.  
  
```
LRESULT QuerySiblings(WPARAM wParam, LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `wParam`  
 [in] Specifica informazioni aggiuntive di dipendenti dal messaggio.  
  
 `lParam`  
 [in] Specifica informazioni aggiuntive di dipendenti dal messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio non deve essere inoltrato alla pagina successiva di proprietà; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Se una pagina restituisce un valore diverso da zero, la finestra delle proprietà non invia il messaggio per le pagine successive.  
  
##  <a name="setmodified"></a>CSnapInPropertyPageImpl::SetModified  
 Chiamare questa funzione membro per abilitare o disabilitare il **applica** pulsante, in base a se le impostazioni nella pagina delle proprietà devono essere applicate all'oggetto esterno appropriato.  
  
```
void SetModified(BOOL bChanged = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bChanged`  
 [in] **TRUE** per indicare che le impostazioni della pagina proprietà siano state modificate dall'ultima volta che sono state applicate; **FALSE** per indicare che sono state applicate le impostazioni della pagina proprietà o devono essere ignorate.  
  
### <a name="remarks"></a>Note  
 Finestra delle proprietà tiene traccia delle quali pagine sono "dirty", vale a dire, pagine delle proprietà per cui è stato chiamato **SetModified (TRUE)**. Il **applica** pulsante verrà sempre abilitato se si chiama **SetModified (TRUE)** per una delle pagine. Il **applica** pulsante sarà disabilitato quando si chiama **SetModified (FALSE)** per una delle pagine, ma solo se nessuna delle altre pagine è "dirty".  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

