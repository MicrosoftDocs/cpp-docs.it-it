---
title: Implementare un'interfaccia
ms.date: 11/12/2018
f1_keywords:
- vc.codewiz.impl.interface.overview
helpviewer_keywords:
- interfaces, implementing
- implement interface wizard [C++]
ms.assetid: 72f8731b-7e36-45db-8b10-7ef211a773cd
ms.openlocfilehash: 8e166f806d247cd93ff0f471360d749fa95e430b
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51692901"
---
# <a name="implement-an-interface"></a>Implementare un'interfaccia

Per implementare un'interfaccia, è necessario avere creato un progetto come un'applicazione ATL COM o un'applicazione MFC con supporto ATL. È possibile usare la [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

Dopo aver creato il progetto, per implementare un'interfaccia è necessario per prima cosa aggiungere un oggetto ATL. Per un elenco di procedure guidate per l'aggiunta di oggetti al progetto ATL, vedere [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).

> [!NOTE]
> La procedura guidata non supporta le finestre di dialogo ATL, i servizi Web XML che usano ATL, gli oggetti prestazioni né i contatori delle prestazioni.

Se si [aggiunge un controllo ATL](../atl/reference/adding-an-atl-control.md) è possibile specificare se implementare le interfacce predefinite. Le interfacce predefinite sono elencate nella pagina [Interfacce](../atl/reference/interfaces-atl-control-wizard.md) della procedura guidata e definite in atlcom.h.

Dopo aver aggiunto l'oggetto o il controllo, è possibile implementare altre interfacce da qualsiasi libreria dei tipi disponibile usando l'Implementazione guidata interfaccia.

Se si aggiunge una nuova interfaccia, è necessario aggiungerla manualmente al file con estensione idl del progetto. Per altre informazioni, vedere [Aggiunta di una nuova interfaccia in un progetto ATL](../atl/reference/adding-a-new-interface-in-an-atl-project.md).

**Per implementare un'interfaccia:**

1. In Visualizzazione classi fare clic con il pulsante destro del mouse sul nome della classe per l'oggetto ATL.

1. Scegliere **Aggiungi** nel menu di scelta rapida e quindi scegliere **Implementa interfaccia** per visualizzare l'[Implementazione guidata interfaccia](#implement-interface-wizard).

1. Selezionare le interfacce da implementare dalle librerie di tipi appropriate e selezionare **Fine**.

1. In Visualizzazione classi espandere i nodi Basi e Interfacce per visualizzare l'interfaccia implementata. Quindi espandere il nodo dell'interfaccia per visualizzare le proprietà, i metodi e gli eventi dell'interfaccia disponibili.

   > [!NOTE]
   > È anche possibile usare il [visualizzatore oggetti](/visualstudio/ide/viewing-the-structure-of-code) per esaminare i membri dell'interfaccia.

## <a name="in-this-section"></a>Contenuto della sezione

- [Implementazione guidata interfaccia](#implement-interface-wizard)

## <a name="implement-interface-wizard"></a>Implementazione guidata interfaccia

Questa procedura guidata consente di implementare un'interfaccia per un oggetto COM. Nelle librerie COM disponibili con Visual Studio e Windows sono incluse implementazioni di diverse interfacce. L'implementazione dell'interfaccia è associata a un oggetto quando viene creata un'istanza di tale oggetto. L'implementazione rende disponibili anche i servizi offerti dall'oggetto.

Per dettagli su interfacce e implementazioni, vedere [Interfaces and Interface Implementations](/windows/desktop/com/interfaces-and-interface-implementations) (Interfacce e implementazioni di interfacce) in Windows SDK.

- **Implementa interfaccia da**

  Specifica il percorso della libreria dei tipi, da cui viene creata l'interfaccia.

  |Opzione|Descrizione|
  |------------|-----------------|
  |**Progetto**|La libreria dei tipi fa parte del progetto.|
  |**Registry**|La libreria dei tipi è registrata nel sistema. Le librerie dei tipi registrate sono elencate in **Available type libraries** (Librerie dei tipi disponibili).|
  |**File**|La libreria dei tipi non è necessariamente registrata nel sistema, ma è archiviata in un file. Specificare il percorso del file in **Percorso**.|

- **Available type libraries** (Librerie dei tipi disponibili)

  Visualizza le librerie dei tipi disponibili contenenti le definizioni delle interfacce che è possibile implementare. Se si sceglie **File** in **Implementa interfaccia da**, questa casella non è disponibile per la modifica.

- **Posizione**

  Visualizza il percorso della libreria dei tipi attualmente selezionata nell'elenco **Available type libraries** (Librerie dei tipi disponibili). Se è stato selezionato **File** in **Implementa interfaccia da**, selezionare il pulsante con i puntini di sospensione per trovare un file contenente la libreria dei tipi da usare.

- **Interfacce**

  Visualizza le interfacce le cui definizioni sono incluse nella libreria dei tipi attualmente selezionata nella casella **Available type libraries** (Librerie dei tipi disponibili).

  > [!NOTE]
  > Le interfacce che hanno lo stesso nome di quelle già implementate dall'oggetto selezionato non vengono visualizzate nella casella **Interfacce**.

  |Pulsante Trasferimento|Descrizione|
  |---------------------|-----------------|
  |**>**|Aggiunge all'elenco **Implementa interfacce** il nome dell'interfaccia attualmente selezionata nell'elenco **Interfacce**.|
  |**>>**|Aggiunge all'elenco **Implementa interfacce** tutti i nomi delle interfacce disponibili nell'elenco **Interfacce**.|
  |**\<**|Rimuove il nome dell'interfaccia attualmente selezionata dall'elenco **Implementa interfacce**.|
  |**\<\<**|Rimuove tutti i nomi delle interfacce attualmente inclusi nell'elenco **Implementa interfacce**.|

- **Implementa interfacce**

  Visualizza i nomi delle interfacce selezionate per l'implementazione nell'oggetto.

  > [!NOTE]
  > Se si include più di un'interfaccia che deriva da `IDispatch` oppure si prova a implementare un'interfaccia che deriva da un'altra interfaccia già presente nella classe, è necessario evitare l'ambiguità nelle voci COM_MAP. Per altre informazioni, vedere [COM_INTERFACE_ENTRY2](../atl/reference/com-interface-entry-macros.md#com_interface_entry2).
