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
ms.openlocfilehash: 709e4fdbc24d6fbbac44944e686a6fecf8c9b8db
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62274040"
---
# <a name="freelibrary-and-afxfreelibrary"></a>FreeLibrary e AfxFreeLibrary

I processi che si collegano in modo esplicito a una chiamata DLL di [FreeLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-freelibrary) corretto quando il modulo di DLL non è più necessario. Questa funzione decrementa il conteggio di riferimenti del modulo e, se il conteggio dei riferimenti è zero, ne rimuove dallo spazio degli indirizzi del processo.

In un'applicazione MFC, utilizzare [AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary) invece di `FreeLibrary` scaricare una DLL di estensione MFC. L'interfaccia (prototipo di funzione) per `AfxFreeLibrary` equivale a `FreeLibrary`.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#linking-implicitly)

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [LoadLibrary e AfxLoadLibrary](loadlibrary-and-afxloadlibrary.md)

- [GetProcAddress](getprocaddress.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](dlls-in-visual-cpp.md)<br/>
[FreeLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-freelibrary)
[AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary)
