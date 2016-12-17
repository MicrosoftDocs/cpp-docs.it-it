---
title: "Scaricamento esplicito di una DLL a caricamento ritardato | Microsoft Docs"
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
  - "/DELAY:UNLOAD (opzione del linker)"
  - "__FUnloadDelayLoadedDLL2"
  - "DELAY:UNLOAD (opzione del linker)"
  - "caricamento ritardato di DLL, scaricamento"
ms.assetid: 1c4c5172-fd06-45d3-9e4f-f12343176b3c
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Scaricamento esplicito di una DLL a caricamento ritardato
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione del linker [\/delay](../../build/reference/delay-delay-load-import-settings.md):unload consente di scaricare una DLL sottoposta a caricamento ritardato.  Per impostazione predefinita, se nel codice viene scaricata la DLL mediante \/delay:unload e **\_\_FUnloadDelayLoadedDLL2**, le importazioni a caricamento ritardato rimangono nella tabella di indirizzi di importazione \(IAT, import address table\).  Se tuttavia si utilizza \/delay:unload dalla riga di comando del linker, la funzione di supporto consentirà anche lo scaricamento esplicito della DLL, ripristinando il formato originale della IAT e sovrascrivendo i puntatori non più validi.  IAT è un campo di [ImgDelayDescr](../../build/reference/calling-conventions-parameters-and-return-type.md) contenente l'indirizzo di una copia della tabella IAT originale \(se esistente\).  
  
## Esempio  
  
### Codice  
  
```  
// link with /link /DELAYLOAD:MyDLL.dll /DELAY:UNLOAD  
#include <windows.h>  
#include <delayimp.h>  
#include "MyDll.h"  
#include <stdio.h>  
  
#pragma comment(lib, "delayimp")  
#pragma comment(lib, "MyDll")  
int main()  
{  
    BOOL TestReturn;  
    // MyDLL.DLL will load at this point  
    fnMyDll();  
  
    //MyDLL.dll will unload at this point  
    TestReturn = __FUnloadDelayLoadedDLL2("MyDll.dll");  
  
    if (TestReturn)  
        printf_s("\nDLL was unloaded");  
    else  
        printf_s("\nDLL was not unloaded");  
}  
```  
  
### Commenti  
 Note importanti relative allo scaricamento di una DLL a caricamento ritardato:  
  
-   L'implementazione della funzione **\_\_FUnloadDelayLoadedDLL2** è contenuta nel file \\VC7\\INCLUDE\\DELAYHLP.CPP.  
  
-   Il parametro nome della funzione **\_\_FUnloadDelayLoadedDLL2** deve corrispondere esattamente al contenuto della libreria di importazione. La stringa è presente anche nella tabella di importazione all'interno dell'immagine.  Il contenuto della libreria di importazione può essere visualizzato con [DUMPBIN \/DEPENDENTS](../../build/reference/dependents.md).  Per ottenere una corrispondenza di stringa senza distinzione tra maiuscole e minuscole, è possibile aggiornare **\_\_FUnloadDelayLoadedDLL2** in modo da utilizzare le funzioni di stringa CRT o una chiamata alle API di Windows.  
  
 Per ulteriori informazioni, vedere [Scaricamento di una DLL a caricamento ritardato](../../build/reference/unloading-a-delay-loaded-dll.md).  
  
## Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)