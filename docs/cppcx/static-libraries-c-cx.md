---
title: "Librerie statiche (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "02/03/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 7faf53c8-fa21-42cc-8246-d32533ef9dfa
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 10
---
# Librerie statiche (C++/CX)
Una libreria statica utilizzata in un'app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] può contenere codice C\+\+ basato sullo standard ISO, inclusi i tipi STL, e chiamate alle API Win32 che non sono escluse dalla piattaforma dell'app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)]. Da una libreria statica è possibile utilizzare componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] e creare componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] con alcune limitazioni.  
  
## Creazione di librerie statiche  
  
#### Per creare una libreria statica da utilizzare con un'app in [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)]  
  
1.  Sulla barra dei menu scegli **File** \> **Nuovo** \> **Progetto** \> **Libreria statica vuota** per le app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)].  
  
2.  In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**. Nella finestra di dialogo **Proprietà**, nella pagina **Proprietà di configurazione** \> **Generale** imposta il supporto dell'app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] su **Sì**.  
  
3.  Nella pagina **Proprietà di configurazione** \> **C\/C\+\+** impostare **Utilizza estensioni di** [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]su **Sì \(\/ZW\)**.  
  
 Quando si compila una nuova libreria statica, se si effettua una chiamata a un'API Win32 esclusa per le app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)], il compilatore genererà l'errore C3861, "identificatore non trovato". Per cercare un metodo alternativo supportato per [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], vedere [Alternatives to Windows APIs in Windows Store apps](http://msdn.microsoft.com/it-it/75568012-61e0-41cc-a4df-c698f54f21ec).  
  
 Se aggiungi un progetto di libreria statica C\+\+ a una soluzione di app di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)], potresti dover aggiornare le impostazioni di proprietà del progetto di libreria in modo da impostare la proprietà di supporto di [!INCLUDE[win8_appname_long](../cppcx/includes/win8-appname-long-md.md)] su **Sì**. Senza questa impostazione, le compilazioni e i collegamenti del codice vengono eseguiti, ma si verificherà un errore quando tenterai di verificare l'applicazione per [!INCLUDE[win8_appstore_long](../cppcx/includes/win8-appstore-long-md.md)]. La libreria statica deve essere compilata con le stesse impostazioni del compilatore del progetto che la utilizza.  
  
 Se utilizzi una libreria statica che crea classi `ref` pubbliche, classi di interfaccia pubbliche o classi di valore pubbliche, verrà generato il seguente avviso da parte del linker:  
  
> **warning LNK4264:** archiviazione del file oggetto compilato con \/ZW in una libreria statica. Quando si creano tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], non è consigliabile eseguire il collegamento con una libreria statica che contiene metadati [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
 Puoi ignorare tranquillamente questo avviso solo se la libreria statica non sta generando componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] utilizzati all'esterno della libreria. Se la libreria non utilizza un componente da essa definito, il linker può ottimizzare l'implementazione anche se i metadati pubblici contengono informazioni sul tipo. Ciò significa che i componenti pubblici in una libreria statica verranno compilati ma non attivati in fase di esecuzione. Per questo motivo, qualsiasi componente di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] destinato a essere utilizzato da altri componenti o app deve essere implementato in una DLL.  
  
## Vedere anche  
 [Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)