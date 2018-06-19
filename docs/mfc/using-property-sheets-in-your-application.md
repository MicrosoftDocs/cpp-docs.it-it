---
title: Utilizzo di finestre delle proprietà in un'applicazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog templates [MFC], property sheets
- dialog resources
- property pages [MFC], property sheets
- DoModal method property sheets
- AddPage method [MFC]
- property sheets, about property sheets
- Create method [MFC], property sheets
- CPropertyPage class [MFC], styles
ms.assetid: 240654d4-152b-4e3f-af7b-44234339206e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 74e63faf5b1cac5e0cb841a28fd59ecee47c9970
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33383893"
---
# <a name="using-property-sheets-in-your-application"></a>Utilizzo delle finestre delle proprietà nell'applicazione
Per utilizzare una finestra delle proprietà nell'applicazione, completare i passaggi seguenti:  
  
1.  Creare una risorsa modello di finestra di dialogo per ogni pagina delle proprietà. Tenere presente che l'utente può passare da una pagina a un'altra, pertanto disporre ogni pagina nel modo più coerente possibile.  
  
     I modelli di finestra di dialogo per tutte le pagine non devono avere le stesse dimensioni. Il framework utilizza la dimensione della pagina più ampia per determinare la quantità di spazio da allocare nella finestra delle proprietà per le pagine delle proprietà.  
  
     Quando si crea una risorsa modello di finestra di dialogo per una pagina delle proprietà, è necessario specificare i seguenti stili nella finestra delle proprietà relativa alle proprietà della finestra di dialogo:  
  
    -   Impostare il **didascalia** nella casella di modifica di **generale** pagina per il testo che si desidera venga visualizzato nella scheda della pagina.  
  
    -   Impostare il **stile** casella di riepilogo sul **stili** pagina **figlio**.  
  
    -   Impostare il **bordo** casella di riepilogo sul **stili** pagina **sottile**.  
  
    -   Verificare che il **Titlebar** casella di controllo di **stili** sia selezionata.  
  
    -   Verificare che il **disabilitato** casella di controllo di **più stili** sia selezionata.  
  
2.  Creare un [CPropertyPage](../mfc/reference/cpropertypage-class.md)-corrispondente a ogni modello di finestra di dialogo pagina proprietà di classe derivata. Vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md). Scegliere `CPropertyPage` come classe base.  
  
3.  Creare le variabili membro per contenere i valori per questa pagina delle proprietà. Il processo di aggiunta delle variabili membro a una pagina delle proprietà è esattamente uguale all'aggiunta di variabili membro a una finestra di dialogo, perché una pagina delle proprietà è una finestra di dialogo specializzata. Per ulteriori informazioni, vedere [definizione delle variabili membro per i controlli di finestra di dialogo](../windows/defining-member-variables-for-dialog-controls.md).  
  
4.  Costruire un [CPropertySheet](../mfc/reference/cpropertysheet-class.md) oggetto nel codice sorgente. In genere, si crea l'oggetto `CPropertySheet` nel gestore per il comando che visualizza la finestra delle proprietà. Questo oggetto rappresenta l'intera finestra delle proprietà. Se si crea una finestra delle proprietà modale con il [DoModal](../mfc/reference/cpropertysheet-class.md#domodal) funzione, il framework fornisce tre pulsanti di comando per impostazione predefinita: OK, Annulla e applica. Il framework non crea nessun pulsante di comando per delle proprietà non modali create con la [crea](../mfc/reference/cpropertysheet-class.md#create) (funzione). Non è necessario derivare una classe da `CPropertySheet`, a meno che non si aggiungano altri controlli (ad esempio una finestra di anteprima) o si visualizzi una finestra delle proprietà non modale. Questo passaggio è necessario per le finestre delle proprietà non modali perché non contengono controlli predefiniti che possano essere utilizzati per chiudere la finestra delle proprietà.  
  
5.  Per ogni pagina da aggiungere alla finestra delle proprietà, effettuare le seguenti operazioni:  
  
    -   Creare un oggetto per ciascuna classe derivata da `CPropertyPage` che è stata precedentemente creata in questo processo.  
  
    -   Chiamare [:: addPage](../mfc/reference/cpropertysheet-class.md#addpage) per ogni pagina.  
  
     In genere, l'oggetto che crea `CPropertySheet` crea anche gli oggetti `CPropertyPage` in questo passaggio. Tuttavia, se si implementa la classe derivata da `CPropertySheet`, è possibile incorporare gli oggetti `CPropertyPage` nell'oggetto `CPropertySheet` e chiamare `AddPage` per ogni pagina dal costruttore della classe derivata da `CPropertySheet`. `AddPage` aggiunge l'oggetto `CPropertyPage` all'elenco di pagine della finestra delle proprietà, ma non crea la finestra per la pagina. Di conseguenza, non è necessario attendere fino alla creazione della finestra delle proprietà per chiamare `AddPage`; è possibile chiamare `AddPage` dal costruttore della finestra delle proprietà.  
  
     Per impostazione predefinita, se una finestra delle proprietà dispone di più schede di quelle che può contenere in una singola riga della finestra delle proprietà, le schede vengono impilate su più righe. Per disabilitare lo stacking, chiamare [CPropertySheet:: EnableStackedTabs](../mfc/reference/cpropertysheet-class.md#enablestackedtabs) con il parametro impostato su **FALSE**. È necessario chiamare `EnableStackedTabs` quando si crea la finestra delle proprietà.  
  
6.  Chiamare [CPropertySheet:: DoModal](../mfc/reference/cpropertysheet-class.md#domodal) o [crea](../mfc/reference/cpropertysheet-class.md#create) per visualizzare la finestra delle proprietà. Chiamare `DoModal` per creare una finestra delle proprietà come finestra di dialogo modale. Chiamare **crea** per creare la finestra delle proprietà come finestra di dialogo non modale.  
  
7.  Scambiare i dati tra le pagine delle proprietà e il proprietario della finestra delle proprietà. Questa operazione è illustrata nell'articolo [lo scambio di dati](../mfc/exchanging-data.md).  
  
 Per un esempio di come utilizzare le finestre delle proprietà, vedere l'esempio MFC generale [PROPDLG](../visual-cpp-samples.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)

