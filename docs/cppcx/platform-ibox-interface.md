---
title: "Interfaccia Platform::IBox | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IBox"
dev_langs: 
  - "C++"
ms.assetid: 774df45d-f8a7-45a3-ae24-eecc3c681040
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 5
---
# Interfaccia Platform::IBox
L'interfaccia [Platform::IBox](../cppcx/platform-ibox-interface.md) è il nome C\+\+ per l'interfaccia `Windows::Foundation::IReference`.  
  
## Sintassi  
  
```cpp  
template <typename T>  
interface class IBox  
```  
  
#### Parametri  
 `T`  
 Tipo del valore boxed.  
  
## Note  
 L'interfaccia `IBox<T>` viene principalmente utilizzata internamente per rappresentare tipi di valore nullable, come descritto in [Classi e struct di valore \(C\+\+\/CX\)](../cppcx/value-classes-and-structs-c-cx.md). L'interfaccia viene anche utilizzata per eseguire il boxing dei tipi di valore passati a metodi C\+\+ che accettano parametri di tipo `Object^`. Puoi dichiarare esplicitamente un parametro di input come `IBox<SomeValueType>`. Per un esempio, vedere [Conversione boxing](../cppcx/boxing-c-cx.md).  
  
## Requisiti  
  
## Membri  
 L'interfaccia `Platform::IBox` eredita dall'interfaccia [Platform::IValueType](../cppcx/platform-ivaluetype-interface.md).`IBox` dispone di questi membri:  
  
 **Proprietà**  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|Valore|Restituisce il valore di tipo unboxed archiviato in precedenza in questa istanza di `IBox`.|  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)