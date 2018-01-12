---
title: Strumenti del linker LNK4222 avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: LNK4222
dev_langs: C++
helpviewer_keywords: LNK4222
ms.assetid: b7bb1794-41fb-4c83-b9b0-59c0d786a7da
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2a54c452a5df6f99260d6d01fbf4bb9f2f17b955
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-tools-warning-lnk4222"></a>Avviso degli strumenti del linker LNK4222
simbolo esportato 'simbolo' non deve essere assegnato un numero ordinale  
  
 I simboli seguenti non devono essere esportati da numero ordinale:  
  
-   `DllCanUnloadNow`  
  
-   `DllGetClassObject`  
  
-   `DllGetClassFactoryFromClassString`  
  
-   `DllInstall`  
  
-   `DllRegisterServer`  
  
-   `DllRegisterServerEx`  
  
-   `DllUnregisterServer`  
  
 Queste funzioni si trovano sempre in base al nome, utilizzando `GetProcAddress`. Il linker genera un avviso su questo tipo di esportazione, infatti, possono verificarsi in un'immagine più grande. Questo problema può verificarsi se l'intervallo delle esportazioni ordinali è grandi dimensioni con un numero relativamente basso di esportazioni. Ad esempio,  
  
```  
EXPORTS  
   DllGetClassObject   @1  
   MyOtherAPI      @100  
```  
  
 richiede a 100 slot nella tabella di indirizzi di esportazione con 98 di essi (2-99) sono solo di riempimento. D'altro canto  
  
```  
EXPORTS  
   DllGetClassObject  
   MyOtherAPI      @100  
```  
  
 richiede due slot. (Tenere presente che è possibile esportare anche con il [/esportazione](../../build/reference/export-exports-a-function.md) l'opzione del linker.)