---
title: Classi di modulo ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CComModule class, what's changed
- ATL, module classes
- module classes
ms.assetid: fd75382d-c955-46ba-a38e-37728b7fa00f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7e067b1d72b80950b4ed33fbae8cac7333ac0438
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50083076"
---
# <a name="atl-module-classes"></a>Classi di modulo ATL

In questo argomento vengono illustrate le classi che sono state introdotte in ATL 7.0.

## <a name="ccommodule-replacement-classes"></a>Classi di sostituzione CComModule

Le versioni precedenti di ATL usato `CComModule`. In ATL 7.0 `CComModule` funzionalità viene sostituita da diverse classi:

- [CAtlBaseModule](../atl/reference/catlbasemodule-class.md) contiene le informazioni necessarie per la maggior parte delle applicazioni che usano ATL. Contiene l'HINSTANCE del modulo e l'istanza della risorsa.

- [CAtlComModule](../atl/reference/catlcommodule-class.md) contiene le informazioni necessarie per le classi COM in ATL.

- [CAtlWinModule](../atl/reference/catlwinmodule-class.md) contiene le informazioni necessarie per le classi di windowing in ATL.

- [CAtlDebugInterfacesModule](../atl/reference/catldebuginterfacesmodule-class.md) include il supporto per il debug dell'interfaccia.

- [CAtlModule](../atl/reference/catlmodule-class.md) quanto segue `CAtlModule`-le classi derivate sono personalizzate per contenere le informazioni necessarie in un determinato tipo di applicazione. La maggior parte dei membri di queste classi possono eseguire l'override:

   - [CAtlDllModuleT](../atl/reference/catldllmodulet-class.md) usati nelle applicazioni di DLL. Fornisce il codice per le esportazioni standard.

   - [CAtlExeModuleT](../atl/reference/catlexemodulet-class.md) usati nelle applicazioni EXE. Fornisce il codice necessario in un file EXE.

   - [CAtlServiceModuleT](../atl/reference/catlservicemodulet-class.md) fornisce il supporto per creare servizi di Windows 2000 e Windows NT.

`CComModule` è ancora disponibile per compatibilità con le versioni precedenti.

## <a name="reasons-for-distributing-ccommodule-functionality"></a>Vantaggi della distribuzione delle funzionalità CComModule

La funzionalità di `CComModule` sono state distribuite in diverse nuove classi per i motivi seguenti:

- Verificare la funzionalità di `CComModule` granulare.

   Supporto per COM, windowing, il debug dell'interfaccia e le funzionalità (DLL o EXE) specifico dell'applicazione è ora in classi separate.

- Dichiarare automaticamente l'istanza globale della ognuno di questi moduli.

   Un'istanza globale delle classi di modulo necessario è collegata al progetto.

- Rimuovere la necessità di chiamare i metodi Init e termini.

   Metodi Init e termini sono spostati nei costruttori e distruttori per le classi di modulo; non è più necessario chiamare Init e termine.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Panoramica della classe](../atl/atl-class-overview.md)

