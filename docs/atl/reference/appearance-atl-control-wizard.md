---
title: Aspetto, Creazione guidata controllo ATL
ms.date: 08/31/2018
f1_keywords:
- vc.codewiz.class.atl.control.misc
helpviewer_keywords:
- ATL Control Wizard, appearance
ms.assetid: cc16d7ff-74d7-4c15-9ebd-4b19201ff457
ms.openlocfilehash: 3484fb5d0f919af0dfd18b584e96d4675e2baea8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319400"
---
# <a name="appearance-atl-control-wizard"></a>Aspetto, Creazione guidata controllo ATL

Utilizzare questa pagina della procedura guidata per identificare ulteriori opzioni dell'elemento utente per il controllo. Questa pagina è disponibile per i controlli identificati come **controlli standard** in **Tipo** di controllo nella pagina [Opzioni, Creazione guidata controllo ATL.](../../atl/reference/options-atl-control-wizard.md)

## <a name="uielement-list"></a>Elenco degli elementi di interfaccia

- **Visualizzare lo stato**

   Imposta l'aspetto del controllo all'interno del contenitore.

  - **Opaco**: Imposta il VIEWSTATUS_OPAQUE bit nell'enumerazione [VIEWSTATUS](/windows/win32/api/ocidl/ne-ocidl-viewstatus) e disegna l'intero rettangolo di controllo passato al metodo [CComControlBase::OnDraw](../../atl/reference/ccomcontrolbase-class.md#ondraw) . Il controllo appare completamente opaco e nessuno dei contenitori viene visualizzato dietro i limiti del controllo.

      Questa impostazione consente al contenitore di disegnare il controllo più rapidamente. Se questa opzione non è selezionata, il controllo può contenere parti trasparenti.

      Solo un controllo opaco può avere uno sfondo a tinta unita.

  - **Sfondo a tinta unita**: Imposta il bit VIEWSTATUS_SOLIDBKGND nell'enumerazione VIEWSTATUS. Lo sfondo del controllo viene visualizzato come un colore a tinta unita senza motivo.

      Questa opzione è disponibile solo se è selezionata anche l'opzione **Opaco.**

- **Aggiungi controllo in base a**

   Imposta il controllo in modo che sia basato su un tipo di controllo Windows aggiungendo un membro dati [CContainedWindow](ccontainedwindowt-class.md) alla classe che implementa il controllo. Aggiunge inoltre una mappa messaggi e funzioni del gestore messaggi per gestire i messaggi di Windows per il controllo. Scegliere dall'elenco il tipo di controllo di Windows che si desidera creare, se presente.

  - **Pulsante**

  - **ListBox**

  - **SysAnimate32**

  - **SysListView32**

  - **ComboBox**

  - **RichEdit**

  - **SysDateTimePick32**

  - **SysMonthCal32**

  - **ComboBoxEx32**

  - **ScrollBar**

  - **SysHeader32**

  - **SysTabControl32**

  - **Modifica**

  - **Statico**

  - **SysIPAddress32**

  - **SysTreeView32**

- **Stato varie**

   Imposta opzioni aggiuntive relative all'aspetto e al comportamento per il controllo.

  - **Invisibile in fase di esecuzione**: Imposta il controllo invisibile in fase di esecuzione. È possibile utilizzare i controlli invisibili per eseguire operazioni in background, ad esempio la generazione di eventi a intervalli di tempo.

  - **Funziona come pulsante**: Imposta il bit di OLEMISC_ACTSLIKEBUTTON nell'enumerazione [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) per consentire a un controllo di agire come un pulsante. Se il contenitore ha contrassegnato il sito client del controllo come pulsante predefinito, la selezione di questa opzione consente al controllo pulsante di visualizzare se stesso come pulsante predefinito disegnando se stesso con una cornice più spessa. Vedere [CComControlBase::GetAmbientDisplayAsDefault](../../atl/reference/ccomcontrolbase-class.md#getambientdisplayasdefault) per ulteriori informazioni.

  - **Funziona come label**: Imposta il bit OLEMISC_ACTSLIKELABEL nell'enumerazione OLEMISC per consentire a un controllo di sostituire l'etichetta nativa del contenitore. Il contenitore determina cosa fare con questo flag, se non altro.

- **Altro**

   Imposta opzioni di comportamento aggiuntive per il controllo.

  - **Dc normalizzato**: Imposta il controllo per creare un contesto di periferica normalizzato quando viene chiamato per disegnare se stesso. Questa azione standardizza l'aspetto del controllo, ma rende il disegno meno efficiente.

  - **Solo finestra**: Specifica che il controllo non può essere senza finestra. Se non si seleziona questa opzione, il controllo viene automaticamente privo di finestre in contenitori che supportano oggetti senza finestra e viene automaticamente finestrato in contenitori che non supportano oggetti privi di finestra. La selezione di questa opzione forza la finestra del controllo, anche nei contenitori che supportano oggetti senza finestra.

  - **Inseriscibile**: Selezionare questa opzione per visualizzare il controllo nella finestra di dialogo **Inserisci oggetto** di applicazioni quali Word ed Excel. Il controllo può quindi essere inserito da qualsiasi applicazione che supporta gli oggetti incorporati tramite questa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Creazione guidata controllo ATL](../../atl/reference/atl-control-wizard.md)<br/>
[Esempio SUBEDIT: superclasse di un controllo Windows standardSUBEDIT Sample: Superclasses a Standard Windows Control](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit)
