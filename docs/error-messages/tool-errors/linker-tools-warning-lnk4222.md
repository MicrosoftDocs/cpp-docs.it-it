---
title: Strumenti del linker LNK4222 avviso | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4222
dev_langs:
- C++
helpviewer_keywords:
- LNK4222
ms.assetid: b7bb1794-41fb-4c83-b9b0-59c0d786a7da
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 359af4c4d3b1079b2d56f108bff0ee1488ea71f9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33302149"
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