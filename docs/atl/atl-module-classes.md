---
title: Classi di modulo ATL
ms.date: 11/04/2016
helpviewer_keywords:
- CComModule class, what's changed
- ATL, module classes
- module classes
ms.assetid: fd75382d-c955-46ba-a38e-37728b7fa00f
ms.openlocfilehash: 2b72cac0da06b70a40e01fcc75da52f1678f3f64
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317377"
---
# <a name="atl-module-classes"></a>Classi di modulo ATL

In questo argomento vengono illustrate le classi di modulo che erano nuove in ATL 7.0.

## <a name="ccommodule-replacement-classes"></a>Classi di sostituzione CComModuleCComModule Replacement Classes

Nelle versioni precedenti `CComModule`di ATL veniva utilizzato . In ATL 7.0, la funzionalità viene sostituita da diverse classi:In ATL 7.0, `CComModule` functionality is replaced by several classes:

- [CAtlBaseModule (Modulo CAtlBase)](../atl/reference/catlbasemodule-class.md) Contiene le informazioni richieste dalla maggior parte delle applicazioni che utilizzano ATL. Contiene l'HINSTANCE del modulo e l'istanza della risorsa.

- [Modulo CAtlCom](../atl/reference/catlcommodule-class.md) Contiene le informazioni richieste dalle classi COM in ATL.

- [CAtlWinModule](../atl/reference/catlwinmodule-class.md) Contiene le informazioni richieste dalle classi di windowing in ATL.

- [CAtlDebugInterfacesModulo](../atl/reference/catldebuginterfacesmodule-class.md) Contiene il supporto per il debug dell'interfaccia.

- [CAtlModule (modulo CAtlModule)](../atl/reference/catlmodule-class.md) Le `CAtlModule`classi derivate di seguito vengono personalizzate per contenere le informazioni necessarie in un particolare tipo di applicazione. La maggior parte dei membri di queste classi può essere sottoposta a override:Most members in these classes can be overridden:

  - [CAtlDllModuleT](../atl/reference/catldllmodulet-class.md) Utilizzato nelle applicazioni DLL. Fornisce il codice per le esportazioni standard.

  - [CAtlExeModuleT (modulo CAtlExe)](../atl/reference/catlexemodulet-class.md) Utilizzato nelle applicazioni EXE. Fornisce il codice necessario in un file EXE.

  - [CAtlServiceModuleT (modulo CAtlServiceModuleT)](../atl/reference/catlservicemodulet-class.md) Fornisce supporto per la creazione di servizi Windows NT e Windows 2000.

`CComModule`è ancora disponibile per la compatibilità con le versioni precedenti.

## <a name="reasons-for-distributing-ccommodule-functionality"></a>Motivi per la distribuzione della funzionalità CComModule

La funzionalità `CComModule` di è stata distribuita in diverse nuove classi per i seguenti motivi:

- Rendere la `CComModule` funzionalità in granulare.

   Il supporto per COM, windowing, debug delle interfacce e funzionalità specifiche dell'applicazione (DLL o EXE) è ora in classi separate.

- Dichiarare automaticamente l'istanza globale di ognuno di questi moduli.

   Un'istanza globale delle classi di modulo necessarie è collegata al progetto.

- Rimuovere la necessità di chiamare i metodi Init e Term.

   I metodi Init e Term sono stati spostati nei costruttori e nei distruttori per le classi del modulo; non è più necessario chiamare Init e Term.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[Cenni preliminari sulle classi](../atl/atl-class-overview.md)
