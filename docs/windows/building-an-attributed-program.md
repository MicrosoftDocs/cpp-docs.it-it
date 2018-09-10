---
title: Creazione di un programma con attributi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tlb files [C++]
- MIDL
- MIDL, linker output
- IDL files [C++]
- building type libraries and .idl files
- .tlb files [C++]
- .idl files [C++]
- type libraries, linker options for building
ms.assetid: 04997b5f-bf2c-46ec-b868-c4adebbef5f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2fc148478433106eabdb2bc57ef7bb6c91d13601
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44315293"
---
# <a name="building-an-attributed-program"></a>Compilazione di un programma con attributi

Dopo aver inserito gli attributi di Visual C++ nel codice sorgente, è possibile il compilatore Visual C++ per produrre un file con estensione idl e libreria dei tipi per l'utente. Le seguenti opzioni del linker consentono di generare file con estensione tlb e IDL:

- [/IDLOUT](../build/reference/idlout-name-midl-output-files.md)

- [/IGNOREIDL](../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)

- [/ MIDL](../build/reference/midl-specify-midl-command-line-options.md)

- [/TLBOUT](../build/reference/tlbout-name-dot-tlb-file.md)

Alcuni progetti contengono più file con estensione idl indipendenti. Questi vengono usati per produrre due o più file con estensione tlb e, facoltativamente, associarle nel blocco di risorse. Questo scenario non è attualmente supportato in Visual C++.

Inoltre, il linker di Visual C++ restituirà tutte le informazioni sugli attributi IDL correlati in un unico file MIDL. Non vi sarà alcun modo per generare due librerie dei tipi da un singolo progetto.

## <a name="see-also"></a>Vedere anche

[Concetti](../windows/attributed-programming-concepts.md)