---
title: Attributi autonomi (C++ com)
ms.date: 10/02/2018
helpviewer_keywords:
- standalone attributes
- attributes [C++/CLI], standalone
ms.assetid: 0d72e84e-236c-43b3-ac9a-d9b91fcd6794
ms.openlocfilehash: a7df91bbb1c6929b08d8cd867be9f13ce0c35b91
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80166171"
---
# <a name="stand-alone-attributes"></a>Attributi autonomi

Un attributo autonomo non agisce su una C++ parola chiave ma è più simile a una riga di codice. Le istruzioni per gli attributi autonomi richiedono un punto e virgola alla fine della riga.

## <a name="stand-alone-attribute-list"></a>Elenco di attributi autonomi

|Attributo|Descrizione|
|---------------|-----------------|
|[cpp_quote](cpp-quote.md)|Genera la stringa specificata, senza virgolette, nel file di intestazione generato.|
|[custom](custom-cpp.md)|Consente di definire un attributo personalizzato.|
|[db_command](db-command.md)|Crea un comando OLE DB.|
|[emitidl](emitidl.md)|Determina se tutti gli attributi IDL successivi verranno elaborati e inseriti nel file con estensione IDL generato.|
|[idl_module](idl-module.md)|Specifica un punto di ingresso in una DLL.|
|[idl_quote](idl-quote.md)|Consente di utilizzare costrutti IDL non supportati nella versione corrente di Visual C++ e di passare al file con estensione IDL generato.|
|[import](import.md)|Specifica un altro file. idl,. FAD o. h contenente le definizioni a cui si vuole fare riferimento dal file Main. idl.|
|[importidl](importidl.md)|Inserisce il file idl specificato nel file IDL generato|
|[importlib](importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[include](include-cpp.md)|Specifica uno o più file di intestazione da includere nel file con estensione IDL generato.|
|[includelib](includelib-cpp.md)|Comporta l'inclusione di un file IDL o h nel file IDL generato.|
|[library_block](library-block.md)|Inserisce un costrutto all'interno del blocco di libreria del file IDL.|
|[module](module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[no_injected_text](no-injected-text.md)|Impedisce al compilatore di inserire codice come risultato dell'utilizzo dell'attributo.|
|[pragma](pragma.md)|Genera la stringa specificata, senza virgolette, nel file con estensione IDL generato.|

## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](attributes-by-usage.md)
