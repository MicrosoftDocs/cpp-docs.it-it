---
title: Classe CSnapInPropertyPageImpl | Documenti di Microsoft
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: f5db4d0742a423e9574db2a4268a9376491b2ed2
ms.lasthandoff: 02/24/2017

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
|[CSnapInPropertyPageImpl::CancelToClose](#canceltoclose)|Modifica lo stato di **OK** e **Annulla** pulsanti.|  
|[CSnapInPropertyPageImpl::Create](#create)|Inizializza una nuova istanza creata `CSnapInPropertyPageImpl` oggetto.|  
|[CSnapInPropertyPageImpl::OnApply](#onapply)|Chiamato dal framework quando l'utente sceglie il **applica** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnHelp](#onhelp)|Chiamato dal framework quando l'utente sceglie il **Guida** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnKillActive](#onkillactive)|Chiamato dal framework quando la pagina corrente non è più attiva.|  
|[CSnapInPropertyPageImpl::OnQueryCancel](#onquerycancel)|Chiamato dal framework quando l'utente sceglie il **Annulla** pulsante e prima dell'operazione di annullamento ha avuto luogo.|  
|[CSnapInPropertyPageImpl::OnReset](#onreset)|Chiamato dal framework quando l'utente sceglie il **reimpostare** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnSetActive](#onsetactive)|Chiamato dal framework quando la pagina corrente diventa attiva.|  
|[CSnapInPropertyPageImpl::OnWizardBack](#onwizardback)|Chiamato dal framework quando l'utente sceglie il **nuovamente** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnWizardFinish](#onwizardfinish)|Chiamato dal framework quando l'utente sceglie il **fine** pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::OnWizardNext](#onwizardnext)|Chiamato dal framework quando l'utente sceglie il `Next` pulsante durante l'utilizzo di una finestra delle proprietà di tipo di procedura guidata.|  
|[CSnapInPropertyPageImpl::QuerySiblings](#querysiblings)|Inoltra il messaggio corrente per tutte le pagine della finestra delle proprietà.|  
|[CSnapInPropertyPageImpl::SetModified](#setmodified)|Chiamata per attivare o disattivare il **applica** pulsante.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::m_psp](#m_psp)|Windows **PROPSHEETPAGE** struttura utilizzata per il `CSnapInPropertyPageImpl` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CSnapInPropertyPageImpl`fornisce un'implementazione di base per un oggetto della pagina proprietà snap-in. Funzionalità di base di una pagina delle proprietà snap-in vengono implementate tramite diverse interfacce diverse e mapping di tipi.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDialogImplBase`  
  
 `CSnapInPropertyPageImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlsnap.h  
  
##  <a name="a-namecanceltoclosea--csnapinpropertypageimplcanceltoclose"></a><a name="canceltoclose"></a>CSnapInPropertyPageImpl::CancelToClose  
 Chiamare questa funzione dopo un'errore irreversibile modifica apportata ai dati in una pagina di una finestra delle proprietà modale.  
  
```
void CancelToClose();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione verrà modificato il **OK** pulsante **Chiudi** e disabilitare il **Annulla** pulsante. Questa modifica non può essere annullata dall'utente che una modifica è permanente e le modifiche degli avvisi.  
  
 Il `CancelToClose` funzione membro non esegue alcuna operazione in una finestra delle proprietà non modale, perché non dispone di una finestra delle proprietà non modale un **Annulla** per impostazione predefinita.  
  
##  <a name="a-namecsnapinpropertypageimpla--csnapinpropertypageimplcsnapinpropertypageimpl"></a><a name="csnapinpropertypageimpl"></a>CSnapInPropertyPageImpl::CSnapInPropertyPageImpl  
 Costruisce un oggetto `CSnapInPropertyPageImpl`.  
  
```
CSnapInPropertyPageImpl(LPCTSTR lpszTitle = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTitle`  
 [in] Il titolo della pagina delle proprietà.  
  
### <a name="remarks"></a>Note  
 Per inizializzare la struttura sottostante, chiamare [CSnapInPropertyPageImpl::Create](#create).  
  
##  <a name="a-namecreatea--csnapinpropertypageimplcreate"></a><a name="create"></a>CSnapInPropertyPageImpl::Create  
 Chiamare questa funzione per inizializzare la struttura sottostante della pagina delle proprietà.  
  
```
HPROPSHEETPAGE Create();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per un **PROPSHEETPAGE** struttura che contiene gli attributi della finestra delle proprietà appena creata.  
  
### <a name="remarks"></a>Note  
 È opportuno chiamare dapprima [CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](#csnapinpropertypageimpl) prima di chiamare questa funzione.  
  
##  <a name="a-namempspa--csnapinpropertypageimplmpsp"></a><a name="m_psp"></a>CSnapInPropertyPageImpl::m_psp  
 `m_psp`è una struttura i cui membri memorizzare le caratteristiche di **PROPSHEETPAGE**.  
  
```
PROPSHEETPAGE m_psp;
```  
  
### <a name="remarks"></a>Note  
 Utilizzare questa struttura per inizializzare l'aspetto di una pagina delle proprietà dopo che è stato costruito.  
  
 Per ulteriori informazioni su tale struttura, compreso un elenco dei relativi membri, vedere [PROPSHEETPAGE](http://msdn.microsoft.com/library/aa815151) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameonapplya--csnapinpropertypageimplonapply"></a><a name="onapply"></a>CSnapInPropertyPageImpl::OnApply  
 Questa funzione membro viene chiamata quando l'utente sceglie il **OK** o **applica** pulsante.  
  
```
BOOL OnApply();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le modifiche vengono accettate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Prima di `OnApply` può essere chiamato dal framework, è necessario avere chiamato `SetModified` e impostarne il parametro su **TRUE**. Questo attiverà la **applica** pulsante non appena l'utente apporta una modifica nella pagina delle proprietà.  
  
 Eseguire l'override di questa funzione membro per specificare l'azione che il programma intraprende quando l'utente sceglie il **applica** pulsante. Quando si esegue l'override, la funzione deve restituire **TRUE** per accettare le modifiche e **FALSE** per impedire che le modifiche hanno effetto.  
  
 L'implementazione predefinita di `OnApply` restituisce **TRUE**.  
  
##  <a name="a-nameonhelpa--csnapinpropertypageimplonhelp"></a><a name="onhelp"></a>CSnapInPropertyPageImpl::OnHelp  
 Questa funzione membro viene chiamata quando l'utente sceglie il **Guida** pulsante per la pagina delle proprietà.  
  
```
void OnHelp();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per visualizzare la Guida per la pagina delle proprietà.  
  
##  <a name="a-nameonkillactivea--csnapinpropertypageimplonkillactive"></a><a name="onkillactive"></a>CSnapInPropertyPageImpl::OnKillActive  
 Questa funzione membro viene chiamata quando la pagina non è più la pagina attiva.  
  
```
BOOL OnKillActive();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i dati sono stati aggiornati correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire attività di convalida di dati speciali.  
  
##  <a name="a-nameonquerycancela--csnapinpropertypageimplonquerycancel"></a><a name="onquerycancel"></a>CSnapInPropertyPageImpl::OnQueryCancel  
 Questa funzione membro viene chiamata quando l'utente sceglie il **Annulla** pulsante e l'annullamento prima dell'azione ha avuto luogo.  
  
```
BOOL OnQueryCancel();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per consentire l'operazione di annullamento; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione che il programma utilizza quando l'utente sceglie il **Annulla** pulsante.  
  
 L'implementazione predefinita di `OnQueryCancel` restituisce **TRUE**.  
  
##  <a name="a-nameonreseta--csnapinpropertypageimplonreset"></a><a name="onreset"></a>CSnapInPropertyPageImpl::OnReset  
 Questa funzione membro viene chiamata quando l'utente sceglie il **Annulla** pulsante.  
  
```
void OnReset();
```  
  
### <a name="remarks"></a>Note  
 Quando questa funzione viene chiamata, viene modificato in tutte le pagine delle proprietà apportate dall'utente facendo clic in precedenza il **applica** pulsante vengono ignorati e la finestra delle proprietà mantiene lo stato attivo.  
  
 Eseguire l'override di questa funzione membro per specificare l'operazione viene eseguita quando l'utente fa clic il **Annulla** pulsante.  
  
##  <a name="a-nameonsetactivea--csnapinpropertypageimplonsetactive"></a><a name="onsetactive"></a>CSnapInPropertyPageImpl::OnSetActive  
 Questa funzione membro viene chiamata quando la pagina viene scelto dall'utente e diventa la pagina attiva.  
  
```
BOOL OnSetActive();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la pagina è stata impostata come attiva. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire attività quando viene attivata una pagina. L'override di questa funzione membro deve chiamare la versione predefinita prima di qualsiasi altra elaborazione.  
  
 L'implementazione predefinita restituisce **TRUE**.  
  
##  <a name="a-nameonwizardbacka--csnapinpropertypageimplonwizardback"></a><a name="onwizardback"></a>CSnapInPropertyPageImpl::OnWizardBack  
 Questa funzione membro viene chiamata quando l'utente sceglie il **nuovamente** pulsante in una procedura guidata.  
  
```
BOOL OnWizardBack();
```  
  
### <a name="return-value"></a>Valore restituito  
  
-   0 per passare automaticamente alla pagina precedente.  
  
-   -1 per impedire la pagina di modifica.  
  
 Per passare a una pagina diversa da quella successiva, restituire l'ID della finestra di dialogo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione da effettuare quando il **nuovamente** si fa clic sul pulsante.  
  
##  <a name="a-nameonwizardfinisha--csnapinpropertypageimplonwizardfinish"></a><a name="onwizardfinish"></a>CSnapInPropertyPageImpl::OnWizardFinish  
 Questa funzione membro viene chiamata quando l'utente sceglie il **fine** pulsante in una procedura guidata.  
  
```
BOOL OnWizardFinish();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra delle proprietà viene eliminata al termine della procedura guidata; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione da effettuare quando il **fine** si fa clic sul pulsante.  
  
##  <a name="a-nameonwizardnexta--csnapinpropertypageimplonwizardnext"></a><a name="onwizardnext"></a>CSnapInPropertyPageImpl::OnWizardNext  
 Questa funzione membro viene chiamata quando l'utente sceglie il `Next` pulsante in una procedura guidata.  
  
```
BOOL OnWizardNext();
```  
  
### <a name="return-value"></a>Valore restituito  
  
-   0 per passa automaticamente alla pagina successiva.  
  
-   -1 per impedire la pagina di modifica.  
  
 Per passare a una pagina diversa da quella successiva, restituire l'ID della finestra di dialogo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione da effettuare quando il `Next` si fa clic sul pulsante.  
  
##  <a name="a-namequerysiblingsa--csnapinpropertypageimplquerysiblings"></a><a name="querysiblings"></a>CSnapInPropertyPageImpl::QuerySiblings  
 Chiamare questa funzione membro per inoltrare un messaggio a ogni pagina nella finestra delle proprietà.  
  
```
LRESULT QuerySiblings(WPARAM wParam, LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `wParam`  
 [in] Specifica informazioni aggiuntive dipendenti dal messaggio.  
  
 `lParam`  
 [in] Specifica informazioni aggiuntive dipendenti dal messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio non deve essere inoltrato alla pagina delle proprietà successiva; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Se una pagina restituisce un valore diverso da zero, la finestra delle proprietà non invia il messaggio per le pagine successive.  
  
##  <a name="a-namesetmodifieda--csnapinpropertypageimplsetmodified"></a><a name="setmodified"></a>CSnapInPropertyPageImpl::SetModified  
 Chiamare questa funzione membro per abilitare o disabilitare il **applica** pulsante, a seconda se le impostazioni nella pagina delle proprietà devono essere applicate all'oggetto esterno appropriato.  
  
```
void SetModified(BOOL bChanged = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bChanged`  
 [in] **TRUE** per indicare che le impostazioni della pagina proprietà siano state modificate dall'ultima volta che sono state applicate; **FALSE** per indicare che sono state applicate le impostazioni di pagina di proprietà o devono essere ignorate.  
  
### <a name="remarks"></a>Note  
 La finestra delle proprietà tiene traccia delle quali pagine sono "dirty", vale a dire, pagine delle proprietà per cui è stato chiamato **SetModified (TRUE)**. Il **applica** pulsante sempre essere abilitato se si chiama **SetModified (TRUE)** per una delle pagine. Il **applica** pulsante è disabilitato quando si chiama **SetModified (FALSE)** per una delle pagine, ma solo se nessuna delle altre pagine "dirty".  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

