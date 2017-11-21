---
title: Attributi autonomi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- standalone attributes
- attributes [C++], standalone
ms.assetid: 0d72e84e-236c-43b3-ac9a-d9b91fcd6794
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 17009c1e9c1f7a771b717a96d1aadc4a680fe78f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="stand-alone-attributes"></a>Attributi autonomi
Un attributo autonomo non funziona su una parola chiave C++, ma è più simile a una riga di codice. Le istruzioni di un attributo autonomo richiedono un punto e virgola alla fine della riga.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[cpp_quote](../windows/cpp-quote.md)|Genera la stringa specificata, senza virgolette, nel file di intestazione generato.|  
|[personalizzato](../windows/custom-cpp.md)|Consente di definire un attributo personalizzato.|  
|[db_command](../windows/db-command.md)|Crea un comando OLE DB.|  
|[emitidl](../windows/emitidl.md)|Determina se tutti gli attributi IDL successive saranno elaborati e inseriti nel file IDL generato.|  
|[idl_module](../windows/idl-module.md)|Specifica un punto di ingresso in una DLL.|  
|[idl_quote](../windows/idl-quote.md)|Consente di utilizzare costrutti IDL che non sono supportati nella versione corrente di Visual C++ e farli pass-through per il file IDL generato.|  
|[import](../windows/import.md)|Specifica un altro file IDL o ODL. h che contiene le definizioni di che fare riferimento dal file con estensione idl principale.|  
|[importidl](../windows/importidl.md)|Inserisce il file IDL specificato nel file IDL generato|  
|[importlib](../windows/importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|  
|[include](../windows/include-cpp.md)|Specifica uno o più file di intestazione da includere nel file IDL generato.|  
|[includelib](../windows/includelib-cpp.md)|Fa sì che un file IDL o h da includere nel file IDL generato.|  
|[library_block](../windows/library-block.md)|Inserisce un costrutto di blocco di libreria del file IDL.|  
|[modulo](../windows/module-cpp.md)|Definisce il blocco di libreria nel file IDL.|  
|[no_injected_text](../windows/no-injected-text.md)|Impedisce al compilatore di codice in seguito a uso dell'attributo.|  
|[pragma](../windows/pragma.md)|Genera la stringa specificata, senza virgolette, nel file IDL generato.|  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi per utilizzo](../windows/attributes-by-usage.md)