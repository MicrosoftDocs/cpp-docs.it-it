---
title: "Errore del compilatore C3172 | Microsoft Docs"
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
  - "C3172"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3172"
ms.assetid: 1834e2fd-6036-4c33-aff2-b51bc7c99441
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3172
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome\_modulo': impossibile specificare attributi idl\_module diversi nello stesso progetto  
  
 In due file di una compilazione sono stati rilevati attributi [idl\_module](../../windows/idl-module.md) con lo stesso nome, ma con parametri `dllname` o `version` diversi.  È possibile specificare un solo attributo `idl_module` univoco per ogni compilazione.  
  
 Attributi `idl_module` identici possono essere specificati in più file di codice sorgente.  
  
 Se, ad esempio, vengono rilevati i seguenti attributi `idl_module`:  
  
```  
// C3172.cpp  
[module(name="MyMod")];  
[ idl_module(name="x", dllname="file.dll", version="1.1") ];  
int main() {}  
```  
  
 quindi  
  
```  
// C3172b.cpp  
// compile with: C3172.cpp  
// C3172 expected  
[ idl_module(name="x", dllname="file.dll", version="1.0") ];  
```  
  
 verrà generato l'errore C3172 \(si noti che i valori di versione sono diversi\).