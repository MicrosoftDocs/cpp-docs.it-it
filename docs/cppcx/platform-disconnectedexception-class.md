---
title: "Classe Platform::DisconnectedException | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::DisconnectedException"
  - "Platform/Platform::DisconnectedException::DisconnectedException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::DisconnectedException"
ms.assetid: c25e0d64-5bff-4c21-88e5-c4ec2776fa7f
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 4
---
# Classe Platform::DisconnectedException
Generato quando un oggetto proxy COM tenta di fare riferimento a un server COM che non esiste più.  
  
## Sintassi  
  
```  
public ref class DisconnectedException : COMException,    IException,    IPrintable,    IEquatable  
```  
  
## Note  
 Quando la classe A fa riferimento a un'altra classe \(classe B\) presente in un processo distinto, la classe A richiede un oggetto proxy per comunicare con il server COM out\-of\-process che include la classe B. A volte è possibile che la memoria del server si esaurisca senza che la classe A ne sia informata. In quel caso è generata l'eccezione RPC\_E\_DISCONNECTED, che viene convertita in Platform::DisconnectedException. Questa situazione si verifica ad esempio nello scenario in cui un'origine evento richiama un delegato passato all'origine evento stessa, ma il delegato è stato eliminato in un determinato momento dopo la sottoscrizione all'evento. In questo caso, l'origine evento rimuove il delegato dall'elenco di chiamate.  
  
 Per ulteriori informazioni, vedi la classe [COMException](../cppcx/platform-comexception-class.md).  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  
  
## Vedere anche  
 [Platform::COMException \(classe\)](../cppcx/platform-comexception-class.md)