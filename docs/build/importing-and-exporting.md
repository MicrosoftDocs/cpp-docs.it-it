---
title: Importazione ed esportazione
ms.date: 05/06/2019
helpviewer_keywords:
- DLLs [C++], importing
- exporting DLLs [C++]
- importing DLLs [C++]
- DLLs [C++], exporting from
- __declspec(dllimport) keyword [C++]
ms.assetid: 7c44c2aa-2117-4cec-9615-a65bfd3f8f7b
ms.openlocfilehash: 29c8abf9528c2c34bd918463bccc8f845958759c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231533"
---
# <a name="importing-and-exporting"></a>Importazione ed esportazione

È possibile importare simboli pubblici in un'applicazione o esportare funzioni da una DLL usando due metodi:

- Usare un file di definizione del modulo (con estensione def) durante la compilazione della DLL

- Usare le parole chiave **`__declspec(dllimport)`** o **`__declspec(dllexport)`** in una definizione di funzione nell'applicazione principale

## <a name="using-a-def-file"></a>Uso di un file def

Un file di definizione moduli (con estensione def) è un file di testo contenente una o più istruzioni Module che descrivono i vari attributi di una DLL. Se non si usa **`__declspec(dllimport)`** o **`__declspec(dllexport)`** per esportare le funzioni di una dll, la dll richiede un file def.

È possibile utilizzare i file def per [l'importazione in un'applicazione](importing-using-def-files.md) o per l' [esportazione da una dll](exporting-from-a-dll-using-def-files.md).

## <a name="using-__declspec"></a>Utilizzo di __declspec

Non è necessario usare **`__declspec(dllimport)`** affinché il codice venga compilato correttamente, ma ciò consente al compilatore di generare codice migliore. Il compilatore è in grado di generare codice migliore perché può determinare se una funzione è presente in una DLL o meno, consentendo al compilatore di produrre codice che ignora un livello di riferimento indiretto che normalmente sarebbe presente in una chiamata di funzione che superava il limite di una DLL. Tuttavia, è necessario utilizzare **`__declspec(dllimport)`** per importare le variabili utilizzate in una dll.

Con la sezione delle esportazioni di file def corretta, **`__declspec(dllexport)`** non è obbligatorio. **`__declspec(dllexport)`** è stato aggiunto per fornire un modo semplice per esportare le funzioni da un file con estensione exe o dll senza utilizzare un file def.

Il formato eseguibile portabile Win32 è progettato per ridurre al minimo il numero di pagine che è necessario toccare per correggere le importazioni. A tale scopo, inserisce tutti gli indirizzi di importazione per qualsiasi programma in un'unica posizione denominata tabella degli indirizzi di importazione. In questo modo, il caricatore potrà modificare solo una o due pagine durante l'accesso a tali importazioni.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Importa in un'applicazione](importing-into-an-application-using-declspec-dllimport.md)

- [Esportazione da una DLL](exporting-from-a-dll.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
