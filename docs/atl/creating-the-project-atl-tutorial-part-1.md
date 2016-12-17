---
title: "Creazione del progetto (Esercitazione di ATL, parte 1) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: f6b727d1-390a-4b27-b82f-daadcd9fc059
caps.latest.revision: 16
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione del progetto (Esercitazione di ATL, parte 1)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa esercitazione viene illustrata in dettaglio a un progetto senza attributi ATL che crea un oggetto ActiveX che visualizza un poligono.  L'oggetto include le opzioni per consentire di modificare il numero di lati che costituiscono il poligono e il codice per aggiornare la visualizzazione.  
  
> [!NOTE]
>  ATL e MFC non sono supportati in genere nelle edizioni express di Visual Studio.  
  
> [!NOTE]
>  Questa esercitazione creare lo stesso codice sorgente dell'esempio polygon.  Se si desidera evitare di inserire codice sorgente manualmente, è possibile scaricarlo da [Estrazione di esempio del poligono](../top/visual-cpp-samples.md)polygon.  È possibile fare riferimento nel codice sorgente del poligono durante l'utilizzo dell'esercitazione, o utilizzarla per verificare la presenza di errori nel progetto.  
  
### Per creare il progetto iniziale ATL mediante la procedura guidata  
  
1.  Nell'ambiente di sviluppo di Visual Studio, fare clic su **Nuova** il menu **File** quindi fare clic **Progetto**.  
  
2.  Fare clic sulla cartella **Progetti di Visual C** e selezionare **Progetto ATL**.  
  
3.  Tipo `Poligono` come nome del progetto.  
  
     Posizione del codice sorgente in genere utilizzino l'impostazione predefinita ai documenti \\ Visual Studio e una nuova cartella verrà creato automaticamente.  
  
4.  Fare clic su **OK** e la creazione guidata progetto ATL viene aperto.  
  
5.  Scegliere **Impostazioni applicazione** per visualizzare le opzioni disponibili.  
  
6.  Quando si crea un controllo e un controllo deve essere un server in\-process, consente **Tipo di applicazione** come DLL.  
  
7.  Lasciare le altre opzioni sui valori predefiniti e fare clic **Fine**.  
  
 La creazione guidata progetto ATL creato il progetto generare molti file.  È possibile visualizzare questi file in Esplora soluzioni espandere l'oggetto polygon.  I file sono elencati in.  
  
|File|Descrizione|  
|----------|-----------------|  
|Polygon.cpp|Contiene l'implementazione di `DllMain`, di `DllCanUnloadNow`, di `DllGetClassObject`, di `DllRegisterServer`e di `DllUnregisterServer`.  Contiene inoltre la mappa oggetto, che è un elenco di oggetti ATL nel progetto.  Ciò è inizialmente vuota.|  
|Polygon.def|Questo file di definizione di modulo fornisce il linker con informazioni sulle esportazioni richieste dalla DLL.|  
|Polygon.idl|Il file IDL \(interface definition language\), che vengono descritte le interfacce specifiche agli oggetti.|  
|Polygon.rgs|Questo script del Registro di sistema contiene le informazioni per registrare la DLL del programma.|  
|Polygon.rc|Il file di risorse, che inizialmente contiene informazioni sulla versione e una stringa contenente il nome del progetto.|  
|Resource.h|File di intestazione per il file di risorse.|  
|Polygonps.def|Questo file di definizione di modulo fornisce il linker con informazioni sulle esportazioni richieste dal proxy e da codice stub da chiamate di supporto su più apartment.|  
|stdafx.cpp|Il file che `#include` i file di implementazione ATL.|  
|stdafx.h|Il file che `#include` i file di intestazione ATL.|  
  
1.  In Esplora soluzioni, fare clic con il pulsante destro del mouse sul progetto `Polygon`.  
  
2.  Scegliere dal menu di scelta rapida, fare clic su **Proprietà**.  
  
3.  Scegliere da **Linker**.  Modificare l'opzione **Per utenteReindirizzamento** su **Sì**.  
  
4.  Scegliere **OK**.  
  
 Nel prossimo passaggio, verrà aggiunto un controllo al progetto.  
  
 [Nel passaggio 2](../atl/adding-a-control-atl-tutorial-part-2.md)  
  
## Vedere anche  
 [Esercitazione](../atl/active-template-library-atl-tutorial.md)