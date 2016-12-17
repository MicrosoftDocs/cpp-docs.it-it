---
title: "Avviso degli strumenti del linker LNK4222 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4222"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4222"
ms.assetid: b7bb1794-41fb-4c83-b9b0-59c0d786a7da
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4222
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

al simbolo esportato 'simbolo' non dovrebbe essere assegnato un numero ordinale  
  
 I simboli seguenti non devono essere esportati in base a un numero ordinale:  
  
-   `DllCanUnloadNow`  
  
-   `DllGetClassObject`  
  
-   `DllGetClassFactoryFromClassString`  
  
-   `DllInstall`  
  
-   `DllRegisterServer`  
  
-   `DllRegisterServerEx`  
  
-   `DllUnregisterServer`  
  
 Queste funzioni vengono sempre individuate per nome, utilizzando `GetProcAddress`.  L'avviso del linker relativo a questo tipo di esportazione segnala che la dimensione dell'immagine potrebbe risultare maggiore  nel caso in cui l'intervallo delle esportazioni di ordinali sia grande rispetto a un numero relativamente piccolo di esportazioni.  Di seguito è riportato un esempio:  
  
```  
EXPORTS  
   DllGetClassObject   @1  
   MyOtherAPI      @100  
```  
  
 richiede 100 slot nella tabella degli indirizzi di esportazione, di cui 98 \(dal 2 al 99\) sono solo di riempimento.  Al contrario,  
  
```  
EXPORTS  
   DllGetClassObject  
   MyOtherAPI      @100  
```  
  
 richiede solo due slot. Tenere presente che è anche possibile esportare mediante l'opzione del linker [\/EXPORT](../../build/reference/export-exports-a-function.md).