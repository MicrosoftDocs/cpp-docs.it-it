---
title: "Platform::WriteOnlyArray (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
s.suite: 
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::WriteOnlyArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::WriteOnlyArray (classe)"
ms.assetid: 92d7dd56-ec58-4b8c-88ba-9c903668b687
caps.latest.revision: 11
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 11
---
# Platform::WriteOnlyArray (classe)
Rappresenta una matrice unidimensionale usata come parametro di input quando il chiamante passa una matrice che verrà riempita dal metodo.  
  
 Questa classe di riferimento viene dichiarata come privata in vccorlib.h, di conseguenza non viene generata nei metadati ed è supportata solo da C\+\+. Questa classe è destinata a essere usata solo come parametro di input che riceve una matrice allocata dal chiamante. Non può essere costruita dal codice utente. Consente al metodo C\+\+ di scrivere direttamente in una matrice, un modello noto come *FillArray*. Per altre informazioni, vedere [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
## Sintassi  
  
```cpp  
private ref class WriteOnlyArray<T, 1>  
```  
  
## Membri  
  
### Metodi pubblici  
 Questi metodi presentano accessibilità interna, ovvero sono accessibili solo all'interno dell'app o del componente C\+\+.  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[WriteOnlyArray::begin \(metodo\)](../cppcx/writeonlyarray-begin-method.md)|Iteratore che punta al primo elemento della matrice|  
|[Proprietà WriteOnlyArray::Data](../cppcx/writeonlyarray-data-property.md)|Puntatore al buffer di dati.|  
|[WriteOnlyArray::end \(metodo\)](../cppcx/writeonlyarray-end-method.md)|Iteratore che punta all'elemento dopo l'ultimo elemento nella matrice.|  
|[Proprietà WriteOnlyArray::FastPass](../cppcx/writeonlyarray-fastpass-property.md)|Indica se la matrice può utilizzare il meccanismo FastPass, ovvero un'ottimizzazione eseguita in modo trasparente dal sistema. Non usarla nel codice|  
|[Proprietà WriteOnlyArray::Length](../cppcx/writeonlyarray-length-property.md)|Restituisce il numero di elementi nella matrice.|  
|[WriteOnlyArray::set \(funzione\)](../cppcx/writeonlyarray-set-function.md)|Imposta l'elemento specificato sul valore specificato.|  
  
## Gerarchia di ereditarietà  
 `WriteOnlyArray`  
  
## Requisiti  
 Opzione del compilatore: **\/ZW**  
  
 **Metadati:** Platform.winmd  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)   
 [Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/5b7251e6-4271-4f13-af80-c1cf5b1489bf)