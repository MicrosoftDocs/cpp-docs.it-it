---
title: Automazione in una DLL
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], Automation
- Automation [C++], DLLs
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
ms.openlocfilehash: dedc832d6726dccf8c0c2e88f9f4d5c67590c1c2
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220925"
---
# <a name="automation-in-a-dll"></a>Automazione in una DLL

Quando si sceglie l'opzione automazione nella creazione guidata DLL MFC, la procedura guidata offre le funzionalità seguenti:

- Linguaggio di descrizione dell'oggetto iniziale (. (FAD) file

- Una direttiva include nel file STDAFX. h per AFXOLE. h

- Implementazione della `DllGetClassObject` funzione, che chiama la funzione **AfxDllGetClassObject**

- Implementazione della `DllCanUnloadNow` funzione, che chiama la funzione **AfxDllCanUnloadNow**

- Implementazione della `DllRegisterServer` funzione, che chiama la funzione [COleObjectFactory:: UpdateRegistryAll](../mfc/reference/coleobjectfactory-class.md#updateregistryall)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Server di automazione](../mfc/automation-servers.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
