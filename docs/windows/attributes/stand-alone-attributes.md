---
title: Attributi autonomi (COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
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
ms.openlocfilehash: 0df8cb1def78e3a7b564f268eb1b3b0a2069fb11
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50062847"
---
# <a name="stand-alone-attributes"></a>Attributi autonomi

Un attributo autonomo non agisce su una parola chiave C++, ma è più simile a una riga di codice. Le istruzioni di attributi autonomi richiedono un punto e virgola alla fine della riga.

## <a name="stand-alone-attribute-list"></a>Elenco di attributi autonomi

|Attributo|Descrizione|
|---------------|-----------------|
|[cpp_quote](cpp-quote.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file di intestazione generato.|
|[custom](custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[db_command](db-command.md)|Crea un comando OLE DB.|
|[emitidl](emitidl.md)|Determina se tutti gli attributi IDL successivi verranno elaborati e inseriti nel file con estensione IDL generato.|
|[idl_module](idl-module.md)|Specifica un punto di ingresso in una DLL.|
|[idl_quote](idl-quote.md)|Consente di usare costrutti IDL che non sono supportati nella versione corrente di Visual C++ e chiedere di pass-through per il file con estensione IDL generato.|
|[import](import.md)|Specifica un altro file con estensione idl o ODL. h che contiene le definizioni che si desidera fare riferimento dal file con estensione idl principale.|
|[importidl](importidl.md)|Inserisce il file con estensione idl specificato nel file con estensione IDL generato|
|[importlib](importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[include](include-cpp.md)|Specifica uno o più file di intestazione da includere nel file IDL generato.|
|[includelib](includelib-cpp.md)|Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.|
|[library_block](library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[module](module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[no_injected_text](no-injected-text.md)|Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.|
|[pragma](pragma.md)|Genera la stringa specificata, senza i caratteri virgoletta, nel file con estensione IDL generato.|

## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](attributes-by-usage.md)