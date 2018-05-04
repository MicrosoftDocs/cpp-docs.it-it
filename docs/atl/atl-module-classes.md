---
title: Classi di modulo ATL | Documenti Microsoft
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
ms.openlocfilehash: 777d81fbe1de48289863fda00591a5328b40cf4c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atl-module-classes"></a>Classi di modulo ATL
In questo argomento vengono illustrate le classi che sono state introdotte in ATL 7.0.  
  
## <a name="ccommodule-replacement-classes"></a>Classi sostitutive di CComModule  
 Le versioni precedenti di ATL utilizzato `CComModule`. In ATL 7.0 `CComModule` funzionalità viene sostituita da diverse classi:  
  
-   [CAtlBaseModule](../atl/reference/catlbasemodule-class.md) contiene le informazioni necessarie per la maggior parte delle applicazioni che utilizzano ATL. L'HINSTANCE del modulo e l'istanza di risorsa.  
  
-   [CAtlComModule](../atl/reference/catlcommodule-class.md) contiene le informazioni necessarie per le classi COM in ATL.  
  
-   [CAtlWinModule](../atl/reference/catlwinmodule-class.md) contiene le informazioni necessarie per le classi di finestre in ATL.  
  
-   [CAtlDebugInterfacesModule](../atl/reference/catldebuginterfacesmodule-class.md) contiene il supporto per il debug di interfaccia.  
  
-   [CAtlModule](../atl/reference/catlmodule-class.md) seguenti `CAtlModule`-classi derivate personalizzate per contenere le informazioni necessarie in un particolare tipo di applicazione. La maggior parte dei membri di queste classi possono essere sottoposto a override:  
  
    -   [CAtlDllModuleT](../atl/reference/catldllmodulet-class.md) usati nelle applicazioni di DLL. Fornisce il codice per le esportazioni standard.  
  
    -   [CAtlExeModuleT](../atl/reference/catlexemodulet-class.md) usati nelle applicazioni EXE. Fornisce il codice è obbligatorio in un file EXE.  
  
    -   [CAtlServiceModuleT](../atl/reference/catlservicemodulet-class.md) fornisce il supporto per creare servizi Windows 2000 e Windows NT.  
  
 `CComModule` è ancora disponibile per compatibilità con le versioni precedenti.  
  
## <a name="reasons-for-distributing-ccommodule-functionality"></a>Motivi per la distribuzione delle funzionalità di CComModule.  
 La funzionalità di `CComModule` è stato distribuito in diverse nuove classi per i motivi seguenti:  
  
-   Verificare la funzionalità di `CComModule` granulare.  
  
     Supporto per COM, windowing, il debug delle interfacce e le funzionalità (DLL o EXE) specifico dell'applicazione è in classi separate.  
  
-   Dichiarare automaticamente istanza globale di ciascuno di questi moduli.  
  
     Il progetto è collegata un'istanza globale delle classi di modulo obbligatorio.  
  
-   Rimuovere la necessità di chiamare i metodi Init e termine.  
  
     Metodi Init e Term sono stati spostati nei costruttori e distruttori per le classi di modulo; non è più necessario chiamare Init e termine.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [Cenni preliminari sulla classe](../atl/atl-class-overview.md)

