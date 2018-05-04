---
title: Implementazione delle pagine delle proprietà | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- IPropertyPage2 class
- IPropertyPage class
- property pages, implementing
ms.assetid: 62f29440-33a7-40eb-a1ef-3634c95f640c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1db6ca4ea374cd76d5b0e1df8e6c0cd03474fdf2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="implementing-property-pages"></a>Implementazione delle pagine delle proprietà
Pagine delle proprietà sono oggetti COM che implementano il `IPropertyPage` o **IPropertyPage2** interfaccia. ATL fornisce il supporto per l'implementazione delle pagine delle proprietà tramite il [guidata pagina delle proprietà ATL](../atl/reference/atl-property-page-wizard.md) nel [la finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md).  
  
 Per creare una pagina delle proprietà ATL utilizzando:  
  
-   Creare o aprire un progetto server di libreria (DLL) DLL ATL.  
  
-   Aprire il [la finestra di dialogo Aggiungi classe](../ide/add-class-dialog-box.md) e selezionare **pagina delle proprietà ATL**.  
  
-   Verificare che la pagina delle proprietà è un apartment a thread singolo (perché ha un'interfaccia utente).  
  
-   Impostare il titolo, descrizione (stringa Doc) e il file della Guida da associare con la pagina.  
  
-   Aggiungere controlli alla risorsa finestra di dialogo generata come l'interfaccia utente della pagina delle proprietà.  
  
-   Rispondere alle modifiche nell'interfaccia utente della pagina per eseguire la convalida, aggiornare il sito della pagina o aggiornare gli oggetti associati alla pagina. In particolare, chiamare [IPropertyPageImpl:: SetDirty](../atl/reference/ipropertypageimpl-class.md#setdirty) quando l'utente apporta modifiche alla pagina delle proprietà.  
  
-   Eseguire l'override di `IPropertyPageImpl` metodi usando le indicazioni riportate di seguito.  
  
    |Metodo IPropertyPageImpl|Eseguire l'override quando si desidera...|Note|  
    |------------------------------|----------------------------------|-----------|  
    |[SetObjects](../atl/reference/ipropertypageimpl-class.md#setobjects)|Eseguire verifiche di base al numero di oggetti passati alla pagina e le interfacce che supportano.|Eseguire il codice prima di chiamare l'implementazione della classe base. Se gli oggetti impostati non sono conformi alle aspettative, si presto deve avere esito negativo della chiamata.|  
    |[Attivare](../atl/reference/ipropertypageimpl-class.md#activate)|Inizializzare l'interfaccia utente della pagina (ad esempio, impostare i controlli di finestra di dialogo con i valori correnti delle proprietà degli oggetti, creare i controlli in modo dinamico o eseguire altre inizializzazioni).|Chiamare l'implementazione della classe base prima del codice in modo che la classe base ha la possibilità di creare la finestra di dialogo e tutti i controlli prima di tentare l'aggiornamento.|  
    |[applicare](../atl/reference/ipropertypageimpl-class.md#apply)|Verificare le impostazioni di proprietà e aggiornare gli oggetti.|Non è necessario chiamare l'implementazione della classe base, poiché non è tenere traccia della chiamata.|  
    |[Disattivare](../atl/reference/ipropertypageimpl-class.md#deactivate)|Eliminare gli elementi relativi alle finestre.|L'implementazione della classe base Elimina definitivamente la finestra di dialogo che rappresenta la pagina delle proprietà. Se è necessario eliminare prima la finestra di dialogo viene eliminato definitivamente, è necessario aggiungere il codice prima di chiamare la classe di base.|  
  
 Per un'implementazione di pagina delle proprietà di esempio, vedere [esempio: implementazione di una pagina delle proprietà](../atl/example-implementing-a-property-page.md).  
  
> [!NOTE]
>  Se si desidera ospitare controlli ActiveX nella pagina delle proprietà, è necessario modificare la derivazione della classe generato dalla procedura guidata. Sostituire **CDialogImpl\<CClasse >** con **CAxDialogImpl\<CClasse >** nell'elenco delle classi base.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../atl/atl-com-property-pages.md)   
 [Esempio ATLPages](../visual-cpp-samples.md)

