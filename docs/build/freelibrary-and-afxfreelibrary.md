---
description: 'Altre informazioni su: FreeLibrary e AfxFreeLibrary'
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
ms.openlocfilehash: ea4da8c69aa663add85e740d99b68731e263b442
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97162794"
---
# <a name="freelibrary-and-afxfreelibrary"></a>FreeLibrary e AfxFreeLibrary

I processi che si collegano in modo esplicito a una DLL chiamano la funzione [FreeLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-freelibrary) quando il modulo dll non è più necessario. Questa funzione decrementa il conteggio dei riferimenti del modulo. Se il conteggio dei riferimenti è pari a zero, viene annullato il mapping dallo spazio degli indirizzi del processo.

In un'applicazione MFC utilizzare [AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary) anziché `FreeLibrary` per scaricare una DLL di estensione MFC. L'interfaccia (prototipo di funzione) per `AfxFreeLibrary` è uguale a `FreeLibrary` .

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#linking-implicitly)

- [Collegare un eseguibile a una DLL](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [LoadLibrary e AfxLoadLibrary](loadlibrary-and-afxloadlibrary.md)

- [GetProcAddress](getprocaddress.md)

## <a name="see-also"></a>Vedi anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)\
[FreeLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-freelibrary)\
[AfxFreeLibrary](../mfc/reference/application-information-and-management.md#afxfreelibrary)
