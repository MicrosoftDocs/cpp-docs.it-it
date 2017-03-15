---
title: Aspetto, creazione guidata controllo ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.control.misc
dev_langs:
- C++
helpviewer_keywords:
- ATL Control Wizard, appearance
ms.assetid: cc16d7ff-74d7-4c15-9ebd-4b19201ff457
caps.latest.revision: 12
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
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: dde27a7b62f3ee3b5fe8fcacd8141e9f89ed3c98
ms.lasthandoff: 02/24/2017

---
# <a name="appearance-atl-control-wizard"></a>Aspetto, Creazione guidata controllo ATL
Inserire qui "Riepilogo risultati di ricerca".  
  
 Utilizzare questa pagina della procedura guidata per identificare le opzioni di elemento utente aggiuntivi per il controllo. Questa pagina è disponibile per i controlli definiti come **controlli Standard** in **tipo di controllo** sul [opzioni, creazione guidata controllo ATL](../../atl/reference/options-atl-control-wizard.md) pagina.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Visualizzazione dello stato**  
 Imposta l'aspetto del controllo all'interno del contenitore.  
  
-   **Opaco**: imposta il `VIEWSTATUS_OPAQUE` bit il [VIEWSTATUS](http://msdn.microsoft.com/library/windows/desktop/ms687201) enumerazione e disegna il rettangolo intero controllo passato al [CComControlBase:: OnDraw](../../atl/reference/ccomcontrolbase-class.md#ondraw) (metodo). Il controllo è completamente opaco e non del contenitore Mostra dietro i limiti del controllo.  
  
     Questa impostazione consente il contenitore di disegnare il controllo più rapidamente. Se questa opzione non è selezionata, il controllo può contenere parti trasparenti.  
  
     Solo un controllo opaco può avere uno sfondo a tinta unita.  
  
-   Set di `VIEWSTATUS_SOLIDBKGND` bit il `VIEWSTATUS` enumerazione. Lo sfondo del controllo viene visualizzato come un colore a tinta unita con alcun modello.  
  
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
  
-   **Invisibile in fase di esecuzione**: imposta il controllo come invisibile in fase di esecuzione. È possibile utilizzare controlli invisibili per eseguire operazioni in background, ad esempio la generazione degli eventi a intervalli fissi.  
  
-   **Funge da pulsante**: imposta il `OLEMISC_ACTSLIKEBUTTON` bit il [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) enumerazione per consentire a un controllo di agire come un pulsante. Se il contenitore è contrassegnato come sito di client del controllo come pulsante predefinito, questa opzione consente il controllo pulsante verrà visualizzato come pulsante predefinito disegnando una cornice più spessa. Vedere [CComControlBase:: GetAmbientDisplayAsDefault](../../atl/reference/ccomcontrolbase-class.md#getambientdisplayasdefault) per ulteriori informazioni.  
  
-   **Funge da etichetta**: imposta il `OLEMISC_ACTSLIKELABEL` bit il `OLEMISC` enumerazione per consentire a un controllo per sostituire l'etichetta nativa del contenitore. Il contenitore determina quali azioni eseguire con questo flag, o nulla.  
  
 **Altro**  
 Imposta le opzioni di comportamenti aggiuntivi per il controllo.  
  
-   **Normalizzato**: imposta il controllo per creare un contesto di periferica normalizzato quando viene chiamato per disegnare se stesso. Questa azione consente di standardizzare l'aspetto del controllo, ma rende meno efficiente disegno.  
  
-   **Solo finestra**: Specifica che il controllo non può essere privi di finestra. Se non si seleziona questa opzione, il controllo viene automaticamente privi di finestra nei contenitori che supportano oggetti privi di finestra ed è automaticamente finestra in contenitori che non supportano oggetti privi di finestra. Selezionando questa opzione forza il controllo con finestra anche nei contenitori che supportano oggetti privi di finestra.  
  
-   **Inseribile**: selezionare questa opzione per includere il controllo nella finestra di **Inserisci oggetto** la finestra di dialogo di applicazioni come Word ed Excel. Il controllo può quindi essere inserito da qualsiasi applicazione che supporta gli oggetti incorporati tramite questa finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)   
 [SUBEDIT esempio: È una superclasse un controllo Standard di Windows](http://msdn.microsoft.com/en-us/30e46bdc-ed92-417c-b6b8-359017265a7b)


