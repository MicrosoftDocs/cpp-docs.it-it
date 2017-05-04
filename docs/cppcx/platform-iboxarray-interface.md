---
title: "Interfaccia Platform::IBoxArray | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::IBoxArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::IBoxArray"
ms.assetid: 6cd82c9e-4230-4147-9edb-7a652875dbf1
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 5
---
# Interfaccia Platform::IBoxArray
`IBoxArray` è il wrapper per le matrici di tipi di valore passati tramite l'interfaccia ABI \(Application Binary Interface\) o archiviati in raccolte di elementi `Platform::Object^` come quelli nei controlli XAML.  
  
## Sintassi  
  
```cpp  
template <typename T>  
interface class IBoxArray  
```  
  
#### Parametri  
 `T`  
 Tipo di valore boxed in ogni elemento della matrice.  
  
## Note  
 `IBoxArray` è il nome di [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\) per `Windows::Foundation::IReferenceArray`.  
  
## Membri  
 L'interfaccia `IBoxArray` eredita dall'interfaccia `IValueType`.`IBoxArray` dispone anche di questi membri:  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|Valore|Restituisce la matrice di tipo unboxed archiviata in precedenza in questa istanza di `IBoxArray`.|  
  
## Vedere anche  
 [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)