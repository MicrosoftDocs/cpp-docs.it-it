---
title: Aspetto, Creazione guidata controllo ATL
ms.date: 08/31/2018
f1_keywords:
- vc.codewiz.class.atl.control.misc
helpviewer_keywords:
- ATL Control Wizard, appearance
ms.assetid: cc16d7ff-74d7-4c15-9ebd-4b19201ff457
ms.openlocfilehash: e07dc017241848f1a670c17b12c2254de6d1b8e1
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492180"
---
# <a name="appearance-atl-control-wizard"></a>Aspetto, Creazione guidata controllo ATL

Utilizzare questa pagina della procedura guidata per identificare le opzioni aggiuntive per gli elementi utente per il controllo. Questa pagina è disponibile per i controlli identificati come **controlli standard** in **tipo di controllo** nella pagina [Opzioni, creazione guidata controllo ATL](../../atl/reference/options-atl-control-wizard.md) .

## <a name="uielement-list"></a>Elenco UIElement

- **Visualizza stato**

   Imposta l'aspetto del controllo all'interno del contenitore.

   - **Opaco**: Imposta il bit VIEWSTATUS_OPAQUE nell'enumerazione [VIEWSTATUS](/windows/win32/api/ocidl/ne-ocidl-viewstatus) e disegna l'intero rettangolo di controllo passato al metodo [CComControlBase:: OnDraw](../../atl/reference/ccomcontrolbase-class.md#ondraw) . Il controllo viene visualizzato completamente opaco e nessuno del contenitore viene visualizzato dietro i limiti del controllo.

      Questa impostazione consente al contenitore di creare più rapidamente il controllo. Se questa opzione non è selezionata, il controllo può contenere parti trasparenti.

      Solo un controllo opaco può avere uno sfondo a tinta unita.

   - **Sfondo a tinta unita**: Imposta il bit VIEWSTATUS_SOLIDBKGND nell'enumerazione VIEWSTATUS. Lo sfondo del controllo viene visualizzato come colore a tinta unita senza motivo.

      Questa opzione è disponibile solo se è selezionata anche l'opzione **opaque** .

- **Aggiungi controllo basato su**

   Imposta il controllo in modo che sia basato su un tipo di controllo Windows mediante l'aggiunta di un membro dati [CContainedWindow](ccontainedwindowt-class.md) alla classe che implementa il controllo. Viene inoltre aggiunta una mappa messaggi e le funzioni del gestore di messaggi per gestire i messaggi di Windows per il controllo. Scegliere dall'elenco il tipo di controllo di Windows che si vuole creare, se disponibile.

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

- **Stato varie**

   Imposta le opzioni relative all'aspetto e al comportamento aggiuntive per il controllo.

   - **Invisibile in fase di esecuzione**: Imposta il controllo come invisibile in fase di esecuzione. È possibile utilizzare i controlli invisibili per eseguire operazioni in background, ad esempio la generazione di eventi a intervalli temporizzati.

   - **Agisce come Button**: Imposta il bit OLEMISC_ACTSLIKEBUTTON nell'enumerazione [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) per consentire a un controllo di agire come un pulsante. Se il contenitore ha contrassegnato il sito client del controllo come pulsante predefinito, la selezione di questa opzione consente al controllo Button di essere visualizzato come pulsante predefinito disegnando se stesso con un frame più spessa. Per ulteriori informazioni, vedere [CComControlBase:: GetAmbientDisplayAsDefault](../../atl/reference/ccomcontrolbase-class.md#getambientdisplayasdefault) .

   - **Funge da etichetta**: Imposta il bit utilizzare questa opzione nell'enumerazione OLEMISC per consentire a un controllo di sostituire l'etichetta nativa del contenitore. Il contenitore determina l'operazione da eseguire con questo flag, se presente.

- **Altro**

   Imposta le opzioni di comportamento aggiuntive per il controllo.

   - **Controller**di dominio normalizzato: Imposta il controllo per creare un contesto di dispositivo normalizzato quando viene chiamato per disegnarsi. Questa azione standardizza l'aspetto del controllo, ma rende meno efficiente il disegno.

   - **Solo finestra**: Specifica che il controllo non può essere privo di finestra. Se non si seleziona questa opzione, il controllo è automaticamente privo di finestra nei contenitori che supportano oggetti senza finestra e viene automaticamente finestra nei contenitori che non supportano oggetti privi di finestra. La selezione di questa opzione impone la finestra del controllo, anche in contenitori che supportano oggetti senza finestra.

   - Inseribile: Selezionare questa opzione per visualizzare il controllo nella finestra di dialogo **Inserisci oggetto** di applicazioni come Word ed Excel. Il controllo può quindi essere inserito da qualsiasi applicazione che supporta oggetti incorporati tramite questa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)<br/>
[Esempio di SubEdit: Superclasse di un controllo Windows standard](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit)
