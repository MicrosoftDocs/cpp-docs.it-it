---
title: Creazione del progetto (Esercitazione di ATL, parte 1)
ms.custom: get-started-article
ms.date: 08/19/2019
ms.assetid: f6b727d1-390a-4b27-b82f-daadcd9fc059
ms.openlocfilehash: 5bb4c6edffd13e13a451b203feea9a03461a9318
ms.sourcegitcommit: bf1940a39029dbbd861f95480f55e5e8bd25cda0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/28/2019
ms.locfileid: "70108375"
---
# <a name="creating-the-project-atl-tutorial-part-1"></a>Creazione del progetto (Esercitazione di ATL, parte 1)

Questa esercitazione illustra in modo dettagliato un progetto ATL senza attributi che consente di creare un oggetto ActiveX che visualizza un poligono. L'oggetto include opzioni per consentire all'utente di modificare il numero di lati che compongono il poligono e il codice per aggiornare la visualizzazione.

> [!NOTE]
> Questa esercitazione crea lo stesso codice sorgente dell'esempio Polygon. Se si vuole evitare di immettere manualmente il codice sorgente, è possibile scaricarlo dall' [abstract di esempio Polygon](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/Polygon). È quindi possibile fare riferimento al codice sorgente del poligono durante l'esercitazione oppure usarlo per verificare la presenza di errori nel progetto.
> Per compilare, aprire *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) e sostituire:
> ```
> #ifndef WINVER
> #define WINVER 0x0400
> #endif
> ```
> con
> ```
> #ifndef WINVER
> #define WINVER 0x0500
> #define _WIN32_WINNT 0x0500
> #endif
> ```
> Il compilatore si lamenta ancora di `regsvr32` non uscire correttamente, ma è comunque necessario che la dll del controllo sia compilata e disponibile per l'uso.

### <a name="to-create-the-initial-atl-project-using-the-atl-project-wizard"></a>Per creare il progetto ATL iniziale utilizzando la creazione guidata progetto ATL

1. In Visual Studio 2017 e versioni precedenti: **File** > nuovoprogetto > . Aprire la scheda **oggetto C++ visivo** e selezionare **MFC/ATL**. Selezionare **progetto ATL**.

   In Visual Studio 2019: Scegliere **file** > **nuovo**progetto, digitare "ATL" nella casella di ricerca e scegliere progetto ATL. > 

1. Digitare *Polygon* come nome del progetto.

    Per impostazione predefinita, il percorso del codice sorgente è \Users\\\<nomeutente > \source\repos e viene creata automaticamente una nuova cartella.

1. In Visual Studio 2019 accettare i valori predefiniti e fare clic su **OK**. 
   In Visual Studio 2017 fare clic su **OK** per aprire la creazione guidata **progetto ATL** . Fare clic su **Impostazioni applicazione** per visualizzare le opzioni disponibili. Poiché questo progetto crea un controllo e un controllo deve essere un server in-process, lasciare il **tipo di applicazione** come dll. Fare clic su **OK**.

Visual Studio creerà il progetto generando diversi file. È possibile visualizzare questi file in **Esplora soluzioni** espandendo l' `Polygon` oggetto. I file sono elencati di seguito.

::: moniker range="<=vs-2017"

|File|Descrizione|
|----------|-----------------|
|Polygon. cpp|Contiene l'implementazione di `DllMain`, `DllCanUnloadNow`, `DllGetClassObject` `DllRegisterServer`, e `DllUnregisterServer`. Contiene anche la mappa degli oggetti, ovvero un elenco degli oggetti ATL nel progetto. Inizialmente vuoto.|
|Poligono. def|Questo file di definizione del modulo fornisce al linker le informazioni sulle esportazioni richieste dalla DLL.|
|Poligono. idl|Il file del linguaggio di definizione dell'interfaccia, che descrive le interfacce specifiche degli oggetti.|
|Poligono. RGS|Questo script del registro di sistema contiene informazioni per la registrazione della DLL del programma.|
|Poligono. RC|Il file di risorse, che contiene inizialmente le informazioni sulla versione e una stringa contenente il nome del progetto.|
|Resource.h|File di intestazione per il file di risorse.|
|Polygonps. def|Questo file di definizione del modulo fornisce al linker le informazioni sulle esportazioni richieste dal codice del proxy e dello stub che supportano le chiamate tra gli appartamenti.|
|stdafx.cpp|File che `#include` *stdafx. h*.|
|stdafx.h|File che effettuerà `#include` e precompirà i file di intestazione ATL.|

::: moniker-end

::: moniker range=">=vs-2019"

|File|Descrizione|
|----------|-----------------|
|Polygon. cpp|Contiene l'implementazione di `DllMain`, `DllCanUnloadNow`, `DllGetClassObject` `DllRegisterServer`, e `DllUnregisterServer`. Contiene anche la mappa degli oggetti, ovvero un elenco degli oggetti ATL nel progetto. Inizialmente vuoto.|
|Poligono. def|Questo file di definizione del modulo fornisce al linker le informazioni sulle esportazioni richieste dalla DLL.|
|Poligono. idl|Il file del linguaggio di definizione dell'interfaccia, che descrive le interfacce specifiche degli oggetti.|
|Poligono. RGS|Questo script del registro di sistema contiene informazioni per la registrazione della DLL del programma.|
|Poligono. RC|Il file di risorse, che contiene inizialmente le informazioni sulla versione e una stringa contenente il nome del progetto.|
|Resource.h|File di intestazione per il file di risorse.|
|Polygonps. def|Questo file di definizione del modulo fornisce al linker le informazioni sulle esportazioni richieste dal codice del proxy e dello stub che supportano le chiamate tra gli appartamenti.|
|PCH. cpp|File che `#include` *PCH. h*.|
|PCH. h|File che effettuerà `#include` e precompirà i file di intestazione ATL.|

::: moniker-end

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto `Polygon`.

1. Scegliere **Proprietà**dal menu di scelta rapida.

1. Fare clicsu linker. Modificare l'opzione **per UserRedirection** su **Sì**.

1. Fare clic su **OK**.

Nel passaggio successivo verrà aggiunto un controllo al progetto.

[Al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
