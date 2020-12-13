---
description: 'Altre informazioni su: opzioni del compilatore e del linker (C++/CX)'
title: Opzioni del compilatore e del linker (C++/CX)
ms.date: 01/22/2017
ms.assetid: ecfadce8-3a3f-40cc-bb01-b4731f8d2fcb
ms.openlocfilehash: 66f3cf5a08d7ca0a07b5708495f76902c2286436
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340424"
---
# <a name="compiler-and-linker-options-ccx"></a>Opzioni del compilatore e del linker (C++/CX)

Una variabile di ambiente, le opzioni del compilatore C++/CX e le opzioni del linker supportano la compilazione di app per la Windows Runtime.

## <a name="library-path"></a>Percorso di libreria

La variabile di ambiente %LIBPATH% specifica il percorso predefinito in cui trovare i file con estensione winmd.

## <a name="compiler-options"></a>Opzioni del compilatore

|Opzione|Description|
|------------|-----------------|
|[/ZW](../build/reference/zw-windows-runtime-compilation.md)<br /><br /> /ZW:nostdlib|Abilita le estensioni del linguaggio Windows Runtime.<br /><br /> Il parametro `nostdlib` impedisce al compilatore di usare il percorso di ricerca predefinito standard per trovare i file WINMD e di assembly.<br /><br /> L'opzione del compilatore **/ZW** specifica in modo implicito le seguenti opzioni del compilatore:<br /><br />- **/FI** vccorlib.h, che impone l'inclusione del file di intestazione vccorlib.h che definisce molti tipi richiesti dal compilatore.<br />- [/Fu](../build/reference/fu-name-forced-hash-using-file.md) Windows. winmd, che impone l'inclusione del file di metadati Windows. winmd fornito dal sistema operativo e definisce molti tipi nel Windows Runtime.<br />- **/FU** Platform.winmd, che impone l'inclusione del file di metadati Platform.winmd che è fornito dal compilatore e che definisce la maggior parte dei tipi nella famiglia di spazi dei nomi Platform.|
|[/AI](../build/reference/ai-specify-metadata-directories.md) *dir*|Aggiunge una directory, specificata dal parametro *dir* , al percorso di ricerca usato dal compilatore per trovare i file WINMD e di assembly.|
|**/FU**  *file*|Impone l'inclusione del file con estensione winmd o del modulo specificato. Questo significa che non è necessario specificare `#using`*file* nel codice sorgente. Il compilatore impone automaticamente l'inclusione del relativo file di metadati di Windows, Platform.winmd.|
|/D "WINAPI_FAMILY=2"|Crea una definizione che consente l'utilizzo di un sottoinsieme di Win32 SDK compatibile con l'Windows Runtime.|

## <a name="linker-options"></a>Opzioni del linker

|Opzione|Description|
|------------|-----------------|
|/APPCONTAINER[:NO]|Contrassegna il file eseguibile come eseguibile in appcontainer (solo).|
|/WINMD [: {NO&#124;ONLY}]|Genera un file WINMD e un file binario associato. Questa opzione deve essere passata al linker per l'emissione di un file WINMD.<br /><br /> **NO**: non emette un file WINMD, bensì un file binario.<br /><br /> **ONLY**: emette un file WINMD, ma non un file binario.|
|/WINMDFILE:*filename*|Nome del file WINMD da emettere, anziché il nome file WINMD predefinito. Se sono specificati più nomi file nella riga di comando, viene usato l'ultimo nome.|
|/WINMDDELAYSIGN[:NO]|Firma parzialmente il file WINMD e posiziona la chiave pubblica nel file binario.<br /><br /> **NO**: (impostazione predefinita) non firma il file WINMD.<br /><br /> /WINMDDELAYSIGN non ha alcun effetto a meno che non sia specificato anche /WINMDKEYFILE o /WINMDKEYCONTAINER.|
|/WINMDKEYCONTAINER:*name*|Specifica un contenitore di chiavi per firmare un assembly. Il parametro *name* corrisponde al contenitore di chiavi usato per firmare il file di metadati.|
|/WINMDKEYFILE:*filename*|Specifica una chiave o una coppia di chiavi per la firma dell'assembly. Il parametro *filename* corrisponde alla chiave usata per la firma del file di metadati.|

### <a name="remarks"></a>Commenti

Quando si usa **/ZW**, il compilatore collega automaticamente la versione DLL di C Runtime (CRT). Il collegamento alla versione della libreria statica non è consentito e qualsiasi uso di funzioni CRT non consentite in un'app piattaforma UWP (Universal Windows Platform) provocherà un errore in fase di compilazione.

## <a name="see-also"></a>Vedi anche

[Compilazione di applicazioni e librerie](../cppcx/building-apps-and-libraries-c-cx.md)
