---
title: "Metodo String::IsFastPass | Microsoft Docs"
ms.custom: ""
ms.date: "02/09/2017"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::IsFastPass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::IsFastPass"
ms.assetid: 0a8c2db7-e44f-45fe-9570-3dc82fbbacdd
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Metodo String::IsFastPass
Indica se l'oggetto String corrente è coinvolto in un'operazione di *passaggio rapido*. In questo tipo di operazione il conteggio dei riferimenti viene sospeso.  
  
## Sintassi  
  
```cpp  
  
bool IsFastPass();  
```  
  
## Valore restituito  
 `true` se l'oggetto String corrente è passato rapidamente; in caso contrario, `false`.  
  
## Note  
 In una chiamata a una funzione in cui un oggetto con conteggio dei riferimenti è un parametro e la funzione chiamata legge semplicemente l'oggetto, il compilatore può sospendere il conteggio dei riferimenti in modo sicuro e migliorare le prestazioni di chiamata. Non vi è alcuna operazione utile che il codice possa eseguire tramite questa proprietà. Il sistema gestisce tutti i dettagli.  
  
## Requisiti  
 **Client minimo supportato:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Server minimo supportato:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** vccorlib.h  
  
## Vedere anche  
 [Classe Platform::String](../cppcx/platform-string-class.md)