---
title: FreeLibrary e AfxFreeLibrary | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- FreeLibrary
- AfxFreeLibrary
dev_langs:
- C++
helpviewer_keywords:
- extension DLLs [C++], unloading
- AfxFreeLibrary method
- unloading DLLs
- FreeLibrary method
- DLLs [C++], linking
- explicit linking [C++]
- DLLs [C++], unloading
ms.assetid: 4a48d290-3971-43e9-8e97-ba656cd0c8f8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1e6c7e498100a60a3d4c592c343cc86b5ee0a0ea
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713362"
---
# <a name="freelibrary-and-afxfreelibrary"></a>FreeLibrary e AfxFreeLibrary

I processi che si collegano in modo esplicito a una chiamata DLL di [FreeLibrary](https://msdn.microsoft.com/library/windows/desktop/ms683152(v=vs.85).aspx) corretto quando il modulo di DLL non è più necessario. Questa funzione decrementa il conteggio di riferimenti del modulo e, se il conteggio dei riferimenti è zero, ne rimuove dallo spazio degli indirizzi del processo.

In un'applicazione MFC, utilizzare [AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary) invece di `FreeLibrary` scaricare una DLL di estensione MFC. L'interfaccia (prototipo di funzione) per `AfxFreeLibrary` equivale a `FreeLibrary`.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Come collegare in modo implicito in una DLL](../build/linking-an-executable-to-a-dll.md#linking-implicitly)

- [Determinare quale metodo di collegamento da utilizzare](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)

- [GetProcAddress](../build/getprocaddress.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)<br/>
[FreeLibrary](https://msdn.microsoft.com/library/windows/desktop/ms683152(v=vs.85).aspx)
[AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary)