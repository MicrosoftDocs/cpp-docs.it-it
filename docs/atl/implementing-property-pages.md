---
title: Implementazione delle pagine delle proprietà
ms.date: 11/04/2016
helpviewer_keywords:
- IPropertyPage2 class
- IPropertyPage class
- property pages, implementing
ms.assetid: 62f29440-33a7-40eb-a1ef-3634c95f640c
ms.openlocfilehash: 6544f5ddf0b81fdec893308bb10e0c19cea73005
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91499447"
---
# <a name="implementing-property-pages"></a>Implementazione delle pagine delle proprietà

::: moniker range="vs-2019"

La Creazione guidata pagina delle proprietà ATL non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

Le pagine delle proprietà sono oggetti COM che implementano l'interfaccia `IPropertyPage` o `IPropertyPage2`. ATL fornisce il supporto per l'implementazione delle pagine delle proprietà tramite la [Creazione guidata pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md) nella [finestra di dialogo Aggiungi classe](../ide/adding-a-class-visual-cpp.md#add-class-dialog-box).

Per creare una pagina delle proprietà con ATL:

- Creare o aprire un progetto server di libreria di collegamento dinamico (DLL) ATL.

- Aprire la [finestra di dialogo Aggiungi classe](../ide/adding-a-class-visual-cpp.md#add-class-dialog-box) e selezionare **Pagina delle proprietà ATL**.

- Assicurarsi che la pagina delle proprietà abbia un threading di tipo apartment (poiché ha un'interfaccia utente).

- Impostare il titolo, la descrizione (stringa doc) e file della Guida da associare alla pagina.

- Aggiungere i controlli alla risorsa finestra di dialogo generata da usare come interfaccia utente della pagina delle proprietà.

- Rispondere alle modifiche nell'interfaccia utente della pagina per eseguire la convalida, aggiornare il sito della pagina o aggiornare gli oggetti associati alla pagina. In particolare, chiamare [IPropertyPageImpl::SetDirty](../atl/reference/ipropertypageimpl-class.md#setdirty) quando l'utente apporta modifiche alla pagina delle proprietà.

- Facoltativamente, eseguire l'override dei metodi `IPropertyPageImpl` attenendosi alle linee guida seguenti.

   |Metodo IPropertyPageImpl|Eseguire l'override quando si vuole...|Note|
   |------------------------------|----------------------------------|-----------|
   |[SetObjects](../atl/reference/ipropertypageimpl-class.md#setobjects)|Eseguire test di integrità di base sul numero di oggetti passati alla pagina e sulle interfacce supportate.|Eseguire codice personalizzato prima di chiamare l'implementazione della classe di base. Se gli oggetti impostati non sono conformi alle aspettative, determinare l'esito negativo della chiamata il prima possibile.|
   |[Attiva](../atl/reference/ipropertypageimpl-class.md#activate)|Inizializzare l'interfaccia utente della pagina (ad esempio, impostare i controlli della finestra di dialogo con i valori delle proprietà correnti degli oggetti, creare controlli in modo dinamico o eseguire altre inizializzazioni).|Chiamare l'implementazione della classe di base prima del codice, in modo che la classe di base possa creare la finestra di dialogo e tutti i controlli prima di provare ad aggiornarli.|
   |[Applica](../atl/reference/ipropertypageimpl-class.md#apply)|Convalidare le impostazioni delle proprietà e aggiornare gli oggetti.|Non è necessario chiamare l'implementazione della classe di base, in quanto non esegue alcuna operazione oltre a tracciare la chiamata.|
   |[Disattivare](../atl/reference/ipropertypageimpl-class.md#deactivate)|Eseguire la pulizia degli elementi correlati alla finestra.|L'implementazione della classe di base elimina definitivamente la finestra di dialogo che rappresenta la pagina delle proprietà. Se è necessario eseguire la pulizia prima dell'eliminazione definitiva della finestra di dialogo, aggiungere il codice prima di chiamare la classe di base.|

Per un esempio di implementazione della pagina delle proprietà, vedere [esempio: implementazione di una pagina delle proprietà](../atl/example-implementing-a-property-page.md).

> [!NOTE]
> Se si vuole ospitare controlli ActiveX nella pagina delle proprietà, è necessario modificare la derivazione della classe generata dalla procedura guidata. Sostituire **CDialogImpl \<CYourClass> ** con **CAxDialogImpl \<CYourClass> ** nell'elenco delle classi base.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../atl/atl-com-property-pages.md)<br/>
[Esempio ATLPages](../overview/visual-cpp-samples.md)
