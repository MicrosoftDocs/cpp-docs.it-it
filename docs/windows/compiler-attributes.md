---
title: Attributi del compilatore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 1c1ce698992f1f34434a476be83da6f4697f619c
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44316536"
---
# <a name="compiler-attributes"></a>Attributi del compilatore

Gli attributi del compilatore forniscono un'ampia gamma di funzionalità.

|Attributo|Descrizione|
|---------------|-----------------|
|[emitidl](../windows/emitidl.md)|Determina se tutti gli attributi IDL successivi verranno elaborati e inseriti nel file con estensione IDL generato.|
|[event_receiver](../windows/event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](../windows/event-source.md)|Crea un'origine evento.|
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[Implementa](../windows/implements-cpp.md)|Specifica le interfacce dispatch che vengono forzate per essere membri della coclasse IDL.|
|[importidl](../windows/importidl.md)|Inserisce il file con estensione idl specificato nel file con estensione IDL generato.|
|[importlib](../windows/importlib.md)|Rende i tipi già compilati in un'altra libreria dei tipi disponibili per la libreria dei tipi da creare.|
|[includelib](../windows/includelib-cpp.md)|Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.|
|[library_block](../windows/library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[no_injected_text](../windows/no-injected-text.md)|Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.|
|[satype](../windows/satype.md)|Specifica il tipo di dati di `SAFEARRAY`.|
|[version](../windows/version-cpp.md)|Identifica una particolare versione tra più versioni di un'interfaccia o classe.|

## <a name="see-also"></a>Vedere anche

[Attributi per gruppo](../windows/attributes-by-group.md)