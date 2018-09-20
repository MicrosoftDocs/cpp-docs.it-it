---
title: Attributi autonomi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- standalone attributes
- attributes [C++/CLI], standalone
ms.assetid: 0d72e84e-236c-43b3-ac9a-d9b91fcd6794
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1c44223dad2ac4d6306bf3896cd8ec7be84a5a2b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407764"
---
# <a name="stand-alone-attributes"></a>Attributi autonomi
Un attributo autonomo non agisce su una parola chiave C++, ma è più simile a una riga di codice. Le istruzioni di attributi autonomi richiedono un punto e virgola alla fine della riga.
  
|Attributo|Descrizione|
|---------------|-----------------|
|[cpp_quote](../windows/cpp-quote.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file di intestazione generato.|
|[custom](../windows/custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[db_command](../windows/db-command.md)|Crea un comando OLE DB.|
|[emitidl](../windows/emitidl.md)|Determina se tutti gli attributi IDL successivi verranno elaborati e inseriti nel file con estensione IDL generato.|
|[idl_module](../windows/idl-module.md)|Specifica un punto di ingresso in una DLL.|
|[idl_quote](../windows/idl-quote.md)|Consente di usare costrutti IDL che non sono supportati nella versione corrente di Visual C++ e chiedere di pass-through per il file con estensione IDL generato.|
|[import](../windows/import.md)|Specifica un altro file con estensione idl o ODL. h che contiene le definizioni che si desidera fare riferimento dal file con estensione idl principale.|
|[importidl](../windows/importidl.md)|Inserisce il file con estensione idl specificato nel file con estensione IDL generato|
|[importlib](../windows/importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[include](../windows/include-cpp.md)|Specifica uno o più file di intestazione da includere nel file IDL generato.|
|[includelib](../windows/includelib-cpp.md)|Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.|
|[library_block](../windows/library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[modulo](../windows/module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[no_injected_text](../windows/no-injected-text.md)|Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.|
|[pragma](../windows/pragma.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file con estensione IDL generato.|
  
## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](../windows/attributes-by-usage.md)