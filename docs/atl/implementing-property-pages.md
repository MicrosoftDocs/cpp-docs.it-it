---
title: Implementazione delle pagine delle proprietà
ms.date: 11/04/2016
helpviewer_keywords:
- IPropertyPage2 class
- IPropertyPage class
- property pages, implementing
ms.assetid: 62f29440-33a7-40eb-a1ef-3634c95f640c
ms.openlocfilehash: 8999f6469e420fa86cb1267675f10dc173d45ff0
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58776251"
---
# <a name="implementing-property-pages"></a>Implementazione delle pagine delle proprietà

Pagine delle proprietà sono oggetti COM che implementano il `IPropertyPage` o `IPropertyPage2` interfaccia. ATL fornisce il supporto per l'implementazione di pagine delle proprietà tramite il [Creazione guidata pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md) nel [nella finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md).

Per creare una pagina delle proprietà utilizzando ATL:

- Creare o aprire un progetto server di libreria (DLL) DLL ATL.

- Aprire il [finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md) e selezionare **pagina delle proprietà ATL**.

- Assicurarsi che la pagina delle proprietà è un apartment a thread singolo (perché ha un'interfaccia utente).

- Impostare il titolo, descrizione (stringa Doc) e file della Guida da associare con la pagina.

- Aggiungere controlli alla risorsa finestra di dialogo generate come interfaccia utente della pagina delle proprietà.

- Rispondere alle modifiche nell'interfaccia utente della pagina per eseguire la convalida, aggiornare il sito della pagina o aggiornare gli oggetti associati alla pagina. In particolare, chiamare [IPropertyPageImpl:: SetDirty](../atl/reference/ipropertypageimpl-class.md#setdirty) quando l'utente apporta modifiche alla pagina delle proprietà.

- Se lo si desidera eseguire l'override di `IPropertyPageImpl` metodi usando le linee guida seguenti.

   |Metodo IPropertyPageImpl|Eseguire l'override quando si vuole...|Note|
   |------------------------------|----------------------------------|-----------|
   |[SetObjects](../atl/reference/ipropertypageimpl-class.md#setobjects)|Eseguire i controlli di integrità di base sul numero di oggetti passati alla pagina e le interfacce che supportano.|Eseguire il codice personalizzato prima di chiamare l'implementazione della classe base. Se gli oggetti da impostare non è conforme alle aspettative, è prima possibile deve avere esito negativo della chiamata.|
   |[attivare](../atl/reference/ipropertypageimpl-class.md#activate)|Inizializzare l'interfaccia utente della pagina (ad esempio, impostare i controlli di finestra di dialogo con valori di proprietà correnti degli oggetti, creare i controlli in modo dinamico o eseguire altre inizializzazioni).|Chiamare l'implementazione della classe base prima del codice in modo che la classe di base ha la possibilità di creare la finestra di dialogo e tutti i controlli prima di tentare di aggiornarle.|
   |[Apply](../atl/reference/ipropertypageimpl-class.md#apply)|Convalidare le impostazioni delle proprietà e aggiornare gli oggetti.|Non è necessario chiamare l'implementazione della classe base, dal momento che non esegue alcuna operazione oltre a traccia la chiamata.|
   |[Disattiva](../atl/reference/ipropertypageimpl-class.md#deactivate)|Pulire gli elementi relativi alle finestre.|Implementazione della classe base Elimina definitivamente la finestra di dialogo che rappresenta la pagina delle proprietà. Se è necessario eliminare prima la finestra di dialogo viene eliminato definitivamente, è necessario aggiungere il codice prima di chiamare la classe di base.|

Per un'implementazione di pagina delle proprietà di esempio, vedere [esempio: Implementazione di una pagina delle proprietà](../atl/example-implementing-a-property-page.md).

> [!NOTE]
> Se si vuole ospitare controlli ActiveX nella pagina delle proprietà, è necessario modificare la derivazione della classe generato dalla procedura guidata. Sostituire **CDialogImpl\<CClasse >** con **CAxDialogImpl\<CClasse >** nell'elenco delle classi di base.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../atl/atl-com-property-pages.md)<br/>
[Esempio ATLPages](../overview/visual-cpp-samples.md)
