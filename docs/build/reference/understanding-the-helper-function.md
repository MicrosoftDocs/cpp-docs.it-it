---
title: Informazioni sulla funzione di supporto
ms.date: 11/04/2016
helpviewer_keywords:
- delayed loading of DLLs, helper function
- __delayLoadHelper2 function
- delayimp.lib
- __delayLoadHelper function
- delayhlp.cpp
- delayimp.h
- helper functions
ms.assetid: 6279c12c-d908-4967-b0b3-cabfc3e91d3d
ms.openlocfilehash: 3ad193d0101507f43145c6af9f8e6200ab6fcdb5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317666"
---
# <a name="understanding-the-helper-function"></a>Informazioni sulla funzione di supporto

La funzione di supporto per il caricamento ritardato supportato dal linker è ciò che effettivamente carica la DLL in fase di esecuzione. È possibile modificare la funzione helper per personalizzarne il comportamento scrivendo una funzione personalizzata e collegarla al programma anziché usare la funzione di supporto fornito in Delayimp. lib. Una funzione di supporto serve tutte le DLL a caricamento ritardato.

È possibile fornire la propria versione della funzione di supporto se si desidera eseguire elaborazioni specifiche in base ai nomi delle DLL o importazioni.

La funzione di supporto esegue le azioni seguenti:

- Controlla l'handle archiviato nella libreria per verificare se è già stato caricato

- Le chiamate **LoadLibrary** tentativi durante il caricamento della DLL

- Le chiamate **GetProcAddress** per tentare di ottenere l'indirizzo della routine.

- Restituisce all'importazione ritardo caricare thunk per chiamare il punto di ingresso appena caricato.

La funzione di supporto è possibile richiamare un hook di notifica nel programma dopo l'esecuzione delle azioni seguenti:

- Quando la funzione helper avviato

- Immediatamente prima **LoadLibrary** viene chiamato nella funzione di supporto

- Immediatamente prima **GetProcAddress** viene chiamato nella funzione di supporto

- Se la chiamata a **LoadLibrary** nella funzione di supporto non è riuscita

- Se la chiamata a **GetProcAddress** nella funzione di supporto non è riuscita

- Dopo l'helper di funzione viene eseguita l'elaborazione

Ognuno di questi punti di hook può restituire un valore che verrà modificata la normale elaborazione della routine di supporto in qualche modo ad eccezione del ritorno al carico thunk importazione ritardo.

Il codice helper predefinito è reperibile nel cpp e Delayimp. h (in vc\include) e viene compilato in Delayimp. lib (in vc\lib). È necessario includere questa libreria nelle compilazioni a meno che non si scrive una funzione helper.

Gli argomenti seguenti descrivono la funzione di supporto:

- [Modifiche della funzione di supporto del caricamento ritardato delle DLL introdotte a partire da Visual C++ 6.0](changes-in-the-dll-delayed-loading-helper-function-since-visual-cpp-6-0.md)

- [Convenzioni di chiamata, parametri e tipo restituito](calling-conventions-parameters-and-return-type.md)

- [Struttura e definizioni di costanti](structure-and-constant-definitions.md)

- [Calcolo dei valori necessari](calculating-necessary-values.md)

- [Scaricamento di una DLL a caricamento ritardato](explicitly-unloading-a-delay-loaded-dll.md)

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
