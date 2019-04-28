---
title: Aspetto, Creazione guidata controllo ATL
ms.date: 08/31/2018
f1_keywords:
- vc.codewiz.class.atl.control.misc
helpviewer_keywords:
- ATL Control Wizard, appearance
ms.assetid: cc16d7ff-74d7-4c15-9ebd-4b19201ff457
ms.openlocfilehash: 4d3b0519951636fad4175dc35261ba35b3694ffa
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62248953"
---
# <a name="appearance-atl-control-wizard"></a>Aspetto, Creazione guidata controllo ATL

Utilizzare questa pagina della procedura guidata per identificare le opzioni di elemento utente aggiuntivi per il controllo. Questa pagina è disponibile per i controlli identificati come **controlli Standard** sotto **tipo di controllo** sul [opzioni, creazione guidata controllo ATL](../../atl/reference/options-atl-control-wizard.md) pagina.

## <a name="uielement-list"></a>Elenco UIElement

- **Visualizza stato**

   Imposta l'aspetto del controllo all'interno del contenitore.

   - **Opaco**: Imposta il VIEWSTATUS_OPAQUE in bit nel [VIEWSTATUS](/windows/desktop/api/ocidl/ne-ocidl-tagviewstatus) enumerazione e consente di disegnare l'intero controllo rettangolo passato al [CComControlBase:: OnDraw](../../atl/reference/ccomcontrolbase-class.md#ondraw) (metodo). Il controllo viene visualizzato completamente opaco e nessuno dei contenitore Mostra dietro i limiti del controllo.

      Questa impostazione consente il contenitore di disegnare il controllo più rapidamente. Se questa opzione non è selezionata, il controllo può contenere parti trasparenti.

      Solo un controllo opaco può avere un sfondo a tinta unita.

   - **Sfondo a tinta unita**: Imposta il bit nell'enumerazione VIEWSTATUS VIEWSTATUS_SOLIDBKGND. Lo sfondo del controllo viene visualizzato come un colore a tinta unita con alcun modello.

      Questa opzione è disponibile solo se il **opaco** viene selezionata anche l'opzione.

- **Aggiungi controllo basato su**

   Imposta il controllo deve essere basato su un tipo di controllo di Windows mediante l'aggiunta di un [CContainedWindow](ccontainedwindowt-class.md) membro dati alla classe che implementa il controllo. Aggiunge anche una mappa dei messaggi e funzioni del gestore messaggi per gestire i messaggi di Windows per il controllo. Scegliere dall'elenco il tipo di controllo di Windows che si desidera creare, se presente.

   - **Pulsante**

   - **ListBox**

   - **SysAnimate32**

   - **SysListView32**

   - **ComboBox**

   - **RichEdit**

   - **SysDateTimePick32**

   - **SysMonthCal32**

   - **ComboBoxEx32**

   - **Barra di scorrimento**

   - **SysHeader32**

   - **SysTabControl32**

   - **Modifica**

   - **Static**

   - **SysIPAddress32**

   - **SysTreeView32**

- **Stato altre funzionalità**

   Imposta opzioni aggiuntive di aspetto e il comportamento del controllo.

   - **Invisibili in fase di esecuzione**: Imposta il controllo sia invisibile in fase di esecuzione. È possibile usare controlli invisibili per eseguire operazioni in background, ad esempio la generazione degli eventi a intervalli fissi.

   - **Funge da pulsante**: Il bit in OLEMISC_ACTSLIKEBUTTON il [OLEMISC](/windows/desktop/api/oleidl/ne-oleidl-tagolemisc) enumerazione per consentire a un controllo di agire come un pulsante. Se il contenitore è contrassegnato come sito di client del controllo come pulsante predefinito, se si seleziona questa opzione Abilita il controllo pulsante verrà visualizzato come pulsante predefinito disegnando una cornice più spessa. Visualizzare [CComControlBase:: GetAmbientDisplayAsDefault](../../atl/reference/ccomcontrolbase-class.md#getambientdisplayasdefault) per altre informazioni.

   - **Funge da etichetta**: Il bit OLEMISC_ACTSLIKELABEL nell'enumerazione OLEMISC per attivare un controllo sostituire l'etichetta del contenitore nativa. Il contenitore determina quali azioni eseguire con questo flag, se qualsiasi elemento.

- **Altro**

   Imposta le opzioni di comportamento aggiuntive per il controllo.

   - **Normalizzato**: Imposta il controllo per creare un contesto di dispositivo normalizzato quando viene chiamato per disegnare se stesso. Questa azione consente di standardizzare l'aspetto del controllo, ma è meno efficiente disegno.

   - **Solo finestra**: Specifica che il controllo non può essere privi di finestra. Se non si seleziona questa opzione, il controllo viene automaticamente senza finestra in contenitori che supportano gli oggetti senza finestra ed è automaticamente con finestra contenitori che non supportano gli oggetti senza finestra. Se si seleziona questa opzione forza il controllo con finestra, anche in contenitori che supportano gli oggetti senza finestra.

   - **Inseribile**: Selezionare questa opzione per includere il controllo nella finestra di **Inserisci oggetto** finestra di dialogo delle applicazioni quali Word ed Excel. Quindi è possibile inserire il controllo da qualsiasi applicazione che supporta gli oggetti incorporati tramite questa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)<br/>
[SUBEDIT esempio: Superclasse di un controllo Windows Standard](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit)
