---
title: Scaricamento esplicito di una DLL a caricamento ritardato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- /DELAY:UNLOAD linker option
- DELAY:UNLOAD linker option
- __FUnloadDelayLoadedDLL2
- delayed loading of DLLs, unloading
ms.assetid: 1c4c5172-fd06-45d3-9e4f-f12343176b3c
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b26a1a17952693be9db6a80649aad2c40227d53e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="explicitly-unloading-a-delay-loaded-dll"></a>Scaricamento esplicito di una DLL a caricamento ritardato
Il [/Delay](../../build/reference/delay-delay-load-import-settings.md): l'opzione del linker unload consente di scaricare una DLL a caricamento ritardato. Per impostazione predefinita, quando il codice viene scaricata la DLL (utilizzando /delay: unload e **FUnloadDelayLoadedDLL2**), le importazioni a caricamento ritardato rimangono nella tabella di indirizzi di importazione (IAT). Tuttavia, se si utilizza /delay: unload nella riga di comando del linker, la funzione di supporto supporterà anche lo scaricamento esplicito della DLL, la IAT verrà reimpostato il formato originale; i puntatori di ora non valido verranno sovrascritto. IAT è un campo di [ImgDelayDescr](../../build/reference/calling-conventions-parameters-and-return-type.md) che contiene l'indirizzo di una copia della tabella IAT originale (se presente).  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
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
  
### <a name="comments"></a>Commenti  
 Note importanti relative allo scaricamento di una DLL a caricamento ritardato:  
  
-   È possibile trovare l'implementazione del **FUnloadDelayLoadedDLL2** funzione nel file \VC7\INCLUDE\DELAYHLP. CPP.  
  
-   Il parametro del nome di **FUnloadDelayLoadedDLL2** funzione deve corrispondere esattamente (compresi i case) la libreria di importazione del contenuto (ovvero stringa anche nella tabella di importazione nell'immagine). È possibile visualizzare il contenuto della libreria di importazione con [DUMPBIN /DEPENDENTS](../../build/reference/dependents.md). Se si desidera usare una corrispondenza tra maiuscole e minuscole di stringa, è possibile aggiornare **FUnloadDelayLoadedDLL2** per utilizzare una delle funzioni CRT stringa o una chiamata all'API di Windows.  
  
 Vedere [lo scaricamento di una DLL a caricamento ritardato](../../build/reference/unloading-a-delay-loaded-dll.md) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)