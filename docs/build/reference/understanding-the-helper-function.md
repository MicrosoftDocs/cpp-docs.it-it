---
description: 'Altre informazioni su: informazioni sulla funzione helper'
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
ms.openlocfilehash: d47e392d78d6cf872af28b992885c57d34bddf0f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247098"
---
# <a name="understanding-the-helper-function"></a>Informazioni sulla funzione di supporto

La funzione di supporto per il caricamento ritardato supportato dal linker è quella che carica effettivamente la DLL in fase di esecuzione. È possibile modificare la funzione helper per personalizzarne il comportamento scrivendo una funzione personalizzata e collegarla al programma invece di usare la funzione helper fornita in Delayimp. lib. Una funzione helper serve tutte le dll a caricamento ritardato.

È possibile fornire la propria versione della funzione di supporto se si desidera eseguire un'elaborazione specifica in base ai nomi della DLL o alle importazioni.

La funzione helper esegue le azioni seguenti:

- Controlla l'handle archiviato nella libreria per verificare se è già stato caricato

- Chiama **LoadLibrary** per tentare il caricamento della dll

- Chiama **GetProcAddress** per tentare di ottenere l'indirizzo della routine

- Torna al thunk di caricamento dell'importazione ritardata per chiamare il punto di ingresso caricato attualmente

La funzione helper può richiamare un hook di notifica nel programma dopo ognuna delle azioni seguenti:

- Quando viene avviata la funzione helper

- Immediatamente prima della chiamata a **LoadLibrary** nella funzione helper

- Appena prima della chiamata di **GetProcAddress** nella funzione helper

- Se la chiamata a **LoadLibrary** nella funzione helper non è riuscita

- Se la chiamata a **GetProcAddress** nella funzione helper non è riuscita

- Al termine dell'elaborazione della funzione di supporto

Ognuno di questi punti di hook può restituire un valore che altererà l'elaborazione normale della routine di supporto in qualche modo, ad eccezione del ritorno al thunk di caricamento dell'importazione ritardata.

Il codice di supporto predefinito si trova in delayhlp. cpp e delayimp. h (in vc\include) e viene compilato in Delayimp. lib (in vc\lib). È necessario includere questa libreria nelle compilazioni, a meno che non si scriva una funzione helper personalizzata.

Negli argomenti seguenti viene descritta la funzione helper:

- [Modifiche della funzione di supporto per il caricamento posticipato della DLL da Visual C++ 6,0](changes-in-the-dll-delayed-loading-helper-function-since-visual-cpp-6-0.md)

- [Convenzioni di chiamata, parametri e tipo restituito](calling-conventions-parameters-and-return-type.md)

- [Struttura e definizioni di costanti](structure-and-constant-definitions.md)

- [Calcolo dei valori necessari](calculating-necessary-values.md)

- [Scaricamento di una DLL di Delay-Loaded](explicitly-unloading-a-delay-loaded-dll.md)

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)
