---
description: 'Altre informazioni su: automazione in una DLL'
title: Automazione in una DLL
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], Automation
- Automation [C++], DLLs
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
ms.openlocfilehash: e0d6d0beec71f3994f6e726c6946b2069d1b081b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163236"
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

## <a name="see-also"></a>Vedi anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
