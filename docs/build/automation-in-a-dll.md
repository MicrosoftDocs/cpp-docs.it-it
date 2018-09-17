---
title: Automazione in una DLL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DLLs [C++], Automation
- Automation [C++], DLLs
ms.assetid: 2728ecd1-14e2-4ae0-a946-e749e11dbb74
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cde5d0e400f1bdd3f5a851d47da581380273b04a
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45717781"
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