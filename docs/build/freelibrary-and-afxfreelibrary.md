---
title: FreeLibrary e AfxFreeLibrary
ms.date: 11/04/2016
f1_keywords:
- FreeLibrary
- AfxFreeLibrary
helpviewer_keywords:
- extension DLLs [C++], unloading
- AfxFreeLibrary method
- unloading DLLs
- FreeLibrary method
- DLLs [C++], linking
- explicit linking [C++]
- DLLs [C++], unloading
ms.assetid: 4a48d290-3971-43e9-8e97-ba656cd0c8f8
ms.openlocfilehash: 51d14b86a92f3acb76dc54d1bade2d2cd0baa055
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57419947"
---
# <a name="freelibrary-and-afxfreelibrary"></a>FreeLibrary e AfxFreeLibrary

I processi che si collegano in modo esplicito a una chiamata DLL di [FreeLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-freelibrary) corretto quando il modulo di DLL non è più necessario. Questa funzione decrementa il conteggio di riferimenti del modulo e, se il conteggio dei riferimenti è zero, ne rimuove dallo spazio degli indirizzi del processo.

In un'applicazione MFC, utilizzare [AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary) invece di `FreeLibrary` scaricare una DLL di estensione MFC. L'interfaccia (prototipo di funzione) per `AfxFreeLibrary` equivale a `FreeLibrary`.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Come collegare in modo implicito in una DLL](../build/linking-an-executable-to-a-dll.md#linking-implicitly)

- [Determinare quale metodo di collegamento da utilizzare](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)

- [GetProcAddress](../build/getprocaddress.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)<br/>
[FreeLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-freelibrary)
[AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary)
