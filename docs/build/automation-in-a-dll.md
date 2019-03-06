---
title: Automazione in una DLL
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], Automation
- Automation [C++], DLLs
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
ms.openlocfilehash: 3cc5ca456842707a2c3de7b2fd74abc73d9a5307
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57422286"
---
# <a name="automation-in-a-dll"></a>Automazione in una DLL

Quando si sceglie l'opzione di automazione nella creazione guidata DLL MFC, la procedura guidata offre i seguenti elementi:

- Un linguaggio di descrizione oggetto starter (. File ODL)

- Una direttiva include nel file stdafx.

- Un'implementazione del `DllGetClassObject` funzione che chiama il **AfxDllGetClassObject** (funzione)

- Un'implementazione del `DllCanUnloadNow` funzione che chiama il **AfxDllCanUnloadNow** (funzione)

- Un'implementazione del `DllRegisterServer` funzione che chiama il [COleObjectFactory:: UpdateRegistryAll](../mfc/reference/coleobjectfactory-class.md#updateregistryall) (funzione)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Server di automazione](../mfc/automation-servers.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)
