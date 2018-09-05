---
title: Creazione del progetto (ATL dell'esercitazione, parte 1) | Microsoft Docs
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: f6b727d1-390a-4b27-b82f-daadcd9fc059
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 54b45ff8c7af8c8aaf7232cefa2bb4f002fc37be
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43755618"
---
# <a name="creating-the-project-atl-tutorial-part-1"></a>Creazione del progetto (Esercitazione di ATL, parte 1)

Questa esercitazione illustra in dettaglio di un progetto ATL senza attributi che crea un oggetto ActiveX che consente di visualizzare un poligono. L'oggetto include le opzioni per consentire all'utente per modificare il numero di lati che compongono il poligono e il codice per aggiornare la visualizzazione.

> [!NOTE]
>  ATL e MFC sono generalmente non è supportata nelle edizioni Express di Visual Studio.

> [!NOTE]
>  Questa esercitazione crea lo stesso codice sorgente dell'esempio di poligono. Se si desidera evitare di immettere manualmente il codice sorgente, è possibile scaricarlo dal [esempio del poligono](../visual-cpp-samples.md). È quindi possibile fare riferimento al codice sorgente poligono quando si eseguire l'esercitazione, o usarlo per verificare la presenza di errori nel progetto.

### <a name="to-create-the-initial-atl-project-using-the-atl-project-wizard"></a>Per creare il progetto ATL iniziale utilizzando la creazione guidata progetto ATL

1. Nell'ambiente di sviluppo Visual Studio, fare clic su **New** nel **File** dal menu e quindi fare clic su **progetto**.

2. Scegliere il **i progetti Visual C++** cartella e selezionare **progetto ATL**.

3. Tipo di *poligono* come nome del progetto.

     Il percorso per il codice sorgente verrà in genere per impostazione predefinita Documenti\Visual Studio progetti e una nuova cartella verrà creata automaticamente.

4. Fare clic su **OK** e apre la creazione guidata progetto ATL.

5. Fare clic su **le impostazioni dell'applicazione** per visualizzare le opzioni disponibili.

6. Come si sta creando un controllo e un controllo deve essere un server in-process, lasciare il **tipo di applicazione** sotto forma di DLL.

7. Lasciare le altre opzioni sui rispettivi valori predefiniti e fare clic su **fine**.

La creazione guidata progetto ATL creerà il progetto tramite la generazione di file diversi. È possibile visualizzare questi file in Esplora soluzioni espandere l'oggetto poligono. I file sono elencati di seguito.

|File|Descrizione|
|----------|-----------------|
|Polygon|Contiene l'implementazione di `DllMain`, `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, e `DllUnregisterServer`. Contiene inoltre la mappa di oggetti, ovvero un elenco degli oggetti nel progetto ATL. È inizialmente vuoto.|
|Polygon.def|Questo file di definizione moduli fornisce al linker con informazioni sulle esportazioni richieste dalla DLL.|
|Polygon. idl|L'interfaccia file definition language, che descrive le interfacce specifiche degli oggetti.|
|Polygon.rgs|Questo script del Registro di sistema contiene informazioni per la registrazione della DLL del programma.|
|Polygon|Il file di risorse, che inizialmente contiene le informazioni sulla versione e una stringa contenente il nome del progetto.|
|Resource.h|File di intestazione per il file di risorse.|
|Polygonps.def|Questo file di definizione moduli fornisce al linker con informazioni sulle esportazioni richieste dal codice proxy e stub che supportano le chiamate tra gli apartment.|
|stdafx.cpp|Il file che verranno `#include` i file di implementazione di ATL.|
|stdafx.h|Il file che verranno `#include` i file di intestazione ATL.|

1. In Esplora soluzioni fare doppio clic il `Polygon` progetto.

2. Nel menu di scelta rapida, fare clic su **proprietà**.

3. Fare clic su **Linker**. Modifica il **per ogni UserRedirection** possibilità **Yes**.

4. Fare clic su **OK**.

Nel passaggio successivo, si aggiungerà un controllo al progetto.

[Al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md)

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
