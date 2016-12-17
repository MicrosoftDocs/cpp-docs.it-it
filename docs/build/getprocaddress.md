---
title: "GetProcAddress | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetProcAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], GetProcAddress"
  - "GetProcAddress (metodo)"
  - "esportazioni ordinali [C++]"
ms.assetid: 48d14ae0-47ea-4c5d-96b1-2c158f1a26af
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# GetProcAddress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I processi che si collegano a una DLL in modo esplicito chiamano [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212) per ottenere l'indirizzo di una funzione esportata nella DLL.  Per chiamare la funzione della DLL si utilizza il puntatore alla funzione restituito.  **GetProcAddress** accetta come parametri l'handle del modulo DLL \(restituito da **LoadLibrary**, `AfxLoadLibrary` o **GetModuleHandle**\) e il nome della funzione da chiamare o l'ordinale di esportazione della funzione.  
  
 Poiché si chiama la funzione DLL tramite un puntatore e non viene effettuato alcun controllo dei tipi in fase di compilazione, accertarsi che i parametri per la funzione siano corretti affinché non vengano oltrepassati i limiti della memoria assegnata allo stack e non venga provocata una violazione di accesso.  Per garantire il supporto indipendente dai tipi, osservare i prototipi delle funzioni esportate e creare oggetti typedef corrispondenti per i puntatori a funzione.  Di seguito è riportato un esempio.  
  
```  
typedef UINT (CALLBACK* LPFNDLLFUNC1)(DWORD,UINT);  
...  
  
HINSTANCE hDLL;               // Handle to DLL  
LPFNDLLFUNC1 lpfnDllFunc1;    // Function pointer  
DWORD dwParam1;  
UINT  uParam2, uReturnVal;  
  
hDLL = LoadLibrary("MyDLL");  
if (hDLL != NULL)  
{  
   lpfnDllFunc1 = (LPFNDLLFUNC1)GetProcAddress(hDLL,  
                                           "DLLFunc1");  
   if (!lpfnDllFunc1)  
   {  
      // handle the error  
      FreeLibrary(hDLL);  
      return SOME_ERROR_CODE;  
   }  
   else  
   {  
      // call the function  
      uReturnVal = lpfnDllFunc1(dwParam1, uParam2);  
   }  
}  
```  
  
 Il modo in cui si specifica la funzione desiderata quando si chiama **GetProcAddress** dipende da come è stata compilata la DLL.  
  
 È possibile ottenere l'ordinale di esportazione solo se la DLL alla quale ci si collega è stata compilata con un file di definizione di modulo \(def\) e se gli ordinali sono elencati con le funzioni nella sezione **EXPORTS** del file def della DLL.  La chiamata a **GetProcAddress** con un ordinale di esportazione è leggermente più veloce rispetto all'uso del nome della funzione se la DLL ha molte funzioni esportate, poiché gli ordinali di esportazione funzionano come indici nella tabella di esportazione della DLL.  Con un ordinale di esportazione, **GetProcAddress** può individuare la funzione direttamente anziché confrontare il nome specificato con i nomi delle funzioni nella tabella di esportazione della DLL.  Si consiglia tuttavia di chiamare **GetProcAddress** con un ordinale di esportazione solo se si è in grado di controllare l'assegnazione degli ordinali alle funzioni esportate nel file def.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Collegamento implicito](../build/linking-implicitly.md)  
  
-   [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [\<caps:sentence id\="tgt17" sentenceid\="8c920606bb67e2587dd3c3e5cf977593" class\="tgtSentence"\>FreeLibrary\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms683152)  
  
-   [Esportazione da una DLL tramite i file DEF](../build/exporting-from-a-dll-using-def-files.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)