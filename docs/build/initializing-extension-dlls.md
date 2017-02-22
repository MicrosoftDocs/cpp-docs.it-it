---
title: "Inizializzazione di DLL di estensione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], estensione"
  - "DLL di estensione [C++], inizializzazione"
  - "inizializzazione di DLL"
ms.assetid: 08ad0381-3808-4bea-a93c-c9ba62496543
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Inizializzazione di DLL di estensione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Poiché le DLL di estensione non contengono un oggetto derivato da `CWinApp` come le DLL regolari, è necessario aggiungere codice di inizializzazione e di terminazione alla funzione `DllMain` generata dalla Creazione guidata DLL MFC.  
  
 La creazione guidata fornisce il codice per le DLL di estensione descritto di seguito.  In questo codice, `PROJNAME` è un segnaposto corrispondente al nome del progetto.  
  
```  
#include "stdafx.h"  
#include <afxdllx.h>  
  
#ifdef _DEBUG  
#define new DEBUG_NEW  
#undef THIS_FILE  
static char THIS_FILE[] = __FILE__;  
#endif  
static AFX_EXTENSION_MODULE PROJNAMEDLL = { NULL, NULL };  
  
extern "C" int APIENTRY  
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)  
{  
   if (dwReason == DLL_PROCESS_ATTACH)  
   {  
      TRACE0("PROJNAME.DLL Initializing!\n");  
  
      // Extension DLL one-time initialization  
      AfxInitExtensionModule(PROJNAMEDLL,   
                                 hInstance);  
  
      // Insert this DLL into the resource chain  
      new CDynLinkLibrary(Dll3DLL);  
   }  
   else if (dwReason == DLL_PROCESS_DETACH)  
   {  
      TRACE0("PROJNAME.DLL Terminating!\n");  
   }  
   return 1;   // ok  
}  
```  
  
 La creazione di un nuovo oggetto **CDynLinkLibrary** durante l'inizializzazione consente alla DLL di estensione di esportare le risorse o gli oggetti `CRuntimeClass` nell'applicazione client.  
  
 Se si utilizza la DLL di estensione da una o più DLL regolari, è necessario esportare una funzione di inizializzazione che crea un oggetto **CDynLinkLibrary**.  Questa funzione deve essere chiamata da ciascuna DLL regolare che utilizza la DLL di estensione.  La posizione appropriata da cui chiamare questa funzione di inizializzazione è la funzione membro `InitInstance` dell'oggetto derivato da `CWinApp` della DLL regolare prima di utilizzare una qualsiasi delle classi o delle funzioni esportate della DLL di estensione.  
  
 Nella funzione `DllMain` generata dalla Creazione guidata DLL MFC, la chiamata a `AfxInitExtensionModule` acquisisce le classi di runtime del modulo \(strutture `CRuntimeClass`\) nonché le object factory \(oggetti `COleObjectFactory`\) da utilizzare quando viene creato l'oggetto **CDynLinkLibrary**.  Controllare il valore restituito di `AfxInitExtensionModule`: se viene restituito zero da `AfxInitExtensionModule`, restituire zero dalla funzione `DllMain`.  
  
 Se la DLL di estensione viene collegata a un eseguibile in modo esplicito, ovvero se l'eseguibile chiama `AfxLoadLibrary` per il collegamento alla DLL, è necessario aggiungere una chiamata a `AfxTermExtensionModule` su **DLL\_PROCESS\_DETACH**.  Questa funzione permette a MFC di pulire la DLL di estensione quando ciascun processo si disconnette dalla DLL di estensione, vale a dire quando il processo si chiude o quando la DLL viene scaricata in seguito a una chiamata a `AfxFreeLibrary`.  Se la DLL di estensione viene collegata all'applicazione in modo implicito, la chiamata a `AfxTermExtensionModule` non è necessaria.  
  
 Le applicazioni collegate in modo esplicito alle DLL di estensione devono chiamare **AfxTermExtensionModule** quando liberano la DLL.  Devono inoltre utilizzare `AfxLoadLibrary` e `AfxFreeLibrary`, anziché le funzioni Win32 **LoadLibrary** e **FreeLibrary**, se utilizzano più thread.  L'utilizzo di `AfxLoadLibrary` e `AfxFreeLibrary` assicura che nel codice di avvio e di chiusura eseguito quando si carica e si scarica la DLL di estensione non vi sia nulla che danneggi lo stato MFC globale.  
  
 Poiché l'inizializzazione di MFCx0.dll è completa nel momento in cui si chiama `DllMain`, è possibile assegnare la memoria e chiamare le funzioni MFC in `DllMain`, a differenza della versione di MFC a 16 bit.  
  
 Le DLL di estensione sono in grado di gestire le operazioni multithread mediante i case **DLL\_THREAD\_ATTACH** e **DLL\_THREAD\_DETACH** nella funzione `DllMain`.  Questi case vengono passati a `DllMain` quando i thread si connettono e si disconnettono dalla DLL.  La chiamata a [TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801) quando si connette una DLL consente alla DLL di mantenere gli indici di memoria locale di thread \(TLS, Thread Local Storage\) per ogni thread connesso alla DLL.  
  
 Tenere presente che il file di intestazione Afxdllx.h contiene definizioni speciali per le strutture utilizzate nelle DLL di estensione, come la definizione per `AFX_EXTENSION_MODULE` e **CDynLinkLibrary**.  È necessario includere questo file di intestazione nella propria DLL di estensione.  
  
> [!NOTE]
>  È importante evitare di definire o annullare la definizione delle macro \_AFX\_NO\_XXX di stdafx.h.  Per ulteriori informazioni, vedere l'articolo della Knowledge Base relativo ai problemi che si verificano durante la definizione di macro \_AFX\_NO\_XXX \(Q140751\) \(la pagina potrebbe essere in inglese\).  Gli articoli della Knowledge Base sono disponibili nella libreria di MSDN o all'indirizzo [http:\/\/search.support.microsoft.com\/](http://search.support.microsoft.com/).  
  
 Un esempio di funzione di inizializzazione che gestisce le operazioni multithread è incluso in [Using Thread Local Storage in a Dynamic\-Link Library](http://msdn.microsoft.com/library/windows/desktop/ms686997) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  Tenere presente che l'esempio contiene una funzione di punto di ingresso denominata **LibMain** che, affinché funzioni con le librerie di runtime MFC e C, deve però essere denominata `DllMain`.  
  
 Nell'esempio [DLLHUSK](http://msdn.microsoft.com/it-it/dfcaa6ff-b8e2-4efd-8100-ee3650071f90) di MFC viene illustrato l'utilizzo delle funzioni di inizializzazione.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzazione di DLL regolari](../build/initializing-regular-dlls.md)  
  
-   [Inizializzazione di DLL non MFC](../build/initializing-non-mfc-dlls.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Librerie di runtime del linguaggio C e \_DllMainCRTStartup](../build/run-time-library-behavior.md)  
  
-   [Utilizzo di DLL di estensione per database, OLE e Sockets nelle DLL regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [\<caps:sentence id\="tgt34" sentenceid\="58bb7328659bda9ffb73a1dcd39da06b" class\="tgtSentence"\>Specifiche di funzione per DllMain \(Windows SDK\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms682583)  
  
-   [\<caps:sentence id\="tgt35" sentenceid\="f29344705c59343b34b642944921cbdf" class\="tgtSentence"\>Dynamic\-link library entry\-point function \(Windows SDK\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms682596)  
  
## Vedere anche  
 [Inizializzazione di una DLL](../build/initializing-a-dll.md)