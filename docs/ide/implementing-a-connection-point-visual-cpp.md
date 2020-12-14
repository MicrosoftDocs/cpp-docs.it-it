---
description: 'Altre informazioni su: implementare un punto di connessione'
title: Implementare un punto di connessione
ms.date: 05/14/2019
helpviewer_keywords:
- connection points [C++], implementing
- implement connection point wizard [C++]
ms.assetid: 5b37e4f9-73c9-4bef-b26d-365bc0662260
ms.openlocfilehash: bee04d28036ca5a2dfb0f4913adf39f1fdcca565
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281158"
---
# <a name="implement-a-connection-point"></a>Implementare un punto di connessione

Per implementare un punto di connessione mediante la Creazione guidata punto di connessione, è necessario avere creato un progetto come un'applicazione ATL COM o un'applicazione MFC con supporto ATL. È possibile usare la [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.

> [!NOTE]
> Per informazioni sull'implementazione di punti di connessione per un progetto MFC, vedere [Punti di connessione](../mfc/connection-points.md).

Dopo aver creato il progetto, per implementare un punto di connessione è necessario per prima cosa aggiungere un oggetto ATL. Per l'elenco di procedure guidate per l'aggiunta di oggetti al progetto ATL, vedere [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).

> [!NOTE]
> La procedura guidata non supporta le finestre di dialogo ATL, i servizi Web XML creati con il server ATL, gli oggetti prestazioni o i contatori delle prestazioni.

Un oggetto collegabile, ovvero un'origine, può visualizzare un punto di connessione per ognuna delle interfacce in uscita. Ogni interfaccia in uscita può essere implementata da un client in un oggetto, ovvero un sink. Per altre informazioni, vedere [Punti di connessione ATL](../atl/atl-connection-points.md).

**Per implementare un punto di connessione:**

1. In Visualizzazione classi fare clic con il pulsante destro del mouse sul nome della classe per l'oggetto ATL.

1. Scegliere **Aggiungi** dal menu di scelta rapida e quindi scegliere **Aggiungi punto di connessione** per visualizzare l'[Implementazione guidata punto di connessione](#implement-connection-point-wizard).

1. Selezionare le interfacce dei punti di connessione per implementare le librerie di tipi appropriate e quindi selezionare **Fine**.

1. In Visualizzazione classi esaminare le classi proxy create per ogni punto di connessione. Le classi vengono visualizzate come CProxy *InterfaceName* \<T> e sono derivate da [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md).

1. Fare doppio clic sulla classe del punto di connessione per visualizzare la definizione della classe del punto di connessione.

   - Se si implementa un punto di connessione per l'interfaccia del progetto, viene visualizzata la definizione seguente:

     ```cpp
     template< class T >
     class CProxyInterfaceName :
     public IConnectionPointImpl< T, &IID_InterfaceName >
     {
     public:
     };
     ```

   - Se si implementa un'interfaccia locale, i metodi e le proprietà vengono visualizzati nel corpo della classe.

   - Se si implementa un punto di connessione per un'altra interfaccia, la definizione include i metodi dell'interfaccia, ognuno preceduto da `Fire_`.

## <a name="in-this-section"></a>Contenuto della sezione

- [Implementazione guidata punto di connessione](#implement-connection-point-wizard)

## <a name="implement-connection-point-wizard"></a>Implementazione guidata punto di connessione

Questa procedura guidata consente di implementare un punto di connessione per un oggetto COM. Un oggetto collegabile, ovvero un'origine, può visualizzare un punto di connessione per le proprie interfacce o per qualsiasi interfaccia in uscita. MSVC e Windows offrono entrambi librerie dei tipi con interfacce in uscita. Ogni interfaccia in uscita può essere implementata da un client in un oggetto, ovvero un sink.

Per altre informazioni, vedere [Punti di connessione ATL](../atl/atl-connection-points.md).

- **Available type libraries** (Librerie dei tipi disponibili)

  Visualizza le librerie dei tipi disponibili che includono le definizioni delle interfacce per le quali è possibile implementare i punti di connessione. Selezionare il pulsante con i puntini di sospensione per trovare un file che include la libreria dei tipi da usare.

- **Posizione**

  Visualizza il percorso della libreria dei tipi attualmente selezionata nell'elenco **Available type libraries** (Librerie dei tipi disponibili).

- **Interfacce**

  Visualizza le interfacce le cui definizioni sono incluse nella libreria dei tipi attualmente selezionata nella casella **Available type libraries** (Librerie dei tipi disponibili).

  |Pulsante di trasferimento|Description|
  |---------------------|-----------------|
  |**>**|Aggiunge all'elenco **Implementa punti di connessione** il nome dell'interfaccia attualmente selezionata nell'elenco **Interfacce**.|
  |**>>**|Aggiunge all'elenco **Implementa punti di connessione** i nomi di tutte le interfacce disponibili nell'elenco **Interfacce**.|
  |**\<**|Rimuove il nome dell'interfaccia attualmente selezionata nell'elenco **Implementa punti di connessione**.|
  |**\<\<**|Rimuove i nomi di tutte le interfacce presenti nell'elenco **Implementa punti di connessione**.|

- **Implementa punti di connessione**

  Visualizza i nomi delle interfacce per cui si implementano i punti di connessione quando si seleziona **Fine**.
