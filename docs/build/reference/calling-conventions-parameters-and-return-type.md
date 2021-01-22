---
description: 'Altre informazioni su: convenzioni di chiamata a caricamento ritardato, parametri e tipo restituito'
title: Convenzioni di chiamata, parametri e tipo restituito
ms.date: 01/19/2021
helpviewer_keywords:
- calling conventions, helper functions
- helper functions, calling conventions
- helper functions, return types
ms.openlocfilehash: 68817f2746abccf9ad6ae72c4f189fa29aa4c26f
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98666927"
---
# <a name="delay-load-helper-calling-conventions-parameters-and-return-type"></a>Convenzioni di chiamata, parametri e tipo restituito dell'helper di caricamento ritardato

Il prototipo per la routine di supporto del caricamento ritardato è:

```C
FARPROC WINAPI __delayLoadHelper2(
    PCImgDelayDescr pidd,
    FARPROC * ppfnIATEntry
);
```

## <a name="parameters"></a>Parametri

*`pidd`*<br/>
**`const`** Puntatore a un oggetto `ImgDelayDescr` che contiene gli offset di vari dati correlati all'importazione, un timestamp per le informazioni di associazione e un set di attributi che forniscono ulteriori informazioni sul contenuto del descrittore. Attualmente esiste un solo attributo, `dlattrRva` , che indica che gli indirizzi nel descrittore sono indirizzi virtuali relativi. Per ulteriori informazioni, vedere le dichiarazioni in *`delayimp.h`* .

Per la definizione della `PCImgDelayDescr` struttura, vedere [struttura e definizioni di costanti](structure-and-constant-definitions.md).

*`ppfnIATEntry`*<br/>
Puntatore a uno slot nella tabella di indirizzi di importazione a caricamento ritardato (IAT). Si tratta dello slot aggiornato con l'indirizzo della funzione importata. La routine di supporto deve archiviare lo stesso valore restituito in questa posizione.

## <a name="expected-return-values"></a>Valori restituiti previsti

Se la funzione ha esito positivo, restituisce l'indirizzo della funzione importata.

Se la funzione ha esito negativo, genera un'eccezione strutturata e restituisce 0. Possono essere generati tre tipi di eccezioni:

- Parametro non valido, che si verifica se gli attributi in *`pidd`* non sono specificati correttamente.

- `LoadLibrary`: impossibile leggere la DLL specificata.

- Errore di `GetProcAddress`.

È responsabilità dell'utente gestire queste eccezioni.

## <a name="remarks"></a>Commenti

La convenzione di chiamata per la funzione helper è **`__stdcall`** . Il tipo del valore restituito non è pertinente, pertanto `FARPROC` viene usato. Questa funzione ha un collegamento C, che significa che è necessario eseguire il wrapper `extern "C"` quando viene dichiarata nel codice C++. `ExternC`Questa operazione viene gestita automaticamente dalla macro.

Archiviare il valore restituito della funzione helper nella posizione del puntatore della funzione passata, a meno che non si desideri usare la routine di supporto come hook di notifica. In questo caso, il codice è responsabile dell'individuazione del puntatore funzione appropriato da restituire. Il codice thunk generato dal linker accetta quindi quel valore restituito come destinazione effettiva dell'importazione e passa direttamente ad essa.

## <a name="sample"></a>Esempio

Nel codice seguente viene illustrato come implementare una funzione hook di base.

```C
FARPROC WINAPI delayHook(unsigned dliNotify, PDelayLoadInfo pdli)
{
    switch (dliNotify) {
        case dliStartProcessing :

            // If you want to return control to the helper, return 0.
            // Otherwise, return a pointer to a FARPROC helper function
            // that will be used instead, thereby bypassing the rest
            // of the helper.

            break;

        case dliNotePreLoadLibrary :

            // If you want to return control to the helper, return 0.
            // Otherwise, return your own HMODULE to be used by the
            // helper instead of having it call LoadLibrary itself.

            break;

        case dliNotePreGetProcAddress :

            // If you want to return control to the helper, return 0.
            // If you choose you may supply your own FARPROC function
            // address and bypass the helper's call to GetProcAddress.

            break;

        case dliFailLoadLib :

            // LoadLibrary failed.
            // If you don't want to handle this failure yourself, return 0.
            // In this case the helper will raise an exception
            // (ERROR_MOD_NOT_FOUND) and exit.
            // If you want to handle the failure by loading an alternate
            // DLL (for example), then return the HMODULE for
            // the alternate DLL. The helper will continue execution with
            // this alternate DLL and attempt to find the
            // requested entrypoint via GetProcAddress.

            break;

        case dliFailGetProc :

            // GetProcAddress failed.
            // If you don't want to handle this failure yourself, return 0.
            // In this case the helper will raise an exception
            // (ERROR_PROC_NOT_FOUND) and exit.
            // If you choose you may handle the failure by returning
            // an alternate FARPROC function address.

            break;

        case dliNoteEndProcessing :

            // This notification is called after all processing is done.
            // There is no opportunity for modifying the helper's behavior
            // at this point except by longjmp()/throw()/RaiseException.
            // No return value is processed.

            break;

        default :

            return NULL;
    }

    return NULL;
}

/*
and then at global scope somewhere:

ExternC const PfnDliHook __pfnDliNotifyHook2 = delayHook;
ExternC const PfnDliHook __pfnDliFailureHook2 = delayHook;
*/
```

## <a name="see-also"></a>Vedi anche

[Informazioni sulla funzione di supporto](understanding-the-helper-function.md)
