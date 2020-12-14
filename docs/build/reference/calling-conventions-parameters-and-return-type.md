---
description: 'Altre informazioni su: convenzioni di chiamata, parametri e tipo restituito'
title: Convenzioni di chiamata, parametri e tipo restituito
ms.date: 02/13/2019
helpviewer_keywords:
- calling conventions, helper functions
- helper functions, calling conventions
- helper functions, return types
ms.assetid: 0ffa4558-6005-4803-be95-7a8ec8837660
ms.openlocfilehash: f840ecbe3364f293e9445239984ad375eed48aac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182528"
---
# <a name="calling-conventions-parameters-and-return-type"></a>Convenzioni di chiamata, parametri e tipo restituito

Il prototipo della routine dell'helper è:

```
FARPROC WINAPI __delayLoadHelper2(
    PCImgDelayDescr pidd,
    FARPROC * ppfnIATEntry
);
```

### <a name="parameters"></a>Parametri

*pidd*<br/>
**`const`** Puntatore a un oggetto `ImgDelayDescr` che contiene gli offset di vari dati correlati all'importazione, un timestamp per le informazioni di associazione e un set di attributi che forniscono ulteriori informazioni sul contenuto del descrittore. Attualmente esiste un solo attributo, `dlattrRva` , che indica che gli indirizzi nel descrittore sono indirizzi virtuali relativi. Per ulteriori informazioni, vedere le dichiarazioni in *delayimp. h*.

Per la definizione della `PCImgDelayDescr` struttura, vedere [struttura e definizioni di costanti](structure-and-constant-definitions.md).

*ppfnIATEntry*<br/>
Puntatore allo slot nella tabella di indirizzi di importazione a caricamento ritardato (IAT) aggiornato con l'indirizzo della funzione importata. La routine di supporto deve archiviare lo stesso valore restituito in questa posizione.

## <a name="expected-return-values"></a>Valori restituiti previsti

Se la funzione ha esito positivo, restituisce l'indirizzo della funzione importata.

Se ha esito negativo, genera un'eccezione e restituisce 0. Possono essere generati tre tipi di eccezioni:

- Parametro non valido, se gli attributi in `pidd` non sono specificati correttamente.

- `LoadLibrary`: impossibile leggere la DLL specificata.

- Errore di `GetProcAddress`.

È responsabilità dell'utente gestire queste eccezioni.

## <a name="remarks"></a>Commenti

La convenzione di chiamata per la funzione helper è **`__stdcall`** . Il tipo del valore restituito non è pertinente, pertanto viene usato FARPROC. Questa funzione ha un collegamento C.

Il valore restituito dell'helper a caricamento ritardato deve essere archiviato nel percorso del puntatore della funzione passata, a meno che non si desideri che la routine dell'helper non venga usata come un hook di notifica. In questo caso, il codice è responsabile dell'individuazione del puntatore funzione appropriato da restituire. Il codice thunk generato dal linker accetta quindi quel valore restituito come destinazione effettiva dell'importazione e passa direttamente ad essa.

## <a name="sample"></a>Esempio

Nel codice seguente viene illustrato come implementare una semplice funzione hook.

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
and then at global scope somewhere
const PfnDliHook __pfnDliNotifyHook2 = delayHook;
*/
```

## <a name="see-also"></a>Vedi anche

[Informazioni sulla funzione helper](understanding-the-helper-function.md)
