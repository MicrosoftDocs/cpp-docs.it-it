---
title: "Stand-Alone Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "standalone attributes"
  - "attributes [C++], standalone"
ms.assetid: 0d72e84e-236c-43b3-ac9a-d9b91fcd6794
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stand-Alone Attributes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un attributo autonomo non funziona tramite la parola chiave C\+\+ ma è più simile a una riga di codice.  Le istruzioni autonomi di attributo richiedono un punto e virgola alla fine della riga.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[cpp\_quote](../windows/cpp-quote.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file di intestazione generato.|  
|[custom](../windows/custom-cpp.md)|Consente di definire il proprio attributo.|  
|[db\_command](../windows/db-command.md)|Crea un comando OLE DB.|  
|[emitidl](../windows/emitidl.md)|Determina se tutti gli attributi successivi IDL saranno elaborati e inseriti nel file generato con estensione .idl.|  
|[idl\_module](../windows/idl-module.md)|Specifica un punto di ingresso in una DLL.|  
|[idl\_quote](../windows/idl-quote.md)|Consente di utilizzare i costrutti di IDL non sono supportati nella versione corrente di Visual C\+\+ e li sufficiente passare al file generato con estensione .idl.|  
|[import](../windows/import.md)|Specifica un altro file IDL, di .odl, o h contenente le definizioni che si desidera fare riferimento nel file principale IDL.|  
|[importidl](../windows/importidl.md)|Inserisce il file specificato con estensione .idl nel file generato IDL|  
|[importlib](../windows/importlib.md)|Rende i tipi che sono già stati compilati in un'altra libreria dei tipi disponibile nella libreria dei tipi creata.|  
|[importare](../windows/include-cpp.md)|Specifica uno o più file di intestazione da includere nel file generato con estensione .idl.|  
|[includelib](../windows/includelib-cpp.md)|Genera un file con estensione h o IDL da includere nel file generato con estensione .idl.|  
|[library\_block](../windows/library-block.md)|Inserisce un costrutto nel blocco di libreria del file IDL.|  
|[modulo](../windows/module-cpp.md)|Definisce il blocco di libreria nel file IDL.|  
|[no\_injected\_text](../windows/no-injected-text.md)|Impedisce il compilatore di inserire il codice riportato di seguito all'utilizzo dell'attributo.|  
|[pragma](../windows/pragma.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file generato con estensione .idl.|  
  
## Vedere anche  
 [Attributes by Usage](../windows/attributes-by-usage.md)