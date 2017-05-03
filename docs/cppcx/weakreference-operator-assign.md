---
title: "WeakReference::operator= | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/WeakReference::operator="
ms.assetid: 20b034d1-8f4f-46ae-81f0-73b76599f86b
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WeakReference::operator=
Assegna un valore a WeakReference.  
  
## Sintassi  
  
```cpp  
WeakReference& operator=(decltype(__nullptr));  
  
WeakReference& operator=(const WeakReference& __otherArg);  
  
WeakReference& operator=(WeakReference&& __otherArg);  
  
WeakReference& operator=(const volatile ::Platform::Object^ const __otherArg);  
  
```  
  
## Note  
 L'ultimo overload nell'elenco precedente consente di assegnare una classe di riferimento a una variabile WeakReference. In questo caso verrà eseguito il downcast della classe di riferimento a [Platform::Object](../cppcx/platform-object-class.md)^. Ripristinerai in seguito il tipo originale specificandolo come argomento per il parametro di tipo nella funzione membro [WeakReference::Resolve\<T\>](../cppcx/weakreference-resolve-method-platform-namespace.md).  
  
## Requisiti  
 Windows 8.0 o versioni successive  
  
## Vedere anche  
 [Classe Platform::WeakReference](../cppcx/platform-weakreference-class.md)