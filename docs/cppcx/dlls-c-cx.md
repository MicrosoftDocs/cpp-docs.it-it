---
title: "DLL (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "02/03/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5b8bcc57-64dd-4c54-9f24-26a25bd5dddd
caps.latest.revision: 21
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 21
---
# DLL (C++/CX)
Visual Studio ti consente di creare una DLL Win32 standard o una DLL di un componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] da utilizzare nelle app [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)]. Una DLL standard creata con una versione di Visual Studio o del compilatore Visual C\+\+ precedente a [!INCLUDE[vs_dev11_long](../cppcx/includes/vs-dev11-long-md.md)] potrebbe non essere caricata correttamente in un'app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] e non superare il test di verifica dell'app in [!INCLUDE[win8_appstore_long](../cppcx/includes/win8-appstore-long-md.md)].  
  
## DLL di componenti [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]  
 Nella quasi totalità dei casi, quando si desidera creare una DLL da utilizzare in un'app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)], è necessario crearla come componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] tramite il modello di progetto con tale nome. Puoi creare un progetto di componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] per DLL con tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] pubblici o privati. È possibile accedere a un componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] da app scritte in qualsiasi linguaggio compatibile con [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. Per impostazione predefinita, il compilatore per un progetto di componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] utilizza l'opzione **\/ZW**. Un file .winmd deve avere lo stesso nome dello spazio dei nomi radice. Ad esempio, è possibile creare un'istanza di una classe denominata A.B.C.MyClass solo se è definita in un file di metadati denominato A.winmd o A.B.winmd o A.B.C.winmd. Il nome della DLL non deve necessariamente corrispondere al nome del file con estensione winmd.  
  
 Per altre informazioni, vedere [Creazione di componenti Windows Runtime in C\+\+](../Topic/Creating%20Windows%20Runtime%20Components%20in%20C++.md).  
  
#### Per fare riferimento nel progetto a un file binario di componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] di terze parti  
  
1.  Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Nella pagina **Proprietà comuni** fai clic su **Aggiungi nuovo riferimento**.  
  
2.  Un componente [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] è costituito da un file DLL e da un file con estensione winmd che contiene i metadati. In genere, questi file si trovano nella stessa cartella. Nel riquadro a sinistra nella finestra di dialogo **Aggiungi riferimento**, fai clic su **Sfoglia** quindi passa alla cartella che contiene i file DLL e il relativo file .winmd. Per altre informazioni, vedere [Esercitazione: Creazione e utilizzo degli SDK di estensione](http://msdn.microsoft.com/it-it/001e2fca-3d56-43ab-a5e0-0561d085679f).  
  
## DLL standard  
 Puoi creare una DLL standard per codice C\+\+ che non utilizza né produce tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] pubblici e usarla da un'app [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)]. Usa il tipo di progetto DLL di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] per eseguire la migrazione di una DLL esistente da compilare in questa versione di Visual Studio, ma non convertire il codice in un progetto di componente di Windows Runtime. Quando usi i seguenti passaggi, la DLL viene distribuita insieme all'eseguibile dell'app nel pacchetto con estensione appx.  
  
#### Per creare una DLL standard in Visual Studio  
  
1.  Sulla barra dei menu scegli **File**, **Nuovo**, **Progetto**, quindi seleziona il modello DLL di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)].  
  
2.  Immetti un nome per il progetto, quindi scegli il pulsante **OK**.  
  
3.  Aggiungi il codice. Assicurati di utilizzare `__declspec(dllexport)` per le funzioni che intendi esportare, ad esempio `__declspec(dllexport) Add(int I, in j);`  
  
4.  Aggiungi `#include winapifamily.h` per includere il file di intestazione da Windows SDK per le app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] e imposta la macro `WINAPI_FAMILY=WINAPI_PARTITION_APP`.  
  
#### Per fare riferimento a un progetto con DLL standard dalla stessa soluzione  
  
1.  Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Nella pagina **Proprietà comuni** fai clic su **Aggiungi nuovo riferimento**.  
  
2.  Nel riquadro a sinistra seleziona **Soluzione**, quindi seleziona la casella di controllo appropriata nel riquadro a destra.  
  
3.  Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.  
  
#### Per fare riferimento a un file binario DLL standard  
  
1.  Copia il file DLL, il file con estensione lib e il file di intestazione e incollali in un percorso noto, ad esempio nella cartella del progetto corrente.  
  
2.  Apri il menu di scelta rapida del progetto che utilizzerà la DLL, quindi scegli **Proprietà**. Scegli **Proprietà di configurazione**, **Linker**, **Input** e nella pagina che viene visualizzata aggiungi il file con estensione lib come dipendenza.  
  
3.  Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.  
  
#### Per eseguire la migrazione di una DLL Win32 esistente per compatibilità con app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)]  
  
1.  Crea un progetto del tipo DLL di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] e aggiungi il codice sorgente esistente.  
  
2.  Aggiungi `#include winapifamily.h` per includere il file di intestazione da Windows SDK per le app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] e imposta la macro `WINAPI_FAMILY=WINAPI_PARTITION_APP`.  
  
3.  Nei file del codice sorgente aggiungi un'istruzione `#include` per il file di intestazione DLL, in base alle necessità.  
  
## Vedere anche  
 [\(NOTINBUILD\) Argomenti avanzati](http://msdn.microsoft.com/it-it/1ccff0cf-a6cc-47ef-a05f-eba6307b3ced)