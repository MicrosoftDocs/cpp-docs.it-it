---
title: Aggiunta guidata classe da libreria dei tipi
ms.date: 10/03/2018
f1_keywords:
- vc.codewiz.class.typelib
helpviewer_keywords:
- Add Class from TypeLib Wizard [MFC]
- COM interfaces, adding classes
ms.assetid: 96152afd-9374-4649-a6ab-b0fa2a5592a3
ms.openlocfilehash: c0423ac06aa46b65c1fb0ffb3935d4bb54821ee9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50654337"
---
# <a name="add-class-from-typelib-wizard"></a>Aggiunta guidata classe da libreria dei tipi

Utilizzare questa procedura guidata per aggiungere una classe MFC da una libreria dei tipi disponibili. La procedura guidata crea una classe per ogni interfaccia che aggiunta dalla libreria dei tipi selezionati.

> [!WARNING]
> In Visual Studio 2017 versione 15.9 questa procedura guidata del codice è deprecata e verrà rimossa in una versione futura di Visual Studio. Questa procedura guidata viene usata raramente. Il supporto generale per ATL e MFC non subisce attualmente l'effetto della rimozione di questa procedura guidata. Se vuoi condividere i tuoi commenti e suggerimenti su questa deprecazione, compila il [presente sondaggio](https://www.surveymonkey.com/r/QDWKKCN). I tuoi commenti e suggerimenti sono importanti per noi.

- **Aggiungi classe da**

   Specifica il percorso della libreria dei tipi da cui viene creata la classe.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Registry**|La libreria dei tipi è registrata nel sistema. Le librerie dei tipi registrate sono elencate in **Available type libraries** (Librerie dei tipi disponibili).|
   |**File**|La libreria dei tipi non è necessariamente registrata nel sistema ma è contenuta in un file. È necessario specificare il percorso del file in **Percorso**.|

- **Available type libraries** (Librerie dei tipi disponibili)

   Elenca le librerie dei tipi attualmente registrate nel sistema. Selezionare una libreria dei tipi da questo elenco per visualizzare le relative interfacce nel **interfacce** elenco.

   Vedere "All'interno di Distributed COM: tipo di librerie e integrazione Language" in MSDN library per ulteriori informazioni sulla registrazione delle librerie dei tipi.

- **Posizione**

   Specifica il percorso della libreria dei tipi. Se si fa clic su **File** in **Aggiungi classe da**, è possibile specificare il percorso del file contenente la libreria dei tipi. Per passare al percorso del file, fare clic sul pulsante con i puntini di sospensione.

- **Interfacce**

   Elenca le interfacce nella libreria dei tipi attualmente selezionato nel **librerie dei tipi disponibili** elenco.

   |Pulsante Trasferimento|Descrizione|
   |---------------------|-----------------|
   |**>**|Aggiunge l'interfaccia selezionata nell'elenco **Interfacce**. Visualizzato in grigio se è selezionata alcuna interfaccia.|
   |**>>**|Aggiunge tutte le interfacce nella libreria dei tipi attualmente selezionata nel **librerie dei tipi disponibili** elenco.|
   |**\<**|Rimuove la classe selezionata nell'elenco **Classi generate**. Visualizzato in grigio se nessuna classe attualmente selezionata nel **le classi generate** elenco.|
   |**\<\<**|Rimuove tutte le classi dell'elenco **Classi generate**. In grigio se il **le classi generate** elenco è vuoto.|

- **Classi generate**

   Specifica i nomi di classe da generare dalle interfacce aggiunte usando il pulsante **>** o **>>**. È possibile fare clic su questa casella per selezionare una classe, quindi utilizzare le frecce su o giù per scorrere l'elenco, visualizzare il nome di ogni classe nel **classe** finestra e il nome file nei **File** casella che la procedura guidata genera quando si Fare clic su **fine**. È possibile selezionare solo una classe alla volta in questa casella.

   È possibile rimuovere una classe selezionandola nell'elenco e facendo clic su **<**. Non è necessario selezionare una classe nella casella di classi generate per rimuovere tutte le classi. facendo clic **<<**, è rimuovere tutte le classi nel **classi generate** casella.

- **Classe**

   Specifica il nome della classe selezionata nella casella **Classi generate** aggiunta dalla procedura guidata quando si fa clic su **Fine**. È possibile modificare il nome nella casella **Classe**.

- **File**

   Imposta il nome del file di intestazione per la nuova classe. Per impostazione predefinita, il nome è basato sul nome specificato in **Classi generate**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine**.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

## <a name="see-also"></a>Vedere anche

[Classe MFC da una libreria dei tipi](../../mfc/reference/adding-an-mfc-class-from-a-type-library.md)<br/>
[Client di automazione: uso delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)

