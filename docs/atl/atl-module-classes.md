---
description: 'Altre informazioni su: classi del modulo ATL'
title: Classi di modulo ATL
ms.date: 11/04/2016
helpviewer_keywords:
- CComModule class, what's changed
- ATL, module classes
- module classes
ms.assetid: fd75382d-c955-46ba-a38e-37728b7fa00f
ms.openlocfilehash: 16c38a6a38f4179e5846a445bd9573e7dc4500f5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163301"
---
# <a name="atl-module-classes"></a>Classi di modulo ATL

In questo argomento vengono illustrate le classi di modulo nuove in ATL 7,0.

## <a name="ccommodule-replacement-classes"></a>Classi di sostituzione CComModule

Sono state usate versioni precedenti di ATL `CComModule` . In ATL 7,0, `CComModule` la funzionalità viene sostituita da diverse classi:

- [CAtlBaseModule](../atl/reference/catlbasemodule-class.md) Contiene le informazioni richieste dalla maggior parte delle applicazioni che utilizzano ATL. Contiene il HINSTANCE del modulo e l'istanza della risorsa.

- [CAtlComModule](../atl/reference/catlcommodule-class.md) Contiene le informazioni richieste dalle classi COM in ATL.

- [CAtlWinModule](../atl/reference/catlwinmodule-class.md) Contiene le informazioni richieste dalle classi finestra di ATL.

- [CAtlDebugInterfacesModule](../atl/reference/catldebuginterfacesmodule-class.md) Contiene il supporto per il debug dell'interfaccia.

- [CAtlModule](../atl/reference/catlmodule-class.md) Le seguenti `CAtlModule` classi derivate da sono personalizzate per contenere le informazioni necessarie in un particolare tipo di applicazione. La maggior parte dei membri di queste classi può essere sottoposta a override:

  - [CAtlDllModuleT](../atl/reference/catldllmodulet-class.md) Utilizzato nelle applicazioni DLL. Fornisce il codice per le esportazioni standard.

  - [CAtlExeModuleT](../atl/reference/catlexemodulet-class.md) Utilizzato nelle applicazioni EXE. Fornisce il codice necessario in un file EXE.

  - [Funzione CAtlServiceModuleT](../atl/reference/catlservicemodulet-class.md) Fornisce supporto per la creazione di servizi Windows NT e Windows 2000.

`CComModule` è ancora disponibile per compatibilità con le versioni precedenti.

## <a name="reasons-for-distributing-ccommodule-functionality"></a>Motivi per la distribuzione della funzionalità CComModule

La funzionalità di `CComModule` è stata distribuita in diverse nuove classi per i motivi seguenti:

- Rendere la funzionalità `CComModule` granulare.

   Il supporto per le funzionalità COM, Windowing, di debug dell'interfaccia e specifiche dell'applicazione (DLL o EXE) è ora in classi separate.

- Dichiarare automaticamente l'istanza globale di ognuno di questi moduli.

   Un'istanza globale delle classi di moduli obbligatorie è collegata al progetto.

- Rimuovere la necessità di chiamare i metodi init e Term.

   I metodi init e Term sono stati spostati nei costruttori e nei distruttori per le classi del modulo. non è più necessario chiamare init e Term.

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Cenni preliminari sulle classi](../atl/atl-class-overview.md)
