---
title: Introduzione a ATL
ms.custom: index-page
ms.date: 11/04/2016
helpviewer_keywords:
- COM objects, creating in ATL
- ATL
ms.assetid: 77f565e8-c4ec-4a80-af4b-7278fcfe5c98
ms.openlocfilehash: 8c2dcab962cd9863acf0f8e7070727f3b18117d5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62261917"
---
# <a name="introduction-to-atl"></a>Introduzione a ATL

ATL è Active Template Library, un set di C++ in base al modello di classi con cui è possibile creare facilmente piccolo, veloce oggetti modello COM (Component Object). Ha un supporto speciale per le principali funzionalità COM tra cui: implementazioni predefinite di [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown), [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory), [IClassFactory2](/windows/desktop/api/ocidl/nn-ocidl-iclassfactory2), e `IDispatch`; duale interfacce. interfacce di enumeratore COM standard. punti di connessione. interfacce tear-off; e i controlli ActiveX.

Codice ATL è utilizzabile per creare gli oggetti a thread singolo, gli oggetti del modello di apartment, gli oggetti del modello a thread libero o gli oggetti a thread libero e modello di apartment.

Gli argomenti trattati in questa sezione includono:

- Come un [libreria di modelli](../atl/using-a-template-library.md) è diverso da una libreria standard.

- Quello che sai [possono e non possono eseguire con ATL](../atl/scope-of-atl.md).

- [Suggerimenti per la scelta tra ATL e MFC](../atl/recommendations-for-choosing-between-atl-and-mfc.md).

## <a name="see-also"></a>Vedere anche

[Introduzione a COM e a ATL](../atl/introduction-to-com-and-atl.md)
