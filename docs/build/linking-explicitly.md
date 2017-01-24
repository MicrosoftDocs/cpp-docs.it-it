---
title: "Collegamento esplicito | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "collegamento esplicito [C++]"
ms.assetid: 1e13d960-a195-4e6d-9864-7d8f3a701f4b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Collegamento esplicito
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Con il collegamento esplicito, le applicazioni devono effettuare una chiamata di funzione per caricare in modo esplicito la DLL in fase di esecuzione.  Per collegarsi a una DLL in modo esplicito, un'applicazione deve procedere come descritto di seguito.  
  
-   Chiamare **LoadLibrary** o una funzione analoga per caricare la DLL e ottenere un handle di modulo.  
  
-   Chiamare **GetProcAddress** per ottenere un puntatore per ciascuna funzione esportata che l'applicazione intende chiamare.  Poiché le applicazioni chiamano le funzioni della DLL tramite un puntatore, il compilatore non genera riferimenti esterni evitando di dover effettuare il collegamento con una libreria di importazione.  
  
-   Chiamare **FreeLibrary** dopo avere terminato le operazioni relative alla DLL.  
  
 Di seguito è riportato un esempio.  
  
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
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Collegamento implicito](../build/linking-implicitly.md)  
  
-   [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
-   [FreeLibrary e AfxFreeLibrary](../build/freelibrary-and-afxfreelibrary.md)  
  
-   [Percorso di ricerca utilizzato da Windows per l'individuazione di una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
## Vedere anche  
 [Collegamento di un eseguibile a una DLL](../build/linking-an-executable-to-a-dll.md)