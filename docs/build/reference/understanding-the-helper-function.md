---
description: Altre informazioni sulla funzione helper di caricamento ritardato
title: Informazioni sulla funzione di supporto del caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- delayed loading of DLLs, helper function
- __delayLoadHelper2 function
- delayimp.lib
- __delayLoadHelper function
- delayhlp.cpp
- delayimp.h
- helper functions
ms.openlocfilehash: a4b25a51af25458f5add5ed7eb3fd58f759dae7b
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98667256"
---
# <a name="understand-the-delay-load-helper-function"></a>Informazioni sulla funzione di supporto del caricamento ritardato

La funzione di supporto per il caricamento ritardato supportato dal linker è quella che carica effettivamente la DLL in fase di esecuzione. È possibile modificare la funzione helper per personalizzarne il comportamento: anziché utilizzare la funzione helper fornita in *`delayimp.lib`* , scrivere una funzione personalizzata e collegarla al programma. Una funzione helper serve tutte le dll a caricamento ritardato.

È possibile fornire la propria versione della funzione di supporto se si desidera eseguire un'elaborazione specifica in base ai nomi della DLL o alle importazioni.

La funzione helper esegue le azioni seguenti:

- Controlla l'handle archiviato nella libreria per verificare se è già stato caricato

- Chiama `LoadLibrary` per tentare di caricare la dll

- Chiama `GetProcAddress` per tentare di ottenere l'indirizzo della routine

- Torna al thunk di caricamento dell'importazione ritardata per chiamare il punto di ingresso caricato attualmente

La funzione helper può richiamare un hook di notifica nel programma dopo ognuna delle azioni seguenti:

- Quando viene avviata la funzione helper

- Appena prima `LoadLibrary` viene chiamato nella funzione helper

- Appena prima `GetProcAddress` viene chiamato nella funzione helper

- Se la chiamata a `LoadLibrary` nella funzione helper ha esito negativo

- Se la chiamata a `GetProcAddress` nella funzione helper ha esito negativo

- Al termine dell'elaborazione della funzione di supporto

Ognuno di questi punti di hook può restituire un valore che modifica in qualche modo la normale elaborazione della routine di supporto, ad eccezione del ritorno al thunk di caricamento dell'importazione ritardata.

Il codice di supporto predefinito si trova in *`Delayhlp.cpp`* e *`Delayimp.h`* (nella *`include`* Directory VC) ed è compilato in *`Delayimp.lib`* (nella *`lib`* Directory VC). È necessario includere questa libreria nelle compilazioni, a meno che non si scriva una funzione helper personalizzata.

Gli articoli seguenti descrivono la funzione helper:

- [Funzione di supporto del caricamento ritardato delle DLL: modifiche introdotte rispetto a Visual C++ 6.0](changes-in-the-dll-delayed-loading-helper-function-since-visual-cpp-6-0.md)

- [Convenzioni di chiamata, parametri e tipo restituito](calling-conventions-parameters-and-return-type.md)

- [Struttura e definizioni di costanti](structure-and-constant-definitions.md)

- [Calcolare i valori necessari](calculating-necessary-values.md)

- [Scarica in modo esplicito una DLL a caricamento ritardato](explicitly-unloading-a-delay-loaded-dll.md)

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
