---
title: "Exception::Message (propriet&#224;) | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Exception::Message"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Exception::Message (proprietà)"
ms.assetid: ad1199cd-0889-4803-ad0d-a3a7b3c51891
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Exception::Message (propriet&#224;)
Messaggio in cui viene descritto l'errore.  
  
## Sintassi  
  
```cpp  
public:property String^ Message;  
```  
  
## Valore proprietà  
 Nelle eccezioni originate da Windows Runtime, si tratta di una descrizione dell'errore fornita dal sistema.  
  
## Note  
 In [!INCLUDE[win8](../cppcx/includes/win8-md.md)] questa proprietà è di sola lettura perché le eccezioni in tale versione di Windows Runtime vengono trasportate tramite l'ABI solo come HRESULT. In [!INCLUDE[win81](../cppcx/includes/win81-md.md)] le informazioni più dettagliate relative all'eccezione vengono passate attraverso l'interfaccia applicativa binaria \(ABI\) e hai la possibilità di fornire un messaggio personalizzato a cui altri componenti possono accedere a livello di codice. Per ulteriori informazioni, vedi [Eccezioni \(C\+\+\/CX\)](../cppcx/exceptions-c-cx.md).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Platform::Exception \(classe\)](../cppcx/platform-exception-class.md)