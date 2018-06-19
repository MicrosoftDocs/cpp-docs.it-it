---
title: Aspetto, creazione guidata controllo ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.control.misc
dev_langs:
- C++
helpviewer_keywords:
- ATL Control Wizard, appearance
ms.assetid: cc16d7ff-74d7-4c15-9ebd-4b19201ff457
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d1d27b46f529d8423bdaf733928a9f3e46b3f185
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32358602"
---
# <a name="appearance-atl-control-wizard"></a>Aspetto, Creazione guidata controllo ATL
Inserire qui "Riepilogo risultati di ricerca".  
  
 Utilizzare questa pagina della procedura guidata per identificare le opzioni di elemento utente aggiuntivi per il controllo. Questa pagina è disponibile per i controlli definiti come **controlli Standard** in **tipo di controllo** sul [opzioni, creazione guidata controllo ATL](../../atl/reference/options-atl-control-wizard.md) pagina.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Visualizzare lo stato**  
 Imposta l'aspetto del controllo all'interno del contenitore.  
  
-   **Opaco**: imposta il `VIEWSTATUS_OPAQUE` bit nel [VIEWSTATUS](http://msdn.microsoft.com/library/windows/desktop/ms687201) enumerazione e disegna il rettangolo di tutto il controllo passato al [CComControlBase:: OnDraw](../../atl/reference/ccomcontrolbase-class.md#ondraw) (metodo). Il controllo è completamente opaco e non del contenitore Mostra dietro i limiti del controllo.  
  
     Questa impostazione consente al contenitore di disegnare il controllo più rapidamente. Se questa opzione non è selezionata, il controllo può contenere parti trasparenti.  
  
     Solo un controllo opaco può avere uno sfondo a tinta unita.  
  
-   Imposta il `VIEWSTATUS_SOLIDBKGND` bit il `VIEWSTATUS` enumerazione. Lo sfondo del controllo viene visualizzato come un colore a tinta unita con alcun criterio.  
  
     Questa opzione è disponibile solo se il **opaco** selezionata anche l'opzione.  
  
 **Aggiungi controllo basato su**  
 Imposta il controllo deve essere basato su un tipo di controllo di Windows mediante l'aggiunta di un [CContainedWindow](ccontainedwindowt-class.md) membro dati alla classe che implementa il controllo. Aggiunge inoltre una mappa messaggi e funzioni del gestore messaggi per gestire i messaggi di Windows per il controllo. Scegliere dall'elenco il tipo di controllo di Windows che si desidera creare, se presente.  

  
-   `Button`  
  
-   `ListBox`  
  
-   `SysAnimate32`  
  
-   `SysListView32`  
  
-   `ComboBox`  
  
-   `RichEdit`  
  
-   `SysDateTimePick32`  
  
-   `SysMonthCal32`  
  
-   `ComboBoxEx32`  
  
-   `ScrollBar`  
  
-   `SysHeader32`  
  
-   `SysTabControl32`  
  
-   `Edit`  
  
-   `Static`  
  
-   `SysIPAddress32`  
  
-   `SysTreeView32`  
  
 **Stato altre funzionalità**  
 Imposta le opzioni aggiuntive di aspetto e il comportamento per il controllo.  
  
-   **Invisibili in fase di esecuzione**: imposta il controllo sia invisibile in fase di esecuzione. È possibile utilizzare controlli invisibili per eseguire operazioni in background, ad esempio la generazione di eventi a intervalli fissi.  
  
-   **Funge da pulsante**: imposta il `OLEMISC_ACTSLIKEBUTTON` bit il [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) enumerazione per attivare un controllo di agire come un pulsante. Se il contenitore è contrassegnato come sito di client del controllo come pulsante predefinito, se si seleziona questa opzione consente il controllo pulsante verrà visualizzato come pulsante predefinito disegnando un frame più spesso. Vedere [CComControlBase:: GetAmbientDisplayAsDefault](../../atl/reference/ccomcontrolbase-class.md#getambientdisplayasdefault) per ulteriori informazioni.  
  
-   **Funziona come etichetta**: imposta il `OLEMISC_ACTSLIKELABEL` bit nel `OLEMISC` enumerazione per attivare un controllo sostituire l'etichetta del contenitore nativo. Il contenitore determina quali azioni eseguire con questo flag, se qualsiasi elemento.  
  
 **Altro**  
 Imposta le opzioni di comportamento aggiuntive per il controllo.  
  
-   **Normalizzato**: imposta il controllo per creare un contesto di dispositivo normalizzato quando viene chiamato per disegnare se stessa. Questa azione consente di standardizzare l'aspetto del controllo, ma rende meno efficiente disegno.  
  
-   **Solo finestra**: Specifica che il controllo non può essere privi di finestra. Se non si seleziona questa opzione, il controllo viene automaticamente senza finestra in contenitori che supportano gli oggetti senza finestra ed è automaticamente finestra in contenitori che non supportano oggetti privi di finestra. Se si seleziona questa opzione forza il controllo con finestra anche nei contenitori che supportano oggetti privi di finestra.  
  
-   **Inseribile**: selezionare questa opzione per includere il controllo nella finestra di **Inserisci oggetto** finestra di dialogo di applicazioni quali Word ed Excel. Il controllo può quindi essere inserito da qualsiasi applicazione che supporta oggetti incorporati tramite questa finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)   
 [SUBEDIT esempio: Superclassi un controllo Windows Standard](http://msdn.microsoft.com/en-us/30e46bdc-ed92-417c-b6b8-359017265a7b)

