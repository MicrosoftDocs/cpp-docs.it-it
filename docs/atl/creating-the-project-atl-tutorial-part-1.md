---
title: Creazione del progetto (Esercitazione di ATL, parte 1)
ms.custom: get-started-article
ms.date: 05/06/2019
ms.assetid: f6b727d1-390a-4b27-b82f-daadcd9fc059
ms.openlocfilehash: 0df793b23aaec57835774252eeac21b092f8a9e9
ms.sourcegitcommit: 0e3da5cea44437c132b5c2ea522bd229ea000a10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/12/2019
ms.locfileid: "67861017"
---
# <a name="creating-the-project-atl-tutorial-part-1"></a>Creazione del progetto (Esercitazione di ATL, parte 1)

Questa esercitazione illustra in dettaglio di un progetto ATL senza attributi che crea un oggetto ActiveX che consente di visualizzare un poligono. L'oggetto include le opzioni per consentire all'utente per modificare il numero di lati che compongono il poligono e il codice per aggiornare la visualizzazione.

> [!NOTE]
> ATL e MFC sono generalmente non è supportata nelle edizioni Express di Visual Studio.

> [!NOTE]
> Questa esercitazione crea lo stesso codice sorgente dell'esempio di poligono. Se si desidera evitare di immettere manualmente il codice sorgente, è possibile scaricarlo dal [esempio del poligono](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/Polygon). È quindi possibile fare riferimento al codice sorgente poligono quando si eseguire l'esercitazione, o usarlo per verificare la presenza di errori nel progetto.
> Per eseguire la compilazione, aprire stdafx. h e sostituire:
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
> Il compilatore ancora ridire sui `regsvr32` non uscire in modo corretto, ma si deve ancora essere DLL del controllo compilata e disponibili per l'uso.

### <a name="to-create-the-initial-atl-project-using-the-atl-project-wizard"></a>Per creare il progetto ATL iniziale utilizzando la creazione guidata progetto ATL

1. In Visual Studio 2017 e versioni precedenti: **File** > **nuove** > **progetto**. Aprire il **Visual C++**  scheda e selezionare **MFC/ATL**. Selezionare **progetto ATL**.

   In Visual Studio 2019: Scegli **File** > **New** > **progetto**, digitare "atl" nella casella di ricerca e scegliere **progetto ATL**.

1. Tipo di *poligono* come nome del progetto.

    Il percorso per il codice sorgente in genere per impostazione predefinita sarà \Users\\\<username > \source\repos e una nuova cartella verrà creato automaticamente.

1. In Visual Studio 2019, accettare i valori predefiniti e fare clic su **OK**. 
   In Visual Studio 2017, fare clic su **OK** per aprire il **progetto ATL** procedura guidata. Fare clic su **le impostazioni dell'applicazione** per visualizzare le opzioni disponibili. Poiché questo progetto viene creato un controllo e un controllo deve essere un server in-process, lasciare il **tipo di applicazione** sotto forma di DLL. Fare clic su **OK**.

Visual Studio creerà il progetto tramite la generazione di file diversi. È possibile visualizzare questi file nel **Esplora soluzioni** espandendo la `Polygon` oggetto. I file sono elencati di seguito.

|File|Descrizione|
|----------|-----------------|
|Polygon.cpp|Contiene l'implementazione di `DllMain`, `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, e `DllUnregisterServer`. Contiene inoltre la mappa di oggetti, ovvero un elenco degli oggetti nel progetto ATL. È inizialmente vuoto.|
|Polygon.def|Questo file di definizione moduli fornisce al linker con informazioni sulle esportazioni richieste dalla DLL.|
|Polygon.idl|L'interfaccia file definition language, che descrive le interfacce specifiche degli oggetti.|
|Polygon.rgs|Questo script del Registro di sistema contiene informazioni per la registrazione della DLL del programma.|
|Polygon.rc|Il file di risorse, che inizialmente contiene le informazioni sulla versione e una stringa contenente il nome del progetto.|
|Resource.h|File di intestazione per il file di risorse.|
|Polygonps.def|Questo file di definizione moduli fornisce al linker con informazioni sulle esportazioni richieste dal codice proxy e stub che supportano le chiamate tra gli apartment.|
|stdafx.cpp|Il file che verranno `#include` i file di implementazione di ATL.|
|stdafx.h|Il file che verranno `#include` i file di intestazione ATL.|

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul progetto `Polygon`.

1. Nel menu di scelta rapida, fare clic su **proprietà**.

1. Fare clic su **Linker**. Modifica il **per ogni UserRedirection** possibilità **Yes**.

1. Fare clic su **OK**.

Nel passaggio successivo, si aggiungerà un controllo al progetto.

[Al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
