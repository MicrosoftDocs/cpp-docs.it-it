---
title: Attributi del compilatore (C++ COM)
ms.date: 10/02/2018
helpviewer_keywords:
- cl.exe compiler, attributes
- attributes [C++/CLI], compiler
ms.assetid: 53cd9bee-1521-48ec-b171-80feac2096cc
ms.openlocfilehash: ea4d3119a640c0642664210384c297e011104411
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030818"
---
# <a name="compiler-attributes"></a>Attributi del compilatore

Gli attributi del compilatore forniscono un'ampia gamma di funzionalità.

|Attributo|Descrizione|
|---------------|-----------------|
|[emitidl](emitidl.md)|Determina se tutti gli attributi IDL successivi verranno elaborati e inseriti nel file con estensione IDL generato.|
|[event_receiver](event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](event-source.md)|Crea un'origine evento.|
|[esportazione](export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[implementa](implements-cpp.md)|Specifica le interfacce dispatch che vengono forzate per essere membri della coclasse IDL.|
|[importidl](importidl.md)|Inserisce il file con estensione idl specificato nel file con estensione IDL generato.|
|[importlib](importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[includelib](includelib-cpp.md)|Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.|
|[library_block](library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[no_injected_text](no-injected-text.md)|Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.|
|[satype](satype.md)|Specifica il tipo di dati di `SAFEARRAY`.|
|[version](version-cpp.md)|Identifica una particolare versione tra più versioni di un'interfaccia o classe.|

## <a name="see-also"></a>Vedere anche

[Attributi per gruppo](attributes-by-group.md)