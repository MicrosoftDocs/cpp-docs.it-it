---
title: Creazione guidata controllo ATL, aspetto | Microsoft Docs
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
ms.openlocfilehash: 8bc6080bf66ad9bb9d436832b1066214f8cdbfb7
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42571779"
---
# <a name="appearance-atl-control-wizard"></a>Aspetto, Creazione guidata controllo ATL
Inserisci qui "Riepilogo risultati di ricerca".  
  
 Utilizzare questa pagina della procedura guidata per identificare le opzioni di elemento utente aggiuntivi per il controllo. Questa pagina è disponibile per i controlli identificati come **controlli Standard** sotto **tipo di controllo** sul [opzioni, creazione guidata controllo ATL](../../atl/reference/options-atl-control-wizard.md) pagina.  
  
## <a name="uielement-list"></a>Elenco UIElement  
**Visualizza stato**  
Imposta l'aspetto del controllo all'interno del contenitore.  
  
 -   **Opaco**: imposta il VIEWSTATUS_OPAQUE in bit nel [VIEWSTATUS](http://msdn.microsoft.com/library/windows/desktop/ms687201) enumerazione e consente di disegnare l'intero controllo rettangolo passato al [CComControlBase:: OnDraw](../../atl/reference/ccomcontrolbase-class.md#ondraw) (metodo). Il controllo viene visualizzato completamente opaco e nessuno dei contenitore Mostra dietro i limiti del controllo.      
      
        Questa impostazione consente il contenitore di disegnare il controllo più rapidamente. Se questa opzione non è selezionata, il controllo può contenere parti trasparenti.  
      
        Solo un controllo opaco può avere un sfondo a tinta unita.  
      
 -   Imposta il bit nell'enumerazione VIEWSTATUS VIEWSTATUS_SOLIDBKGND. Lo sfondo del controllo viene visualizzato come un colore a tinta unita con alcun modello.  
      
  Questa opzione è disponibile solo se il **opaco** viene selezionata anche l'opzione.  
  
**Aggiungi controllo basato su**  
Imposta il controllo deve essere basato su un tipo di controllo di Windows mediante l'aggiunta di un [CContainedWindow](ccontainedwindowt-class.md) membro dati alla classe che implementa il controllo. Aggiunge anche una mappa dei messaggi e funzioni del gestore messaggi per gestire i messaggi di Windows per il controllo. Scegliere dall'elenco il tipo di controllo di Windows che si desidera creare, se presente.  

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
Imposta opzioni aggiuntive di aspetto e il comportamento del controllo.  
  
 -   **Invisibili in fase di esecuzione**: imposta il controllo sia invisibile in fase di esecuzione. È possibile usare controlli invisibili per eseguire operazioni in background, ad esempio la generazione degli eventi a intervalli fissi.  
      
 -   **Funge da pulsante**: il bit in Olemisc_actslikebutton il [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) enumerazione per consentire a un controllo di agire come un pulsante. Se il contenitore è contrassegnato come sito di client del controllo come pulsante predefinito, se si seleziona questa opzione Abilita il controllo pulsante verrà visualizzato come pulsante predefinito disegnando una cornice più spessa. Visualizzare [CComControlBase:: GetAmbientDisplayAsDefault](../../atl/reference/ccomcontrolbase-class.md#getambientdisplayasdefault) per altre informazioni.  
      
  -   **Funge da etichetta**: il bit Olemisc_actslikelabel nell'enumerazione OLEMISC per attivare un controllo sostituire l'etichetta del contenitore nativa. Il contenitore determina quali azioni eseguire con questo flag, se qualsiasi elemento.  
  
**Altro**  
Imposta le opzioni di comportamento aggiuntive per il controllo.  
  
 -   **Normalizzato**: imposta il controllo per creare un contesto di dispositivo normalizzato quando viene chiamato per disegnare se stesso. Questa azione consente di standardizzare l'aspetto del controllo, ma è meno efficiente disegno.  
      
 -   **Solo finestra**: Specifica che il controllo non può essere privi di finestra. Se non si seleziona questa opzione, il controllo viene automaticamente senza finestra in contenitori che supportano gli oggetti senza finestra ed è automaticamente con finestra contenitori che non supportano gli oggetti senza finestra. Se si seleziona questa opzione forza il controllo con finestra, anche in contenitori che supportano gli oggetti senza finestra.  
      
 -   **Inseribile**: selezionare questa opzione per includere il controllo nella finestra di **Inserisci oggetto** finestra di dialogo delle applicazioni quali Word ed Excel. Quindi è possibile inserire il controllo da qualsiasi applicazione che supporta gli oggetti incorporati tramite questa finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)   
 [SUBEDIT esempio: Superclasse un controllo Windows Standard](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit)

