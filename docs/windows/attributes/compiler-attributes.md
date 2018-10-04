---
title: Attributi del compilatore (COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, attributes
- attributes [C++/CLI], compiler
ms.assetid: 53cd9bee-1521-48ec-b171-80feac2096cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9f0483676fd0dd60d893f8931511083d369539dd
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791192"
---
# <a name="compiler-attributes"></a>Attributi del compilatore

Gli attributi del compilatore forniscono un'ampia gamma di funzionalità.

|Attributo|Descrizione|
|---------------|-----------------|
|[emitidl](emitidl.md)|Determina se tutti gli attributi IDL successivi verranno elaborati e inseriti nel file con estensione IDL generato.|
|[event_receiver](event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](event-source.md)|Crea un'origine evento.|
|[export](export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[Implementa](implements-cpp.md)|Specifica le interfacce dispatch che vengono forzate per essere membri della coclasse IDL.|
|[importidl](importidl.md)|Inserisce il file con estensione idl specificato nel file con estensione IDL generato.|
|[importlib](importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[includelib](includelib-cpp.md)|Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.|
|[library_block](library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[no_injected_text](no-injected-text.md)|Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.|
|[satype](satype.md)|Specifica il tipo di dati di `SAFEARRAY`.|
|[version](version-cpp.md)|Identifica una particolare versione tra più versioni di un'interfaccia o classe.|

## <a name="see-also"></a>Vedere anche

[Attributi per gruppo](attributes-by-group.md)