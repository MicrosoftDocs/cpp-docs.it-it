---
title: Aggiunta guidata classe da libreria dei tipi
ms.date: 05/09/2019
helpviewer_keywords:
- COM interfaces, adding classes
ms.assetid: 96152afd-9374-4649-a6ab-b0fa2a5592a3
ms.openlocfilehash: 6fa1dd3985fd5b565bcc4b4727f41960d1f4f5d0
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86405130"
---
# <a name="add-class-from-typelib-wizard"></a>Aggiunta guidata classe da libreria dei tipi

::: moniker range="vs-2019"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=vs-2017"

Utilizzare questa procedura guidata per aggiungere una classe MFC da una libreria dei tipi disponibile. La procedura guidata crea una classe per ogni interfaccia aggiunta dalla libreria dei tipi selezionata.

- **Aggiungi classe da**

   Specifica il percorso della libreria dei tipi da cui viene creata la classe.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Registro**|La libreria dei tipi è registrata nel sistema. Le librerie dei tipi registrate sono elencate in **Available type libraries** (Librerie dei tipi disponibili).|
   |**File**|La libreria dei tipi non è necessariamente registrata nel sistema ma è contenuta in un file. È necessario specificare il percorso del file in **Percorso**.|

- **Available type libraries** (Librerie dei tipi disponibili)

   Elenca le librerie dei tipi attualmente registrate nel sistema. Selezionare una libreria dei tipi da questo elenco per visualizzarne le interfacce nell'elenco **interfacce** .

- **Posizione**

   Specifica il percorso della libreria dei tipi. Se si fa clic su **File** in **Aggiungi classe da**, è possibile specificare il percorso del file contenente la libreria dei tipi. Per passare al percorso del file, fare clic sul pulsante con i puntini di sospensione.

- **Interfacce**

   Elenca le interfacce nella libreria dei tipi attualmente selezionata nell'elenco **librerie dei tipi disponibili** .

   |Pulsante di trasferimento|Descrizione|
   |---------------------|-----------------|
   |**>**|Aggiunge l'interfaccia selezionata nell'elenco **Interfacce**. Visualizzato in grigio se non è selezionata alcuna interfaccia.|
   |**>>**|Aggiunge tutte le interfacce nella libreria dei tipi attualmente selezionata nell'elenco **librerie dei tipi disponibili** .|
   |**\<**|Rimuove la classe selezionata nell'elenco **Classi generate**. In grigio se nessuna classe è attualmente selezionata nell'elenco **classi generate** .|
   |**\<\<**|Rimuove tutte le classi dell'elenco **Classi generate**. Visualizzato in grigio se l'elenco delle **classi generate** è vuoto.|

- **Classi generate**

   Specifica i nomi di classe da generare dalle interfacce aggiunte utilizzando il **>** pulsante o **>>** . È possibile fare clic su questa casella per selezionare una classe, quindi utilizzare i tasti freccia su o giù per scorrere l'elenco, visualizzando il nome della classe nella casella della **classe** e il nome file nella casella **file** che viene generata dalla procedura guidata quando si fa clic su **fine**. È possibile selezionare solo una classe alla volta in questa casella.

   Per rimuovere una classe, selezionarla nell'elenco e fare clic su **<** . Non è necessario selezionare una classe nella casella Classi generate per rimuovere tutte le classi. Fare clic su **<<** per rimuovere tutte le classi nella casella **Classi generate**.

- **Class**

   Specifica il nome della classe selezionata nella casella **Classi generate** aggiunta dalla procedura guidata quando si fa clic su **Fine**. È possibile modificare il nome nella casella **Classe**.

- **File**

   Imposta il nome del file di intestazione per la nuova classe. Per impostazione predefinita, il nome è basato sul nome specificato in **Classi generate**. Fare clic sul pulsante con i puntini di sospensione per salvare il nome file nel percorso desiderato o aggiungere la dichiarazione di classe a un file esistente. Se si sceglie un file esistente, la procedura guidata non lo salverà nel percorso selezionato finché non si sceglie **Fine**.

   La procedura guidata non sovrascrive i file. Se si seleziona il nome di un file esistente, quando si sceglie **Fine**, la procedura guidata chiede di specificare se la dichiarazione di classe deve essere aggiunta al contenuto del file. Fare clic su **Sì** per aggiungere il file. Fare clic su **No** per tornare alla procedura guidata e specificare un altro nome di file.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Classe MFC da una libreria dei tipi](../../mfc/reference/adding-an-mfc-class-from-a-type-library.md)<br/>
[Client di automazione: utilizzo delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)
