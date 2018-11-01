---
title: Importazione ed esportazione
ms.date: 11/04/2016
helpviewer_keywords:
- DLLs [C++], importing
- exporting DLLs [C++]
- importing DLLs [C++]
- DLLs [C++], exporting from
- __declspec(dllimport) keyword [C++]
ms.assetid: 7c44c2aa-2117-4cec-9615-a65bfd3f8f7b
ms.openlocfilehash: c7328f0e5f5d408ec93f31fa4cbea987594264ba
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50492761"
---
# <a name="importing-and-exporting"></a>Importazione ed esportazione

È possibile importare simboli pubblici in un'applicazione o esportare funzioni da una DLL tramite due metodi:

- Usare un file di definizione (con estensione def) del modulo quando si compila la DLL

- Usare le parole chiave **declspec** oppure **dllexport** v definici funkce nell'applicazione principale.

## <a name="using-a-def-file"></a>Usando un file def

Un file di definizione moduli (def) è un file di testo contenente uno o più istruzioni di modulo che descrivono alcuni attributi di una DLL. Se non si usa **declspec** oppure **dllexport** per esportare le funzioni della DLL, è necessario un file def.

È possibile usare file con estensione def [importare in un'applicazione](../build/importing-using-def-files.md) o su [esportare da una DLL](../build/exporting-from-a-dll-using-def-files.md).

## <a name="using-declspec"></a>Utilizzando declspec

Visual C++ usi **declspec** e **dllexport** per sostituire il **Export** parola chiave utilizzata in precedenza nelle versioni di 16 bit di Visual C++.

Non è necessario usare **declspec** per il codice venga compilato correttamente, ma in questo modo consente al compilatore di generare codice più efficiente. Il compilatore è in grado di generare codice migliore in quanto può determinare se esiste una funzione in una DLL o No, che consente al compilatore di generare codice che ignora un livello di riferimento indiretto che normalmente sarebbe presente in una chiamata di funzione che ha superato il limite di una DLL. Tuttavia, è necessario utilizzare **declspec** per importare le variabili usate in una DLL.

Con la sezione EXPORTS del file. def corretto, **dllexport** non è obbligatorio. **dllexport** è stata aggiunta per fornire un modo semplice per esportare funzioni da un file con estensione dll o .exe senza usare un file def.

Il formato di file eseguibile portabile Win32 è progettato per ridurre al minimo il numero di pagine che deve essere toccata per correggere le importazioni. A tale scopo, inserire tutti gli indirizzi di importazione per qualsiasi programma in un'unica posizione denominata tabella di indirizzi di importazione. In questo modo il caricatore di modificare solo una o due pagine quando si accede a queste importazioni.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Importazione in un'applicazione](../build/importing-into-an-application-using-declspec-dllimport.md)

- [Esportazione da una DLL](../build/exporting-from-a-dll.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)