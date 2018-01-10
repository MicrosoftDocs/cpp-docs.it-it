---
title: Creazione del progetto (ATL Tutorial, parte 1) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: get-started-article
dev_langs: C++
ms.assetid: f6b727d1-390a-4b27-b82f-daadcd9fc059
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1a9a5fc9a0d2175a419bbc0fb1aacbc9ea25006c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-the-project-atl-tutorial-part-1"></a>Creazione del progetto (Esercitazione di ATL, parte 1)
Questa esercitazione vengono descritti dettagliatamente tramite un progetto ATL senza attributo che crea un oggetto ActiveX che consente di visualizzare un poligono. L'oggetto include opzioni per consentire all'utente di modificare il numero dei lati che costituiscono il poligono e il codice per aggiornare la visualizzazione.  
  
> [!NOTE]
>  ATL e MFC sono generalmente non è supportata nelle edizioni Express di Visual Studio.  
  
> [!NOTE]
>  Questa esercitazione consente di creare lo stesso codice sorgente dell'esempio del poligono. Se si desidera evitare di immettere manualmente il codice sorgente, è possibile scaricarlo dal [esempio del poligono](../visual-cpp-samples.md). È possibile fare riferimento al codice sorgente poligono come eseguire l'esercitazione o usarlo per controllare gli errori nel progetto.  
  
### <a name="to-create-the-initial-atl-project-using-the-atl-project-wizard"></a>Per creare il progetto ATL iniziale utilizzando la creazione guidata progetto ATL  
  
1.  Nell'ambiente di sviluppo di Visual Studio, fare clic su **New** sul **File** menu e quindi fare clic su **progetto**.  
  
2.  Fare clic su di **progetti Visual C++** cartella e selezionare **progetto ATL**.  
  
3.  Tipo `Polygon` come nome del progetto.  
  
     Il percorso per il codice sorgente verrà in genere per impostazione predefinita Documenti\Visual Studio progetti, e una nuova cartella verrà creata automaticamente.  
  
4.  Fare clic su **OK** e viene aperta la creazione guidata progetto ATL.  
  
5.  Fare clic su **le impostazioni dell'applicazione** per visualizzare le opzioni disponibili.  
  
6.  Quando si crea un controllo e un controllo deve essere un server in-process, lasciare il **tipo di applicazione** come una DLL.  
  
7.  Lasciare le altre opzioni sui rispettivi valori predefiniti e fare clic su **fine**.  
  
 La creazione guidata progetto ATL verrà creato il progetto tramite la generazione di più file. È possibile visualizzare questi file in Esplora soluzioni espandere l'oggetto del poligono. I file sono elencati di seguito.  
  
|File|Descrizione|  
|----------|-----------------|  
|Polygon|Contiene l'implementazione di `DllMain`, `DllCanUnloadNow`, `DllGetClassObject`, `DllRegisterServer`, e `DllUnregisterServer`. Contiene inoltre la mappa di oggetti, ovvero un elenco degli oggetti nel progetto ATL. Questo è inizialmente vuoto.|  
|Polygon.def|Questo file di definizione moduli fornisce il linker con informazioni sulle esportazioni richieste dalla DLL.|  
|Polygon|L'interfaccia file definition language, che descrive le interfacce specifiche degli oggetti.|  
|Polygon.rgs|Questo script del Registro di sistema contiene informazioni per la registrazione della DLL del programma.|  
|Polygon|File di risorse, che inizialmente contiene le informazioni sulla versione e una stringa contenente il nome del progetto.|  
|Resource.h|Il file di intestazione per il file di risorse.|  
|Polygonps.def|Questo file di definizione moduli fornisce il linker con le informazioni richieste dal codice proxy e stub esportazioni che supportano le chiamate tra apartment.|  
|stdafx.cpp|Il file che verrà `#include` i file di implementazione ATL.|  
|stdafx.h|Il file che verrà `#include` i file di intestazione ATL.|  
  
1.  In Esplora soluzioni fare doppio clic su di `Polygon` progetto.  
  
2.  Menu di scelta rapida, fare clic su **proprietà**.  
  
3.  Fare clic su **Linker**. Modifica il **Per UserRedirection** opzione **Sì**.  
  
4.  Fare clic su **OK**.  
  
 Nel passaggio successivo, si aggiungerà un controllo al progetto.  
  
 [Al passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)

